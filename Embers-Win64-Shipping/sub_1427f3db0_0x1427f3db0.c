// 函数: sub_1427f3db0
// 地址: 0x1427f3db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi

if (arg2 == 0)
    rdi = nullptr
else
    int32_t rax_1 = arg2 * 0x1c
    
    if (arg1[0x70].b != 0 || rax_1 u> 0x1c0)
        rdi = sub_1427f21d0(arg1, zx.q(rax_1), 
            "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
    else
        arg1[0x70].b = 1
        rdi = arg1

int64_t result = sub_1427f36e0(rdi, zx.q(arg1[0x74]) * 0x1c + rdi, *(arg1 + 0x1c8))

if (arg1[0x75] s>= 0)
    int64_t rbp_1 = *(arg1 + 0x1c8)
    
    if (rbp_1 == arg1)
        arg1[0x70].b = 0
    else if (rbp_1 != 0)
        class physx::PxAllocatorCallback* rax_4 = physx::shdfnd::getAllocator()
        int64_t r8_1 = *rax_4
        result = (*(r8_1 + 0x10))(rax_4, rbp_1, r8_1)

arg1[0x75] = arg2
*(arg1 + 0x1c8) = rdi
return result
