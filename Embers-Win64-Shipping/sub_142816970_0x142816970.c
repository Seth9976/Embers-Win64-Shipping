// 函数: sub_142816970
// 地址: 0x142816970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0xc) & 0x7fffffff
int32_t rsi
int64_t rdi

if (rax_1 != 0)
    rsi = rax_1 * 2
    
    if (rsi == 0)
        rdi = 0
    else
        rdi = sub_1428167a0(arg1, zx.q(rsi) << 4, 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
else
    rsi = rax_1 + 1
    rdi = sub_1428167a0(arg1, zx.q(rsi) << 4, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

int32_t rcx = arg1[1].d

if ((zx.q(rcx) << 4) + rdi u> rdi)
    memcpy(rdi, *arg1, rcx << 4)

uint64_t rax_7 = zx.q(arg1[1].d) << 4

if (rax_7 != neg.q(rdi))
    *(rax_7 + rdi) = *arg2

if (*(arg1 + 0xc) s>= 0)
    int64_t rbp_1 = *arg1
    
    if (rbp_1 != 0)
        class physx::PxAllocatorCallback* rax_9 = physx::shdfnd::getAllocator()
        int64_t r8_2 = *rax_9
        (*(r8_2 + 0x10))(rax_9, rbp_1, r8_2)

int32_t rcx_4 = arg1[1].d
*(arg1 + 0xc) = rsi
arg1[1].d = rcx_4 + 1
*arg1 = rdi
return (zx.q(rcx_4) << 4) + rdi
