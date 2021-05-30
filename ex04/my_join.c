/*
**
** QWASAR.IO -- my_join
**
** @param {string_array*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

/*char* my_join(string_array* param_1, char* param_2)
{
    string_array* A = (string_array*) malloc(sizeof(string_array*));
    A->size = 1;
    A->array;
    int n = param_1->size;
    int l;
    int i = 0;

    while ( i < n )
        l += strlen(param_1->array[i]);
    A->array = (char*) malloc( l + n );
    while ( i < n )
        A->array[i] += param_1->array[i];
        A->array[i] += ;
    return A->array;
}*/ // Ah, vas-y. Creve. Qu'est-ce que je fais, la, putain, serieux ? Seriously, what's that shit? starting over, for fuck's sake.

/*int strlen(char* s)
{
	int i = 0;

	while ( s[ i ] != 0 )
		i++;
	return i;
}*/ // KVPB's STRLEN

/*char* strcpy(char* s_2, char* s)
{
	int i = 0;

	while ( s[ i ] != 0 )
	{
		s_2[ i ] = s[ i ];
		i++;
	}
	s_2[ i ] = 0;
	return s_2;
}*/ // KVPB's STRCPY

/*char* strcat(char *s_2, char *s)
{
	strcpy( s_2 + strlen( s_2 ), s );
	return s_2;
}*/ // KVPB's STRCAT

/*int isspace(char c)
{
	return ( ( 9 <= c && c <= 13 || c == 32 ) ? 1 : 0 );
}*/ // KVPB's isspace

char* my_join(string_array* param_1, char* param_2)
{
    //printf("0\n");
    char* s_2;
    char* s_0;
    int n;
    int l;
    int i;

    n = param_1->size;
    if ( n == 0 ) //|| param_1->array[0] == "\0" || param_2 == "\0" ) //|| isspace(param_2) )
        return NULL;
    i = 0;
    //printf("1\n");
    while ( i < n )
    {
        l += strlen(param_1->array[i]);
        i++;
    }
    //printf("3\n");
    //printf("4  l + n + 1 = %d\n", ( l + n + 1 ));
    s_2 = malloc( sizeof(char) * ( l + n + 1 ) );
    //printf("5  n = %d\n", n);
    i = 0;
    while ( i < n )
    {
        //printf("6  i = %d\n", i);
        s_0 = malloc(strlen(param_1->array[i]));
        //printf("7  i = %d\n", i);
        s_0 = param_1->array[i];
        strcat(s_2, s_0);
        if ( param_1->array[ i + 1 ] != "\0" && i + 1 < n )
            strcat(s_2, param_2);
        i++;
    }
    return s_2;
} /* There we go. Gaetan'd be prout. Well, the code looks like trash, but at least, it works, and I broke it down into multiple functions, too. Fancy.
@@@@@@@@WWWW@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WWWW@@@@@@@WWWWWWW@@@@@@WWWWWMMMMxxxxxMMMxxMMWWWWWWWMMMMMWWWWWWWWWWWWWWWWWWWWWWWWWWMMMMMMMWWWWWWWWWWWWWWWW@@
@@@@@@@WWWWW@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WWWW@WWWWWWW@@WWWWWxxxxxxnxxMxxnxMWWWWWWWWWMMMMWWWW@@@WWWWWWWWMMMWMWWWWWWWMMMMMMMWWWWWWWWWWWWWWWW@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WWW@@WWWWWWW@@W@WWMxxxxnnnxxxxnnxMWWWWWWWWMMMMMWWW@@@@WWWWWWWWWMMMMMMMWWWMMMMMMMWWWWWWWWWWWWWWWWWW
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WW@@WWWWW@@@@@WWxxxxnnnnnxxxnznxMWWWWWWWMMMMMMWWWWWWWWWWWWWWWWWMMMMMWWWMMMMMMMWWWWWWWWWWWWWWWWWWW
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WWWW@@@@@@Wxxxnnnnnnnnxxn#znMWWWWWWMWWWMMMWWWWWWWWWWWWWWWWWMMMMWWWWMMMMMWWW@@W@WWWWWWWWWWWWWW
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@W@@@@@@@@@@@@@@WWWW@@@@@@@Wxnzzznnnnnnnxz#zzM@@WWWWMWWWWWMWWWWWWWWWWWWWWWWWWMWWWWWWWMMMWWW@@@@@WWWWWWWWWWWWWW
@@@@@@@@@@@@@@@@@@@@@@@@@@@WW@@@@@@@@@@@@@@@@@@@@@@@@@WWWWWW@@@@@@WMnnzznnnnnnnxn#+##M@@WWWWWWWWWWWWWWWWWWWWWWW@WWWWWWWWWWWWWMMWWW@@@@@@WWWWWWW@@WWWWW
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WWWW@@@@@@@@Wxnnnnznzzzznnnz#z#zM@@WWWWWWWWWWWWWWWWWWWWWW@@WWWWMWWWWWWWWWWWW@@WWWWWWWMMMWW@WWWWWW
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@W@@@@@WWWWW@@@@@@@WMnnzznnzzzzzzzzz#zzzM@WWWWWWWWWWWWWWWWWWWWWW@@@WWWWMMWWWWWWWWWW@@@WWWWWWMMMMWWWWWWWWW
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WW@@@@@@W@@WW@@@WWWW@@@@@@@@WWWWxnzzzzzzzzzzzz##znnzxWWWWWWWWWWW@@WWWWW@@@W@@@@WWWWWWWWWWW@WWWW@@@WWWWWWWMWWWWWWWWWWW
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WWWW@WWWWWWWWW@WWWWWW@@@WWMxnnxMnzzz##########+zznzznWMWWWWWWWW@@@WWWWW@@@@@@@@WWWWWWWWWWWWWWWW@@@@WWWWWWWWWWWWWWWWWW
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WWWWWWWWWWW@@@WWWWWWWMMnzz#zzznnzz#+#######z#+#z#zzzxxxMMWWWW@@@@@WWWWW@@@@@@@WWWWWWWWWWWWWWWWWW@WWWWWWWWWWWWWWWWWWW
WW@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WWWWWWWWW@@@@@WWWMMxnnnnnz###zzznnz+++#####z#+#z####nxnxMMWWW@@@@@WWWWWW@@@@@@@WWWMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
WW@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WWWWWWWW@@@@@WWWMxxn#znnnn#++##zznnz#+#####z#+z#zz##z#znxMW@@@@@@WWWMWWWW@@@@@@@WWWWWWWWWWWWWWWWWMMWWWWWWWWWWWMMWWWW
WW@@@@@@@@@@@@@@@@@@@@WWWW@@@@@@@@WWWWW@@@@WWMxxxxMxxxz##znnz#++###zzzz#++++##z##z#+####znxMW@@@@@@WWMMMWWWW@@@@@@WWWWWWWWWW@@@WWWWWWWW@@@WWWWWWWWWWWW
@W@@@@@@@@@@@@@@@@@WWWWWWWWWWWWWW@WW@@@@WWWMnnzznxnxxxxn#+znnz#++##zz###+++++#+#z##+++++zxMWWW@@@@@@WWWWWWWWW@@@@@@@@@@WWWW@@@@@@@WWW@@@@WW@@@@@WWWW@@
@@@@@@@@@@@@@@@@WWWWWMMMMMMMMMMMMWWW@@@WMMxxnnnznnnnxxxxz+#zzzz+++######+++++#+++++++###znMWWWW@@@@@@WWWWWWWWWWW@@@@@@@@@WW@@@@@@@@@@WWWWWWWWW@@WWWWWW
@@@@@@@@@@@@@@@WWWWWMMMMMMxxxxxxxnxxMWWnnnxxnnn##znnnxxnnz++zzn++++#########+####+*++##zznMW@@@@@@@@@@@WWWWWWWWWW@@@@@@@@@W@@@@@@@@WWWWWWWWWWWWWWWWW@W
@@@@@@@@@@@@@@@WWWWWWMMMMxxxxxxnnnnnnnxnxxnnnnnz##znnxxxnz#+##zz++++####zzzzz#######z+zzznxW@@@@@@@@@@@@@@WWWWWWWW@@@@@@@@@@@@@@WWWWWWWWWWWWWWWWWWWWWW
@@@@@@@@@@@@@@@@WWWWWMMMxxxxxnnnnnnnnnnxxnnzznnzz###nnxxnnz+++#z++*+######zzzzzzzz##znznzxMW@@@@@@@@@@@@@@@@WWWWWW@@@@@@@@@@@@@WWWWMWWWWWWWWWWWWWWWWWW
@@@@@@@@@@@@@@WWWWWWWWMMxxxxxnnnnnnnnnnxxnn##zznn###znnnnnz#+++zz+*++######zzzzzznznnxxzznMW@@@@@@@@@@@@@@@@@@WWWWW@@@@@@@@@@@WWWWMMMMWWWWWWWWWWWWMMWW
@@@@@@@@@@@@@@@WWWWWWWMMxxxnnnnnnnnnznnxxxz####nnzz##znnnnz##++zz#++++##+#z#z####zznnxxxnnxW@@@@@@@@@@@@@@@@@@WWWMW@@@@@@@@@@@WWWWMMMWWWWWWWWWWWWWWWWW
@@@@@@@@@@@@@@WWWMMMMMMMMMMxnnnnnzzzzznxxxz####zzzz###znnnz##+*#z#+*+++#+##########zznxMMxnM@@@@@@@@@@@@@@@@@@@WWWWW@@@@@@@@@WWWMWWWWWMMWWWWWWWWWWWWWW
@@@@@@@@@@@@@@@WWMMMxMMMMMMxnnnnzzzzzznxxnz###++#zzz++#zznn#z+*+###+*+++++++##########znxxxMW@@@@@@@W@WW@@@@@@@@WWWW@@@@@@@@@WWMMMWWWWWMWWWWWW@WWWWWWW
WW@@@W@@@@@@@@@@WWMMxxMxMMMMxnnzzzzzzznnzzzz##+++#zz#++#znnnz#**###+++++++*++##+#######znxxMMW@@@@WWWWWW@@@@@@@@@@@@@@@@@@@@WWMMMMMWWWWWWWWWWWW@@@@W@@
@@@@@@@@@@@@@@@@WWMMMxxxxxxxxnnnnzzz##znzzzz##++*#zzz+*+#nnnzz+*####+++++++++#+########zznxxMWW@@WWWWWW@@@@@@@@@@@@@@@@@@@@WWWMMMMMMMWWWWWWWWWWW@@@@@@
@@@@@@@@@@@@@@@WWWMMMxxxxxxxxxxnnnz###zzzzz####++++zz#*++#znzz+*+###*+++++#+##+#z###zzzzznxxxMWW@WWWWWW@@@@@@@@@@@@@@@@@@@@WWWMMMMMMMMWWWWWWWWWW@@@@@@
@@@@@@@@@@@@@@WWWWWMMMxxxxnzznnnnnnz###zzz#####++**#zz+**+#nnn#**###*+*+++#+z+zzzz##zzzzznnxxMMWWWWWWWW@@@W@@@@@@@@@@@@@@@@WWWWMMWMMMMWWWWWWWWWW@@@@@@
@@@@@@@@@@W@@@WWWWWMMMMxnnn##+#nxnnz###zzz#####++*++#z#**++znnz+**++***##+#+##zzz#zzzzzznnnxxxxMWWWWWW@W@@WWWW@@@@@@@WWWWWWWWWWWWWMMMMMWWW@@@@@@@@WWWW
@@@@@@@@@WWWWWWWWWMWMMMxn#**i**+nnz###zzzzz#####+++*+#z++**+znz+**++**+#++#+#zz##zzznnnnnnnnxxxxMWWWWWW@@@WWWWW@@@@@WWWWWWWWWWWWWWWWWWWWWW@@@@@@@@WWWW
@@@@W@@WWWWWWWWWWMMMMMMxn#+*iiii+z##zzzz#zz######++**#z##+**##z+**#+**+z++++#zzzznznnnnnnnnnxxxxMWWWWWWW@WWWWWWW@@@@WWWWWWMWWWWWWWWWWWWWWW@@@@@@@@WWWW
@@@@@WWWWWWWWWWWWMMxnzzzzz+ii;;i*##zzzzzz#zz###+#+++**+++++**+z++++++*#z++++##zznzznnnnxnnnnnnxnxMMWWWWWWWWWWWMWW@@@WWWWWWWWWWWWWWWWWWWWWW@@@@@@@@WWWW
@@@@@WWWWWWWWWW@WMxnz+**;i;i;iii*+#z##zzzzzz###++++++****+#+*+z+#+*++*##+++#+#zznnnn##znnnznzzxxxxxMMMMWWWWWWWMWWW@WWWWWWWWWW@WWWWWWWWWWW@@W@@@@@WWWWW
@@@@WWWWWWWWWW@@WMnnz+**i;;;;i***+#z##zzz######+*+#+++****++*+##z#*+++##++++++##zz#znxnnzz#z+##nxxxxMMWWWWWWWWWWWW@WWWW@@@W@W@WWWWWWWWWW@WWW@@@@@@@WWW
@@@@WWWWW@@WW@@@WMWxz+*i;;iiii*i+#zz#######+++++i*++####*i*+++##zz+++#z#+++#++#+#znnnnznz#+*i*+#nxxxxMWWWWWWWWWWW@@@@@@@@@@@@WWWWWWWWWWWWWWWWWWWW@@@WW
@@@WWWWW@@@@@@@@WMMn#+ii;iiiii**+#zz########++**#+*#++##+*****##z#++#zz++*+z+*+#nnnnnzzz#++iiii*znxxxMMMMMWWWWWW@@@@@@@@@@@@@WWW@@@W@@WWWWWWWWWWW@@@WW
@@@@WWW@@@@@@@@@@WWMn#*iii****+##znz##########++*#z*#++##+****++zz++#z#+++##**+znnz#+++*iiiiii**+#nxxMMxMMMMWWWW@@@@@W@@@@@@@@WW@@@@@@WWWWWWWWWWWW@@WW
@@@@@@@@@WW@@@@@WWWWnzz+***++#zznnz##############++#++*+#z+*++*+#z++#z#+*#z+i+#z#++***i;:;iii***+#znxxxxxxMMWWWW@@@@@WW@@@@@@@@@@@@@@WWWWWWWWWWMWWWWWW
@@@@@@@@@WW@@@@@WWWWMxnz+*#+*#nnnzz####+#######zzz#+++**+###++*+#z++#z#++z*ii****i**i;:;;i*++##+#nnnnnnnnxMWWWWW@W@@@WWW@W@@@@@@@@@@@WWWWMxMWWWWMWWWWW
@@@@@@@@@@@@@@WWWWWWMMMn#++++zzznn##z##++###++**+z#++++***+##+**+z#++#++#*::;;;iii;:::;*#nxzzzzzznnxnnnzznMWWWWWWWWW@WWWWW@@@@@@@@@@@WWWxzznMWWWWWWWMM
@@@@@@@@@@@@@WWWWWWWMWMMz#++znnnnnz#+##+#####zzz#+#+*+++i**+##+++z#++#+++i;::::::::;*#x@@@@WxnnnxxMnzzz##zxWWWWWWWWW@WWWWW@@@@@@@@@@@WWMz*+#nMWWWWMMMM
@@@@@@@@@@@@WWWWWWWWWWWMzzzznnxxxxnnzz####zzzzzz#+++i*++*i**+##*+##++#+*i*i;;;i;;i#x@@@@@@@@@MMMMMnzzz###zxMWW@WWWWW@@WWWW@@@@@@@@@W@@@Wn++#xWWWWWMMMM
@@@@@@@@@@@@@WWW@WWWWWMnznnnxxxMMxnzzzzzzzzzzzzzz#++*i*+#+***+#+*+z+*##**iiiii*+zM@@#@@@@@@@W@@WMz+nnzzzzznxWW@WWW@@@@WWW@@@@@@@@@@@@@@WxzzxWWWWWWMMMM
@@@@@@@@@@@@@@@@@WWWWMMnnnnnxxMMMxxnnzzzzzzzzznzz+**+*i****++*#z++##++#+*ii*+*#n@#####@@@@@@W+Wn+*+znnzzzznxWWWWWW@@@@@WW@@@@@@@@@@@@@@WWMMWWWWWWMMMMM
@@@@@@@@@@@@@@@@@WWWMMMxnnnxxMMMMxxnnnzzzz#zz#+++#z###+i;::;*++##++#+#+++*ii##zW@####@@@@@@@@i++*+znnnnnnnnxMWWW@@@@@@@@@@@@@@@@@@@@@@@@@@WWWWWWWMMxxM
@@@@@@@@@@@WW@@@@WWWWWMxnnxxxxMMMxnnnnzzzzz###zzzzzz#**i:,,:ii*##++##++#+*ii##n@@##@@@@@@@#*@z:+i+znnnnnnnnxMWWW@@WW@@@@@@@@@@@@@@@@@@@@WWWWWWWWMMxxxM
@@@@@@@@@@WWWW@@WW@WWMMxxxxxMMMMxxnnzzzzzzzznzz##++*i;::,,,:;i*######+#+##*i##x@##@#@@@@@@+:@x,+i+znnnnnnnnxMMW@@@WWW@@@@@@@@@@@@@@@@@@@WWWWWWWWMMxxxM
@@@@@@@@@@@WW@@@W@@WWMMMMxxxMMMMxxnnzzzz#z####+***ii;:,.,::;ii*+++++#*+#+#+*##M@##@#@@@@@@WM@x,+*#zznnnnnxxxxMW@@WWWW@@@@@@@@@@@@@@@@@@@WWWWWWWWWMxxMM
@@@@@@@@@@@@@@@@@@@WWWWWMMMMMMMMMxxnnz##+++#+**ii;:::,,:;;;;i**++##+#++####i##W@#####@@@@@###n,+*#zznnnnnxxxxMWW@@WWW@@@@@@@@@@@@@@@@@@@WWWW@WWWWMMMMM
@@@@@@@@@@@@@@@@@@@@WWWWWMMMMWMMMxnz##+**+*i;:,,,.,,:;ii*ii**##++++*#######*+#W@#####@#@######:#*##znnnnxxxxxMWW@@@@@@@@@@@@@@@@@@@@@@W@@@@@@WWWWMMMMM
@W@@@@@@WWW@@@@@@@@WWWWWMMMMMWMxnz##+*i;;;:,,..,::ii+#z#z#*+*+z###+*#######++#M@############@+i#*#zznnnxxxxxxMWW@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WWWWWMWWW
@@@@@@@@WW@@@@W@@@@@WWWWMMMMWWWWWMn#+ii:::,..,::i#nMW@@Mnnn#zzzz+#+++####+##*#x@############Mi+;*#nnnnnnnnnnxMWW@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@WWWWWWW
@@@@@@@@@@@@@@WW@@@@WWWMMMWWWWWWWx#*i::,,::;;i#zW@###@@@Wxxnxzz##++++#######++M@###########@+*z;*znnnnnnnnnnnxWW@@@@@W@@@@@@@@@@@@@@@@@@@@@@@@@WWWWWWW
@@@@@@@@@@@@@@@@@@@@@WWWMMWWWWWWWMn+;:::;;i*+x@@#####@@@@@xxMx#n##*+##z#######M@#########@@z+n#i+znzzzznznnnxMWW@@@@WWW@@@@@@@@@@@@@@@@@@@@@@@@WWWWWWW
@@@@@@@@@@@@@@@@@@@@WWWWMWWWWW@WWxz+i;;;i**nW@#######@@@@@WMWMnnz#####zz##zz#+n@#########@z#zxi*#zz#zzzzzznnnMWW@@WWWWWW@@@@@@@@@@@@@@@@@@@@@@@WWWWWWW
@@@@@@@@@@@@@@@@@W@WWMMMMWWWWW@WWn#*iiii++nW@@####@#@@@@@@@WWWnnn##z##zn##zz##zW@#####@@WxzzM+i*#zz#zzzzzznnxMM@@WWWWWWW@@@@@@@@@@@@@@@@@@@@@@@@WWWWWW
@@@@@@@@@@@@@@@WWWWMMMMMMWWWW@@WMn#++**++zW@@#####@#@@@@W;n@WWx#nnz###znz######nMWWW@WMMnxxxi:*+#zz##zzzzzzznMW@WWWWWWW@@@@@@@@@@@@@@@@@@@@@WW@WWWWWWW
@@@@@@@@@@@@@@@@WWMMMMMMMWWW@@@Wxnz#####zM@@#####@@#@@@@W:z@@@xzznz#zznzzz######xznnnnxxxz+i:;*#zz###znnnzznnM@WWWWWWW@@@@@W@@@@@@@@@@@@@@@@WWWWWWWWWW
@@@@@@@@@W@@@@@@WWWMMMMMWWWW@@WMxnzzzzznxW@#########@@W@@W@#@@Wnznz#zznzzzz#z#z+zn+*iiii;:,:;*#######znnnzzznxMWWWWWWW@@@WWWW@@@@@@@@@@@@@@@WWWWW@WWWW
@@WWW@@@WWW@@WWWWWWMMMMMWWWW@@@WMMxnnnxxW@M#########@@@@@####@Wnznzznznzzzznzzz##zn+i;::,,:i*###+####znnnzznxMWWWWWWWW@@@WWWW@@@@@@WWWWWWWWWWWWWWWWWW@
@@@WWW@WWWWWWWW@WWMMMMMMWWWW@@WWWWMxnxMW@@zW########@@#@@#####@xxxnznznzzzzzzz####zn+;::::i*+#######zzznnzznxMMWWWWWW@@@@@@W@@@WWWWWWWWWWWWWWWWWWWWWW@
@@@W@W@@WW@@W@WWWWMMMWMWWWWW@@@@@WWMMW@@@M+x##################@xxxnnnnnnzzzzznzzz##zn*****++##+++###znnnzzznxMWWW@@@@@@@@@@@@@WWWWWWWWWWWWWWWWWWWWWWWW
@@@W@@@@@@@@@WWWMMMMMMWWWWW@@@@@@@WWWWWMMM*+W##@#############@Wxnxnznnnnznzzzzz#zz#++++++++++***+####zzznnzzxxMMW@@@@@@@@@@@@@WWWWWWWWWWWWWWWW@@WWWWWW
@@W@@@@@@@@@@WWWWWMMMMWWWWWW@WWWWWWWxz++zM#+z@#############@@@Wnxnxnnnnnnnzzzzzzzzz#++++++***i*++###znnnnzzznMWWWW@@@@@@@@@@@@WWWW@@WWWWWWWWW@@WWWWWWW
@@@@@@@@@@@@@WWWWWMMMMMWWWWW@@@@@WWMn##+#nn##x@###########@@MWWxxxnnnnnnzznzzzzzzz#++******ii*++##znnnnz#+#nnnnnnxxMW@@@@@@@@@WWW@@@@WWWWWW@@@WWWWWWWW
@@@@@@@@@@@@@@WWWWWMMMWWWWWW@@@@@WWMMnz#++nMnzx@######@@##WznMMxnxnznnxnnnzzzzzzzz#++****i**ii*+#nnnnz#i;i*+znzz##nMWWWW@@@W@@WW@@@@WWWWWWWWWWWWWWWWWW
@@@@@@@@@@WWWW@@WWWWMMMWWWWWWW@WWWWMxnnnnzznMxnxW@##@@@@Wx++nxxnnnnnnnnnnnnzzzzzzz#+*i**ii*ii*+#znzz+i*z##zxMMMWWWMnznM@@@@WWWWWW@@WWWWWWWWWWWWWWWWWWW
@@@@@@@@@@WWW@@@@WMMxxMMMMWWWWWWWWWMxnnnn#+*+xMxxMWWMMWxni;+nMnnzznnxxxnnnnnnnzzzzz+*i;ii;ii*++#z#+##znn#++zMWWWWWWW@WMxMW@WWWWWWWWWWWMWWWWWWWWWWWWWWW
@@@@WWW@@@@@@@@@@@WWMMxxxMMMWWWWWMxMxnnnnn+*i;#nMMWMMxx+::;+nxnzzzznnxxxnnnnnnnnnnn*:::::::;i++++#z#zn#+++#zMWWWWWW@@@@@WWMMWWW@@@@WWMMMWW@@WWMWWWWWWW
@@@WWWW@@@@@@@@@@@WWWWWMMMMMMWWWWWMnzznnnnz#+i;;ii*ii;:,.,;+nnzz#zznnxMMxnnnnnnnnzni,....,,:i**#z###++##++++#nxxMWW@@@@WW@@WWMW@@@@WWMMMWWWWWWWWWWWWWW
@WWWW@@@@@@@@@@@@@@@WWWWWWWWMWWWWWMxnnnxnnzzz#**;:,,,,,,:ii+nnzzzzznnxMMxxnnnnnz##z;,.....,;;;i+++**##+*****+#zznxxxMW@@W@@@WWWW@@WWWMxMMMMMMWWWWWWWWM
@WWW@@@@@@@@@@@@@@@@WWWWMMMMMMWWMMMxxxnnnnnnnz#++**iiiii**+#nnz####nnxMWMxnnnn+ii++,.,...:;,,:**+++#++***+++#nMMxnzzxMMMW@@@@@@@@WWWMMxxxxxMMWWWW@WWMM
WWW@@@@@@@@@@@@@@@@WWWWWWMMMWWWMMMMxxxnxxnnznnz###+#+++##++znzz###+znxMWWMnz#+i#n#;.....:,,,,:i*+++*****+####zM@@@@@WxnxMMMW@@@@WWWWMxxxMMxMMWWWWWWWMM
WWWWW@@@@@@@@@@@@@WWMMMMMMWMMMMMMMxxxxnnxxxxnz#nn######+####zzz###++zxMWWn****+#ni,.....,,,,,:i++#+****+*+++##xW@@@@@@@WMxMMWW@@@WWWMMxxMMMMWMWMWWWWMM
WWWWWW@@@@@W@@@@@WWMMMMMMMMMxMMMMMxxnnznnnnxnnnnz#######z###zz#*++ii*#nMWx#Mz+#++:........,,;i*+####++*******+zM@@@@@@@@@@WWWW@@@WWWWMMMMMMMWMMMWWWWWW
WMMWWWWW@@@@WW@@@WMMMMMMxxxnxMMxMMMxnznnxnzz#zz########+*++++#+++*;:::;*+#*xx++zi,.......,:;iii+###++++++++++++zW@@@@@@@@@@@@WWWWWWWWWMMMWMMWWWWWWW@WW
WWWWWWWWWWWWWW@@WWMMMMMMMMMMxnxMMMxnznnxnnzzz##+++++#+*i*##z+++++i:,...,,:i+z#n#:,......,,,;::i+###++++++++++##zzM@@@@@@@@@@@WWWWWWWWWWWWWWWMWWWWW@@WW
WWWWWWWWWWWWWW@@WMMMMMMMMMMxxMMMMMnznxxnnxxnn######++###*i*****+*:........,:i*x*:,,..,...,,,,ii+###+++++++++++#znxW@@@@@@@@@@WWWWWWMMWWWWWWWWWWWWW@@@@
WWWWWMMMWMWWWWWWWMxMMMMMMMMMMMxxxxxMxnnnxxxnz#####++##zzznnz#++*;,.........,,:#*:,,,..,,,,,::i+#########++++####nMMW@@@@@@@@@WWWMWWWMMMMMWWWWWWWW@@@@@
WWWWWWWWMMWWWWWWMMxxxMMMMMMMMMMMMMxxxxxxxxxnzz#zzz####+###zz##+*:,,..,......,:iz;:,,,:,,,,,:;*###########+++##zzzxW@@@@@@@@@@WWWWWWWMMMMMWWWWWWW@@@@@@
WWWWWWWWWMWWWWWWMxMMMMMMMWMMMMMMMMMxxMxxxxxxnxxnxnnxxnxxxxxxz#+*;::,,,.......:;n*;:,::,,:::;*#zzz#############zzznxW@@@@@@@@@WWWWWWWWWWWWWWWWWWWW@@@@@
@@@@@W@WWWWW@WWWMxxxxMMMWMMMMMMMMMxxMMMxxxxxxnxxxxxxxxxxxz#+iii;:::,,,,:....,,;z+i:,:::::;i+#zzzzz###########zzzzzxWW@@@@@@@@WWWWWWWWWWWWWW@WWWW@@@@@@
@@@@@@@@@@@@@@WWMxxxxMMMWMMMMMMMMxxMMMMMxxxxxxxMMMxMxz**+znz#*i*;::;,,,,,,,,,,;z+*i;;;;;i+##zzznzzz#######zzzzzzzznM@@@@@@@@@WWWWWWW@@@@WW@@WWWW@@@@@@
@@@@@@@@@@@@@@WMxxxxxxMMMMMMMMMMMxMMMMMMxxxxMMxMMMn**#xMMMMn+*ii;;:::,,,:,,,,,;z#+*iii*+###zzzznnzzzzz###zznnzzzzzzxWW@@@@@@@@WWWWWW@@@@WW@@@@W@@@@@W@
@@@@@@@@@@@@@@WMMMMxxMMMMMMMMMMMxxMMMMWMMMMMMxnz#i:;*+####+++*ii*i;i;::,:,,:::i++**iii+#z###zzznnzzzzzzzznnnnnzzzznxMW@@@@@@@@@@WW@@@@@@@@@@@@@@@@@WW@
@@W@@@@@@@@@@WWMxxMMMxMMMMMMMWMMMMMMMMMMMxxz##i;zWWWWMxxMWMnz+++#+**;:::::::;;iii;;;;i######zzznnnnnnnnnnnnnznzzznnnxW@WW@@@@@@WWWWW@@@@@@@@@@@@@@WWW@
@@W@@@@@@@@@@WWMMMMMMxMMMMMMWWWWWMMMMMxzzznMzizW@@@@WMxxxxz+++++***i;;ii;;;;;:::::::;*#########zzznnnnnnnnnnzznnnnnnxMWWWWW@@@WWWWWWW@@@@@@@@@@WWWWWWW
@@@@@@@W@@@@@@WMMMMMMxMMMMMWWWWWWWWMxnxMWWni+WMxz+##++++####zz##***+**+i;**i:,:::::;i*+######+##zznnnnnxxnnnzznnnxxxxxWWWW@WWWWW@WWWWW@@@@@@@WWWWWWWWW
@@@WW@@WWWW@@@WMMMMMxxMMMMWWWWWWWWWWWWWWM#izMnzzxWWz+*+zzzxMMnzz+******+**i;::::;;;;*+#+++++*****++#nxxxnnnnnnnnxxxxxxMMWWWWWWWWWWWWWW@@@@@@@WWWWWWWWW
@@@WW@@@WWW@@@WMMMxMxxMMMMWWWWWWWW@WWWWn**#nxWWWMzn#+nznMWWxxnzz##++*+++*i;:;:;:;;;*+##++++********+#zxxxnnznnnxxxMxxxMMWWWWWWWWWWWW@@W@@@@@@@WWWWWWWW
@@@WW@@@WW@@@WWMMxMxxxMMMMWMWWWWW@@WWWn#zMWWWWMnxn+nxzMWMxxxMMxnzz###zz#+ii;;;;;;ii+zzz###++**++++++#n#nxxxnnxxxxxMxxxMWWWWWWWWWWWWWW@@W@@@@@@@@@WWW@@
@@@W@@@@@W@@@WMMMMMxxxxMMMMMWWWWWWWWMnzWWWWWWxxx+zWnxWxxxWWWWWMMxxnzzz##+**iii;i;*+#xnz##z#+++++#++#zn##nMMMMMMMxxMMMxMMWW@WWWWWWWWWWWWWW@@@W@W@@@@@@@
@@@@@@@@@@@@@WMMMMMxxxxxMMMMWWWWWWWMnxWWWWWWnMz#MMzxnnMWWWWWW@@@WMn###+++#+***i*i*n#xn#++###+#+#####zz###nW@@WWWMMMMMMMMWWWWMWWWWWWWWWWWW@@@WWWWW@@@@@
WW@@@@@@@@@@@WMxMMMxxxxxMMMMMMMWWWMnxWWWWWxMW#xWWzn#xMMMMWWW@@@@Wxn####+*+##z#*+*#znxz#++#z####zz###znz##zx@@@@@@@WWWWWMMWWMMWWWWWMWWWWWWWWWWWWWWW@@@@
@@@@@@@@@@@@@WMMMMMxxxxxMMMMMMWMWMzMWW@WWxWxnW@WnznMMMMMMWWW@@@@@WMxnnz+*i*zxnzz#nnxnz#++#zz####z##znnz###xW@@@@@@@@@@@WMMMWWWWWWWWWWWWWWWWWWWMMWWW@@@
@@@@@@WW@@@@@WMxMMMxxxxMMMMMMMMWMzMWW@@MxWnM@@WxzMWMMMMMMMMWW@@WMxnnnnxn##zxMxxxnxxxnn#++#zzz##zzz#znnnz#zx@@@@@@@@@@@@@WWWMWWWWWWWWWWWWWWWWWWWMMWW@@@
@@@@@WWW@@@@@WMMMMMxxxMMMMMMMMMMnMWWW@MMW#W@@@MnWWWWMMMMxxxxMMMxnxxz#+#znxMMWWMWW@Wxxnn###zzzzznnzzznxnzzzx@@@@@@@@@@@@@@@@WWWW@@@WWWWWWWWWWWWWWWWW@@@
@@@@WWWWW@@@@WMMMMMMMMMMMMMMMMMnMWWWWMWWnW@@@Mn@@WWWMMxxnnnnnz###znn#+*++#xWW@@@#@WMMxnz#znnnzznnnnnnxxnznxW@@@@@@@@@#@@##@@@@WWWWWWWWWWWWWWWWWWWWWW@@
@@@@WW@@@@@@@WMxMMMMMMMMMMMMWWnMMMWWxWMz@@@@Wn@@W@WMxnzzzzzz+****+zn#+**+#nW@@###@WMMxnzzznnnnnnxnxxMxxnnnxW@@@@@@@@@@@@####@@@@WWWWWWWWWWWWWWWWWWWWW@
@@@@@@@@@@@@@WMxMMMMMWWMMMMMMxMWWWWxWxn@@@@WMW@@@@Wnz++++*++*iii**+zz+**+#nW@@###@WWMMxnnnnxxxxxxxxMMxxxxxxW@@@@@@@@@@@@@@####@@@WWWWWWWWWWWWWWWWWWWWW
@@@@@@@@@@@@@WMxMMMMMWWWMMMMxMWWWMxWxxW@@@WWW@@@@Wx+*i*iiii*+i;ii*+###+++#zM@#####@WWMxxnxxxxMMMxMMMMMMxxxM@@@@@@@@@@@@#########@@@WWWWWWWWWWWWWWWWWWW
@@@@@@@@@@@@@WMxMxMMMWWWWMWMWWWWMxWxxW@@@W@W@@@WMx#*iiiiiiii+#*iii*+##+++#zx@#####@@WMMMxMMMMMWMMMWWMMMMxMW@@@@@@@@@@@@@#@@######@@@WWWMWWWWWWWWWWWWWW
@@@@@@@@@@@@@WMxxxMMMWWWWWMWWWWMxWxxW@@@WW@@@@WMxn+iiii**iii*+#**i**+#####zx@######@WWMMMMWWWWWMMWWWWWMMMW@@@@@@@@@@@@@@############@@WMMMWWWWWWWWWWWW
@@@@@@@@@@@@@WMMxxMMMWMMMMMWWWMMWMMWW@@WW@W@@WMMnz+i;i*+#+***+##****+###zznM@#######@@WWWWWWWWWWWWWWWWWW@@@@@@@@@@@@@@@@@###########@@WMxxMMWWWWMWWWWW
@@@@@@@@@@@@@WMMxxMMMMMMMMMMWMMWMMWWW@@W@@WWWMMxx#+iii*+##+***+z#+*++#zzzzxW##########@@@@@@@WWWWW@@@@@@@@@@@@@@@@@@@@@@##@@#########@@WxxxMWWWWWWWWWW
@@@@@@@@@@@@@WMxxxxMMMMMMMMMMMMMWW@@@@W@@WWWMMMMx#+ii***##+++++zz#++#zznnxW###############@@@@@WW@@@@@@@@@@@@@@@@@@@@@@@#@############@@WxxMWWWWWWWWWW
@@@@@@@@@@@@@MxxxxxMMMMMMMMMMMMWW@@@@@WWWWWMMMMMx#+*****+#+++++zzz###zznxW@################@@@@@@@@@@@@@@@@@@@@@@@@@@@@@###############@@WxMWWWWWWWWWW
@@@@@@@@@@@@WMxxxxxxMMMxMMMMMMWWWW@@WWWWWWWMMMMMxz#++++*+######nnnzz#znnM@################@@@@@@@@@@@@@@@@@@@@@@@@@@#@@@#@@#############@@WWWWWWWWWWWW
@@@@@@@@@@@@WMMxxxxMMMMxMMMWWWWWWWWWWWWWWWMMxxMMMn###++++#####zxnnzzznxxW@###############@@@@@@@@@@@@@@#@@@@@@@@@@@@@@@##################@WWWWWWWWWWWW
@@@@@@@@@@@@WMMMxxxMMWMMMMWWWWWWWWWWWWMWWWMMMMMMWMzz###++#zzzznxxxnzznxxW###############@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@###############@WWWWWWWWWW@
@@@@@@@@@@@@@WMMMMMMWWMMMWWWW@@WWWWWWWWWWWWMMMMM@Wxz#####zzznnxMxxxnnxxMW###############@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@###############@@WWWWWWW@W@
@@@@@@@@@@@@@WMMMMMMWMMMWWWWW@@@WWWWWWMWWWMMMMMWWWMn###zzznnxxxMMxnnxxMM@##@@##########@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#################@@WWWWWW@@@
@@@@@@@@@@@@@WxMMMWWWMMMWWWWWWW@WWWMWWMWWWWMMMWWWWxnzzzznnnxxxMMMxnxxMMW@@@@@@########@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@##@@#################@@WWWWWW@@@
@@@@@@@@@@@@WMxMMMWMMMMMMMMMWWWWWWMMWWMWWWMMMWWWWWxnzzznnnxxMMMWMMnxMWW@@@@@@########@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#################@WWWW@@@@
@@@@@@@@@@@@WMxxMMMMMxxxxxxxMWWWWMMMMMMMMMMMMWWWWWxnnzznnxxMWWWWWWMM@@@@@@@@@########@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@###@###################@WWWW@@@@
@@@@@@@@@@@@@MxxxxMMxxxnnnxxxMWWWMMWWMMMMMMMWWWW@@MxnnnnxxxWW@@@@@W@@@@@@@@@@@######@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@###@#@##################@@W@@@@@@
@@@@@@@@@@@@WxnxxxxxnnnnnnxxxMWWMMMMMMMMMMMWWWW@#@WMxxxnxxMW@@@@@@@@@@@@@@@@@@####@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#@@#####################@@W@@@@@@
@@@@@@@@@@@@WxnnnnxxxxnnnxxxxMMMMMMMMMMMMMM@WWM@##@@@WxxxMW@@@@@@@@@@@@@@@@@@@###@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@####@#####################@WW@@@@@W
@@@@@@@@@@@@WnnnnnxxxMxnxxxMMMMMMMWWWMMMMMW@WWW######@WWMWW@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@########################@WW@@@@@@
@@@@@@@@@@@@MxnnnnxxxxxxxxMMMMMMMMWWWMMMMM@@WW@######@@@W@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#@@#@@##################@WWW@@@@@
*/

/*int main()
{
    //string_array* A = malloc(sizeof *A); // Brendan Wilhelmsen typecasted MALLOC, and he passed data types to sizeof. Why? IIRC, sizeof detects the data type of its operand, and MALLOC returns a void pointer. Am I missing something?
    //A->size = 0;
    //A->array = malloc(sizeof(A->array));
    //A->array[0];
    //char* s = "";
    string_array* A_0 = malloc(sizeof(string_array)); // Thanks, Gaetan. //string_array* A_0 = (string_array*) malloc(sizeof(string_array*));
    A_0->size = 4;
    A_0->array = malloc(sizeof(char*) * A_0->size); // Thanks, Gaetan. //A_0->array = (char**) malloc(sizeof(char**));
    A_0->array[4]; //= ["abc", "def", "gh", "!"];
        A_0->array[0] = "abc";
        A_0->array[1] = "def";
        A_0->array[2] = "gh";
        A_0->array[3] = "!";
    char* s_0 = "-";
    string_array* A_1 = malloc(sizeof(string_array));
    A_1->size = 4;
    A_1->array = malloc(sizeof(char*) * A_1->size);
    A_1->array[4];
        A_1->array[0] = "abc";
        A_1->array[1] = "def";
        A_1->array[2] = "gh";
        A_1->array[3] = "!";
    char* s_1 = "blah";
    string_array* A_2 = malloc(sizeof(string_array));
    A_2->size = 4;
    A_2->array = malloc(sizeof(char*) * A_2->size);
    A_2->array[4];
        A_2->array[0] = "abc";
        A_2->array[1] = "def";
        A_2->array[2] = "gh";
        A_2->array[3] = "!";
    char* s_2 = "";
    string_array* A_3 = malloc(sizeof(string_array));
    A_3->size = 1;
    A_3->array = malloc(sizeof(char*) * A_3->size);
    A_3->array[1];
        A_3->array[0] = "";
    char* s_3 = " ";

    //printf("%s\n", my_join(A, s));
    printf("%s\n", my_join(A_0, s_0));
    printf("%s\n", my_join(A_1, s_1));
    printf("%s\n", my_join(A_2, s_2));
    printf("%s\n", my_join(A_3, s_3)); // Again, my my main causes an error, yet my function passes Gandalf. top kek
    return 0;
}*/
