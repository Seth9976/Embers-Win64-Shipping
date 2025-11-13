// 函数: sub_141d0a710
// 地址: 0x141d0a710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t rax_2 = data_143de7030
sub_140b34200("PakOpenAsyncRead", rax_2)
void*** result

if (sub_140a54810() == 0 || data_143a21038 s<= 0)
    result = sub_140a4c570(arg1, arg2)
else
    result = nullptr
    int128_t var_98 = data_14321e0d0
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x1c)
    int64_t rsi_1 = 0
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x1a)
    int32_t r15_1 = 0
    void* var_a0 = nullptr
    int64_t var_b0 = 0
    int32_t var_a8_1 = 0
    EnterCriticalSection(arg1 + 0x38)
    int64_t r14_1 = sx.q(*(arg1 + 0x18))
    int32_t temp0_1 = r14_1.d
    
    if (temp0_1 != 0)
        if (temp0_1 s> 0)
            sub_1405a5410(&var_b0, r14_1.d)
            r15_1 = var_a8_1
            rsi_1 = var_b0
        
        memcpy((sx.q(r15_1) << 4) + rsi_1, *(arg1 + 0x10), (r14_1 << 4).d)
        var_a8_1 = r15_1 + r14_1.d
    
    if (arg1 != -0x38)
        LeaveCriticalSection(arg1 + 0x38)
    
    char rax_4 = sub_141d02340(&var_b0, arg2, &var_a0, &var_98)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rax_4 == 0)
        sub_140a1d5c0(&var_68)
        result = sub_140a4c570(arg1, arg2)
    else
        void* rsi_2 = var_a0
        
        if (rsi_2 == 0)
            sub_140a1d5c0(&var_68)
            result = sub_140a4c570(arg1, arg2)
        else
            int64_t rbx_3 = *(rsi_2 + 0x18)
            int32_t rcx_8
            rcx_8.b = sub_140b5b8a0(rbx_3.d, 0) == 0
            rcx_8.b |= (rbx_3 u>> 0x20).d != 0
            
            if (rcx_8.b == 0)
                sub_140a1d5c0(&var_68)
                result = sub_140a4c570(arg1, arg2)
            else
                void*** rax_6 = j_sub_140a82f30(0x1c0)
                
                if (rax_6 != 0)
                    result = sub_141cf7680(rax_6, &var_98, rsi_2, arg4, arg3)
                
                sub_140a1d5c0(&var_68)

sub_140b38680("PakOpenAsyncRead", rax_2)
__security_check_cookie(rax_1 ^ &var_d8)
return result
