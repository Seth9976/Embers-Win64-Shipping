// 函数: sub_141bd97f0
// 地址: 0x141bd97f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x30)

if (rdi != 0)
    void* rax_1 = sub_141c122a0()
    void* r8_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(r8_1 + 0x38) || *(*(r8_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        int64_t* rcx_1 = *(arg1 + 0x30)
        (*(*rcx_1 + 0x260))(rcx_1, zx.q(arg2), r8_1, rax_1 + 0x30)

void* result = arg1 + 0x50
void var_18

if (result != &var_18)
    *result = 0
    int64_t* rbx_1 = *(result + 8)
    
    if (rbx_1 != 0)
        *(result + 8) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return result
