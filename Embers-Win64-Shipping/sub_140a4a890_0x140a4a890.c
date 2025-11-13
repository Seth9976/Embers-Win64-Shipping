// 函数: sub_140a4a890
// 地址: 0x140a4a890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
uint64_t var_10 = rdi
EnterCriticalSection(arg1 + 0xd0)
int64_t rsi = 0
int64_t var_28 = 0
int32_t rdx = 0
int32_t var_20 = 0
int32_t r8 = 0
int32_t var_1c = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    rdi = zx.q(rdi_1.d + 1)
    
    if (rdi.d s> 0)
        sub_1405947f0(&var_28, rdi.d)
        r8 = var_1c
        rdx = var_20
        rsi = var_28
    
    int32_t rax_1 = rdx + rdi.d
    int32_t var_20_1 = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_28)
        rsi = var_28
    
    memcpy(rsi, arg2, rdi.d * 2)

void arg_8
rdi.b = *sub_140a45180(arg1 + 8, &arg_8, &var_28) != 0xffffffff

if (rsi != 0)
    sub_140a74f90(rsi)

if (arg1 != -0xd0)
    LeaveCriticalSection(arg1 + 0xd0)

return zx.q(rdi.b)
