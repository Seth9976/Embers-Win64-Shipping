// 函数: sub_1427e8330
// 地址: 0x1427e8330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi

if (arg2 == 0)
    rdi = 0
else
    rdi = sub_1427e7d50(arg1, zx.q(arg2) << 3, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

uint64_t rcx = zx.q(arg1[1].d)
int64_t result = rdi + (rcx << 3)

if (result u> rdi)
    result = memcpy(rdi, *arg1, (rcx << 3).d)

if (*(arg1 + 0xc) s< 0)
    *(arg1 + 0xc) = arg2
    *arg1 = rdi
    return result

int64_t rbp = *arg1

if (rbp != 0)
    class physx::PxAllocatorCallback* rax_2 = physx::shdfnd::getAllocator()
    int64_t r8_2 = *rax_2
    result = (*(r8_2 + 0x10))(rax_2, rbp, r8_2)

*arg1 = rdi
*(arg1 + 0xc) = arg2
return result
