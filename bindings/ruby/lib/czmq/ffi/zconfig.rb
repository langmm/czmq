################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################

module CZMQ
  module FFI

    # zconfig - work with config files written in rfc.zeromq.org/spec:4/ZPL.
    class Zconfig
      class DestroyedError < RuntimeError; end

      # Boilerplate for self pointer, initializer, and finalizer
      class << self
        alias :__new :new
      end
      def initialize ptr, finalize=true
        @ptr = ptr
        if @ptr.null?
          @ptr = nil # Remove null pointers so we don't have to test for them.
        elsif finalize
          @finalizer = self.class.create_finalizer_for @ptr
          ObjectSpace.define_finalizer self, @finalizer
        end
      end
      def self.create_finalizer_for ptr
        Proc.new do
          ptr_ptr = ::FFI::MemoryPointer.new :pointer
          ptr_ptr.write_pointer ptr
          ::CZMQ::FFI.zconfig_destroy ptr_ptr
        end
      end
      def null?
        !@ptr or @ptr.null?
      end
      # Return internal pointer
      def __ptr
        raise DestroyedError unless @ptr
        @ptr
      end
      # So external Libraries can just pass the Object to a FFI function which expects a :pointer
      alias_method :to_ptr, :__ptr
      # Nullify internal pointer and return pointer pointer
      def __ptr_give_ref
        raise DestroyedError unless @ptr
        ptr_ptr = ::FFI::MemoryPointer.new :pointer
        ptr_ptr.write_pointer @ptr
        ObjectSpace.undefine_finalizer self if @finalizer
        @finalizer = nil
        @ptr = nil
        ptr_ptr
      end

      # Create a new callback of the following type:
      # 
      #     typedef int (zconfig_fct) (                
      #         zconfig_t *self, void *arg, int level);
      #
      # WARNING: If your Ruby code doesn't retain a reference to the
      #   FFI::Function object after passing it to a C function call,
      #   it may be garbage collected while C still holds the pointer,
      #   potentially resulting in a segmentation fault.
      def self.fct
        ::FFI::Function.new :int, [:pointer, :pointer, :int], blocking: true do |self_, arg, level|
          self_ = Zconfig.__new self_, false
          result = yield self_, arg, level
          result = Integer(result)
          result
        end
      end

      # Create new config item
      def self.new(name, parent)
        name = String(name)
        parent = parent.__ptr if parent
        ptr = ::CZMQ::FFI.zconfig_new(name, parent)
        __new ptr
      end

      # Destroy a config item and all its children
      def destroy()
        return unless @ptr
        self_p = __ptr_give_ref
        result = ::CZMQ::FFI.zconfig_destroy(self_p)
        result
      end

      # Return name of config item
      def name()
        raise DestroyedError unless @ptr
        self_p = @ptr
        result = ::CZMQ::FFI.zconfig_name(self_p)
        result = ::FFI::AutoPointer.new(result, LibC.method(:free))
        result
      end

      # Return value of config item
      def value()
        raise DestroyedError unless @ptr
        self_p = @ptr
        result = ::CZMQ::FFI.zconfig_value(self_p)
        result = ::FFI::AutoPointer.new(result, LibC.method(:free))
        result
      end

      # Insert or update configuration key with value
      def put(path, value)
        raise DestroyedError unless @ptr
        self_p = @ptr
        path = String(path)
        value = String(value)
        result = ::CZMQ::FFI.zconfig_put(self_p, path, value)
        result
      end

      # Equivalent to zconfig_put, accepting a format specifier and variable
      # argument list, instead of a single string value.                    
      def putf(path, format, *args)
        raise DestroyedError unless @ptr
        self_p = @ptr
        path = String(path)
        format = String(format)
        result = ::CZMQ::FFI.zconfig_putf(self_p, path, format, *args)
        result
      end

      # Get value for config item into a string value; leading slash is optional
      # and ignored.                                                            
      def get(path, default_value)
        raise DestroyedError unless @ptr
        self_p = @ptr
        path = String(path)
        default_value = String(default_value)
        result = ::CZMQ::FFI.zconfig_get(self_p, path, default_value)
        result = ::FFI::AutoPointer.new(result, LibC.method(:free))
        result
      end

      # Set config item name, name may be NULL
      def set_name(name)
        raise DestroyedError unless @ptr
        self_p = @ptr
        name = String(name)
        result = ::CZMQ::FFI.zconfig_set_name(self_p, name)
        result
      end

      # Set new value for config item. The new value may be a string, a printf  
      # format, or NULL. Note that if string may possibly contain '%', or if it 
      # comes from an insecure source, you must use '%s' as the format, followed
      # by the string.                                                          
      def set_value(format, *args)
        raise DestroyedError unless @ptr
        self_p = @ptr
        format = String(format)
        result = ::CZMQ::FFI.zconfig_set_value(self_p, format, *args)
        result
      end

      # Find our first child, if any
      def child()
        raise DestroyedError unless @ptr
        self_p = @ptr
        result = ::CZMQ::FFI.zconfig_child(self_p)
        result = Zconfig.__new result, false
        result
      end

      # Find our first sibling, if any
      def next()
        raise DestroyedError unless @ptr
        self_p = @ptr
        result = ::CZMQ::FFI.zconfig_next(self_p)
        result = Zconfig.__new result, false
        result
      end

      # Find a config item along a path; leading slash is optional and ignored.
      def locate(path)
        raise DestroyedError unless @ptr
        self_p = @ptr
        path = String(path)
        result = ::CZMQ::FFI.zconfig_locate(self_p, path)
        result = Zconfig.__new result, false
        result
      end

      # Locate the last config item at a specified depth
      def at_depth(level)
        raise DestroyedError unless @ptr
        self_p = @ptr
        level = Integer(level)
        result = ::CZMQ::FFI.zconfig_at_depth(self_p, level)
        result = Zconfig.__new result, false
        result
      end

      # Execute a callback for each config item in the tree; returns zero if
      # successful, else -1.                                                
      def execute(handler, arg)
        raise DestroyedError unless @ptr
        self_p = @ptr
        result = ::CZMQ::FFI.zconfig_execute(self_p, handler, arg)
        result
      end

      # Add comment to config item before saving to disk. You can add as many
      # comment lines as you like. If you use a null format, all comments are
      # deleted.                                                             
      def set_comment(format, *args)
        raise DestroyedError unless @ptr
        self_p = @ptr
        format = String(format)
        result = ::CZMQ::FFI.zconfig_set_comment(self_p, format, *args)
        result
      end

      # Return comments of config item, as zlist.
      def comments()
        raise DestroyedError unless @ptr
        self_p = @ptr
        result = ::CZMQ::FFI.zconfig_comments(self_p)
        result = Zlist.__new result, false
        result
      end

      # Load a config tree from a specified ZPL text file; returns a zconfig_t  
      # reference for the root, if the file exists and is readable. Returns NULL
      # if the file does not exist.                                             
      def self.load(filename)
        filename = String(filename)
        result = ::CZMQ::FFI.zconfig_load(filename)
        result = Zconfig.__new result, false
        result
      end

      # Save a config tree to a specified ZPL text file, where a filename
      # "-" means dump to standard output.                               
      def save(filename)
        raise DestroyedError unless @ptr
        self_p = @ptr
        filename = String(filename)
        result = ::CZMQ::FFI.zconfig_save(self_p, filename)
        result
      end

      # Equivalent to zconfig_load, taking a format string instead of a fixed
      # filename.                                                            
      def self.loadf(format, *args)
        format = String(format)
        result = ::CZMQ::FFI.zconfig_loadf(format, *args)
        result = Zconfig.__new result, false
        result
      end

      # Equivalent to zconfig_save, taking a format string instead of a fixed
      # filename.                                                            
      def savef(format, *args)
        raise DestroyedError unless @ptr
        self_p = @ptr
        format = String(format)
        result = ::CZMQ::FFI.zconfig_savef(self_p, format, *args)
        result
      end

      # Report filename used during zconfig_load, or NULL if none
      def filename()
        raise DestroyedError unless @ptr
        self_p = @ptr
        result = ::CZMQ::FFI.zconfig_filename(self_p)
        result
      end

      # Reload config tree from same file that it was previously loaded from.
      # Returns 0 if OK, -1 if there was an error (and then does not change  
      # existing data).                                                      
      def self.reload(self_p)
        self_p = self_p.__ptr_give_ref
        result = ::CZMQ::FFI.zconfig_reload(self_p)
        result
      end

      # Load a config tree from a memory chunk
      def self.chunk_load(chunk)
        result = ::CZMQ::FFI.zconfig_chunk_load(chunk)
        result = Zconfig.__new result, false
        result
      end

      # Save a config tree to a new memory chunk
      def chunk_save()
        raise DestroyedError unless @ptr
        self_p = @ptr
        result = ::CZMQ::FFI.zconfig_chunk_save(self_p)
        result
      end

      # Load a config tree from a null-terminated string
      def self.str_load(string)
        string = String(string)
        result = ::CZMQ::FFI.zconfig_str_load(string)
        result = Zconfig.__new result, false
        result
      end

      # Save a config tree to a new null terminated string
      def str_save()
        raise DestroyedError unless @ptr
        self_p = @ptr
        result = ::CZMQ::FFI.zconfig_str_save(self_p)
        result = ::FFI::AutoPointer.new(result, LibC.method(:free))
        result
      end

      # Return true if a configuration tree was loaded from a file and that
      # file has changed in since the tree was loaded.                     
      def has_changed()
        raise DestroyedError unless @ptr
        self_p = @ptr
        result = ::CZMQ::FFI.zconfig_has_changed(self_p)
        result
      end

      # Print the config file to open stream
      def fprint(file)
        raise DestroyedError unless @ptr
        self_p = @ptr
        result = ::CZMQ::FFI.zconfig_fprint(self_p, file)
        result
      end

      # Print properties of object
      def print()
        raise DestroyedError unless @ptr
        self_p = @ptr
        result = ::CZMQ::FFI.zconfig_print(self_p)
        result
      end

      # Self test of this class
      def self.test(verbose)
        verbose = !(0==verbose||!verbose) # boolean
        result = ::CZMQ::FFI.zconfig_test(verbose)
        result
      end
    end
  end
end

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
