// 函数: sub_142174bc0
// 地址: 0x142174bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
sub_140d3a3a0(&arg_8, arg2)
sub_142173e20(arg1 + 0x420, arg_8)
void* var_48 = arg2
int64_t rax

if (arg2 == 0)
    rax = 0
else
    rax = *(arg2 + 0x48)

int32_t var_38 = 0xffffffff
int16_t var_34 = 0x100
char var_32 = 0
sub_140d0a0c0(&var_48)
uint128_t zmm6 = var_48.o
int32_t var_38_1 = 0xffffffff
int64_t var_20 = var_38.q
uint128_t var_30 = zmm6
int16_t var_34_1 = 0x101
var_48.o = zx.o(0)
char var_32_1 = 0
sub_140d0a0c0(&var_48)
int64_t result = _mm_bsrli_si128(zmm6, 8).q

if (result != rax)
    void* rbx_1 = var_30:8.q
    
    do
        if (rbx_1 != 0 && (*(rbx_1 + 0xb0) & 0x40) != 0)
            sub_140d3a3a0(&arg_8, rbx_1)
            sub_142173e20(arg1 + 0x420, arg_8)
        
        var_30:8.q = *(rbx_1 + 0x28)
        result = sub_140d0a0c0(&var_30)
        rbx_1 = var_30:8.q
    while (rbx_1 != rax)

return result
