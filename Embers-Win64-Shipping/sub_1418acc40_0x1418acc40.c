// 函数: sub_1418acc40
// 地址: 0x1418acc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t rax_2 = *arg2
int64_t var_58 = rax_2
int128_t* rdx = nullptr
int128_t* var_48 = nullptr

if (rax_2 != 0)
    void* rax_3 = arg2[2]
    void* rcx = &arg2[4]
    
    if (rax_3 != 0)
        rcx = rax_3
    
    (**rcx)(rcx, &var_48)
    rdx = var_48

int64_t* result = &var_58
int128_t var_38

if (arg1 + 0xa0 != &var_58)
    arg3 = *(arg1 + 0xa0)
    arg4 = *(arg1 + 0xb0)
    int128_t zmm4 = *(arg1 + 0xc0)
    int128_t zmm5 = *(arg1 + 0xd0)
    arg5 = var_48.o
    *(arg1 + 0xa0) = var_58.o
    int128_t zmm0 = var_38
    *(arg1 + 0xb0) = arg5
    int128_t var_28
    arg5 = var_28
    *(arg1 + 0xc0) = zmm0
    var_48.o = arg4
    rdx = var_48
    *(arg1 + 0xd0) = arg5
    var_58.o = arg3
    var_38 = zmm4
    int128_t var_28_1 = zmm5

if (var_58 != 0)
    int128_t* rcx_1 = &var_38
    
    if (rdx != 0)
        rcx_1 = rdx
    
    result = (*(*rcx_1 + 0x10))(rcx_1, rdx, arg3, arg4)

if (*arg2 != 0)
    void* rax_6 = arg2[2]
    void* rcx_2 = &arg2[4]
    
    if (rax_6 != 0)
        rcx_2 = rax_6
    
    result = (*(*rcx_2 + 0x10))(rcx_2, arg5, arg3, arg4)

__security_check_cookie(rax_1 ^ &var_78)
return result
