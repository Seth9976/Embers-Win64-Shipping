// 函数: sub_142719cd0
// 地址: 0x142719cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142729ce0()
void* result = rax[0x23]

if (result == 0)
    int64_t r8_1 = *rax
    (*(r8_1 + 0x390))(rax, arg3, r8_1)
    result = rax[0x23]

uint64_t rcx_1 = zx.q(*(result + 0x44))

if (rcx_1.d s< *(arg1 + 0x90))
    result = *(arg1 + 0x88)
    void* rdi_1 = *(result + (rcx_1 << 3))
    
    if (rdi_1 != 0)
        int64_t rsi_1 = sx.q(*(rdi_1 + 0x88))
        int32_t rax_1 = (rsi_1 + 1).d
        *(rdi_1 + 0x88) = rax_1
        
        if (rax_1 s> *(rdi_1 + 0x8c))
            sub_1405a4df0(rdi_1 + 0x80)
        
        result = *(rdi_1 + 0x80)
        int64_t rcx_3 = rsi_1 * 3
        *(result + (rcx_3 << 3)) = *arg2
        *(result + (rcx_3 << 3) + 0x10) = arg2[1].q
        *(rdi_1 + 0x40) = 0

return result
