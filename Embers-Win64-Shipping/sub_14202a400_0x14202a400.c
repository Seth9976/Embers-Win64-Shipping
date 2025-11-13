// 函数: sub_14202a400
// 地址: 0x14202a400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t* var_18
sub_1424373a0((*(*arg1 + 0x150))(), &var_18)
int32_t i_1
int32_t i = i_1

while (i s>= 0)
    int64_t* rdx_1 = var_18
    
    if (i s>= rdx_1[1].d)
        break
    
    void* rax_3 = sub_140d3c6e0(*rdx_1 + (sx.q(i) << 3))
    
    if (rax_3 != 0 && *(rax_3 + 0x228) != 0 && sub_1424b2a30(arg1, rax_3) == 0)
        rbx += 1
    
    i = i_1 + 1
    i_1 = i

return zx.q(rbx)
