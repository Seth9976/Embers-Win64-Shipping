// 函数: sub_1427d10d0
// 地址: 0x1427d10d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0xc) & 0x7fffffff
int32_t rsi
int64_t rdi

if (rax_1 != 0)
    rsi = rax_1 * 2
    
    if (rsi == 0)
        rdi = 0
    else
        rdi = sub_1427d0a30(arg1, zx.q(rsi) << 3, 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
else
    rsi = rax_1 + 1
    rdi = sub_1427d0a30(arg1, zx.q(rsi) << 3, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

uint64_t rcx = zx.q(arg1[1].d)

if (rdi + (rcx << 3) u> rdi)
    memcpy(rdi, *arg1, (rcx << 3).d)

int64_t* rcx_2 = rdi + (zx.q(arg1[1].d) << 3)

if (rcx_2 != 0)
    *rcx_2 = *arg2

if (*(arg1 + 0xc) s>= 0)
    int64_t rbp_1 = *arg1
    
    if (rbp_1 != 0)
        class physx::PxAllocatorCallback* rax_6 = physx::shdfnd::getAllocator()
        int64_t r8_2 = *rax_6
        (*(r8_2 + 0x10))(rax_6, rbp_1, r8_2)

uint64_t rcx_4 = zx.q(arg1[1].d)
*(arg1 + 0xc) = rsi
*arg1 = rdi
arg1[1].d = rcx_4.d + 1
return rdi + (rcx_4 << 3)
