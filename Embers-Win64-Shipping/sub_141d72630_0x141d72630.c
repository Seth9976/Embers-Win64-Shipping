// 函数: sub_141d72630
// 地址: 0x141d72630
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
int64_t rdi = sx.q(var_20)
uint64_t var_18 = 0
int64_t rcx_1
rcx_1.b = rax_2 != 0
int32_t var_10 = rdi.d
*(arg2 + 0x20) = rcx_1 + rax_2
int64_t rbx_1 = var_28
uint64_t rsi

if (rdi.d != 0)
    sub_1405c4a00(&var_18, rdi.d, 0)
    rsi = var_18
    memcpy(rsi, rbx_1, (rdi << 3).d)
    rdi = zx.q(var_10)
else
    rsi = 0

uint64_t* result = &var_18

if (arg1 + 0x268 != &var_18)
    int32_t r8_4 = *(arg1 + 0x274)
    *(arg1 + 0x270) = rdi.d
    
    if (rdi.d != 0 || r8_4 != 0)
        sub_1405c4a00(arg1 + 0x268, rdi.d, r8_4)
        result = memcpy(*(arg1 + 0x268), rsi, rdi.d << 3)
    else
        *(arg1 + 0x274) = 0

if (rsi != 0)
    result = sub_140a74f90(rsi)

int64_t rcx_8 = var_28

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
