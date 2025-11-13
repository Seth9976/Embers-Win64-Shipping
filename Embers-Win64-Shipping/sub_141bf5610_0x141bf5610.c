// 函数: sub_141bf5610
// 地址: 0x141bf5610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
void* result = __security_cookie ^ &var_108
void* result_1 = result

if (*(arg1 + 0x398) != 2)
    int64_t* rbx_1 = *(arg1 + 0x6e0)
    
    if (rbx_1 != 0)
        int64_t var_d8
        __builtin_memset(&var_d8, 0, 0x2c)
        int32_t i = 0
        int32_t var_a4_1 = 0
        int64_t var_98_1 = 0
        int32_t var_90_1 = 0
        int32_t var_ac_1 = 0x80
        int32_t var_a8_1 = 0xffffffff
        
        if (rbx_1[1].d s> 0)
            int64_t* rsi_1 = nullptr
            
            do
                int64_t r8_1 = *(rsi_1 + *rbx_1)
                int64_t var_e0 = r8_1
                int32_t var_e8
                sub_1408296b0(arg1 + 0x630, &var_e8, r8_1)
                int64_t rax_3 = sx.q(var_e8)
                int64_t rcx_4
                
                if (rax_3.d == 0xffffffff)
                    rcx_4 = 0
                else
                    rcx_4 = (rax_3 << 4) + *(arg1 + 0x630)
                
                if (rcx_4 != 0)
                    int32_t var_e4
                    sub_140b91690(&var_d8, &var_e4, &var_e0, nullptr)
                    rbx_1 = *(arg1 + 0x6e0)
                
                i += 1
                rsi_1 = &rsi_1[1]
            while (i s< rbx_1[1].d)
        
        int64_t var_88
        sub_141ba3570(arg1 + 0x630, &var_88, &var_d8)
        sub_140cd48b0(arg1 + 0x630, &var_d8)
        int32_t var_40_1 = 0
        int64_t var_48
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        int32_t var_80_1 = 0
        int32_t var_7c
        
        if (var_7c != 0)
            sub_1405a5410(&var_88, 0)
        
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        void var_78
        sub_14059a8e0(&var_78, 0)
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t rcx_12 = var_88
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int32_t var_90_2 = 0
        
        if (var_98_1 != 0)
            sub_140a74f90(var_98_1)
        
        int64_t var_d0
        var_d0.d = 0
        int32_t var_a8_2 = 0xffffffff
        int32_t var_a4_2 = 0
        int64_t var_c8
        result = sub_14059a8e0(&var_c8, 0)
        int64_t var_b8
        
        if (var_b8 != 0)
            result = sub_140a74f90(var_b8)
        
        int64_t rcx_17 = var_d8
        
        if (rcx_17 != 0)
            result = sub_140a74f90(rcx_17)
        
        int32_t var_80
        int32_t var_54
        
        if (var_80 - var_54 s> 0)
            result = (*(*(arg1 + 0x4f8) + 0x40))(arg1 + 0x4f8, 3)
    else
        (*(*(arg1 + 0x4f8) + 0x30))(arg1 + 0x4f8)
        result = (*(*(arg1 + 0x4f8) + 0x40))(arg1 + 0x4f8, 3)

__security_check_cookie(result_1 ^ &var_108)
return result
