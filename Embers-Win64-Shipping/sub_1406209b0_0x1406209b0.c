// 函数: sub_1406209b0
// 地址: 0x1406209b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t* result = __security_cookie ^ &var_78
int64_t* result_1 = result
char var_58

if (*(arg1 + 0x38) == 0)
    if (arg2 == 0)
        arg2.b = 0xa
        int64_t* rax_5 = sub_14058b2f0(std::cerr)
        wchar16* rdx_6 = arg3
        
        if (arg3[3] u>= 0x10)
            rdx_6 = *arg3
        
        result = sub_14058b120(sub_14058bab0(rax_5, rdx_6, arg3[2]), &data_14370204c)
    else if (arg2 != 1)
        arg2.b = 0xa
        int64_t* rax_7 = sub_14058b2f0(std::cerr)
        int64_t* rdx_7 = arg3
        
        if (arg3[3] u>= 0x10)
            rdx_7 = *arg3
        
        sub_14058b120(sub_14058bab0(rax_7, rdx_7, arg3[2]), &data_14370204c)
        var_58.q = &data_142d682b0
        void* var_50
        result = sub_140592d30(&var_50, arg3)
        int64_t var_38
        
        if (var_38 u>= 0x10)
            void* rcx_13 = var_50
            void* rax_9 = rcx_13
            
            if (var_38 + 1 u>= 0x1000)
                rcx_13 = *(rcx_13 - 8)
            
            if (var_38 + 1 u>= 0x1000 && rax_9 - rcx_13 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            result = j_sub_140a74f90(rcx_13)
    
    int64_t rdx_11 = arg3[3]
    
    if (rdx_11 u>= 0x10)
        void* rcx_14 = *arg3
        
        if (rdx_11 + 1 u< 0x1000)
            result = j_sub_140a74f90(rcx_14)
        else
            void* r8_4 = *(rcx_14 - 8)
            
            if (rcx_14 - r8_4 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            result = j_sub_140a74f90(r8_4)
    
label_140620bac:
    *arg3 = 0
    arg3[3] = 0xf
    arg3[2] = 0
else
    if (*(arg1 + 0x40) == 0)
        *(arg1 + 0x40) = 1
        sub_140592d30(&var_58, arg3)
        result = (*(arg1 + 0x38))(zx.q(arg2), &var_58, *(arg1 + 0x48))
        *(arg1 + 0x40) = 0
        int64_t var_40
        
        if (var_40 u>= 0x10)
            void* rcx_3 = var_58.q
            void* rax_1 = rcx_3
            
            if (var_40 + 1 u>= 0x1000)
                rcx_3 = *(rcx_3 - 8)
            
            if (var_40 + 1 u>= 0x1000 && rax_1 - rcx_3 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            result = j_sub_140a74f90(rcx_3)
        
        int64_t rdx_4 = arg3[3]
        int64_t var_48_1 = 0
        int64_t var_40_1 = 0xf
        var_58 = 0
        
        if (rdx_4 u>= 0x10)
            void* rcx_4 = *arg3
            
            if (rdx_4 + 1 u< 0x1000)
                result = j_sub_140a74f90(rcx_4)
            else
                void* r8_1 = *(rcx_4 - 8)
                
                if (rcx_4 - r8_1 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                result = j_sub_140a74f90(r8_1)
        
        goto label_140620bac
    
    result = sub_14058a4d0(arg3)
__security_check_cookie(result_1 ^ &var_78)
return result
