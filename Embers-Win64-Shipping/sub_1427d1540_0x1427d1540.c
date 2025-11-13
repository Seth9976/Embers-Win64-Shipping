// 函数: sub_1427d1540
// 地址: 0x1427d1540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)

if (arg2 == 0 || (arg2 & (arg2 - 1)) != 0)
    int32_t r8_3 = arg2 u>> 1 | arg2
    int32_t r8_4 = r8_3 | r8_3 u>> 2
    int32_t r8_5 = r8_4 | r8_4 u>> 4
    int32_t r8_6 = r8_5 | r8_5 u>> 8
    rdi = zx.q((r8_6 u>> 0x10 | r8_6) + 1)

int32_t result_1 = arg1[4].d
uint32_t r12 = (rdi << 2).d
int32_t i = 0
int64_t r13 = int.q(float.s(zx.q(rdi.d)) f* arg1[5].d)
int32_t r14_1 = r13.d << 4
int32_t rbp = r12 + (r13 << 2).d
uint64_t rbp_1 = zx.q(rbp + (neg.d(rbp) & 0xf))
int64_t r14_3

if (r14_1 != neg.d(rbp_1.d))
    class physx::PxAllocatorCallback* rax_12 = physx::shdfnd::getAllocator()
    r14_3 = (*(*rax_12 + 8))(rax_12, zx.q(r14_1 + rbp_1.d), "NonTrackedAlloc", 
        "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
    "sHashInternals.h", 
        0x174)
else
    r14_3 = 0

int64_t r15_1 = zx.q(r12) + r14_3
int64_t rbp_2 = rbp_1 + r14_3
uint64_t result = memset(r14_3, 0xffffffff, zx.q(r12))

if (*(arg1 + 0x34) u> 0)
    do
        uint64_t r8_9 = zx.q(i) * 2
        uint32_t rcx_2 = zx.d(*(arg1[1] + (r8_9 << 3)))
        uint32_t rcx_3 = rcx_2 + not.d(rcx_2 << 0xf)
        uint32_t rcx_4 = ((zx.q(rcx_3 u>> 0xa) ^ zx.q(rcx_3)) * 9).d
        uint32_t rcx_5 = rcx_4 ^ rcx_4 u>> 6
        uint64_t rcx_6 = zx.q(rcx_5 + not.d(rcx_5 << 0xb))
        uint64_t rcx_9 = (rcx_6 u>> 0x10 ^ zx.q(rcx_6.d)) & zx.q((rdi - 1).d)
        result = zx.q(*(r14_3 + (rcx_9 << 2)))
        *(r15_1 + (zx.q(i) << 2)) = result.d
        uint64_t rdx_2 = r8_9 << 3
        *(r14_3 + (rcx_9 << 2)) = i
        int16_t* rdx_3 = rdx_2 + rbp_2
        
        if (rdx_2 != neg.q(rbp_2))
            int64_t rcx_10 = arg1[1]
            *rdx_3 = *(rcx_10 + (r8_9 << 3))
            result = *(rcx_10 + (r8_9 << 3) + 8)
            *(rdx_3 + 8) = result
        
        i += 1
    while (i u< *(arg1 + 0x34))

int64_t rsi = *arg1

if (rsi != 0)
    class physx::PxAllocatorCallback* rax_28 = physx::shdfnd::getAllocator()
    int64_t r8_10 = *rax_28
    result = (*(r8_10 + 0x10))(rax_28, rsi, r8_10)

bool cond:0 = *(arg1 + 0x2c) != 0xffffffff
*arg1 = r14_3
arg1[3] = r14_3
*(arg1 + 0x24) = rdi.d
arg1[2] = r15_1
arg1[1] = rbp_2
arg1[4].d = r13.d

if (not(cond:0))
    result = zx.q(result_1)
    *(arg1 + 0x2c) = result.d

return result
