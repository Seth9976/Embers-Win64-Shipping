// 函数: sub_141dc5010
// 地址: 0x141dc5010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* rax = sub_142458280()
void* rsi = rax[0x23]
int64_t var_18
int64_t* rdx_4
int32_t rbx_1

if (rsi != 0)
label_141dc5059:
    void* rax_1 = sub_142458280()
    void* rdx_2 = *(rsi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        goto label_141dc509f
    
    int64_t var_20 = *(rsi + 0x28)
    rbx_1 = 1
    sub_140596d10(&var_18, rsi + 0x30)
    rdx_4 = &var_20
else
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rsi = rax[0x23]
    
    if (rsi != 0)
        goto label_141dc5059
    
label_141dc509f:
    rbx_1 = 2
    int64_t var_38
    __builtin_memset(&var_38, 0, 0x18)
    rdx_4 = &var_38

*arg1 = *rdx_4
sub_140596d10(&arg1[1], &rdx_4[1])

if ((rbx_1.b & 2) != 0)
    rbx_1 &= 0xfffffffd
    int64_t var_30
    
    if (var_30 != 0)
        sub_140a74f90(var_30)

if ((rbx_1.b & 1) != 0)
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

return arg1
