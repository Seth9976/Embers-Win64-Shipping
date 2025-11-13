// 函数: sub_1427e5170
// 地址: 0x1427e5170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0x214) & 0x7fffffff
uint64_t rsi
void* const rdi

if (rax_1 != 0)
    rsi = zx.q(rax_1 * 2)
    
    if (rsi.d != 0)
        goto label_1427e51aa
    
    rdi = nullptr
else
    rsi = zx.q(rax_1 + 1)
label_1427e51aa:
    uint32_t rax_2 = (rsi << 3).d
    
    if (*(arg1 + 0x200) != 0 || rax_2 u> 0x200)
        rdi = sub_1427e40b0(arg1, zx.q(rax_2), 
            "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
    else
        *(arg1 + 0x200) = 1
        rdi = arg1

uint64_t rcx = zx.q(*(arg1 + 0x210))

if (rdi + (rcx << 3) u> rdi)
    memcpy(rdi, *(arg1 + 0x208), (rcx << 3).d)

void* rcx_2 = rdi + (zx.q(*(arg1 + 0x210)) << 3)

if (rcx_2 != 0)
    *rcx_2 = *arg2

if (*(arg1 + 0x214) s>= 0)
    int64_t rbp_1 = *(arg1 + 0x208)
    
    if (rbp_1 == arg1)
        *(arg1 + 0x200) = 0
    else if (rbp_1 != 0)
        class physx::PxAllocatorCallback* rax_7 = physx::shdfnd::getAllocator()
        int64_t r8_2 = *rax_7
        (*(r8_2 + 0x10))(rax_7, rbp_1, r8_2)

uint64_t rcx_4 = zx.q(*(arg1 + 0x210))
*(arg1 + 0x214) = rsi.d
*(arg1 + 0x208) = rdi
*(arg1 + 0x210) = rcx_4.d + 1
return rdi + (rcx_4 << 3)
