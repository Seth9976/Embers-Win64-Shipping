// 函数: sub_142bc3360
// 地址: 0x142bc3360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t result = sx.q(*(arg2 + 0xb8))

if (result.d s>= 0 && result.d s< *(arg1 + 0x1b0))
    void* rdi_2 = result * 0xfc + *(arg1 + 0x1b8)
    uint32_t var_48
    result = (*(arg2 + 0x68))(arg2, 6, &var_48, 3)
    
    if (result.d s>= 6)
        int32_t var_3c
        int32_t rbx_1 = var_3c
        bool cond:0_1 = rbx_1 == 0
        
        if (rbx_1 s< 0)
            rbx_1 = neg.d(rbx_1)
            cond:0_1 = rbx_1 == 0
        
        if (not(cond:0_1))
            int32_t r15_1 = 0x10000
            uint32_t var_44
            uint32_t var_40
            uint32_t var_38
            uint32_t var_34
            
            if (rbx_1 != 0x10000)
                int16_t rax_2 = sub_142b91790(0x3e8, rbx_1)
                uint32_t rcx_1 = var_48
                *(arg1 + 0x68) = rax_2
                var_48 = sub_142b91790(rcx_1, rbx_1)
                var_44 = sub_142b91790(var_44, rbx_1)
                var_40 = sub_142b91790(var_40, rbx_1)
                var_38 = sub_142b91790(var_38, rbx_1)
                var_34 = sub_142b91790(var_34, rbx_1)
                
                if (var_3c s< 0)
                    r15_1 = -0x10000
                
                var_3c = r15_1
            
            *(rdi_2 + 0xd8) = var_48
            *(rdi_2 + 0xe0) = var_44
            *(rdi_2 + 0xdc) = var_40
            *(rdi_2 + 0xe4) = var_3c
            result = sub_142b935d0(rdi_2 + 0xd8)
            
            if (result.b != 0)
                *(rdi_2 + 0xe8) = var_38 s>> 0x10
                result = zx.q(var_34 s>> 0x10)
                *(rdi_2 + 0xec) = result.d
            else
                *(arg2 + 0x18) = 3

__security_check_cookie(rax_1 ^ &var_68)
return result
