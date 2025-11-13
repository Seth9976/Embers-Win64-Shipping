// 函数: sub_142907fc0
// 地址: 0x142907fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(8)
int32_t r11 = 0
char const* const r10_1

if (arg1 != 0)
    r10_1 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./"

if (arg1 == 0 || (*(arg1 + 0x5c) & 2) == 0)
    r10_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"

if (arg4 s<= 0)
    *arg2 = 0
    return 0

void* r8 = arg3 + 1

do
    char rax_1 = *(r8 - 1)
    char* rcx_6
    
    if (arg4 s< 3)
        rcx_6 = zx.q(zx.d(rax_1) << 0x10)
        
        if (arg4 == 2)
            rcx_6 = zx.q(rcx_6.d) | zx.q(zx.d(*r8) << 8)
        
        *arg2 = r10_1[rcx_6 u>> 0x12]
        *(arg2 + 1) = *((zx.q((rcx_6 u>> 0xc).d) & 0x3f) + r10_1)
        char rax_23
        
        if (arg4 != 1)
            rax_23 = *((zx.q((rcx_6 u>> 6).d) & 0x3f) + r10_1)
        else
            rax_23 = 0x3d
        
        *(arg2 + 2) = rax_23
        rcx_6.b = 0x3d
    else
        uint64_t rcx_4 = (zx.q(rax_1) << 8 | zx.q(*r8)) << 8 | zx.q(*(r8 + 1))
        *arg2 = r10_1[rcx_4 u>> 0x12]
        *(arg2 + 1) = *((zx.q((rcx_4 u>> 0xc).d) & 0x3f) + r10_1)
        *(arg2 + 2) = *((zx.q((rcx_4 u>> 6).d) & 0x3f) + r10_1)
        rcx_6 = zx.q(*((zx.q(rcx_4.d) & 0x3f) + r10_1))
    
    char* rax_24 = arg2 + 3
    r11 += 4
    arg2 = &rax_24[1]
    *rax_24 = rcx_6.b
    r8 += 3
    arg4 -= 3
while (arg4 s> 0)

*arg2 = 0
return zx.q(r11)
