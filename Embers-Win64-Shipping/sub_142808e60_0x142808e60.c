// 函数: sub_142808e60
// 地址: 0x142808e60
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
        rdi = (*(*rcx + 8))(rcx, zx.q(rsi) << 3, "<no allocation names in this config>", 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
else
    rsi = rax_1 + 1
    rcx = **arg1
    rdi = (*(*rcx + 8))(rcx, zx.q(rsi) << 3, "<no allocation names in this config>", 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sArray.h", 
        0x25d)
uint64_t rcx_1 = zx.q(arg1[2].d)

if (rdi + (rcx_1 << 3) u> rdi)
    memcpy(rdi, arg1[1], (rcx_1 << 3).d)

int64_t* rcx_3 = rdi + (zx.q(arg1[2].d) << 3)

if (rcx_3 != 0)
    *rcx_3 = *arg2

if (*(arg1 + 0x14) s>= 0)
    int64_t rdx_3 = arg1[1]
    
    if (rdx_3 != 0)
        int64_t* rcx_4 = **arg1
        (*(*rcx_4 + 0x10))(rcx_4, rdx_3)

uint64_t rcx_5 = zx.q(arg1[2].d)
arg1[1] = rdi
*(arg1 + 0x14) = rsi
arg1[2].d = rcx_5.d + 1
return rdi + (rcx_5 << 3)
