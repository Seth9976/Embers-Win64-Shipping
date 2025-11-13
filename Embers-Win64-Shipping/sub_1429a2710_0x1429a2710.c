// 函数: sub_1429a2710
// 地址: 0x1429a2710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

int64_t var_60_1 = -2
void var_98
int64_t rax_2 = __security_cookie ^ &var_98
int32_t rbp_1 = 0

do
    char var_68
    (*(*arg2 + 0x10))(arg2, &var_68, 4)
    char var_67
    char var_66
    char var_65
    int32_t count_3 = ((sx.d(var_65) << 8 | zx.d(var_66)) << 8 | zx.d(var_67)) << 8 | zx.d(var_68)
    int64_t var_48_1 = 0
    int64_t var_40_1 = 0xf
    char var_58[0x10]
    var_58[0] = 0
    int64_t count = sx.q(count_3)
    
    if (count_3 != 0)
        int64_t* rcx_1 = &var_58
        
        if (count u> 0xf)
            sub_1427c6f70(rcx_1, count, 0, count, 0)
        else
            int64_t count_2 = count
            memset(rcx_1, 0, count)
            var_58[count] = 0
    else
        int64_t count_1 = count
        var_58[count] = 0
    
    if (count_3 s> 0)
        char (* rdx_2)[0x10] = &var_58
        
        if (var_40_1 u>= 0x10)
            rdx_2 = var_58[0].q
        
        (*(*arg2 + 0x10))(arg2, rdx_2, zx.q(count_3))
    
    rbp_1 = rbp_1 + 4 + count_3
    int128_t* rax_8 = *(arg1 + 0x10)
    
    if (*(arg1 + 0x18) == rax_8)
        sub_140909240(arg1 + 8, rax_8, &var_58)
    else
        sub_140592d30(rax_8, &var_58)
        *(arg1 + 0x10) += 0x20
    
    if (var_40_1 u>= 0x10)
        void* rcx_5 = var_58[0].q
        void* rax_9 = rcx_5
        
        if (var_40_1 + 1 u>= 0x1000)
            rcx_5 = *(rcx_5 - 8)
            
            if (rax_9 - rcx_5 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_5)
while (rbp_1 s< arg3)

__security_check_cookie(rax_2 ^ &var_98)
