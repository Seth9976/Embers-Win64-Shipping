// 函数: sub_1429da940
// 地址: 0x1429da940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* result

if (*arg2 != 0)
    result = nullptr
else
    void* rcx = *(arg1 + 0x1a8)
    
    if (rcx == 0)
        result = nullptr
    else
        int64_t var_d0 = 0
        bool cond:0_1 = (*(arg1 + 8) & 0x10000) == 0
        int64_t var_d8 = 0
        int64_t var_38
        __builtin_memset(&var_38, 0, 0x1c)
        
        if (not(cond:0_1))
            var_38.d = *(arg1 + 0xfc)
            var_38:4.d = *(arg1 + 0x100)
            int64_t var_30
            var_30.d = *(arg1 + 0x104)
        
        int32_t var_c8
        
        if (sub_1429de470(rcx, &var_c8, &var_d0, &var_d8, &var_38) != 0)
            result = nullptr
        else
            int64_t r8_2 = *(arg1 + 0x2a8)
            int32_t var_c4
            *(arg1 + 0x13c) = var_c4
            *(arg1 + 0x134) = var_c4
            *(arg1 + 0x118) = 0x102
            *(arg1 + 0x128) = (var_c4 + 0x4f) & 0xfffffff0
            int32_t rax_8 = var_c8
            *(arg1 + 0x138) = rax_8
            *(arg1 + 0x130) = rax_8
            int32_t var_b8
            *(arg1 + 0x124) = var_b8
            *(arg1 + 0x140) = 1
            *(arg1 + 0x144) = 1
            int64_t var_90
            *(arg1 + 0x148) = var_90
            int64_t var_88
            *(arg1 + 0x150) = var_88
            int32_t var_a4
            *(arg1 + 0x16c) = var_a4
            *(arg1 + 0x170) = var_a4
            int64_t var_80
            *(arg1 + 0x158) = var_80
            result = arg1 + 0x118
            *(arg1 + 0x160) = 0
            *(arg1 + 0x168) = var_b8
            *(arg1 + 0x174) = var_b8
            *(arg1 + 0x12c) = 8
            *(arg1 + 0x178) = 0xc
            *(arg1 + 0x180) = r8_2
            int64_t var_70
            *(arg1 + 0x188) = var_70
            *(arg1 + 0x190) = 0
            *arg2 = arg1 + 0x118

__security_check_cookie(rax_1 ^ &var_108)
return result
