// 函数: sub_140620140
// 地址: 0x140620140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint32_t rbx = zx.d(arg2)
int32_t result = (*(*(arg1 + 0xb0) + 0x10))(arg1 + 0xb0)

if (result u< 1 || rbx u>= result)
    result.b = 0
else if ((*(*(arg1 + 0xb0) + 0x28))(arg1 + 0xb0).b != 0)
    result.b = 0
else
    int64_t rax_4 = *(arg1 + 0xb0)
    int64_t var_30_1 = 0xf
    int64_t var_38_1 = 0xc
    void* var_48
    __builtin_strncpy(&var_48, "RtMidi Input", 0xd)
    (*rax_4)(arg1 + 0xb0, zx.q(rbx), &var_48)
    
    if (var_30_1 u>= 0x10)
        void* rcx_3 = var_48
        void* rax_5 = rcx_3
        
        if (var_30_1 + 1 u>= 0x1000)
            rcx_3 = *(rcx_3 - 8)
            
            if (rax_5 - rcx_3 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_3)
    
    void* rdi_1 = *(arg1 + 0xb8)
    
    if (*(rdi_1 + 0x98) == 0)
        *(rdi_1 + 0xa8) = arg1
        *(rdi_1 + 0xa0) = sub_1406220f0
        *(rdi_1 + 0x98) = 1
    else
        sub_14058ad40(rdi_1 + 0x18, "MidiInApi::setCallback: a callback function is already set!", 
            0x3b)
        sub_1406209b0(rdi_1, 0, sub_140592d30(&var_48, rdi_1 + 0x18))
    
    int64_t* rcx_7 = *(arg1 + 0xb8)
    int64_t r9_1
    r9_1.b = 1
    (*(*rcx_7 + 0x50))(rcx_7, 0, 0, r9_1)
    result = (*(*(arg1 + 0xb0) + 0x28))(arg1 + 0xb0)

__security_check_cookie(rax_1 ^ &var_68)
return result
