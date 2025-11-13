// 函数: sub_1406e5a20
// 地址: 0x1406e5a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int32_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rsi = var_28
uint64_t var_18 = 0
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
uint64_t rsi_1

if (var_20 != 0)
    sub_1405a4c70(&var_18, var_20, 0)
    rsi_1 = var_18
    memcpy(rsi_1, rsi, var_20 * 2)
else
    rsi_1 = 0

uint64_t* result = &var_18

if (arg3 != &var_18)
    int32_t r8_4 = *(arg3 + 0xc)
    arg3[1].d = var_20
    
    if (var_20 != 0 || r8_4 != 0)
        sub_1405a4c70(arg3, var_20, r8_4)
        result = memcpy(*arg3, rsi_1, var_20 * 2)
    else
        *(arg3 + 0xc) = 0

if (rsi_1 != 0)
    result = sub_140a74f90(rsi_1)

int64_t rcx_8 = var_28

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
