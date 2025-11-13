// 函数: sub_142808f40
// 地址: 0x142808f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi_1 = *(arg1 + 0xc) & 0x7fffffff
int32_t* rsi
int32_t rdi_2

if (rdi_1 != 0)
    rdi_2 = rdi_1 * 2
    
    if (rdi_1 == neg.d(rdi_1))
        rsi = nullptr
    else
        rsi = sub_142807490(arg1, zx.q(rdi_2) * 0xc, 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
else
    rdi_2 = 1
    rsi = sub_142807490(arg1, zx.q(rdi_2) * 0xc, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

sub_1428077a0(rsi, &rsi[zx.q(arg1[1].d) * 3], *arg1)
int32_t* rdx_3 = &rsi[zx.q(arg1[1].d) * 3]

if (rdx_3 != 0)
    *rdx_3 = *arg2
    rdx_3[1] = arg2[1]
    rdx_3[2] = arg2[2]

if (*(arg1 + 0xc) s>= 0)
    int64_t rbp_1 = *arg1
    
    if (rbp_1 != 0)
        class physx::PxAllocatorCallback* rax_8 = physx::shdfnd::getAllocator()
        int64_t r8_1 = *rax_8
        (*(r8_1 + 0x10))(rax_8, rbp_1, r8_1)

uint64_t rcx_4 = zx.q(arg1[1].d)
*arg1 = rsi
*(arg1 + 0xc) = rdi_2
arg1[1].d = rcx_4.d + 1
return &rsi[rcx_4 * 3]
