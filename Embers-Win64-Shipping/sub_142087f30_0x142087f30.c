// 函数: sub_142087f30
// 地址: 0x142087f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x244) & 0xf) == 0)
    return 

int64_t* var_18
sub_1424373a0((*(*arg1 + 0x150))(), &var_18)
int32_t i_1
int32_t i = i_1

while (i s>= 0)
    int64_t* rdx_1 = var_18
    
    if (i s>= rdx_1[1].d)
        break
    
    int64_t* rax_3 = sub_140d3c6e0(*rdx_1 + (sx.q(i) << 3))
    
    if (rax_3 != 0)
        char rax_5
        
        if ((*(arg1 + 0x5b) & 1) == 0)
            rax_5 = (*(*rax_3 + 0x6a8))(rax_3)
        
        if ((*(arg1 + 0x5b) & 1) != 0 || rax_5 != 0)
            int32_t r8_1 = *(arg1 + 0x244)
            (*(*rax_3 + 0xaa8))(rax_3, zx.q(arg2), (r8_1 u>> 2).b & 1, (r8_1 u>> 3).b & 1, 
                r8_1.b & 1, (r8_1 u>> 1).b & 1)
    
    i = i_1 + 1
    i_1 = i
