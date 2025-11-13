// 函数: sub_1406202c0
// 地址: 0x1406202c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
uint32_t rbx = zx.d(arg1)
int64_t* rcx = data_143cdb880
int32_t rax_3 = (*(*rcx + 0x38))(rcx)

if (rax_3 u>= 1 && rbx u< rax_3)
    int64_t* rcx_1 = data_143cdb880
    
    if (rcx_1[2].b == 0)
        int64_t var_20 = 0xf
        int64_t var_28 = 0xd
        void* var_38
        __builtin_strncpy(&var_38, "RtMidi Output", 0xe)
        (*(*rcx_1 + 0x10))(rcx_1, zx.q(rbx), &var_38)
        
        if (var_20 u>= 0x10)
            void* rcx_2 = var_38
            void* rax_5 = rcx_2
            
            if (var_20 + 1 u>= 0x1000)
                rcx_2 = *(rcx_2 - 8)
                
                if (rax_5 - rcx_2 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_2)
        
        uint64_t rax_9 = zx.q(*(data_143cdb880 + 0x10))
        __security_check_cookie(rax_1 ^ &var_58)
        return rax_9

rax_3.b = 0
__security_check_cookie(rax_1 ^ &var_58)
return rax_3
