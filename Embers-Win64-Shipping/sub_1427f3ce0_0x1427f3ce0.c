// 函数: sub_1427f3ce0
// 地址: 0x1427f3ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi

if (arg2 == 0)
    rdi = nullptr
else
    int32_t rax_1 = arg2 * 0x34
    
    if (arg1[0xd0].b != 0 || rax_1 u> 0x340)
        rdi = sub_1427f2130(arg1, zx.q(rax_1), 
            "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
    else
        arg1[0xd0].b = 1
        rdi = arg1

int64_t result = sub_1427f3490(rdi, zx.q(arg1[0xd4]) * 0x34 + rdi, *(arg1 + 0x348))

if (arg1[0xd5] s>= 0)
    int64_t rbp_1 = *(arg1 + 0x348)
    
    if (rbp_1 == arg1)
        arg1[0xd0].b = 0
    else if (rbp_1 != 0)
        class physx::PxAllocatorCallback* rax_4 = physx::shdfnd::getAllocator()
        int64_t r8_1 = *rax_4
        result = (*(r8_1 + 0x10))(rax_4, rbp_1, r8_1)

arg1[0xd5] = arg2
*(arg1 + 0x348) = rdi
return result
