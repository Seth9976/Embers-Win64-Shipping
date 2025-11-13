// 函数: sub_140b40300
// 地址: 0x140b40300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
uint64_t var_10 = rdi
EnterCriticalSection(&arg1[0xc])
void* rsi = nullptr
int64_t var_28 = 0
int32_t rdx = 0
int32_t var_20 = 0
int32_t rcx_1 = 0
int32_t var_1c = 0
int64_t rbp = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    rdi = zx.q(rdi_1.d + 1)
    
    if (rdi.d s> 0)
        sub_1405947f0(&var_28, rdi.d)
        rcx_1 = var_1c
        rdx = var_20
        rbp = var_28
    
    int32_t rax_1 = rdx + rdi.d
    int32_t var_20_1 = rax_1
    
    if (rax_1 s> rcx_1)
        sub_140594770(&var_28)
        rbp = var_28
    
    UnDecorator::getReferenceType(rbp, arg2, rdi.d * 2)

int32_t arg_8
sub_1408f1b50(arg1, &arg_8, &var_28)
int64_t rax_2 = sx.q(arg_8)

if (rax_2.d != 0xffffffff)
    int64_t rcx_7 = rax_2 << 5
    
    if (rcx_7 != neg.q(*arg1))
        rsi = *(rcx_7 + *arg1 + 0x10)

if (rbp != 0)
    sub_140a74f90(rbp)

if (rsi == 0)
    rdi.b = 1
else
    rdi = zx.q(sub_140b40290(rsi))

if (arg1 != -0x60)
    LeaveCriticalSection(&arg1[0xc])

return zx.q(rdi.b)
