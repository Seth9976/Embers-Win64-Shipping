// 函数: sub_142816840
// 地址: 0x142816840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0xc) & 0x7fffffff
int64_t* r14
int32_t r15

if (rax_1 != 0)
    r15 = rax_1 * 2
    
    if (r15 == 0)
        r14 = nullptr
    else
        r14 = sub_142816700(arg1, zx.q(r15) * 0x18, 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
else
    r15 = rax_1 + 1
    r14 = sub_142816700(arg1, zx.q(r15) * 0x18, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

int64_t* rbx = r14
int64_t* rdi = *arg1
void* rbp = &r14[zx.q(arg1[1].d) * 3]

if (rbp u> r14)
    do
        if (rbx != 0)
            *rbx = *rdi
            sub_142816680(&rbx[1], &rdi[1])
        
        rbx = &rbx[3]
        rdi = &rdi[3]
    while (rbx u< rbp)

void* rcx_3 = &r14[zx.q(arg1[1].d) * 3]

if (rcx_3 != 0)
    *rcx_3 = *arg2
    sub_142816680(rcx_3 + 8, &arg2[1])

void* rcx_5 = *arg1
sub_1427f5640(rcx_5, rcx_5 + zx.q(arg1[1].d) * 0x18)

if (*(arg1 + 0xc) s>= 0)
    int64_t rbx_1 = *arg1
    
    if (rbx_1 != 0)
        class physx::PxAllocatorCallback* rax_9 = physx::shdfnd::getAllocator()
        int64_t r8_1 = *rax_9
        (*(r8_1 + 0x10))(rax_9, rbx_1, r8_1)

uint64_t rcx_7 = zx.q(arg1[1].d)
*arg1 = r14
*(arg1 + 0xc) = r15
arg1[1].d = rcx_7.d + 1
return &r14[rcx_7 * 3]
