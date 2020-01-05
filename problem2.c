//
// Created by csatl on 1/3/2020.
//

int P2 (int x, int i)
{
    if(i == 0)
        return 1;
    else if(i == 1)
        return 2*x;
    else
        return ( 2 * i * P2(x, i-1) ) - ( 2 * (i-1) * P2(x, i-2) );
}
