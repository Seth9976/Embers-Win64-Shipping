// 函数: sub_142b3f070
// 地址: 0x142b3f070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
char* result = arg1

if (arg1 != arg2)
    if (*arg1 != 0)
        sub_142a7dcd0(*(arg1 + 8))
        sub_142a7dcd0(*(result + 0x58))
        *result = 0
    
    int64_t rbp_1
    
    if (*arg2 == 0)
        rbp_1 = 0x28
    label_142b3f177:
        void* rdx_1
        
        if (*arg2 == 0)
            rdx_1 = &arg2[8]
        else
            rdx_1 = *(arg2 + 8)
        
        void* rcx_9
        
        if (*result == 0)
            rcx_9 = &result[8]
        else
            rcx_9 = *(result + 8)
        
        int64_t rbx_2 = sx.q(rbp_1.d)
        int64_t r8_1 = rbx_2 * 2
        
        if (r8_1 != 0)
            memcpy(rcx_9, rdx_1, r8_1.d)
        
        void* rdx_2
        
        if (*arg2 == 0)
            rdx_2 = &arg2[0x58]
        else
            rdx_2 = *(arg2 + 0x58)
        
        void* rcx_10
        
        if (*result == 0)
            rcx_10 = &result[0x58]
        else
            rcx_10 = *(result + 0x58)
        
        if (rbp_1.d != 0)
            memcpy(rcx_10, rdx_2, rbx_2.d)
        
        *(result + 0x80) = *(arg2 + 0x80)
        *(result + 0x84) = *(arg2 + 0x84)
    else
        rbp_1 = sx.q(*(arg2 + 0x10))
        
        if (rbp_1.d s<= 0x28)
            goto label_142b3f177
        
        int64_t rax_2 = sub_142a7dd00(rbp_1 << 1)
        int64_t rax_3 = sub_142a7dd00(rbp_1)
        
        if (rax_2 != 0 && rax_3 != 0)
            *result = 1
            *(result + 0x10) = rbp_1.d
            *(result + 8) = rax_2
            *(result + 0x60) = rbp_1.d
            *(result + 0x58) = rax_3
            goto label_142b3f177
        
        sub_142a7dcd0(rax_2)
        sub_142a7dcd0(rax_3)
        char var_b8 = 0
        int64_t var_38_1 = 0x14
        sub_142b3f070(result, &var_b8)
        
        if (var_b8 != 0)
            int64_t var_b0
            sub_142a7dcd0(var_b0)
            int64_t var_60
            sub_142a7dcd0(var_60)

__security_check_cookie(rax_1 ^ &var_e8)
return result
