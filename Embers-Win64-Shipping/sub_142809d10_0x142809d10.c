// 函数: sub_142809d10
// 地址: 0x142809d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg2)

if (arg2 == 0 || (arg2 & (arg2 - 1)) != 0)
    int32_t r8_3 = arg2 u>> 1 | arg2
    int32_t r8_4 = r8_3 | r8_3 u>> 2
    int32_t r8_5 = r8_4 | r8_4 u>> 4
    int32_t r8_6 = r8_5 | r8_5 u>> 8
    rbp = zx.q((r8_6 u>> 0x10 | r8_6) + 1)

int32_t r13 = arg1[5].d
uint32_t rdi = (rbp << 2).d
int64_t r12 = int.q(float.s(zx.q(rbp.d)) f* arg1[6].d)
int32_t rbx = rdi + (r12 << 2).d
uint64_t rbx_1 = zx.q(rbx + (neg.d(rbx) & 0xf))
int64_t* rcx = **arg1
int64_t rax_13 = (*(*rcx + 8))(rcx, zx.q((r12.d << 4) + rbx_1.d), 
    "<no allocation names in this config>", 
    "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
"sHashInternals.h", 
    0x174)
int64_t r15_1 = zx.q(rdi) + rax_13
int64_t rbx_2 = rbx_1 + rax_13
uint64_t result = memset(rax_13, 0xffffffff, zx.q(rdi))
uint64_t r8_8 = 0

if (*(arg1 + 0x3c) u> 0)
    do
        uint64_t r9_2 = zx.q(r8_8.d) * 2
        int32_t rcx_2 = *(arg1[2] + (r9_2 << 3))
        int32_t* rdx_3 = rbx_2 + (r9_2 << 3)
        int32_t rcx_3 = rcx_2 + not.d(rcx_2 << 0xf)
        uint32_t rcx_4 = ((zx.q(rcx_3 u>> 0xa) ^ zx.q(rcx_3)) * 9).d
        uint32_t rcx_5 = rcx_4 ^ rcx_4 u>> 6
        uint64_t rcx_6 = zx.q(rcx_5 + not.d(rcx_5 << 0xb))
        uint64_t rcx_9 = (rcx_6 u>> 0x10 ^ zx.q(rcx_6.d)) & zx.q((rbp - 1).d)
        result = zx.q(*(rax_13 + (rcx_9 << 2)))
        *(r15_1 + (r8_8 << 2)) = result.d
        *(rax_13 + (rcx_9 << 2)) = r8_8.d
        
        if (rdx_3 != 0)
            int64_t rcx_10 = arg1[2]
            *rdx_3 = *(rcx_10 + (r9_2 << 3))
            result = *(rcx_10 + (r9_2 << 3) + 8)
            *(rdx_3 + 8) = result
        
        r8_8 = zx.q(r8_8.d + 1)
    while (r8_8.d u< *(arg1 + 0x3c))

int64_t rdx_4 = arg1[1]

if (rdx_4 != 0)
    int64_t* rcx_11 = **arg1
    result = (*(*rcx_11 + 0x10))(rcx_11, rdx_4, r8_8)

bool cond:0 = *(arg1 + 0x34) != 0xffffffff
arg1[1] = rax_13
arg1[4] = rax_13
*(arg1 + 0x2c) = rbp.d
arg1[3] = r15_1
arg1[2] = rbx_2
arg1[5].d = r12.d

if (not(cond:0))
    *(arg1 + 0x34) = r13

return result
