// 函数: sub_141dbf1f0
// 地址: 0x141dbf1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1f] == 0)
    return 

if (arg2 != 0)
    jump(*(*arg2 + 0xbe0))

int64_t* var_18
sub_1424373a0((*(*arg1 + 0x150))(), &var_18)
int32_t i_1
int32_t i = i_1

while (i s>= 0)
    int64_t* rdx_2 = var_18
    
    if (i s>= rdx_2[1].d)
        break
    
    int64_t* rax_4 = sub_140d3c6e0(*rdx_2 + (sx.q(i) << 3))
    
    if (rax_4 != 0)
        int64_t r8_1 = *rax_4
        (*(r8_1 + 0xbe0))(rax_4, arg1[0x1f], r8_1)
    
    i = i_1 + 1
    i_1 = i
