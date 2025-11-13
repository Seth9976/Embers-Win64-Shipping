// 函数: sub_140a3c510
// 地址: 0x140a3c510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t rax_2 = *arg2
int128_t* r8 = nullptr
int64_t var_58 = rax_2
int128_t* var_48 = nullptr

if (rax_2 != 0)
    void* rax_3 = arg2[2]
    void* rcx = &arg2[4]
    
    if (rax_3 != 0)
        rcx = rax_3
    
    (**rcx)(rcx, &var_48, 0)
    r8 = var_48

int128_t var_38
int128_t entry_zmm3

if (arg1 != &var_58)
    int128_t zmm2 = *arg1
    entry_zmm3 = arg1[1]
    int128_t zmm4 = arg1[2]
    int128_t zmm5 = arg1[3]
    int128_t zmm1 = var_48.o
    *arg1 = var_58.o
    int128_t zmm0 = var_38
    arg1[1] = zmm1
    arg1[2] = zmm0
    var_48.o = entry_zmm3
    r8 = var_48
    int128_t var_28
    arg1[3] = var_28
    var_58.o = zmm2
    var_38 = zmm4
    int128_t var_28_1 = zmm5

if (var_58 != 0)
    int128_t* rcx_1 = &var_38
    
    if (r8 != 0)
        rcx_1 = r8
    
    int64_t rdx_1 = *rcx_1
    (*(rdx_1 + 0x10))(rcx_1, rdx_1, r8, entry_zmm3)

__security_check_cookie(rax_1 ^ &var_78)
return arg1
