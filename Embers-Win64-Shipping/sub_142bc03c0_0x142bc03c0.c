// 函数: sub_142bc03c0
// 地址: 0x142bc03c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x30)

if (rax == 0)
    return rax

int64_t rbx = *(rax + 0x30)
int32_t arg_18
int64_t arg_20
int32_t rax_1 = sub_142bc0190(arg1 + 0x30, arg2, &arg_20, &arg_18, arg3, arg4)
int32_t arg_8 = rax_1

if (rax_1 != 0)
    return 0

uint64_t rdi = zx.q(arg_18)
int64_t rax_2 = sub_142b99860(rbx, (rdi + 1).d, &arg_8)

if (arg_8 == 0)
    if (rdi.d != 0)
        memcpy(rax_2, arg_20, rdi.d)
    
    *(rdi + rax_2) = 0

if (*(arg1 + 0x58) == 0)
    sub_142b97020(*(arg1 + 0x30), &arg_20)

return rax_2
