// 函数: ?done@agent@Concurrency@@IEAA_NXZ
// 地址: 0x141733650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* rbx = *(arg1 + 0x10)
void*** rdi = nullptr
int64_t result = sx.q(*(arg1 + 0x18))
int128_t zmm1 = data_143dbb0d0
int128_t var_48 = data_143dbb0c0
int128_t zmm0 = data_143dbb0e0
void* rsi = &rbx[result]
int64_t var_68 = 0
int32_t var_60 = 0
int128_t var_38 = zmm1
int128_t var_28 = zmm0

if (rbx != rsi)
    do
        int64_t* rcx = *rbx
        result = (*(*rcx + 0x70))(rcx, &var_68, &var_48, rcx)
        rbx = &rbx[1]
    while (rbx != rsi)
    
    if (var_60 s> 0x20)
        void*** rax_3 = j_sub_140a82f30(0x288)
        
        if (rax_3 != 0)
            rdi = sub_141704d50(rax_3, &var_68)
        
        result = arg1 + 0x38
        void var_58
        
        if (result != &var_58)
            void*** rbx_1 = *result
            *result = rdi
            
            if (rbx_1 != 0)
                sub_141705ba0(&rbx_1[0x36])
                sub_141705c70(rbx_1)
                result = j_sub_140a74f90(rbx_1)
        else if (rdi != 0)
            sub_141705ba0(&rdi[0x36])
            sub_141705c70(rdi)
            result = j_sub_140a74f90(rdi)
    
    int64_t rcx_7 = var_68
    
    if (rcx_7 != 0)
        result = sub_140a74f90(rcx_7)

__security_check_cookie(rax_1 ^ &var_88)
return result
