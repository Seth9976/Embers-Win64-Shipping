// 函数: sub_142405180
// 地址: 0x142405180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int16_t* var_68
sub_140b63b70(&arg_10, &var_68)
int64_t* var_58 = arg1
int64_t rax

if (arg1 == 0)
    rax = 0
else
    rax = arg1[0xa]

int64_t rdi
int64_t var_10 = rdi
int32_t var_48 = 0xffffffff
int16_t var_44 = 0x101
char var_42 = 0
sub_1406328d0(&var_58)
uint128_t zmm6 = var_58.o
int32_t var_48_1 = 0xffffffff
int64_t var_30 = var_48.q
uint128_t var_40 = zmm6
int16_t var_44_1 = 0x101
var_58.o = zx.o(0)
char var_42_1 = 0
sub_1406328d0(&var_58)
void* const result

if (_mm_bsrli_si128(zmm6, 8).q == rax)
label_1424052ad:
    result = nullptr
else
    result = var_40:8.q
    
    while (true)
        int64_t* rax_3 = (*(*arg1 + 0x2d8))(arg1, &var_58, result)
        int16_t* const rdx_2 = &data_142d40450
        int32_t var_60
        
        if (var_60 != 0)
            rdx_2 = var_68
        
        int16_t* const rcx_4
        
        if (rax_3[1].d == 0)
            rcx_4 = &data_142d40450
        else
            rcx_4 = *rax_3
        
        int32_t rax_4 = sub_140a54510(rcx_4, rdx_2)
        int64_t* rcx_5 = var_58
        rdi.b = rax_4 == 0
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        if (rdi.b != 0)
            break
        
        var_40:8.q = *(result + 0x20)
        sub_1406328d0(&var_40)
        result = var_40:8.q
        
        if (result == rax)
            goto label_1424052ad

int16_t* rcx_7 = var_68

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return result
