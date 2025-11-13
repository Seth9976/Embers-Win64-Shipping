// 函数: sub_1427ccc80
// 地址: 0x1427ccc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi_1 = *(arg1 + 0xc) & 0x7fffffff
int32_t rsi_2
int64_t rdi

if (rsi_1 != 0)
    rsi_2 = rsi_1 * 2
    
    if (rsi_1 == neg.d(rsi_1))
        rdi = 0
    else
        rdi = sub_1427cca00(arg1, zx.q(rsi_2), 
            "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
else
    rsi_2 = 1
    rdi = sub_1427cca00(arg1, zx.q(rsi_2), 
        "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

int64_t rax_3 = zx.q(arg1[1].d) + rdi

if (rax_3 u> rdi)
    memcpy(rdi, *arg1, rax_3.d - rdi.d)

uint64_t rcx_1 = zx.q(arg1[1].d)

if (rcx_1 != neg.q(rdi))
    *(rcx_1 + rdi) = *arg2

if (*(arg1 + 0xc) s>= 0)
    int64_t rbp_1 = *arg1
    
    if (rbp_1 != 0)
        class physx::PxAllocatorCallback* rax_6 = physx::shdfnd::getAllocator()
        int64_t r8_2 = *rax_6
        (*(r8_2 + 0x10))(rax_6, rbp_1, r8_2)

uint64_t rcx_4 = zx.q(arg1[1].d)
*(arg1 + 0xc) = rsi_2
*arg1 = rdi
arg1[1].d = rcx_4.d + 1
return rdi + rcx_4
