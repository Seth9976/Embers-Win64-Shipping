// 函数: sub_1427f5ce0
// 地址: 0x1427f5ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0xc) & 0x7fffffff
int32_t rbp
int128_t* rdi

if (rax_1 != 0)
    rbp = rax_1 * 2
    
    if (rbp == 0)
        rdi = nullptr
    else
        rdi = sub_1427f5b40(arg1, zx.q(rbp) << 4, 
            "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
else
    rbp = rax_1 + 1
    rdi = sub_1427f5b40(arg1, zx.q(rbp) << 4, 
        "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

int128_t* rax_3 = rdi
int128_t* rcx = *arg1
void* rdx_4 = &rdi[zx.q(arg1[1].d)]

if (rdx_4 u> rdi)
    do
        if (rax_3 != 0)
            *rax_3 = *rcx
        
        rax_3 = &rax_3[1]
        rcx = &rcx[1]
    while (rax_3 u< rdx_4)

if (zx.q(arg1[1].d) << 4 != neg.q(rdi))
    rdi[arg1[1]] = *arg2

if (*(arg1 + 0xc) s>= 0)
    int64_t rsi_1 = *arg1
    
    if (rsi_1 != 0)
        class physx::PxAllocatorCallback* rax_7 = physx::shdfnd::getAllocator()
        int64_t r8_1 = *rax_7
        (*(r8_1 + 0x10))(rax_7, rsi_1, r8_1)

int32_t rcx_2 = arg1[1].d
*(arg1 + 0xc) = rbp
arg1[1].d = rcx_2 + 1
*arg1 = rdi
return &rdi[zx.q(rcx_2)]
