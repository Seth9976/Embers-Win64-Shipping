// 函数: sub_1427cdca0
// 地址: 0x1427cdca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)

if (arg2 == 0 || (arg2 & (arg2 - 1)) != 0)
    int32_t r8_3 = arg2 u>> 1 | arg2
    int32_t r8_4 = r8_3 | r8_3 u>> 2
    int32_t r8_5 = r8_4 | r8_4 u>> 4
    int32_t r8_6 = r8_5 | r8_5 u>> 8
    rdi = zx.q((r8_6 u>> 0x10 | r8_6) + 1)

int32_t result_1 = arg1[4].d
uint32_t rbp = (rdi << 2).d
int32_t i = 0
int64_t r13 = int.q(float.s(zx.q(rdi.d)) f* arg1[5].d)
int32_t r15_1 = (r13 << 2).d + rbp
uint64_t r15_2 = zx.q(r15_1 + (neg.d(r15_1) & 0xf))
int32_t rcx = (r15_2 + (zx.q((r13 << 1).d + r13.d) << 3)).d
int64_t r14_1

if (rcx != 0)
    class physx::PxAllocatorCallback* rax_14 = physx::shdfnd::getAllocator()
    r14_1 = (*(*rax_14 + 8))(rax_14, zx.q(rcx), "NonTrackedAlloc", 
        "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
    "sHashInternals.h", 
        0x174)
else
    r14_1 = 0

int64_t r12_1 = zx.q(rbp) + r14_1
int64_t r15_3 = r15_2 + r14_1
int32_t result = memset(r14_1, 0xffffffff, zx.q(rbp))

if (*(arg1 + 0x34) u> 0)
    do
        int64_t rdx_1 = arg1[1]
        uint64_t i_1 = zx.q(i)
        uint64_t r10_2 = i_1 * 3
        int32_t rcx_3 = *(rdx_1 + (r10_2 << 3) + 8)
        int32_t rcx_4 = rcx_3 + not.d(rcx_3 << 0xf)
        int64_t rcx_5 = *(rdx_1 + (r10_2 << 3))
        uint32_t r8_8 = ((zx.q(rcx_4 u>> 0xa) ^ zx.q(rcx_4)) * 9).d
        uint32_t r8_9 = r8_8 ^ r8_8 u>> 6
        uint32_t r8_10 = r8_9 + not.d(r8_9 << 0xb)
        int64_t rcx_6 = rcx_5 + not.q(rcx_5 << 0x20)
        int64_t rcx_7 = rcx_6 ^ rcx_6 u>> 0x16
        int64_t rcx_8 = rcx_7 + not.q(rcx_7 << 0xd)
        int64_t rcx_9 = (rcx_8 u>> 8 ^ rcx_8) * 9
        int64_t rcx_10 = rcx_9 ^ rcx_9 u>> 0xf
        int64_t rcx_11 = rcx_10 + not.q(rcx_10 << 0x1b)
        int64_t* rdx_3 = r15_3 + (r10_2 << 3)
        uint64_t rcx_15 = (zx.q(((rcx_11 u>> 0x1f).d ^ rcx_11.d ^ 0xfc955b95) * 0xf4247)
            ^ zx.q(r8_10) u>> 0x10 ^ zx.q(r8_10)) & zx.q((rdi - 1).d)
        result = *(r14_1 + (rcx_15 << 2))
        *(r12_1 + (i_1 << 2)) = result
        *(r14_1 + (rcx_15 << 2)) = i
        
        if (rdx_3 != 0)
            int64_t rcx_16 = arg1[1]
            *rdx_3 = *(rcx_16 + (r10_2 << 3))
            rdx_3[1].d = *(rcx_16 + (r10_2 << 3) + 8)
            result = *(rcx_16 + (r10_2 << 3) + 0x10)
            rdx_3[2].d = result
        
        i += 1
    while (i u< *(arg1 + 0x34))

int64_t rsi = *arg1

if (rsi != 0)
    class physx::PxAllocatorCallback* rax_51 = physx::shdfnd::getAllocator()
    int64_t r8_11 = *rax_51
    result = (*(r8_11 + 0x10))(rax_51, rsi, r8_11)

bool cond:0 = *(arg1 + 0x2c) != 0xffffffff
*arg1 = r14_1
arg1[3] = r14_1
*(arg1 + 0x24) = rdi.d
arg1[2] = r12_1
arg1[1] = r15_3
arg1[4].d = r13.d

if (not(cond:0))
    result = result_1
    *(arg1 + 0x2c) = result

return result
