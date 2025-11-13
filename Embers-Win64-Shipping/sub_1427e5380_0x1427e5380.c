// 函数: sub_1427e5380
// 地址: 0x1427e5380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi_1 = *(arg1 + 0x14) & 0x7fffffff
int32_t rsi_2
int64_t rdi

if (rsi_1 != 0)
    rsi_2 = rsi_1 * 2
    
    if (rsi_1 != neg.d(rsi_1))
        goto label_1427e53c9
    
    rdi = 0
else
    rsi_2 = 1
label_1427e53c9:
    int64_t* rcx = **arg1
    rdi = (*(*rcx + 8))(rcx, zx.q(rsi_2) * 0x18, "<no allocation names in this config>", 
        "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

uint64_t rcx_2 = zx.q(arg1[2].d) * 0x18

if (rcx_2 + rdi u> rdi)
    memcpy(rdi, arg1[1], (rcx_2 s/ 0x18 * 3).d << 3)

int128_t* rax_10 = rdi + zx.q(arg1[2].d) * 0x18

if (rax_10 != 0)
    *rax_10 = *arg2
    rax_10[1].q = arg2[1].q

if (*(arg1 + 0x14) s>= 0)
    int64_t rdx_6 = arg1[1]
    
    if (rdx_6 != 0)
        int64_t* rcx_5 = **arg1
        (*(*rcx_5 + 0x10))(rcx_5, rdx_6)

uint64_t rcx_6 = zx.q(arg1[2].d)
*(arg1 + 0x14) = rsi_2
arg1[1] = rdi
arg1[2].d = rcx_6.d + 1
return rdi + rcx_6 * 0x18
