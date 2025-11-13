// 函数: sub_1422c9f90
// 地址: 0x1422c9f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t rdi = 0
int32_t var_a8
int64_t* var_a0
int64_t var_98

if (*(arg1 + 0x44) == 0)
    var_98 = 0
else
    int64_t* rcx = *(arg1 + 0x30)
    int64_t* rbx_1
    uint64_t r9_1
    
    if (rcx == 0)
        rbx_1 = nullptr
        r9_1 = 0
    else
        int64_t* rax_3 = (*(*rcx + 0x28))(rcx)
        rbx_1 = rax_3
        
        if (rax_3 == 0)
            r9_1 = 0
        else
            int64_t rdx_1 = *rax_3
            r9_1 = zx.q((*(rdx_1 + 0x18))(rax_3, rdx_1))
    
    char rcx_2 = (data_1439c7a34).b
    int128_t zmm0 = data_143dbb1e0
    int64_t var_58
    var_a0 = &var_58
    var_58 = 0
    int64_t* rcx_3 = data_143f0f180
    int32_t var_48_1 = 1
    bool var_30_1 = *(arg1 + 0x30) == 0
    int32_t var_34_1 = (1 << rcx_2) - 1
    int128_t var_44_1 = zmm0
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    int64_t* var_50_1 = rbx_1
    var_a8 = 0x201
    (*(*rcx_3 + 0x498))(rcx_3, &var_98, &data_143f02b98, r9_1, var_a8, var_a0)

sub_1405d1600(arg1 + 0x10, &var_98)
sub_1405d1550(&var_98)
void* result = *(arg1 + 0x10)

if (result != 0)
    void* result_1
    int64_t var_80
    void* const result_2
    int32_t rbx_2
    
    if (*(arg1 + 0x30) == 0)
        result_2 = nullptr
        rbx_2 = 0
        var_80 = 0
        rdi = 2
    else
        result_1 = result
        *(result + 8) += 1
        result_2 = result_1
        rbx_2 = 1
    
    void var_78
    int128_t* rax_8 = sub_141961de0(&var_78, result_2, 1)
    int64_t* rcx_7 = data_143f0f180
    void var_90
    (*(*rcx_7 + 0x4b0))(rcx_7, &var_90, &data_143f02b98, rax_8, var_a8, var_a0)
    sub_1405d1600(arg1 + 0x18, &var_90)
    result = sub_1405ec8a0(&var_90)
    
    if (rdi != 0)
        result = sub_1405d1550(&var_80)
    
    if (rbx_2 != 0)
        result = sub_1405d1550(&result_1)

__security_check_cookie(rax_1 ^ &var_c8)
return result
