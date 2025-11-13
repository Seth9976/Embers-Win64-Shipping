// 函数: sub_14282cf58
// 地址: 0x14282cf58
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t var_88

if (arg1[0x22] != 0)
    void* var_98_1 = &arg1[0x1e]
    int64_t r8_3 = arg1[0x22] - 1 + arg1[0x21]
    char rax_5
    
    if (*(*(arg1[0x1f] + (((arg1[0x20] - 1) & r8_3 u>> 2) << 3)) + ((zx.q(r8_3.d) & 3) << 2)) == 0)
        rax_5 = sub_14282b41c(arg1)
    
    if (*(*(arg1[0x1f] + (((arg1[0x20] - 1) & r8_3 u>> 2) << 3)) + ((zx.q(r8_3.d) & 3) << 2)) != 0
            || rax_5 == 0)
        void* var_98_2 = &arg1[0x1e]
        int64_t r8_7 = arg1[0x22] - 1 + arg1[0x21]
        
        if (*(*(arg1[0x1f] + (((arg1[0x20] - 1) & r8_7 u>> 2) << 3)) + ((zx.q(r8_7.d) & 3) << 2))
                == 1)
            sub_14282b358(arg1)
    else
        var_88 = 0
        int32_t var_84_1 = 0xf
        int64_t var_80_1 = arg1[1]
        int32_t var_78_1 = arg1[2].d
        int64_t var_60_1 = 0
        int64_t var_58_1 = 0xf
        char var_70_1 = 0
        int64_t* var_50
        __builtin_memset(&var_50, 0, 0x1c)
        sub_142826d60(&arg1[0xb], &var_88)
        int64_t* rcx_3 = var_50
        
        if (rcx_3 != 0)
            int128_t var_48
            sub_140688f70(rcx_3, var_48.q)
            int64_t* rcx_4 = var_50
            sub_14058ba50(rcx_4, (var_48:8.q - rcx_4) & 0xffffffffffffffe0)
            int64_t var_50_1
            __builtin_memset(&var_50_1, 0, 0x18)
        
        if (var_58_1 u>= 0x10)
            sub_14058ba50(var_70_1.q, var_58_1 + 1)

*(arg1 + 0x82) = 1
uint128_t zmm6 = zx.o(arg1[1])
int32_t rbx_2 = arg1[2].d
sub_14282af24(arg1, 1)
var_88 = 0
int32_t var_84_2 = 0xd
uint64_t var_80_2 = zmm6.q
int32_t var_78_2 = rbx_2
int64_t var_60_2 = 0
int64_t var_58_2 = 0xf
char var_70_2 = 0
int64_t* var_50_2
__builtin_memset(&var_50_2, 0, 0x1c)
int32_t* result = sub_142826d60(&arg1[0xb], &var_88)
int64_t* rcx_10 = var_50_2

if (rcx_10 != 0)
    int128_t var_48_1
    sub_140688f70(rcx_10, var_48_1.q)
    int64_t* rcx_11 = var_50_2
    result = sub_14058ba50(rcx_11, (var_48_1:8.q - rcx_11) & 0xffffffffffffffe0)
    int64_t var_50_3
    __builtin_memset(&var_50_3, 0, 0x18)

if (var_58_2 u>= 0x10)
    result = sub_14058ba50(var_70_2.q, var_58_2 + 1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
