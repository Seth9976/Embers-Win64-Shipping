// 函数: sub_141392700
// 地址: 0x141392700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t* rcx = data_143f5b298[0x15f]
int64_t* rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 8))(rcx)

int64_t* rbx

if (rcx == 0 || rax_2.b == 0)
    rbx = nullptr
else
    int64_t* rcx_1 = *(data_143f5b298 + 0xaf8)
    rbx = (*(*rcx_1 + 0xb8))(rcx_1)

void* var_98 = nullptr
int32_t var_90

if (rbx != 0)
    if ((*(*rbx + 0x28))(rbx, arg1 + 0x1d0) != 0)
        int64_t* rcx_3 = *(arg1 + 0x1d0)
        *(arg1 + 0x1d0) = 0
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3)
    
    rax_2 = (*(*rbx + 0x48))(rbx, 0, zx.q(*(arg1 + 0x37c)), zx.q(*(arg1 + 0x380)), 0x28, 0, 0, 0, 
        &var_98, &var_90)

if (rbx == 0 || rax_2.b == 0)
    rax_2.b = 0
else
    rax_2.b = 1

*(arg1 + 0x422) = rax_2.b

if (rax_2.b != 0)
    int32_t var_78_1 = data_1439c7b18
    int32_t var_74_1 = var_90
    int32_t var_8c
    int32_t var_70_1 = var_8c
    int32_t var_68_1 = 1
    int16_t var_60_1 = 1
    int32_t var_b0
    var_b0.b = 0
    wchar16 const* const var_48_1 = u"UnknownTexture2D"
    int32_t var_b8
    var_b8.b = 1
    int32_t var_c0
    var_c0.b = 1
    char var_c8
    var_c8.q = u"FixedFoveation"
    int16_t var_50_1 = 0
    int128_t var_88 = data_1439c7b08
    int32_t var_6c_1 = 0
    int32_t var_64_1 = 0x10000
    int64_t var_5c_1 = 0x28
    int32_t var_54_1 = 0
    int16_t var_40_1 = 1
    char var_3e_1 = 0
    sub_1419a0ce0(&data_1439c9260, arg2, &var_88, arg1 + 0x1d0, var_c8, var_c0.b, var_b8.b, 
        var_b0.b)
    int64_t* rcx_5 = *(arg1 + 0x1d0)
    int32_t rax_14 = (*(*rcx_5 + 0x20))(rcx_5)
    int64_t* rax_15 = sub_1408c8cf0(*(arg1 + 0x1d0) + 8, var_98)
    sub_1408c8cf0(*(arg1 + 0x1d0) + 0x10, *rax_15)
    sub_1419ba5f0(&data_1439c9260, arg1 + 0x1d0, rax_14)

int64_t result = sub_1405d1550(&var_98)
__security_check_cookie(rax_1 ^ &var_e8)
return result
