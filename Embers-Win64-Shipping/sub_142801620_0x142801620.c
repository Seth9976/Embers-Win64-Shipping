// 函数: sub_142801620
// 地址: 0x142801620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg2 + 0x28))(arg2)
int64_t r8 = *arg2
int64_t* rsi = (*(r8 + 0x30))(arg2, arg5, r8)
int64_t result = 0

if (rax_1 != 0 && rsi != 0)
    int32_t rdi_1 = 0
    
    if (rax_1 != 0)
        do
            char const* const rdx
            int64_t r8_1
            
            if (rdi_1 == 0 || (rdi_1.b & 1) != 0)
                r8_1 = 1
                rdx = &data_1434cf410
            else
                r8_1 = 4
                rdx = "\n\t\t\t"
            
            (**arg6)(arg6, rdx, r8_1)
            sub_1427e39a0(arg6, rsi)
            rdi_1 += 1
            rsi += 0xc
        while (rdi_1 u< rax_1)
    
    int64_t rax_4 = *arg6
    char arg_10 = 0
    (*rax_4)(arg6, &arg_10, 1)
    result = (*(*arg4 + 0x10))(arg4, "points", arg6[4])
    arg6[3] = 0

void* arg_30
void* rdi_2 = arg_30

if (*(rdi_2 + 8) == 0)
    return result

int32_t var_e8 = 0
int16_t var_9c_1 = 0xff
int64_t var_e0_1 = 0
int32_t var_d8_1 = 0
int32_t var_d0_1 = 0
int64_t var_c8_1 = 0
int32_t var_c0_1 = 0
int32_t var_b8_1 = 0
int64_t var_b0_1 = 0
int32_t var_a8_1 = 0
int32_t var_a0_1 = 0xff0000
int64_t rax_7 = (*(*arg2 + 0x30))(arg2)
var_e8 = 0xc
int32_t rax_9 = (*(*arg2 + 0x28))(arg2)
int64_t var_80_1 = 0
int128_t var_68
__builtin_memset(&var_68, 0, 0x28)
var_a0_1.w = 2
int64_t var_98 = *(arg1 + 8)
int64_t* var_90 = &var_98
int64_t* var_88_1 = &var_98
int64_t* var_70 = &var_98
int32_t var_40_1 = 0x3f400000
int64_t var_78_1 = 0
int32_t var_3c_1 = 0xffffffff
int64_t var_38_1 = 0
sub_142809d10(&var_70, 0x40)
int64_t* rcx_9 = *(rdi_2 + 8)
int64_t* var_108_1 = &var_98
int32_t var_30_1 = 0x20
void** const var_118 = &data_1434d1d90
int64_t var_100
__builtin_memset(&var_100, 0, 0x14)
void* var_f8
int32_t var_f0
int128_t var_58
int64_t var_48
(*(*rcx_9 + 0x38))(rcx_9, &var_e8, &var_118, 0, var_118, &data_1434d1da0, var_108_1, var_100, 
    var_f8, var_f0, var_e8, rax_7, rax_9, var_d0_1, var_c8_1, var_c0_1, var_b8_1, var_b0_1, 
    var_a8_1, var_a0_1, var_98, var_90, var_88_1, var_80_1, var_78_1, var_70, var_68, var_58, 
    var_48, var_40_1, var_38_1, var_30_1)
int32_t r14_1 = var_100.d
void* rsi_1 = var_f8

if (r14_1 != 0 && rsi_1 != 0)
    int32_t rdi_3 = 0
    
    if (r14_1 != 0)
        do
            char const* const rdx_4
            int64_t r8_4
            
            if (rdi_3 == 0 || (rdi_3.b & 0xf) != 0)
                r8_4 = 1
                rdx_4 = &data_1434cf410
            else
                r8_4 = 4
                rdx_4 = "\n\t\t\t"
            
            (**arg6)(arg6, rdx_4, r8_4)
            *rsi_1
            sub_1427e3a30(arg6)
            rdi_3 += 1
            rsi_1 += 1
        while (rdi_3 u< r14_1)
    
    arg_30.b = 0
    (**arg6)(arg6, &arg_30, 1)
    (*(*arg4 + 0x10))(arg4, "CookedData", arg6[4])
    rsi_1 = var_f8
    arg6[3] = 0

var_118 = &data_1434d1d90
void** const var_110_2 = &data_1434d1da0

if (rsi_1 != 0)
    sub_142807300(&var_108_1[1], rsi_1 - 0x10, *(rsi_1 - 8))

void** const var_110_3 = &data_142d40888
var_118 = &data_142d40888
return sub_142807120(&var_90)
