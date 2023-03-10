(a) Create the static library libmy.a containing all the functions
    
      check your older directories for the function files

      using gcc -c *.c to make all .c files a lib_obj
     
      compiling the lib_obj files to the static file .a
      
      ar rcs to create the libmy.a static file

      ar rcs libmy.a *.o to move every .o file into it

      



      NOTE: ar -t to seee the files in the libmy.a file
            nm lists all the symbols of the files in the libmy.a           


(b) Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
     
         create the file given - this is how to automate the whole  static library process
          
         use #!/bin/bash
         use gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
              (this would automatically select all .c files in the directoy
                       this would also create the .o files
                         )

         input ar -rc liball.a *.o 
                (this would create the liball.a file and input all .o files in it)


          input ranliball.a


     make the create_static_lib.sh executable chmod u+x file name  
