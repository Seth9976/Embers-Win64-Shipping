// 函数: sub_1429b1f60
// 地址: 0x1429b1f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** r8
int64_t** arg_18 = r8
int64_t* arg_8 = arg1
int64_t var_48 = -2
int128_t zmm6
int128_t var_28 = zmm6
int64_t i = arg2
__builtin_memset(arg1, 0, 0x18)

if (arg2 != 0)
    if (arg2 u> 0x38e38e38e38e38e)
        sub_1427c7670()
        noreturn
    
    int64_t rbx_1 = arg2 * 0x48
    void* const rax_4
    
    if (rbx_1 u>= 0x1000)
        int64_t rcx = rbx_1 + 0x27
        
        if (rcx u<= rbx_1)
            rcx = -1
        
        int64_t rax_2 = j_sub_140a82f30(rcx)
        
        if (rax_2 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rax_4 = (rax_2 + 0x27) & 0xffffffffffffffe0
        *(rax_4 - 8) = rax_2
    else if (rbx_1 == 0)
        rax_4 = nullptr
    else
        rax_4 = j_sub_140a82f30(rbx_1)
    
    *arg1 = rax_4
    arg1[1] = rax_4
    int64_t** rax_5 = *arg1
    arg1[2] = &rax_5[arg2 * 9]
    int64_t** rbx_2 = rax_5
    int64_t** var_40_1 = rax_5
    int64_t** var_38_1 = rax_5
    int64_t* var_30_1 = arg1
    
    for (; i != 0; i -= 1)
        arg_18 = rbx_2
        __builtin_memset(rbx_2, 0, 0x48)
        *rbx_2 = sub_1429b2560()
        sub_142984980(&rbx_2[2], 1, 0, 0, 0, 1, 1, (zx.o(0)).q, 0, 0)
        rbx_2 = &rbx_2[9]
        int64_t** var_38_2 = rbx_2
    
    arg1[1] = rbx_2

return arg1
