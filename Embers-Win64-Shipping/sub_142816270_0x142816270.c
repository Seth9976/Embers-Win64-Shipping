// 函数: sub_142816270
// 地址: 0x142816270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg2)
int64_t rdi

if (arg2 == 0)
    rdi = 0
else
    rdi = sub_142815e30(arg1, rsi * 0x28, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

uint64_t rcx_1 = zx.q(arg1[1].d) * 0x28
int64_t result = rcx_1 + rdi

if (result u> rdi)
    result = memcpy(rdi, *arg1, (rcx_1 s/ 0x28 * 5).d << 3)

if (*(arg1 + 0xc) s< 0)
    *(arg1 + 0xc) = rsi.d
    *arg1 = rdi
    return result

int64_t rbp = *arg1

if (rbp != 0)
    class physx::PxAllocatorCallback* rax_6 = physx::shdfnd::getAllocator()
    int64_t r8_3 = *rax_6
    result = (*(r8_3 + 0x10))(rax_6, rbp, r8_3)

*arg1 = rdi
*(arg1 + 0xc) = rsi.d
return result
