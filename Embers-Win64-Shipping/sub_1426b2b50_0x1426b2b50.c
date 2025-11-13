// 函数: sub_1426b2b50
// 地址: 0x1426b2b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0x38)
int32_t arg_8 = 0
uint64_t var_28
int64_t var_18
int64_t* rax_2
int32_t rbx_1

if (rsi == 0 || rsi == 1)
    rax_2 = sub_1426b3350(&var_18, arg1)
    rbx_1 = 2
else
    int64_t rbx = *(arg1 + 0x30)
    var_28 = 0
    int32_t var_20_1 = rsi
    sub_1405a4c70(&var_28, rsi, 0)
    memcpy(var_28, rbx, rsi * 2)
    rax_2 = &var_28
    rbx_1 = 1

*arg2 = 0
*arg2 = *rax_2
*rax_2 = 0
arg2[1].d = rax_2[1].d
*(arg2 + 0xc) = *(rax_2 + 0xc)
rax_2[1] = 0

if ((rbx_1.b & 2) != 0)
    int64_t rcx_6 = var_18
    rbx_1 &= 0xfffffffd
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

if ((rbx_1.b & 1) != 0)
    uint64_t rcx_7 = var_28
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

return arg2
