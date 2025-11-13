// 函数: sub_142bf8990
// 地址: 0x142bf8990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return sub_142bf2890(*arg3) __tailcall

void* rbx = *arg3
int128_t* const rdi = &data_14369a5d0
int128_t* const rbx_1

if (*(rbx + 0x18) u>= 4)
    rbx_1 = *(rbx + 0x10)
else
    rbx_1 = &data_14369a5d0

int32_t r14 = 0
int32_t rdx = arg3[1].d
uint32_t rcx_3 = (zx.d(*(rbx_1 + 1)) << 0x10) + (zx.d(*(rbx_1 + 2)) << 8)
int32_t arg_10 = 0
uint32_t rcx_5 = rcx_3 + (zx.d(*rbx_1) << 0x18) + zx.d(*(rbx_1 + 3))
bool cond:1_1

if (rcx_5 u> 0x74727565)
    if (rcx_5 != 0x74746366)
        cond:1_1 = rcx_5 == 0x74797031
    label_142bf8a4b:
        
        if (not(cond:1_1))
            rbx_1 = &data_14369a5d0
    else if (zx.d(*(rbx_1 + 5)) - 1 + (zx.d(*(rbx_1 + 4)) << 8) u> 1)
        rbx_1 = &data_14369a5d0
    else
        rbx_1 = sub_142bf9030(rbx_1, rdx)
else if (rcx_5 != 0x74727565)
    if (rcx_5 == 0x100)
        int128_t* rax_6 = sub_142bf8e80(rbx_1, rdx, &arg_10)
        r14 = arg_10
        rbx_1 = rax_6
    else if (rcx_5 != 0x10000)
        cond:1_1 = rcx_5 == 0x4f54544f
        goto label_142bf8a4b
sub_142bf8d60(rbx_1, arg2, &arg_10)
int32_t rax_8 = arg_10

if (rax_8 u< (zx.d(*(rbx_1 + 4)) << 8) + zx.d(*(rbx_1 + 5)))
    rdi = (zx.q(rax_8) << 4) + 0xc + rbx_1

return sub_142c09a80(*arg3, 
    (zx.d(*(rdi + 9)) << 0x10) + (zx.d(*(rdi + 0xa)) << 8) + (zx.d(*(rdi + 8)) << 0x18)
        + zx.d(*(rdi + 0xb)) + r14, 
    (zx.d(*(rdi + 0xd)) << 0x10) + (zx.d(*(rdi + 0xe)) << 8) + (zx.d(*(rdi + 0xc)) << 0x18)
    + zx.d(*(rdi + 0xf))) __tailcall
