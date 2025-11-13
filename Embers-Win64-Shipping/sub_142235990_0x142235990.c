// 函数: sub_142235990
// 地址: 0x142235990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142278430(arg2, not.b(arg1[0x10].b) & 1)
int512_t zmm1
int512_t zmm2_3
zmm1, zmm2_3 = sub_142235910(arg1 + 0x4c, arg2, 
    sub_1422354c0(arg1 + 0x2c, arg2, 
        sub_1422355c0(&arg1[1], arg2, 
            sub_14227a010(arg2, arg1[0x10].b u>> 2 & 1, *arg1, *(arg1 + 4)), 
            sub_142279ab0(arg2, arg1[0x10].b u>> 1 & 1))))
char rax = arg1[0x10].b
zmm2_3.o = 0x7f7fffff

if ((rax & 0x10) == 0)
    zmm1.o = 0x7f7fffff
else
    zmm1.o = *(arg1 + 8)

if ((rax & 8) != 0)
    zmm2_3.o = *(arg1 + 0xc)

sub_1422781b0(arg2, zmm1, zmm2_3)
sub_14227ff70(arg2, arg1 + 0x68)
sub_14227f4c0(arg2, arg1 + 0xb4)
return sub_14227fdd0(arg2, arg1 + 0x68, arg1 + 0xb4) __tailcall
