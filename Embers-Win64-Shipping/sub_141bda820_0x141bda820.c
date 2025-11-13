// 函数: sub_141bda820
// 地址: 0x141bda820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x30)

if (rdi != 0)
    void* rax_1 = sub_141c122a0()
    void* r8_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(r8_1 + 0x38) || *(*(r8_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        int64_t* rcx_1 = *(arg1 + 0x30)
        (*(*rcx_1 + 0x260))(rcx_1, zx.q(arg2), r8_1, rax_1 + 0x30)

void* result = arg1 + 0x48
void var_18

if (result != &var_18)
    *result = 0
    int64_t* rcx_2 = *(result + 8)
    *(result + 8) = 0
    
    if (rcx_2 != 0)
        int32_t temp0_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp0_1 == 1)
            return (*(*rcx_2 + 8))(rcx_2, 1)

return result
