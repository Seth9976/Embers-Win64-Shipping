// 函数: sub_1405d53a0
// 地址: 0x1405d53a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, sub_140d20910())
arg1[5].d = 2
*arg1 = &data_142d56cf8
arg1[6].b = 3
sub_140d3a3a0(arg1 + 0x34, nullptr)
*(arg1 + 0x3c) = 0
arg1[9].w = 0x101
arg1[0xa] = 0
arg1[0xc] = 0
*(arg1 + 0x44) = 0
__builtin_memset(&arg1[0x12], 0, 0x20)
int16_t* const var_38 = nullptr
int32_t var_30 = 0
sub_1405947f0(&var_38, 0xc)
int32_t r12 = var_30 + 0xc

if (r12 s> 0)
    sub_140594770(&var_38)

int16_t* rsi = var_38
sub_1405a7220(rsi, 0xc, "MediaOutput", 0xc, 0x3f)
int16_t* const r14 = &data_142d40450
int16_t* const r15 = &data_142d40450

if (r12 != 0)
    r15 = rsi

int64_t* rax_1 = sub_140b257f0()

if (rax_1[1].d != 0)
    r14 = *rax_1

var_38 = r14
int16_t* const var_30_1 = r15
uint64_t var_48 = 0
int64_t var_40 = 0
sub_140b0f5f0(&var_48, &var_38, 2)

if (&arg1[0x12] == &var_48)
    uint64_t rcx_7 = var_48
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
else
    int64_t rcx_6 = arg1[0x12]
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    arg1[0x12] = var_48
    arg1[0x13].d = var_40.d
    *(arg1 + 0x9c) = var_40:4.d
    int64_t var_40_1 = 0
    var_48 = 0

if (rsi != 0)
    sub_140a74f90(rsi)

return arg1
