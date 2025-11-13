// 函数: sub_1422a3da0
// 地址: 0x1422a3da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t rdi = 0
int32_t r14 = 1
int32_t var_b8
int64_t* var_b0
int64_t var_a8

if (*(arg1 + 0x34) == 0)
    var_a8 = 0
else
    int64_t* rcx = *(arg1 + 0x18)
    int64_t* rbx_1
    uint64_t r9_1
    
    if (rcx == 0)
        rbx_1 = nullptr
        r9_1 = 0
    else
        int64_t* rax_3 = (*(*rcx + 0x38))(rcx)
        rbx_1 = rax_3
        
        if (rax_3 == 0)
            r9_1 = 0
        else
            int64_t rdx_1 = *rax_3
            r9_1 = zx.q((*(rdx_1 + 0x18))(rax_3, rdx_1))
    
    char rcx_2 = (data_1439c7a34).b
    int128_t zmm0 = data_143dbb1e0
    int64_t var_68
    var_b0 = &var_68
    var_68 = 0
    int64_t* rcx_3 = data_143f0f180
    int32_t var_58_1 = 1
    bool var_40_1 = *(arg1 + 0x18) == 0
    int32_t var_44_1 = (1 << rcx_2) - 1
    int128_t var_54_1 = zmm0
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    int64_t* var_60_1 = rbx_1
    var_b8 = 0x201
    (*(*rcx_3 + 0x498))(rcx_3, &var_a8, &data_143f02b98, r9_1, var_b8, var_b0)

sub_1405d1600(arg1 + 0x10, &var_a8)
char result = sub_1405d1550(&var_a8)
void* rbx_2 = *(arg1 + 0x10)

if (rbx_2 != 0)
    result = sub_1419d5c70(data_143f0f1a0)
    
    if (result != 0)
        void* var_98
        int64_t var_90
        void* const rdx_4
        
        if (*(arg1 + 0x18) == 0)
            rdx_4 = nullptr
            r14 = 0
            var_90 = 0
            rdi = 2
        else
            var_98 = rbx_2
            *(rbx_2 + 8) += 1
            rdx_4 = var_98
        
        void var_88
        int128_t* rax_8 = sub_141961de0(&var_88, rdx_4, 0x25)
        int64_t* rcx_8 = data_143f0f180
        void var_a0
        (*(*rcx_8 + 0x4b0))(rcx_8, &var_a0, &data_143f02b98, rax_8, var_b8, var_b0)
        sub_1405d1600(arg1 + 0x20, &var_a0)
        result = sub_1405ec8a0(&var_a0)
        
        if (rdi != 0)
            result = sub_1405d1550(&var_90)
        
        if (r14 != 0)
            result = sub_1405d1550(&var_98)

__security_check_cookie(rax_1 ^ &var_d8)
return result
