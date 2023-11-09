# korolevychtuke7413

 ROUND 1 - KAREL
 
// stairs
while(1)
    {
        while(beepers_present())
            pick_beeper();

        if(right_is_clear())
        {
            turn_left();
            turn_left();
            turn_left();
        }
        else if(left_is_clear() && front_is_blocked())
            turn_left();

        step();

        if(facing_east() && front_is_clear())
        {
            step();
            if(right_is_clear())
            {
                turn_left();
                turn_left();
                step();
                turn_left();
                turn_left();
                break;
            }
            while(beepers_present())
                pick_beeper();
        }
        if(front_is_blocked() && left_is_blocked() && right_is_blocked())
            break;
    }


// olympics

while(1)
    {
        while(!facing_north())
            turn_left();
        while(front_is_clear())
        {
            if(beepers_present())
                break;
            step();
        }
        if(beepers_present())
            break;
        if(right_is_clear())
        {
            turn_left();
            turn_left();
            turn_left();
            step();
            turn_left();
            turn_left();
            turn_left();
            while(front_is_clear())
                step();
        } else
        {
            turn_left();
            while(front_is_clear())
                step();
            turn_left();
            while(front_is_clear())
                step();

        }
    }

// chess

    while(1)
    {
        while(front_is_clear())
        {
            step();
            put_beeper();
            step();
        }
        if(left_is_blocked())
            break;

        turn_left();
        step();
        turn_left();
        while(front_is_clear())
        {
            put_beeper();
            step();
            step();
        }
        put_beeper();
        if(right_is_blocked())
            break;

        turn_left();
        turn_left();
        turn_left();
        step();
        turn_left();
        turn_left();
        turn_left();
    }


// x_mas (spruce)

    turn_left();
    step();
    turn_right();

    while(1)
    {
        while(right_is_clear() && front_is_clear())
            step();
        if(right_is_blocked())
            put_beeper();

        while(front_is_clear())
            step();

        if(left_is_clear())
        {
            turn_left();
            while(right_is_blocked() && front_is_clear())
                step();
            if(right_is_clear())
            {
                turn_right();
                step();
                break;
            } else
            {
                turn_left();
                while(front_is_clear())
                    step();
                turn_right();
                step();
                turn_right();
            }
        } else
        {
            turn_left();
            turn_left();
            while(front_is_clear())
                step();
            turn_right();
            step();
            turn_right();
        }

    }

    put_beeper();
    put_beeper();

    step();
    turn_right();
    step();
    turn_left();
    while(1)
    {
        if(right_is_blocked())
            put_beeper();
        while(front_is_clear())
            step();
        turn_right();
        if(front_is_clear())
            step();
        else
            break;
        turn_right();
        while(left_is_clear() && front_is_clear())
            step();
        turn_left();
        turn_left();

    }
    turn_left();

  // go to center

     while(!facing_south())
       turn_left();
   while(front_is_clear())
       step();
   turn_right();
   while(front_is_clear())
       step();
   turn_left();
   turn_left();


   put_beeper();
   while(front_is_clear())
       step();
   put_beeper();
   turn_left();
   turn_left();
   step();
   while(1)
   {
       while(no_beepers_present())
           step();
       turn_left();
       turn_left();
       step();
       if(beepers_present())
           break;
       put_beeper();
       step();
   }
   put_beeper();
   while(front_is_clear())
       step();
   turn_left();
   turn_left();
   while(front_is_clear())
   {
       pick_beeper();
       step();
   }
   pick_beeper();
   turn_left();
   turn_left();
   while(no_beepers_present())
       step();


    while(!facing_north())
       turn_left();
    while(front_is_clear())
       step();
    put_beeper();
    turn_left();
    turn_left();
    step();
    while(1)
    {
        while(no_beepers_present())
            step();
        turn_left();
        turn_left();
        step();
        if(beepers_present())
            break;
        put_beeper();
        step();
    }
    put_beeper();
    while(front_is_clear())
        step();
    turn_left();
    turn_left();
    while(front_is_clear())
    {
        pick_beeper();
        step();
    }
    pick_beeper();
    turn_left();
    turn_left();
    while(no_beepers_present())
        step();
    pick_beeper();
