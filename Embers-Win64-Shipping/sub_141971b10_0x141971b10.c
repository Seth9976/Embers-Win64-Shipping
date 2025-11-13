// 函数: sub_141971b10
// 地址: 0x141971b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[2].d u<= 0 && *(arg1 + 0x1c) u<= 0 && arg1[0xd].d s<= 0)
    return 

(*(*arg1 + 8))()
void* i = arg1[0xb]
arg1[6].d = arg1[2].d
*(arg1 + 0x2c) = *(arg1 + 0x1c)
*(arg1 + 0x34) = *(arg1 + 0x14)
arg1[7].d = arg1[3].d
*(arg1 + 0x3c) = arg4 * 1000f

for (; i != 0; i = *(i + 0x58))
    *(i + 0x30) += arg1[2].d
    *(i + 0x2c) += *(arg1 + 0x1c)
    *(i + 0x34) += *(arg1 + 0x14)
    *(i + 0x38) += arg1[3].d

int32_t i_1 = 0

if (arg1[0xd].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        sub_141971b10(*(rsi_1 + arg1[0xc]), zx.q(arg2 + 1), arg3)
        i_1 += 1
        rsi_1 = &rsi_1[1]
    while (i_1 s< arg1[0xd].d)

int32_t arg_8
sub_140aefec0(arg3, &arg_8, &arg1[9])
int64_t rax_10 = sx.q(arg_8)
void* const rax_13

if (rax_10.d == 0xffffffff)
    rax_13 = nullptr
else
    rax_13 = rax_10 * 0x60 + *arg3

void* rcx_3 = rax_13 + 0x10

if (rax_13 == 0)
    rcx_3 = nullptr

if (rcx_3 == 0)
    arg4 = *(arg1 + 0x3c)
    void** const var_68 = &data_142ef57b8
    int32_t var_58_1 = arg1[6].d
    int32_t var_54_1 = *(arg1 + 0x34)
    int32_t var_50_1 = arg1[7].d
    void** const* var_70_1 = &var_68
    float var_2c_1 = arg4
    int32_t var_60_1 = 0
    int64_t var_4c
    __builtin_memset(&var_4c, 0, 0x20)
    int32_t var_28_1 = 1
    void* var_78 = &arg1[9]
    sub_14195c830(arg3, &arg_8, &var_78, nullptr)
else
    *(rcx_3 + 0x10) += arg1[6].d
    *(rcx_3 + 0x14) += *(arg1 + 0x34)
    arg4 = *(rcx_3 + 0x3c)
    *(rcx_3 + 0x18) += arg1[7].d
    arg4 = arg4 f+ *(arg1 + 0x3c)
    *(rcx_3 + 0x40) += 1
    *(rcx_3 + 0x3c) = arg4
