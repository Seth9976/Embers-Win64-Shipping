// 函数: sub_1427e52a0
// 地址: 0x1427e52a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0x14) & 0x7fffffff
int32_t rsi
int64_t rdi
int64_t* rcx

if (rax_1 != 0)
    rsi = rax_1 * 2
    
    if (rsi == 0)
        rdi = 0
    else
        rcx = **arg1
        rdi = (*(*rcx + 8))(rcx, zx.q(rsi) << 4, "<no allocation names in this config>", 
            "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
else
    rsi = rax_1 + 1
    rcx = **arg1
    rdi = (*(*rcx + 8))(rcx, zx.q(rsi) << 4, "<no allocation names in this config>", 
        "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
    "sArray.h", 
        0x25d)
int32_t rcx_1 = arg1[2].d

if ((zx.q(rcx_1) << 4) + rdi u> rdi)
    memcpy(rdi, arg1[1], rcx_1 << 4)

uint64_t rax_9 = zx.q(arg1[2].d) << 4

if (rax_9 != neg.q(rdi))
    *(rax_9 + rdi) = *arg2

if (*(arg1 + 0x14) s>= 0)
    int64_t rdx_3 = arg1[1]
    
    if (rdx_3 != 0)
        int64_t* rcx_4 = **arg1
        (*(*rcx_4 + 0x10))(rcx_4, rdx_3)

int32_t rcx_5 = arg1[2].d
*(arg1 + 0x14) = rsi
arg1[2].d = rcx_5 + 1
arg1[1] = rdi
return (zx.q(rcx_5) << 4) + rdi
