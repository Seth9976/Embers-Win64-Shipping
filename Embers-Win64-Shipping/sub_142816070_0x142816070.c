// 函数: sub_142816070
// 地址: 0x142816070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi_1 = *(arg1 + 0xc) & 0x7fffffff
int32_t rsi_2
int64_t rdi

if (rsi_1 != 0)
    rsi_2 = rsi_1 * 2
    
    if (rsi_1 == neg.d(rsi_1))
        rdi = 0
    else
        rdi = sub_142815e30(arg1, zx.q(rsi_2) * 0x28, 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
else
    rsi_2 = 1
    rdi = sub_142815e30(arg1, zx.q(rsi_2) * 0x28, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

uint64_t rcx_1 = zx.q(arg1[1].d) * 0x28

if (rcx_1 + rdi u> rdi)
    memcpy(rdi, *arg1, (rcx_1 s/ 0x28 * 5).d << 3)

int128_t* rax_9 = rdi + zx.q(arg1[1].d) * 0x28

if (rax_9 != 0)
    *rax_9 = *arg2
    rax_9[1] = arg2[1]
    rax_9[2].q = arg2[2].q

if (*(arg1 + 0xc) s>= 0)
    int64_t rbp_1 = *arg1
    
    if (rbp_1 != 0)
        class physx::PxAllocatorCallback* rax_10 = physx::shdfnd::getAllocator()
        int64_t r8_3 = *rax_10
        (*(r8_3 + 0x10))(rax_10, rbp_1, r8_3)

uint64_t rcx_5 = zx.q(arg1[1].d)
*(arg1 + 0xc) = rsi_2
*arg1 = rdi
arg1[1].d = rcx_5.d + 1
return rdi + rcx_5 * 0x28
