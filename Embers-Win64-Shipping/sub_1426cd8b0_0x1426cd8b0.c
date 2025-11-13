// 函数: sub_1426cd8b0
// 地址: 0x1426cd8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax
void* const rdi_1

if (*(arg1 + 0x88) == 0)
    rdi_1 = nullptr
else
    rax = sub_14272ef20()
    
    if (rax == 0)
        rdi_1 = nullptr
    else
        rdi_1 = *(arg1 + 0x88)
        int64_t r8_1 = rax + 0x30
        rax = sx.q(*(rax + 0x38))
        
        if (rax.d s> *(rdi_1 + 0x38))
            rdi_1 = nullptr
        else if (*(*(rdi_1 + 0x30) + (rax << 3)) != r8_1)
            rdi_1 = nullptr

void* const rdx

if (*(arg1 + 0xb0) == 0)
    rdx = nullptr
else
    rax = sub_14272ef20()
    
    if (rax == 0)
        rdx = nullptr
    else
        rdx = *(arg1 + 0xb0)
        int64_t r8_2 = rax + 0x30
        rax = sx.q(*(rax + 0x38))
        
        if (rax.d s> *(rdx + 0x38))
            rdx = nullptr
        else if (*(*(rdx + 0x30) + (rax << 3)) != r8_2)
            rdx = nullptr

if (rdi_1 == rdx)
    void* rcx_2 = *(arg2 + 0xb8)
    
    if (rcx_2 != 0)
        int32_t rax_1
        int64_t rbp
        rax_1.b =
            sub_1426abaf0(rcx_2, *(arg1 + 0x88), *(arg1 + 0x90), *(arg1 + 0xb8), rbp, arg2) == 0
        rax_1.b ^= *(arg1 + 0x68) != 0
        return rax_1

rax.b = 0
return rax
