// 函数: sub_142364a90
// 地址: 0x142364a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* rax_2 = *(arg1 + 0x2e8)
int32_t rax_3

if (rax_2 == 0)
    rax_3 = 0
else
    rax_3 = *(rax_2 + 0x18)

int64_t result
void var_100
int64_t (* var_d8)(int32_t* arg1, char* arg2)

if (arg4 s>= rax_3)
    sub_141f79600(&var_100)
    int64_t* rax_4 = sub_141f79510(&var_d8, &var_100)
    void* rdx_1 = arg2[2]
    void* rcx_2 = &arg2[4]
    
    if (rdx_1 != 0)
        rcx_2 = rdx_1
    
    int64_t rdx_2 = *rcx_2
    (*arg2)((*(rdx_2 + 8))(rcx_2, rdx_2), rax_4)
    sub_141f7baf0(rax_4)
    result = sub_141f7baf0(&var_100)
else if (arg3 == 0)
    int64_t var_108
    sub_140d3a3a0(&var_108, arg1)
    int64_t* rax_11 = sub_1405f7040(sub_141f88540())
    int64_t rcx_15 = var_108
    int64_t rcx_16 = *arg2
    int128_t* var_78 = nullptr
    
    if (rcx_16 != 0)
        void* rdx_10 = arg2[2]
        void* rcx_17 = &arg2[4]
        
        if (rdx_10 != 0)
            rcx_17 = rdx_10
        
        (**rcx_17)(rcx_17, &var_78)
    
    void*** rax_14 = sub_140a82f30(0x70, 0x10)
    char var_110_2 = 0
    char var_118
    var_118.d = 2
    *rax_14 = &data_1433346a0
    rax_14[2] = rcx_15
    rax_14[4] = rcx_16
    rax_14[6] = var_78
    int128_t var_68
    int128_t zmm0_1 = var_68
    var_78 = nullptr
    *(rax_14 + 0x40) = zmm0_1
    int128_t var_58
    *(rax_14 + 0x50) = var_58
    int64_t rax_15 = rcx_16
    
    if (rax_14[4] != 0)
        rax_15 = 0
    
    rax_14[0xc].d = arg4
    *(rax_14 + 0x64) = arg5
    *rax_14 = &data_1433346c0
    int64_t (* rax_18)(int32_t* arg1, char* arg2) = var_d8
    
    if (rax_14 != -0x10)
        rax_18 = sub_14235b270
    
    void*** var_c8_1 = rax_14
    var_d8 = rax_18
    result = (*(*rax_11 + 0xe8))(rax_11, arg1, zx.q(arg4), &var_d8, var_118, var_110_2)
    
    if (rax_15 != 0)
        int128_t* rax_20 = var_78
        int128_t* rcx_22 = &var_68
        
        if (rax_20 != 0)
            rcx_22 = rax_20
        
        result = (*(*rcx_22 + 0x10))(rcx_22)
else
    int64_t* rax_7 = sub_1405f7040(sub_141f88540())
    (*(*rax_7 + 0xf0))(rax_7, &var_100, arg1, zx.q(arg4), 1, 0)
    int64_t* rax_8 = sub_141f79510(&var_d8, &var_100)
    void* rdx_6 = arg2[2]
    void* rcx_9 = &arg2[4]
    
    if (rdx_6 != 0)
        rcx_9 = rdx_6
    
    int64_t rdx_7 = *rcx_9
    (*arg2)((*(rdx_7 + 8))(rcx_9, rdx_7), rax_8)
    sub_141f7baf0(rax_8)
    result = sub_141f7baf0(&var_100)

if (*arg2 != 0)
    void* rax_22 = arg2[2]
    void* rcx_23 = &arg2[4]
    
    if (rax_22 != 0)
        rcx_23 = rax_22
    
    result = (*(*rcx_23 + 0x10))(rcx_23)

__security_check_cookie(rax_1 ^ &var_138)
return result
