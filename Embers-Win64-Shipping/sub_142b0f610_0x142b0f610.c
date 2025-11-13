// 函数: sub_142b0f610
// 地址: 0x142b0f610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x14))
int32_t i = 0
int32_t arg_8 = 0
int32_t rsi = *(arg1 + (rax << 2) + 0x20)
uint32_t rbp = zx.d(*(arg1 + (rax << 1) + 0x220))
void* rcx = *(arg1 + 8)
int32_t arg_10 = 0

if (sub_142b0efa0(*(rcx + 0x1f0), rsi, &arg_8, &arg_10) == 0)
    *(*(arg1 + 8) + 0x1e0) = rsi
    int32_t rax_7
    uint64_t r15
    int512_t zmm0
    rax_7, zmm0 = sub_142a96ab0(*(arg1 + 8), r15, arg2)
    arg_8 = rax_7
    int32_t rdx_2 = rax_7
    
    if (rax_7 == 0xffffffff)
        rax_7.b = 0
        return rax_7
    
    void* rcx_3 = *(arg1 + 8)
    int32_t r8_4 = *(rcx_3 + 0x1e4)
    arg_10 = r8_4
    
    if (*(rcx_3 + 0x208) u<= 0)
        goto label_142b0f734
    
    zmm0 = sub_142b0f1a0(*(rcx_3 + 0x1f0), rsi, rax_7, rbp, zmm0, r8_4)
    
    if (sub_142b0efa0(*(*(arg1 + 8) + 0x1f0), rsi, &arg_8, &arg_10) == 0)
        rdx_2 = arg_8
        r8_4 = arg_10
    label_142b0f734:
        int32_t rax_9 = *(arg1 + 0x10)
        uint64_t rcx_9 = zx.q(*(arg1 + 0x14) + 1) & 0x7f
        
        if (rcx_9.d == rax_9)
            *(arg1 + 0x10) = (rax_9 + 6) & 0x7f
        
        *(arg1 + (rcx_9 << 2) + 0x20) = rdx_2
        *(arg1 + (rcx_9 << 1) + 0x220) = r8_4.w
        *(arg1 + 0x14) = rcx_9.d
        *(arg1 + 0x1c) = rcx_9.d
        *(arg1 + 0x18) = rdx_2
        int32_t rax_12
        
        do
            rax_12, zmm0 = sub_142a96ab0(*(arg1 + 8), r15, zmm0)
            
            if (rax_12 == 0xffffffff)
                break
            
            void* rcx_11 = *(arg1 + 8)
            
            if (*(rcx_11 + 0x208) u> 0)
                break
            
            int16_t r8_7 = (*(rcx_11 + 0x1e4)).w
            int32_t rax_13 = *(arg1 + 0x10)
            uint64_t rcx_14 = zx.q(*(arg1 + 0x14) + 1) & 0x7f
            
            if (rcx_14.d == rax_13)
                *(arg1 + 0x10) = (rax_13 + 6) & 0x7f
            
            *(arg1 + (rcx_14 << 2) + 0x20) = rax_12
            i += 1
            *(arg1 + (rcx_14 << 1) + 0x220) = r8_7
            *(arg1 + 0x14) = rcx_14.d
        while (i s< 6)
        
        rax_12.b = 1
        return rax_12

int32_t rax_2 = *(arg1 + 0x10)
uint64_t r8_3 = zx.q(*(arg1 + 0x14) + 1) & 0x7f

if (r8_3.d == rax_2)
    *(arg1 + 0x10) = (rax_2 + 6) & 0x7f

int32_t rdx_1 = arg_8
int16_t rax_5 = arg_10.w
*(arg1 + (r8_3 << 2) + 0x20) = rdx_1
*(arg1 + (r8_3 << 1) + 0x220) = rax_5
rax_5.b = 1
*(arg1 + 0x14) = r8_3.d
*(arg1 + 0x1c) = r8_3.d
*(arg1 + 0x18) = rdx_1
return rax_5
