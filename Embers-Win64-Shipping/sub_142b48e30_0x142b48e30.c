// 函数: sub_142b48e30
// 地址: 0x142b48e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x50)
int32_t rbp = arg3
uint64_t rax

if (rcx != 0 && *(arg1 + 0x38) s> 0)
    int32_t rbx_1 = *(arg1 + 0x3c)
    
    if (rbx_1 s>= 0)
        rax = sub_142a9f280(sub_1408f3520(rcx), zx.q(rbx_1))
    
    if (rbx_1 s< 0 || rax.b == 0)
        (*(*(arg1 + 8) + 8))(arg1 + 8, *(arg1 + 0x50))

if (arg2 != 0)
    if (arg2 + 9 u> 8)
        abort()
        noreturn
    
    switch (arg2)
        case 0xfffffff7, 0xfffffff8, 0xfffffff9, 0xfffffffa, 0xfffffffb
            (*(*(arg1 + 8) + 8))(arg1 + 8, sub_142b49690(*(arg1 + 0x48), arg4))
        case 0xfffffffc
            (*(*(arg1 + 8) + 8))(arg1 + 8, sub_142b49eb0(*(arg1 + 0x48)))
        case 0xfffffffd
            (*(*(arg1 + 8) + 8))(arg1 + 8, sub_142b49e30(*(arg1 + 0x48)))
        case 0xfffffffe
            (*(*(arg1 + 8) + 8))(arg1 + 8, sub_142b49f30(*(arg1 + 0x48)))
        case 0xffffffff
            (*(*(arg1 + 8) + 8))(arg1 + 8, sub_142b49da0(*(arg1 + 0x48)))
    
    goto label_142b48fa1

void* rcx_15 = *(arg1 + 0x50)

if (rcx_15 != 0)
    rax = sub_142a9f280(sub_1408f3520(rcx_15), zx.q(rbp))

if (rcx_15 != 0 && rax.b != 0)
    goto label_142b48fa1

bool cond:0_1 = *arg4 s> 0
void* rcx_17 = *(arg1 + 0x48)
int32_t arg_10 = rbp

if (cond:0_1)
    return 

rax = sub_142b48a00(rcx_17 + 0x430, &arg_10)

if (rax == 0)
    *arg4 = 7
    return 

(*(*(arg1 + 8) + 8))(arg1 + 8, rax)
label_142b48fa1:

if (arg2 != 0)
    rbp = arg2

*(arg1 + 0x3c) = rbp
