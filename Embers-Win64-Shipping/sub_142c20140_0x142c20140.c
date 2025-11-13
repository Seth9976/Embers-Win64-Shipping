// 函数: sub_142c20140
// 地址: 0x142c20140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = sub_142c1f910(arg1 + 0x78)
int128_t* const r8 = &data_14369a5d0

if (rax[6] u>= 4)
    r8 = *(rax + 0x10)

uint64_t result = zx.q(*(r8 + 1))
uint32_t rcx_2 = zx.d(*r8) << 8

if (rcx_2 == neg.d(result.d))
    void* rdx_2 = r8 + 4
    result = zx.q(*(r8 + 3))
    int32_t i = 0
    uint32_t r9_3 = zx.d(*(r8 + 2)) << 8
    
    if (r9_3 != neg.d(result.d))
        do
            if (*(rdx_2 + 4) == 1)
                result.b = 1
                return result
            
            i += 1
            rdx_2 = zx.q(*(rdx_2 + 3)) + rdx_2 + (zx.q(*(rdx_2 + 2)) << 8)
        while (i u< r9_3 + result.d)
else if (rcx_2 + result.d == 1)
    return sub_142c1fea0(r8) __tailcall

result.b = 0
return result
