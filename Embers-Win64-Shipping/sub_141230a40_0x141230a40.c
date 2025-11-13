// 函数: sub_141230a40
// 地址: 0x141230a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t result = __security_cookie ^ &var_2f8
int64_t result_1 = result

if ((*(arg1 + 0x3c) & 0x20) != 0)
    int64_t i_1 = sx.q(*(arg1 + 0xa8))
    result.b = 0
    
    if (i_1 s<= 0)
    label_141230ac0:
        void* rcx_1 = *(arg1 + 8)
        void* rax_1 = *(rcx_1 + 0xf80)
        int64_t r12
        
        if (rax_1 == 0 || *(rax_1 + 8) == 0 || (*(rax_1 + 0x20) & 4) != 0)
            r12.b = 0
        else
            r12.b = 1
        
        char rax_2 = sub_141108e00(rcx_1, arg1 + 0x10)
        int64_t r15
        
        if (sub_1413edd30(*(*(arg1 + 8) + 8)) == 0 || *(*(arg1 + 8) + 0x1040) == 0
                || (*(arg1 + 0x38) & 0x80000) == 0)
            r15.b = 0
        else
            r15.b = 1
        
        int32_t rdi_1 = 0
        int64_t rbx_1 = *(arg1 + 0xa0)
        result = sx.q(*(arg1 + 0xa8))
        int64_t r14_2 = result * 0x5240 + rbx_1
        
        if (rbx_1 != r14_2)
            void* rcx_5 = arg3
            
            do
                int32_t rsi_1 = rdi_1
                rdi_1 += 1
                
                if (rcx_5 == 0 || (r12.b == 0 && rax_2 == 0 && r15.b == 0))
                    result.b = 0
                else
                    result.b = 1
                
                if (result.b != 0)
                    void var_2c0
                    sub_1419928d0(&var_2c0, arg2)
                    sub_141198470(&var_2c0, rsi_1, arg1 + 0xa0, arg3)
                    sub_14199ef00(&var_2c0)
                    int32_t var_98_1 = 0
                    int32_t var_94
                    void var_a0
                    
                    if (var_94 != 0)
                        sub_1410b3aa0(&var_a0, 0)
                    int32_t var_110_1 = 0
                    int32_t var_10c
                    void var_118
                    
                    if (var_10c != 0)
                        sub_1410b3aa0(&var_118, 0)
                    int32_t var_168_1 = 0
                    int32_t var_1a8_1 = 0
                    int32_t var_1a4
                    void var_1b0
                    
                    if (var_1a4 != 0)
                        sub_1410b3bb0(&var_1b0, 0)
                    int32_t var_180_1 = 0xffffffff
                    int32_t var_17c_1 = 0
                    void var_1a0
                    sub_141095ed0(&var_1a0, 0)
                    int32_t var_1b8_1 = 0
                    int32_t var_1f8_1 = 0
                    int32_t var_1f4
                    void var_200
                    
                    if (var_1f4 != 0)
                        sub_1410b3bb0(&var_200, 0)
                    int32_t var_1d0_1 = 0xffffffff
                    int32_t var_1cc_1 = 0
                    void var_1f0
                    sub_141095ed0(&var_1f0, 0)
                    int32_t var_208_1 = 0
                    void var_250
                    sub_141096480(&var_250, 0)
                    int32_t var_258_1 = 0
                    void var_2a0
                    result = sub_14108c840(&var_2a0)
                    rcx_5 = arg3
                
                rbx_1 += 0x5240
            while (rbx_1 != r14_2)
    else
        int64_t rcx = 0
        int64_t i
        
        do
            if (result.b != 0 || *(*(arg1 + 0xa0) + rcx + 0xd74) != 0)
                result.b = 1
            else
                result.b = 0
            
            rcx += 0x5240
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (result.b == 0)
            goto label_141230ac0

__security_check_cookie(result_1 ^ &var_2f8)
return result
