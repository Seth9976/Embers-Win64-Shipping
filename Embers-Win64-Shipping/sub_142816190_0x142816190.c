// 函数: sub_142816190
// 地址: 0x142816190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0xc) & 0x7fffffff
int32_t rbp
int32_t* rdi

if (rax_1 != 0)
    rbp = rax_1 * 2
    
    if (rbp == 0)
        rdi = nullptr
    else
        rdi = sub_142815ed0(arg1, zx.q(rbp) << 3, 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
else
    rbp = rax_1 + 1
    rdi = sub_142815ed0(arg1, zx.q(rbp) << 3, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

int32_t* rcx = rdi
int32_t* rdx_2 = *arg1
void* r8_2 = &rdi[zx.q(arg1[1].d) * 2]

if (r8_2 u> rdi)
    do
        if (rcx != 0)
            *rcx = *rdx_2
            rcx[1] = rdx_2[1]
        
        rcx = &rcx[2]
        rdx_2 = &rdx_2[2]
    while (rcx u< r8_2)

void* rcx_1 = &rdi[zx.q(arg1[1].d) * 2]

if (rcx_1 != 0)
    *rcx_1 = *arg2
    *(rcx_1 + 4) = arg2[1]

if (*(arg1 + 0xc) s>= 0)
    int64_t rsi_1 = *arg1
    
    if (rsi_1 != 0)
        class physx::PxAllocatorCallback* rax_8 = physx::shdfnd::getAllocator()
        int64_t r8_3 = *rax_8
        (*(r8_3 + 0x10))(rax_8, rsi_1, r8_3)

uint64_t rcx_3 = zx.q(arg1[1].d)
*(arg1 + 0xc) = rbp
*arg1 = rdi
arg1[1].d = rcx_3.d + 1
return &rdi[rcx_3 * 2]
