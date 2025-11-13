// 函数: sub_14186a3e0
// 地址: 0x14186a3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t* rcx = **arg1
int32_t var_c8
(*(*rcx + 0x48))(rcx, &var_c8, *arg3)
int64_t** rdx_2 = *arg3 + 0x38
int64_t rdi_1 = *arg2 - arg3[1]
int64_t var_b8 = arg2[1]
int32_t rax_6 = var_c8
int128_t zmm0 = (*arg1[2]).o
int64_t var_90
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64 = 0x80
int32_t var_60 = 0xffffffff
int32_t var_5c = 0
int64_t var_50 = 0
int32_t var_48 = 0
sub_141813e70(&var_90, rdx_2)
int64_t* rdi_2 = arg1[1]
int128_t* rax_7 = j_sub_140a82f30(0x80)

if (rax_7 != 0)
    *rax_7 = zmm0
    rax_7[1].d = rax_6
    *(rax_7 + 0x18) = 0
    void* rdx_3 = rax_7 + 0x28
    rax_7[2].q = 0
    *(rdx_3 + 0x10) = 0
    *(rdx_3 + 0x18) = 0
    *(rdx_3 + 0x1c) = 0x80
    void* rax_8 = *(rdx_3 + 0x10)
    
    if (rax_8 != 0)
        rdx_3 = rax_8
    
    *rdx_3 = 0
    *(rdx_3 + 8) = 0
    *(rax_7 + 0x48) = 0xffffffff
    *(rax_7 + 0x4c) = 0
    *(rax_7 + 0x58) = 0
    rax_7[6].d = 0
    sub_1418235f0(rax_7 + 0x18, &var_90)
    *(rax_7 + 0x68) = rdi_1
    rax_7[7].q = 0
    *(rax_7 + 0x78) = 0
    void* rax_10 = rdi_2[2]
    
    if (rax_10 == 0)
        rdi_2[1] = rax_7
    else
        *(rax_10 + 0x70) = rax_7
        *(rax_7 + 0x78) = rdi_2[2]
    
    rdi_2[2] = rax_7
    (*(*rdi_2 + 8))(rdi_2, zx.q(rdi_2[3].d + 1))

int32_t var_48_1 = 0

if (var_50 != 0)
    sub_140a74f90(var_50)

sub_14059ad90(&var_90, 0)
int64_t var_70

if (var_70 != 0)
    sub_140a74f90(var_70)

int64_t rcx_9 = var_90

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t* rcx_10 = arg1[2]
int64_t result = arg2[1]
*rcx_10 += result
__security_check_cookie(rax_1 ^ &var_e8)
return result
