// 函数: sub_142bf9230
// 地址: 0x142bf9230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
uint32_t r9_4 = (zx.d(*(arg1 + 0xd)) << 0x10) + (zx.d(*(arg1 + 0xe)) << 8)
    + (zx.d(*(arg1 + 0xc)) << 0x18) + zx.d(*(arg1 + 0xf))
int32_t r9_5 = r9_4 - 1
void* rdx_1

if (r9_4 - 1 s< 0)
label_142bf92da:
    rdx_1 = &data_14369a5b8
else
    while (true)
        uint64_t rax_6 = zx.q((r9_5 + r10) u>> 1)
        uint64_t r8 = zx.q(rax_6.d)
        uint64_t rax_7 = rax_6 * 3
        void* rdx = arg1 + 0x10 + (rax_7 << 2)
        uint32_t rcx_3 = (zx.d(*(arg1 + 0x10 + (rax_7 << 2) + 1)) << 0x10)
            + (zx.d(*(arg1 + 0x10 + (rax_7 << 2) + 2)) << 8) + (zx.d(*rdx) << 0x18)
        
        if (arg2 u< rcx_3 + zx.d(*(rdx + 3)))
            r9_5 = (r8 - 1).d
        else
            if (arg2 u<= (zx.d(*(rdx + 5)) << 0x10) + (zx.d(*(rdx + 6)) << 8)
                    + (zx.d(*(rdx + 4)) << 0x18) + zx.d(*(rdx + 7)))
                rdx_1 = arg1 + 0x10 + r8 * 0xc
                break
            
            r10 = (r8 + 1).d
        
        if (r10 s> r9_5)
            goto label_142bf92da

uint32_t rcx_13 =
    (zx.d(*(rdx_1 + 9)) << 0x10) + (zx.d(*(rdx_1 + 0xa)) << 8) + (zx.d(*(rdx_1 + 8)) << 0x18)
uint32_t result = zx.d(*(rdx_1 + 0xb))
uint32_t rcx_14 = rcx_13 + result

if (rcx_13 == neg.d(result))
    result.b = 0
    return result

result.b = 1
*arg3 = rcx_14
return result
