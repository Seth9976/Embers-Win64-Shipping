// 函数: sub_142a58dd0
// 地址: 0x142a58dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t result

if (*arg5 s> 0)
    result = arg3
else
    char var_48_1 = 0
    int64_t inptr = sub_142aa7fa0(arg2)
    void* rax_2
    
    if (inptr != 0)
        rax_2 = __RTDynamicCast(inptr, 0, &class icu_64::UObject `RTTI Type Descriptor', 
            &class icu_64::CurrencyAmount `RTTI Type Descriptor', 0)
    
    int32_t var_78
    int16_t var_50
    void* rdi_2
    
    if (inptr == 0 || rax_2 == 0)
        var_50 = 0
        rdi_2 = arg2
        
        if (var_48_1 != 0)
            goto label_142a58e8f
        
    label_142a58ef0:
        char rax_8 = sub_142aa7fe0(rdi_2)
        int64_t rdx_5
        
        if (rax_8 != 0)
            rdx_5 = *(rdi_2 + 0x20)
        
        if (rax_8 == 0 || rdx_5 == 0)
            int32_t rax_10 = sub_1405f78c0(rdi_2)
            
            if (rax_10 == 1)
                var_78.q = arg5
                int512_t zmm1
                zmm1.o = zx.o(*(rdi_2 + 8))
                (*(*arg1 + 0x80))(arg1, zmm1, arg3, arg4, var_78)
            else if (rax_10 == 2)
                var_78.q = arg5
                (*(*arg1 + 0x68))(arg1, zx.q(*(rdi_2 + 8)), arg3, arg4, var_78)
            else if (rax_10 == 5)
                var_78.q = arg5
                (*(*arg1 + 0x50))(arg1, *(rdi_2 + 8), arg3, arg4, var_78)
            else
                *arg5 = 3
        else
            var_78.q = arg5
            (*(*arg1 + 0x40))(arg1, rdx_5, arg3, arg4, var_78)
        
        result = arg3
    else
        sub_142a8c2c0(&var_50, *(rax_2 + 0x78) + 0x18)
        rdi_2 = rax_2 + 8
        void* var_58_2 = rdi_2
        char var_48_2 = 1
    label_142a58e8f:
        
        if (sub_142a8c280(&var_50, arg1 + 0x15e) == 0)
            goto label_142a58ef0
        
        int64_t* rax_5 = (*(*arg1 + 0x18))(arg1)
        int64_t* var_60_1 = rax_5
        (*(*rax_5 + 0xf0))(rax_5, &var_50, arg5)
        var_78.q = arg5
        int64_t result_1 = (*(*rax_5 + 0x20))(rax_5, rdi_2, arg3, arg4, var_78)
        int64_t r8_2 = *rax_5
        (*r8_2)(rax_5, 1, r8_2)
        result = result_1

__security_check_cookie(rax_1 ^ &var_98)
return result
