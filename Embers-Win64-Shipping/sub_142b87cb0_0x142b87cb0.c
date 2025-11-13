// 函数: sub_142b87cb0
// 地址: 0x142b87cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rcx = *(arg1 + 0x10)
int32_t* result = (*(*rcx + 8))(rcx)

if (*arg4 s<= 0)
    uint64_t rbx_1
    int32_t i
    uint128_t zmm0_1
    
    if (std::ios_base::good(arg2) == 0)
        int32_t rax_4
        rax_4, zmm0_1 = sub_142b456f0(arg3 + 8, arg2, arg1 + 0xf0, arg4)
        i = 0
        int32_t rbx_2
        
        if (std::ios_base::good(arg2) == 0)
            rbx_2 = sub_142ab3850(arg2)
        else
            rbx_2 = 0
        
        rbx_1 = zx.q(rbx_2 - rax_4)
    else
        i = 0
        rbx_1 = 0
        zmm0_1 = sub_142b454b0(arg3 + 8, arg2, arg4)
    
    int32_t rax_7 = sub_142b87710(*(arg1 + 8), arg2, zmm0_1)
    void var_98
    
    if (rbx_1.d s>= 0)
        int32_t rcx_6 = sx.d(*(arg1 + 0x408))
        
        if (rbx_1.d s> rcx_6)
            rbx_1 = zx.q(rcx_6)
        
        uint32_t r8_2 = (rbx_1 * 3).d * 2
        int16_t* rbp_2 = *(arg1 + (sx.q(rax_7 + r8_2) << 3) + 0xf8)
        
        if (rbp_2 == 0 && rax_7 != 5)
            rbp_2 = *(arg1 + (sx.q(r8_2 + 5) << 3) + 0xf8)
        
        if (rbp_2 != data_143ccb6a0 && rbp_2 != 0)
            if (*(arg1 + 0x5c8) == 0)
                sub_142ac0430(Concurrency::agent::agent(&var_98, rbp_2), arg1 + 0x410, arg4)
                sub_142a47ff0(&var_98)
                void* rax_12 = *(arg3 + 0x78)
                void* rcx_15 = rax_12 - 8
                
                if (rax_12 == 0)
                    rcx_15 = nullptr
                
                sub_142ab9750(rcx_15, arg1 + 0x410, 0xc)
            else if (*(arg1 + 0xe8) s> 0)
                int64_t rbx_3 = 0
                
                do
                    void** r14_1 = *(arg1 + 0x18)
                    
                    if (sub_142a8c280(rbp_2, *(r14_1 + rbx_3 + 8)) == 0)
                        sub_142ab8c50(*(r14_1 + rbx_3), arg3, arg2, arg4)
                        break
                    
                    i += 1
                    rbx_3 += 0x10
                while (i s< *(arg1 + 0xe8))
    
    result = sub_142b45d00(&var_98)
    *(arg3 + 8) = *result
    *(arg3 + 0x18) = *(result + 0x10)
    *(arg3 + 0x28) = *(result + 0x20)

__security_check_cookie(rax_1 ^ &var_c8)
return result
