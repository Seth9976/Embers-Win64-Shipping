// 函数: sub_14061ed80
// 地址: 0x14061ed80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t i_1 = 0
arg1[1] = 0
*arg1 = &data_142d68318

if (arg2 == 0)
    goto label_14061ee1e

if (arg2 != 4)
    goto label_14061ee11

void*** rax_2 = j_sub_140a82f30(0xb8)

if (rax_2 == 0)
    arg1[1] = 0
label_14061ee11:
    std::ostream::operator<<(
        sub_14058b120(std::cerr, 
            "\nRtMidiIn: no compiled support for specified API argument!\n\n"), 
        sub_14058b4b0)
label_14061ee1e:
    int32_t* rax_5 = j_sub_140a82f30(4)
    *rax_5 = 4
    
    for (uint64_t i = 0; i u< 1; i = zx.q(i_1))
        int64_t* rcx_3 = arg1[1]
        int32_t rsi_1 = rax_5[i]
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
        
        arg1[1] = 0
        
        if (rsi_1 == 4)
            void*** rax_7 = j_sub_140a82f30(0xb8)
            
            if (rax_7 == 0)
                arg1[1] = 0
            else
                void*** rax_8 = sub_14061eba0(rax_7, arg3, arg4)
                arg1[1] = rax_8
                
                if (rax_8 != 0 && (*rax_8)[7](rax_8) != 0)
                    break
        
        i_1 += 1
    
    int32_t* rcx_6
    
    if (arg1[1] == 0)
        void* rax_11 = j_sub_140a82f30(0x40)
        int64_t var_88_1 = 0x3c
        void* var_98 = rax_11
        __builtin_strncpy(rax_11, "RtMidiIn: no compiled API support found ... crit", 0x30)
        int64_t var_80_1 = 0x3f
        *(rax_11 + 0x30) = 0x727265206c616369
        __builtin_strncpy(rax_11 + 0x38, "or!!", 5)
        void** const var_78_1 = &data_142d682b0
        void* var_70
        sub_140592d30(&var_70, &var_98)
        int64_t var_58
        
        if (var_58 u>= 0x10)
            void* rcx_9 = var_70
            void* rax_12 = rcx_9
            
            if (var_58 + 1 u>= 0x1000)
                rcx_9 = *(rcx_9 - 8)
            
            if (var_58 + 1 u>= 0x1000 && rax_12 - rcx_9 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_9)
        
        if (var_80_1 u< 0x10)
            rcx_6 = rax_5
        else
            void* rcx_10 = var_98
            void* rax_15 = rcx_10
            
            if (var_80_1 + 1 u>= 0x1000)
                rcx_10 = *(rcx_10 - 8)
            
            if (var_80_1 + 1 u>= 0x1000 && rax_15 - rcx_10 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_10)
            rcx_6 = rax_5
    else
        rcx_6 = rax_5
    
    j_sub_140a74f90(rcx_6)
else
    void*** rax_3 = sub_14061eba0(rax_2, arg3, arg4)
    arg1[1] = rax_3
    
    if (rax_3 == 0)
        goto label_14061ee11

__security_check_cookie(rax_1 ^ &var_b8)
return arg1
