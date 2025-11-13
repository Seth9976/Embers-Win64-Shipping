// 函数: sub_142110080
// 地址: 0x142110080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t count = *(arg1 + 0x4d8)
int64_t rsi = *(arg1 + 0x4d0)
int32_t r8 = *(arg2 + 0x14)
*(arg2 + 0x10) = count
char* result
void* r14

if (count != 0 || r8 != 0)
    sub_142114190(arg2, count, r8)
    char* rax_1 = *(arg2 + 8)
    r14 = &arg2[8]
    char* rcx_1 = arg2
    
    if (rax_1 != 0)
        rcx_1 = rax_1
    
    result = memcpy(rcx_1, rsi, count)
    
    if (*(arg2 + 0x10) == 0)
        goto label_1421100fa
else
    *(arg2 + 0x14) = 3
    r14 = &arg2[8]
label_1421100fa:
    bool cond:1_1 = *(arg2 + 0x14) s>= 3
    *(arg2 + 0x10) = 3
    
    if (not(cond:1_1))
        sub_142114210(arg2, 0)
    
    char* rax_2 = *r14
    char* rcx_3 = arg2
    
    if (rax_2 != 0)
        rcx_3 = rax_2
    
    result = nullptr
    *rcx_3 = 0
    rcx_3[2] = 0

if (arg3 != 0x31)
    int64_t rbp
    rbp.b = 0
    int64_t i = 0
    void* rsi_1 = sub_14106f420(sub_14106f030(), arg3) + 0x28
    char* result_1
    
    do
        if (i != 1 && sub_14106f000(rsi_1, arg3) != 0)
            char* rax_6 = *r14
            char* rcx_6 = arg2
            
            if (rax_6 != 0)
                rcx_6 = rax_6
            
            rcx_6[i] |= *(rsi_1 + 1)
        
        char* rax_8 = *r14
        char* rcx_7 = arg2
        
        if (rax_8 != 0)
            rcx_7 = rax_8
        
        rax_8.b = *rsi_1 == 0
        rcx_7[i] &= rax_8.b
        result_1 = arg2
        result = *r14
        
        if (result != 0)
            result_1 = result
        
        rsi_1 += 9
        rbp.b |= result_1[i]
        i += 1
    while (i s< 3)
    
    if (rbp.b == 0 || (*(arg1 + 0x1f8) & 0x40) != 0)
        result_1[1] = 1

return result
