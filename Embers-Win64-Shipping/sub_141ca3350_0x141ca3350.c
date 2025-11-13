// 函数: sub_141ca3350
// 地址: 0x141ca3350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = data_143e1b438
int64_t arg_18 = 0
int64_t arg_20 = 0
uint64_t var_38 = 0
int32_t var_30 = 0
int16_t* const rsi = &data_142d40450

if (sub_1408301c0(arg1, rdx, &var_38) == 0)
    uint64_t rcx_1 = var_38
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
else
    uint64_t rdi_1 = var_38
    int16_t* rdx_1 = &data_142d40450
    
    if (var_30 != 0)
        rdx_1 = rdi_1
    
    sub_140b58260(&arg_18, rdx_1, 1)
    arg_18 = arg_18
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)

int64_t rdx_2 = data_143e1b5a8
var_38 = 0
int32_t var_30_1 = 0

if (sub_1408301c0(arg1, rdx_2, &var_38) == 0)
    int16_t* rcx_4 = var_38
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
else
    int16_t* rdi_2 = var_38
    
    if (var_30_1 != 0)
        rsi = rdi_2
    
    sub_140b58260(&arg_20, rsi, 1)
    arg_20 = arg_20
    
    if (rdi_2 != 0)
        sub_140a74f90(rdi_2)

int32_t rcx_5
rcx_5.b = sub_140b5b8a0(arg_18.d, 0) == 0
rcx_5.b |= arg_18:4.d != 0

if (rcx_5.b != 0)
    int32_t rcx_6
    rcx_6.b = sub_140b5b8a0(arg_20.d, 0) == 0
    rcx_6.b |= arg_20:4.d != 0
    
    if (rcx_6.b != 0)
        *arg2 = arg_18
        arg2[1] = arg_20
        return arg2

*arg2 = 0
arg2[1] = 0
return arg2
