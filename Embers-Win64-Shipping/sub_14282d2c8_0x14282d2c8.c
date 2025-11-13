// 函数: sub_14282d2c8
// 地址: 0x14282d2c8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rax_2 = arg1[0x22]
bool cond:0 = rax_2 == 0
int32_t exceptionObject

if (rax_2 == 0)
    if (*(arg1 + 0x82) == rax_2.b)
        void var_48
        sub_14058a5c0(&var_48, "illegal map key")
        void var_b8
        sub_1428244f0(&exceptionObject, sub_1427bde30(arg1, &var_b8), &var_48)
        _CxxThrowException(&exceptionObject, &data_143946450)
        noreturn
    
    sub_142827e20(arg1, arg1[2].d, 0)
    cond:0 = arg1[0x22] == 0

rax_2.b = cond:0
*(arg1 + 0x82) = rax_2.b
uint128_t zmm6 = zx.o(arg1[1])
int32_t rbx = arg1[2].d
sub_14282af24(arg1, 1)
exceptionObject = 0
int32_t var_a4 = 0xe
uint64_t var_a0 = zmm6.q
int32_t var_98 = rbx
int64_t var_80 = 0
int64_t var_78 = 0xf
char var_90 = 0
int64_t* var_70
__builtin_memset(&var_70, 0, 0x1c)
int32_t* result = sub_142826d60(&arg1[0xb], &exceptionObject)
int64_t* rcx_2 = var_70

if (rcx_2 != 0)
    int128_t var_68
    sub_140688f70(rcx_2, var_68.q)
    int64_t* rcx_3 = var_70
    result = sub_14058ba50(rcx_3, (var_68:8.q - rcx_3) & 0xffffffffffffffe0)
    int64_t var_70_1
    __builtin_memset(&var_70_1, 0, 0x18)

if (var_78 u>= 0x10)
    result = sub_14058ba50(var_90.q, var_78 + 1)

__security_check_cookie(rax_1 ^ &var_d8)
return result
