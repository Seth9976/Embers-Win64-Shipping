// 函数: sub_140b7deb0
// 地址: 0x140b7deb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int32_t rax = *(arg1 + 0x10)
int32_t rdx

if (rax == 0)
    sub_1405947f0(arg2, 3)
    rdx = arg2[1].d
else
    int32_t rax_1 = rax + 2
    rdx = 0
    
    if (rax_1 s> 0)
        sub_1405947f0(arg2, rax_1)
        rdx = arg2[1].d

int32_t rdi = rdx - 1
int32_t rax_2
rax_2.b = rdx s<= 0

if (rdx s<= 0)
    rdi = 0

int32_t rax_4 = rax_2 + 1 + rdx
arg2[1].d = rax_4

if (rax_4 s> *(arg2 + 0xc))
    sub_140594770(arg2)

int64_t rcx_2 = sx.q(rdi)
*(*arg2 + (rcx_2 << 1)) = 0x2f
*(*arg2 + (rcx_2 << 1) + 2) = 0
int32_t rax_7 = *(arg1 + 0x10)
int32_t r8 = rax_7 - 1

if (rax_7 == 0)
    r8 = 0

sub_140a20ba0(arg2, *(arg1 + 8), r8)
int32_t rdx_3 = arg2[1].d
int32_t rax_8
rax_8.b = rdx_3 s<= 0
int32_t rdi_1 = rdx_3 - 1

if (rdx_3 s<= 0)
    rdi_1 = 0

int32_t rax_10 = rax_8 + 1 + rdx_3
arg2[1].d = rax_10

if (rax_10 s> *(arg2 + 0xc))
    sub_140594770(arg2)

int64_t rcx_5 = sx.q(rdi_1)
*(*arg2 + (rcx_5 << 1)) = 0x2f
*(*arg2 + (rcx_5 << 1) + 2) = 0
return arg2
