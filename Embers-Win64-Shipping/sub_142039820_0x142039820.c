// 函数: sub_142039820
// 地址: 0x142039820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
sub_1424373a0((*(*arg1 + 0x150))(), &var_18)
int32_t i_1
int32_t i = i_1

while (i s>= 0)
    int64_t* rdx_1 = var_18
    
    if (i s>= rdx_1[1].d)
        break
    
    int64_t* rax_3 = sub_140d3c6e0(*rdx_1 + (sx.q(i) << 3))
    
    if (rax_3 != 0 && (*(*rax_3 + 0x6a8))(rax_3) != 0)
        (*(*rax_3 + 0xd30))(rax_3, arg1[0x46])
    
    i = i_1 + 1
    i_1 = i

return i
