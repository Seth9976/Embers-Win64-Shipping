// 函数: sub_1427e62e0
// 地址: 0x1427e62e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi

if (arg2.d == 0)
    rdi = nullptr
else
    int32_t rax_1 = (arg2 << 3).d
    
    if (*(arg1 + 0x40) != 0 || rax_1 u> 0x40)
        rdi = sub_1427e3ed0(arg1, zx.q(rax_1), 
            "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
    else
        *(arg1 + 0x40) = 1
        rdi = arg1

uint64_t rcx = zx.q(*(arg1 + 0x50))
void* result = rdi + (rcx << 3)

if (result u> rdi)
    result = memcpy(rdi, *(arg1 + 0x48), (rcx << 3).d)

if (*(arg1 + 0x54) s>= 0)
    int64_t rbp_1 = *(arg1 + 0x48)
    
    if (rbp_1 == arg1)
        *(arg1 + 0x40) = 0
    else if (rbp_1 != 0)
        class physx::PxAllocatorCallback* rax_3 = physx::shdfnd::getAllocator()
        int64_t r8_2 = *rax_3
        result = (*(r8_2 + 0x10))(rax_3, rbp_1, r8_2)

*(arg1 + 0x54) = arg2.d
*(arg1 + 0x48) = rdi
return result
