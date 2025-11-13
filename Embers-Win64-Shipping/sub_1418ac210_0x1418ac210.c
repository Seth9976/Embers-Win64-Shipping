// 函数: sub_1418ac210
// 地址: 0x1418ac210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
__builtin_memset(arg2, 0, 0x20)
int64_t var_98 = *arg2
int32_t rax_3 = arg2[1].d
int32_t rax_4 = *(arg2 + 0xc)
int64_t rax_5 = arg2[2]
int32_t rax_6 = arg2[3].d
int32_t rax_7 = *(arg2 + 0x1c)
int64_t rcx = *arg3
int128_t* rax_8 = arg3[2]
arg3[2] = 0
int64_t var_78 = rcx
int128_t* var_68 = rax_8
int128_t zmm1 = *(arg3 + 0x30)
int128_t var_58 = *(arg3 + 0x20)

if (rcx != 0)
    *arg3 = 0

int64_t* result = j_sub_140a82f30(0x70)
int64_t* result_1 = result

if (result != 0)
    *result = 0
    result[2] = 0
    result[2] = var_98
    __builtin_memset(&var_98, 0, 0x20)
    result[3].d = rax_3
    *(result + 0x1c) = rax_4
    result[4] = 0
    result_1[4] = rax_5
    result_1[5].d = rax_6
    *(result_1 + 0x2c) = rax_7
    result_1[6] = var_78
    result_1[8] = var_68
    var_68 = nullptr
    *(result_1 + 0x50) = var_58
    *(result_1 + 0x60) = zmm1
    int64_t rax_14 = var_78
    
    if (result_1[6] != 0)
        rax_14 = 0
    
    var_78 = rax_14
    int64_t* result_2 = *(arg1 + 0x20)
    *(arg1 + 0x20) = result_1
    result = result_2
    int64_t* result_3 = *result
    *result = result_1
    result_1 = result_3

if (var_78 != 0)
    int128_t* rcx_4 = &var_58
    
    if (var_68 != 0)
        rcx_4 = var_68
    
    result = (*(*rcx_4 + 0x10))(rcx_4, result_1)

if (rax_5 != 0)
    result = sub_140a74f90(rax_5)

int64_t rcx_6 = var_98

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = arg2[2]

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = *arg2

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

if (*arg3 != 0)
    void* rax_18 = arg3[2]
    void* rcx_9 = &arg3[4]
    
    if (rax_18 != 0)
        rcx_9 = rax_18
    
    result = (*(*rcx_9 + 0x10))(rcx_9)

__security_check_cookie(rax_1 ^ &var_b8)
return result
