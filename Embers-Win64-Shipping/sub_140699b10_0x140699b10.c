// 函数: sub_140699b10
// 地址: 0x140699b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)
int32_t rax = *(rcx + 0x170)

if (rax s> 0)
    *(rcx + 0x170) = rax - 1
    void* rcx_1 = *(arg1 + 8)
    sub_140597df0(rcx_1 + 0x108, (sx.q(rax - 1) << 4) + *(rcx_1 + 0x160))
    int64_t* rcx_3 = *(arg1 + 8)
    void var_18
    (*(*rcx_3 + 0x2a8))(rcx_3, &var_18)
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

*arg2 = 1
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb0) = 0x20702
return arg2
