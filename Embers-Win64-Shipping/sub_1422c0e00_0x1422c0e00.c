// 函数: sub_1422c0e00
// 地址: 0x1422c0e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
*arg2 = 0
arg2[1] = 0
int64_t var_88
int64_t var_78

if (*(arg1 + 0x44) == 0)
    var_88 = 0
else
    int64_t* rcx = *(arg1 + 0x30)
    int64_t* rbx_1
    uint64_t r8_1
    
    if (rcx == 0)
        rbx_1 = nullptr
        r8_1 = 0
    else
        int64_t* rax_3 = (*(*rcx + 0x38))(rcx)
        rbx_1 = rax_3
        
        if (rax_3 == 0)
            r8_1 = 0
        else
            r8_1 = zx.q((*(*rax_3 + 0x18))(rbx_1))
    
    char rcx_2 = (data_1439c7a34).b
    int128_t zmm0 = data_143dbb1e0
    var_78 = 0
    int64_t* rcx_3 = data_143f0f180
    int32_t var_68_1 = 1
    bool var_50_1 = *(arg1 + 0x30) == 0
    int32_t var_54_1 = (1 << rcx_2) - 1
    int128_t var_64_1 = zmm0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    int64_t* var_70_1 = rbx_1
    (*(*rcx_3 + 0x128))(rcx_3, &var_88, r8_1, 0x201, &var_78)

sub_1405d1600(arg2, &var_88)
sub_1405d1550(&var_88)

if (*(arg1 + 0x80) == 0)
    var_88 = 0
else
    int64_t* rcx_6 = *(arg1 + 0x70)
    int64_t* rbx_2
    uint64_t r8_2
    
    if (rcx_6 == 0)
        rbx_2 = nullptr
        r8_2 = 0
    else
        int64_t* rax_10 = (*(*rcx_6 + 0x38))(rcx_6)
        rbx_2 = rax_10
        
        if (rax_10 == 0)
            r8_2 = 0
        else
            r8_2 = zx.q((*(*rax_10 + 0x18))(rbx_2))
    
    int128_t zmm0_1 = data_143dbb1e0
    int32_t var_68_2 = 1
    int64_t* rcx_9 = data_143f0f180
    int32_t r14_2 = (1 << (data_1439c7a34).b) - 1
    bool cond:1_1 = *(arg1 + 0x70) == 0
    var_78 = 0
    bool var_50_2 = cond:1_1
    int32_t var_54_2 = r14_2
    int128_t var_64_2 = zmm0_1
    int64_t var_48_2 = 0
    int32_t var_40_2 = 0
    int64_t* var_70_2 = rbx_2
    (*(*rcx_9 + 0x128))(rcx_9, &var_88, r8_2, 0x201, &var_78)

sub_1405d1600(&arg2[1], &var_88)
sub_1405d1550(&var_88)
__security_check_cookie(rax_1 ^ &var_b8)
return arg2
