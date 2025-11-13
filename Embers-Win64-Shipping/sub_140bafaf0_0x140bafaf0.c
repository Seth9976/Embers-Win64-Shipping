// 函数: sub_140bafaf0
// 地址: 0x140bafaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x14)
int32_t rax = *(arg2 + 0x10)
int64_t arg_8 = rbx
uint64_t result

if (rax == *(arg2 + 0x3c))
label_140bafb7c:
    sub_1407d1800(arg2 + 8, &arg_8, arg1 + 0x14, nullptr)
    int64_t* rbx_1 = *(arg1 + 0x70)
    int64_t rdi_1 = 0
    result = &rbx_1[sx.q(*(arg1 + 0x78))]
    uint64_t rsi_2 = sx.q(*(arg1 + 0x78)) << 3 u>> 3
    
    if (rbx_1 u> result)
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            result = sub_140bafaf0(*rbx_1, arg2)
            rdi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rdi_1 != rsi_2)
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8_1 = arg2 + 0x40
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    result = zx.q(*(r8_1 + (((sx.q(*(arg2 + 0x50)) - 1) & sx.q(rax_2)) << 2)))
    
    if (result.d == 0xffffffff)
        goto label_140bafb7c
    
    int64_t rdx_3 = *(arg2 + 8)
    
    while (true)
        int64_t rcx_3 = sx.q(result.d) * 2
        
        if (*(rdx_3 + (rcx_3 << 3)) == rbx)
            break
        
        result = zx.q(*(rdx_3 + (rcx_3 << 3) + 8))
        
        if (result.d == 0xffffffff)
            goto label_140bafb7c
    
    if (result.d == 0xffffffff)
        goto label_140bafb7c

return result
