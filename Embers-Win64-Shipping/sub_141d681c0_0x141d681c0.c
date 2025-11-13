// 函数: sub_141d681c0
// 地址: 0x141d681c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x498) & 0x3c) == 0 || sub_140d3e110(arg1 + 0x898).b == 0)
    return 

int64_t* var_18
sub_1424373a0(sub_140d3c6e0(arg1 + 0x898), &var_18)
int32_t i_1
int32_t i = i_1

while (i s>= 0)
    int64_t* rdx_1 = var_18
    
    if (i s>= rdx_1[1].d)
        break
    
    int64_t* rax_2 = sub_140d3c6e0(*rdx_1 + (sx.q(i) << 3))
    
    if (rax_2 != 0 && (*(*rax_2 + 0x6a8))(rax_2) != 0)
        int32_t r8_1 = *(arg1 + 0x498)
        (*(*rax_2 + 0xaa8))(rax_2, zx.q(arg2), (r8_1 u>> 4).b & 1, (r8_1 u>> 5).b & 1, 
            (r8_1 u>> 2).b & 1, (r8_1 u>> 3).b & 1)
    
    i = i_1 + 1
    i_1 = i
