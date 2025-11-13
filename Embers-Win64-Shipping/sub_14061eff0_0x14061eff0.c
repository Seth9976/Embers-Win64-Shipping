// 函数: sub_14061eff0
// 地址: 0x14061eff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint64_t i = 0
arg1[1] = 0
*arg1 = &data_142d68318

if (arg2 == 0)
    goto label_14061f066

sub_140622100(arg1, arg2)

if (arg1[1] == 0)
    std::ostream::operator<<(
        sub_14058b120(std::cerr, 
            "\nRtMidiOut: no compiled support for specified API argument!\n\n"), 
        sub_14058b4b0)
label_14061f066:
    int32_t* rax_3 = j_sub_140a82f30(4)
    int32_t i_1 = 0
    *rax_3 = 4
    
    do
        sub_140622100(arg1, rax_3[i])
        int64_t* rcx_3 = arg1[1]
        
        if (rcx_3 != 0 && (*(*rcx_3 + 0x38))(rcx_3) != 0)
            break
        
        i_1 += 1
        i = zx.q(i_1)
    while (i u< 1)
    
    int32_t* rcx_4
    
    if (arg1[1] == 0)
        void* rax_6 = j_sub_140a82f30(0x40)
        int64_t var_78_1 = 0x3d
        void* var_88 = rax_6
        __builtin_strncpy(rax_6, "RtMidiOut: no compiled API support found ... cri", 0x30)
        int64_t var_70_1 = 0x3f
        *(rax_6 + 0x30) = 0x7265206c61636974
        __builtin_strncpy(rax_6 + 0x38, "ror!!", 6)
        void** const var_68_1 = &data_142d682b0
        void* var_60
        sub_140592d30(&var_60, &var_88)
        int64_t var_48
        
        if (var_48 u>= 0x10)
            void* rcx_7 = var_60
            void* rax_7 = rcx_7
            
            if (var_48 + 1 u>= 0x1000)
                rcx_7 = *(rcx_7 - 8)
            
            if (var_48 + 1 u>= 0x1000 && rax_7 - rcx_7 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_7)
        
        if (var_70_1 u< 0x10)
            rcx_4 = rax_3
        else
            void* rcx_8 = var_88
            void* rax_10 = rcx_8
            
            if (var_70_1 + 1 u>= 0x1000)
                rcx_8 = *(rcx_8 - 8)
            
            if (var_70_1 + 1 u>= 0x1000 && rax_10 - rcx_8 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_8)
            rcx_4 = rax_3
    else
        rcx_4 = rax_3
    
    j_sub_140a74f90(rcx_4)

__security_check_cookie(rax_1 ^ &var_a8)
return arg1
