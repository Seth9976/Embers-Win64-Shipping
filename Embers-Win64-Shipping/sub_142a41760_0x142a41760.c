// 函数: sub_142a41760
// 地址: 0x142a41760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

if (arg3 == -1)
    return sub_142a42140(arg1, arg2, arg4) __tailcall

if (arg2 u> 0x4000000)
    return 

int64_t rax_2 = sub_142a42390()
int64_t r8_2 = rax_2 - 1 + arg2
int64_t rdi_3

if ((rax_2 & (rax_2 - 1)) != 0)
    rdi_3 = r8_2 - modu.dp.q(0:r8_2, rax_2)
else
    rdi_3 = not.q(rax_2 - 1) & r8_2

uint64_t rdx_4 = (rdi_3 + 0x3fffff) u>> 0x16
uint64_t rbp_2 = zx.q(arg3.d) & 0x3f
uint64_t rax = arg3 u>> 6

if (rax u>= 0x400)
    return 

int64_t* rbx_2 = &data_14400f380 + rax * 0x18
int64_t rcx_4 = rbx_2[1]

if ((rcx_4 & 0xfffffffffffffffc) + (zx.q(rbp_2.d) << 0x16) != arg1 || rdx_4 + rbp_2 u> 0x40)
    return 

if ((rcx_4.b u>> 1 & 1) == 0 && sub_142a43d70(0xc) != 0)
    sub_142a423a0(arg1, rdi_3, arg4)

if ((rcx_4.b & 1) == 0)
    sub_142a43f80(arg4 + 0x60, sub_142a41910(rdi_3))

uint64_t rdx_7

do
    rdx_7 = *rbx_2
    rax = rdx_7
    
    if (rax == *rbx_2)
        *rbx_2 = not.q(((1 << rdx_4.b) - 1) << rbp_2.b) & rdx_7
    else
        rax = *rbx_2
while (rdx_7 != rax)
