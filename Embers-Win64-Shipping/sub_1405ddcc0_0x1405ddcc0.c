// 函数: sub_1405ddcc0
// 地址: 0x1405ddcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r14 = result.d

if (result.d s>= 0)
    int32_t r12_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rsi_1 = r14
        
        if (r12_1 s< arg2)
            do
                int32_t rdi_1 = rsi_1 * 2
                uint64_t rbx_1 = zx.q(rdi_1 + 1)
                
                if ((rbx_1 + 1).d s< arg2)
                    int64_t r8_1 = -1
                    wchar16* _String1_1 = *(arg1[sx.q(rdi_1) + 2] + 0x18)
                    
                    do
                        r8_1 += 1
                    while (_String1_1[r8_1] != 0)
                    
                    int64_t rax_6 = -1
                    wchar16* _String2 = *(arg1[sx.q(rbx_1.d)] + 0x18)
                    
                    do
                        rax_6 += 1
                    while (_String2[rax_6] != 0)
                    
                    bool cond:2_1 = r8_1.d s> rax_6.d
                    
                    if (r8_1.d == rax_6.d)
                        cond:2_1 = wcsncmp(_String1_1, _String2, sx.q(r8_1.d)).d s> 0
                    
                    rax_6.b = cond:2_1
                    
                    if (rax_6.b != 0)
                        rbx_1 = zx.q(rdi_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int64_t rax_7 = sx.q(rsi_1)
                int64_t r8_3 = -1
                void* rsi_2 = &arg1[rax_7]
                wchar16* _String1 = *(arg1[rax_7] + 0x18)
                
                do
                    r8_3 += 1
                while (_String1[r8_3] != 0)
                
                int64_t rax_9 = sx.q(rbx_1.d)
                void* rdi_2 = &arg1[rax_9]
                wchar16* _String2_1 = *(arg1[rax_9] + 0x18)
                result = -1
                
                do
                    result += 1
                while (_String2_1[result] != 0)
                
                bool cond:1_1 = r8_3.d s> result.d
                
                if (r8_3.d == result.d)
                    cond:1_1 = wcsncmp(_String1, _String2_1, sx.q(r8_3.d)).d s> 0
                
                result.b = cond:1_1
                
                if (result.b == 0)
                    break
                
                int64_t rcx_3 = *rsi_2
                *rsi_2 = *rdi_2
                result = zx.q(((rbx_1 << 1) + 1).d)
                *rdi_2 = rcx_3
                rsi_1 = rbx_1.d
            while (result.d s< arg2)
        
        r12_1 -= 2
        temp2_1 = r14
        r14 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        result = arg1[i]
        int32_t rsi_3 = 0
        uint64_t rcx_4 = *arg1
        *arg1 = result
        arg1[i] = rcx_4
        
        if (j s> 1)
            do
                int32_t rdi_3 = rsi_3 * 2
                uint64_t rbx_2 = zx.q(rdi_3 + 1)
                
                if ((rbx_2 + 1).d s< j)
                    int64_t r8_5 = -1
                    wchar16* _String1_2 = *(arg1[sx.q(rdi_3) + 2] + 0x18)
                    
                    do
                        r8_5 += 1
                    while (_String1_2[r8_5] != 0)
                    
                    int64_t rax_15 = -1
                    wchar16* _String2_2 = *(arg1[sx.q(rbx_2.d)] + 0x18)
                    
                    do
                        rax_15 += 1
                    while (_String2_2[rax_15] != 0)
                    
                    bool cond:4_1 = r8_5.d s> rax_15.d
                    
                    if (r8_5.d == rax_15.d)
                        cond:4_1 = wcsncmp(_String1_2, _String2_2, sx.q(r8_5.d)).d s> 0
                    
                    rax_15.b = cond:4_1
                    
                    if (rax_15.b != 0)
                        rbx_2 = zx.q(rdi_3)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                int64_t rax_16 = sx.q(rsi_3)
                void* rsi_4 = &arg1[rax_16]
                wchar16* _String1_3 = *(arg1[rax_16] + 0x18)
                result = -1
                
                do
                    result += 1
                while (_String1_3[result] != 0)
                
                int64_t rcx_8 = sx.q(rbx_2.d)
                int64_t r8_7 = -1
                void* rdi_4 = &arg1[rcx_8]
                wchar16* _String2_3 = *(arg1[rcx_8] + 0x18)
                
                do
                    r8_7 += 1
                while (_String2_3[r8_7] != 0)
                
                bool cond:3_1 = result.d s> r8_7.d
                
                if (result.d == r8_7.d)
                    cond:3_1 = wcsncmp(_String1_3, _String2_3, sx.q(result.d)).d s> 0
                
                result.b = cond:3_1
                
                if (result.b == 0)
                    break
                
                int64_t rcx_11 = *rsi_4
                *rsi_4 = *rdi_4
                result = zx.q(((rbx_2 << 1) + 1).d)
                *rdi_4 = rcx_11
                rsi_3 = rbx_2.d
            while (result.d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
