// 函数: sub_1429c49d0
// 地址: 0x1429c49d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg4)
int32_t r15 = arg3
__CheckForDebuggerJustMyCode(&data_14427d007)
uint64_t result = zx.q((r13 - 1).d)
int32_t rbp = 0
int64_t r12 = sx.q(result.d)

if (result.d s> 0)
    int64_t r15_1 = 0
    int32_t* r8 = arg1 + 0x4c
    int32_t* rsi_1 = arg1 + 0x48
    int32_t* r9 = arg1 + 0xa4
    int32_t* r14_1 = arg1 + 0xa0
    
    do
        int64_t rcx_2
        
        if (*rsi_1 != *r14_1)
            result = 1
            rcx_2 = 0x58
        else
            int32_t rdx = *r9
            int32_t rcx = *r8
            
            if (((rdx.b ^ rcx.b) & 1) != 0)
                *r8 = rcx | 2
                *r9 = rdx | 2
            
            result = 2
            rcx_2 = 0xb0
        
        r15_1 += result
        rbp += result.d
        r14_1 += rcx_2
        r9 += rcx_2
        rsi_1 += rcx_2
        r8 += rcx_2
    while (r15_1 s< r12)
    
    r15 = arg3

int32_t rdi_2 = 0
int32_t i = 1
int32_t r10_2 = 1

if (r15 s> 0)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    uint64_t result_1 = 0
    int128_t zmm7
    int128_t var_58_1 = zmm7
    
    while (i != 0)
        int128_t* r14_3 = result_1 * 0x58 + arg1
        
        if (((not.d(*(r14_3 + 0x4c))).b & 1) == 0)
            int32_t j = 1
            int64_t rax_6 = sx.q(r10_2)
            
            do
                int32_t j_1 = j
                
                if (rax_6 s>= r13)
                    break
                
                j = 0
                int32_t rdx_5 = not.d(*(rax_6 * 0x58 + arg1 + 0x4c)) & 1
                
                if (rdx_5 == 0)
                    j = j_1
                
                if (rdx_5 == 0)
                    r10_2 += 1
                
                if (rdx_5 == 0)
                    rax_6 += 1
            while (j != 0)
            
            int64_t rax_7 = sx.q(r10_2)
            r10_2 += 1
            
            if (j != 0)
                i = 0
            else
                int64_t r8_1 = rax_7 * 3
                uint64_t rdx_6 = result_1 * 3
                int32_t rcx_6 = *(arg2 + (rdx_6 << 2))
                *(arg2 + (rdx_6 << 2)) = *(arg2 + (r8_1 << 2))
                *(arg2 + (r8_1 << 2)) = rcx_6
                int32_t rcx_7 = *(arg2 + (rdx_6 << 2) + 4)
                *(arg2 + (rdx_6 << 2) + 4) = *(arg2 + (r8_1 << 2) + 4)
                *(arg2 + (r8_1 << 2) + 4) = rcx_7
                int32_t rcx_8 = *(arg2 + (rdx_6 << 2) + 8)
                *(arg2 + (rdx_6 << 2) + 8) = *(arg2 + (r8_1 << 2) + 8)
                *(arg2 + (r8_1 << 2) + 8) = rcx_8
                int128_t zmm3 = *r14_3
                int128_t zmm4_1 = r14_3[1]
                int128_t zmm5_1 = r14_3[2]
                zmm6 = r14_3[3]
                zmm7 = r14_3[4]
                int64_t zmm2 = r14_3[5].q
                int128_t* rax_11 = rax_7 * 0x58
                *r14_3 = *(rax_11 + arg1)
                r14_3[1] = *(rax_11 + arg1 + 0x10)
                r14_3[2] = *(rax_11 + arg1 + 0x20)
                r14_3[3] = *(rax_11 + arg1 + 0x30)
                r14_3[4] = *(rax_11 + arg1 + 0x40)
                r14_3[5].q = *(rax_11 + arg1 + 0x50)
                *(rax_11 + arg1) = zmm3
                *(rax_11 + arg1 + 0x10) = zmm4_1
                *(rax_11 + arg1 + 0x20) = zmm5_1
                *(rax_11 + arg1 + 0x30) = zmm6
                *(rax_11 + arg1 + 0x40) = zmm7
                *(rax_11 + arg1 + 0x50) = zmm2
        else
            int32_t rax_5 = rdi_2 + 2
            
            if (r10_2 s>= rax_5)
                rax_5 = r10_2
            
            r10_2 = rax_5
        
        int32_t rax_12 = rdi_2 + 1
        
        if (i == 0)
            rax_12 = rdi_2
        
        rdi_2 = rax_12
        result = result_1 + 1
        
        if (i == 0)
            result = result_1
        
        result_1 = result
        
        if (rdi_2 s>= r15)
            break

return result
