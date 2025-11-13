// 函数: sub_1427d12a0
// 地址: 0x1427d12a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi_1 = *(arg1 + 0xc) & 0x7fffffff
void* const rsi
int32_t rdi_2

if (rdi_1 != 0)
    rdi_2 = rdi_1 * 2
    
    if (rdi_1 == neg.d(rdi_1))
        rsi = nullptr
    else
        rsi = sub_1427d0b70(arg1, zx.q(rdi_2) * 0x28, 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
else
    rdi_2 = 1
    rsi = sub_1427d0b70(arg1, zx.q(rdi_2) * 0x28, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

sub_1427d0c10(rsi, rsi + zx.q(arg1[1].d) * 0x28, *arg1)
int64_t* r14 = rsi + zx.q(arg1[1].d) * 0x28

if (r14 != 0)
    *r14 = *arg2
    r14[1] = arg2[1]
    sub_1427d0650(&r14[2], &arg2[2])
    r14[4].b = arg2[4].b

void* rcx_4 = *arg1
sub_1427d0df0(rcx_4, rcx_4 + zx.q(arg1[1].d) * 0x28)

if (*(arg1 + 0xc) s>= 0)
    int64_t rbp_1 = *arg1
    
    if (rbp_1 != 0)
        class physx::PxAllocatorCallback* rax_9 = physx::shdfnd::getAllocator()
        int64_t r8_1 = *rax_9
        (*(r8_1 + 0x10))(rax_9, rbp_1, r8_1)

uint64_t rcx_6 = zx.q(arg1[1].d)
*arg1 = rsi
*(arg1 + 0xc) = rdi_2
arg1[1].d = rcx_6.d + 1
return rsi + rcx_6 * 0x28
