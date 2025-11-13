// 函数: sub_1422f27e0
// 地址: 0x1422f27e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9

if (arg2 s>= 0)
    r9 = arg3 - 1
    
    if (arg2 s< arg3 - 1)
        r9 = arg2
else
    r9 = 0

int16_t* var_18
int64_t* rcx = &var_18

if (r9 != arg3 - 1)
    sub_140a2e390(rcx, u"%s@%d", arg1)
else
    sub_140a2e390(rcx, u"%s@Cine", arg1)

int16_t* const rcx_1 = &data_142d40450
int16_t* rdx = &data_142d40450

if (data_143de5808 != 0)
    rdx = data_143de5800

int16_t* rbx = var_18
int32_t var_10

if (var_10 != 0)
    rcx_1 = rbx

int64_t* result = sub_140aeaee0(rcx_1, rdx, 0x1000000, 0)

if (rbx == 0)
    return result

return sub_140a74f90(rbx) __tailcall
