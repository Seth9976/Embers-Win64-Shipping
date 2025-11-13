// 函数: sub_1427d11b0
// 地址: 0x1427d11b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0xc) & 0x7fffffff
int32_t rbp
int64_t* rsi

if (rax_1 != 0)
    rbp = rax_1 * 2
    
    if (rbp == 0)
        rsi = nullptr
    else
        rsi = sub_1427d0ad0(arg1, zx.q(rbp) << 4, 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
else
    rbp = rax_1 + 1
    rsi = sub_1427d0ad0(arg1, zx.q(rbp) << 4, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

int64_t* rcx = rsi
int64_t* rdx_2 = *arg1
void* r8_2 = &rsi[zx.q(arg1[1].d) * 2]

if (r8_2 u> rsi)
    do
        if (rcx != 0)
            *rcx = *rdx_2
            rcx[1] = rdx_2[1]
        
        rcx = &rcx[2]
        rdx_2 = &rdx_2[2]
    while (rcx u< r8_2)

void* rcx_3 = &rsi[arg1[1] * 2]

if (zx.q(arg1[1].d) << 4 != neg.q(rsi))
    *rcx_3 = *arg2
    *(rcx_3 + 8) = arg2[1]

if (*(arg1 + 0xc) s>= 0)
    int64_t rdi_1 = *arg1
    
    if (rdi_1 != 0)
        class physx::PxAllocatorCallback* rax_7 = physx::shdfnd::getAllocator()
        int64_t r8_3 = *rax_7
        (*(r8_3 + 0x10))(rax_7, rdi_1, r8_3)

int32_t rcx_5 = arg1[1].d
*arg1 = rsi
*(arg1 + 0xc) = rbp
arg1[1].d = rcx_5 + 1
return &rsi[zx.q(rcx_5) * 2]
