// 函数: sub_14084c3a0
// 地址: 0x14084c3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = arg2
int64_t var_10 = arg3
int32_t rsi_2 = (arg2 u>> 0x20).d + sub_140b5ead0(arg2.d)
int32_t r9_1 = sub_140b5ead0(arg3.d) + arg3:4.d
int32_t rsi_4 = (rsi_2 - r9_1) ^ r9_1 u>> 0xd
int32_t rcx_6 = (0x9e3779b9 - rsi_4 - r9_1) ^ rsi_4 << 8
int32_t r9_4 = (r9_1 - rcx_6 - rsi_4) ^ rcx_6 u>> 0xd
int32_t rsi_7 = (rsi_4 - rcx_6 - r9_4) ^ r9_4 u>> 0xc
int32_t rcx_9 = (rcx_6 - rsi_7 - r9_4) ^ rsi_7 << 0x10
int32_t r9_7 = (r9_4 - rcx_9 - rsi_7) ^ rcx_9 u>> 5
int32_t rsi_10 = (rsi_7 - rcx_9 - r9_7) ^ r9_7 u>> 3
int32_t rcx_12 = (rcx_9 - rsi_10 - r9_7) ^ rsi_10 << 0xa
int32_t r9_10 = (r9_7 - rcx_12 - rsi_10) ^ rcx_12 u>> 0xf
void* rbx_1

if (*(arg1 + 0x670) == *(arg1 + 0x69c))
label_14084c4cd:
    rbx_1 = sub_140841b90(arg1 + 0x668, r9_10, &var_18)
else
    void* rcx_14 = *(arg1 + 0x6a8)
    void* r8 = arg1 + 0x6a0
    
    if (rcx_14 != 0)
        r8 = rcx_14
    
    int32_t rax_18 = *(r8 + (((sx.q(*(arg1 + 0x6b0)) - 1) & sx.q(r9_10)) << 2))
    
    if (rax_18 == 0xffffffff)
    label_14084c4cd_1:
        rbx_1 = sub_140841b90(arg1 + 0x668, r9_10, &var_18)
    else
        int64_t* rcx_17
        
        while (true)
            rcx_17 = (sx.q(rax_18) << 5) + *(arg1 + 0x668)
            
            if (*rcx_17 == arg2 && rcx_17[1] == arg3)
                break
            
            rax_18 = rcx_17[3].d
            
            if (rax_18 == 0xffffffff)
                goto label_14084c4cd_2
        
        if (rax_18 == 0xffffffff || rcx_17 == 0)
        label_14084c4cd_2:
            rbx_1 = sub_140841b90(arg1 + 0x668, r9_10, &var_18)
        else
            rbx_1 = &rcx_17[2]

int64_t* result = *rbx_1

if (result == 0)
    result = j_sub_140a82f30(0xd0)
    
    if (result != 0)
        result = sub_1407e2f70(result)
    
    *rbx_1 = result

return result
