// 函数: sub_141a10ba0
// 地址: 0x141a10ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t var_b8
int32_t var_b0
int64_t* var_a8
int64_t var_90

if (*(arg1 + 0x40) == 0)
    var_90 = 0
else
    char rcx = (data_1439c7a34).b
    int128_t zmm0 = data_143dbb1e0
    int64_t var_68 = 0
    int32_t var_58_1 = 1
    int32_t var_44_1 = (1 << rcx) - 1
    int128_t var_54_1 = zmm0
    char var_40_1 = 0
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    int64_t* var_60_1 = arg1 + 0x20
    char rax_4 = sub_142056ae0()
    int64_t rdx_1 = *(arg1 + 0x20)
    char rax_5 = (*(rdx_1 + 0x30))(arg1 + 0x20, rdx_1)
    int32_t rdx_2 = *(arg1 + 0x30)
    int64_t* rcx_2 = data_143f0f180
    var_a8 = &var_68
    int32_t r8_1 = 0x201
    
    if ((rax_5 | rax_4) == 0)
        r8_1 = 1
    
    int64_t var_98 = 0
    int32_t rdx_3 = rdx_2 << 2
    var_b0 = r8_1
    var_b8 = rdx_3
    bool var_40_2 = rdx_3 == 0
    void var_88
    (*(*rcx_2 + 0x4d8))(rcx_2, &var_88, &data_143f02b98, 4, var_b8, var_b0, var_a8)
    sub_1405d1600(&var_98, &var_88)
    sub_14081c9d0(&var_88)
    *(arg1 + 0x40) = *(arg1 + 0x30)
    var_90 = var_98
    var_98 = 0
    sub_14081c9d0(&var_98)

sub_1405d1600(arg1 + 0x10, &var_90)
char result = sub_14081c9d0(&var_90)

if (*(arg1 + 0x10) != 0)
    char rax_9 = sub_142056ae0()
    int64_t rdx_7 = *(arg1 + 0x20)
    result = (*(rdx_7 + 0x30))(arg1 + 0x20, rdx_7) | rax_9
    
    if (result != 0 && *(arg1 + 0x30) != 0)
        void* r9_1 = *(arg1 + 0x10)
        void* var_78 = r9_1
        
        if (r9_1 != 0)
            *(r9_1 + 8) += 1
            r9_1 = var_78
        
        int64_t* rcx_9 = data_143f0f180
        void var_80
        (*(*rcx_9 + 0x4a8))(rcx_9, &var_80, &data_143f02b98, r9_1, var_b8, var_b0, var_a8)
        sub_1405d1600(arg1 + 0x18, &var_80)
        sub_1405ec8a0(&var_80)
        result = sub_14081c9d0(&var_78)

__security_check_cookie(rax_1 ^ &var_d8)
return result
