// 函数: sub_1428cef80
// 地址: 0x1428cef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t result = sub_1428cf200(arg1, arg2, arg3)

if (result s< 0)
    return result

uint64_t rcx = zx.q(arg3[0x3c])
uint32_t rax = (rcx << 2).d
int64_t r9_1 = sx.q(rax)

if (rax s> 0)
    int64_t r10_1 = 0
    void* r8_1 = &arg3[2 + r9_1]
    void* rax_1 = &arg3[2]
    
    do
        int32_t rdx = *(rax_1 - 8)
        r10_1 += 4
        int32_t rcx_1 = *(r8_1 - 8)
        r8_1 -= 0x10
        *(rax_1 - 8) = rcx_1
        rax_1 += 0x10
        int32_t rcx_2 = *(r8_1 + 0xc)
        r9_1 -= 4
        *(r8_1 + 8) = rdx
        int32_t rdx_1 = *(rax_1 - 0x14)
        *(rax_1 - 0x14) = rcx_2
        int32_t rcx_3 = *(r8_1 + 0x10)
        *(r8_1 + 0xc) = rdx_1
        int32_t rdx_2 = *(rax_1 - 0x10)
        *(rax_1 - 0x10) = rcx_3
        int32_t rcx_4 = *(r8_1 + 0x14)
        *(r8_1 + 0x10) = rdx_2
        int32_t rdx_3 = *(rax_1 - 0xc)
        *(rax_1 - 0xc) = rcx_4
        *(r8_1 + 0x14) = rdx_3
    while (r10_1 s< r9_1)
    
    rcx = zx.q(arg3[0x3c])

int32_t i = 1

if (rcx.d s> 1)
    void* r10_2 = &arg3[1]
    
    do
        int32_t r9_2 = *(r10_2 + 0x10)
        r10_2 += 0x10
        int32_t rdx_4 = *(r10_2 - 4)
        i += 1
        int32_t r8_5 = *((zx.q(*((zx.q(*(r10_2 - 3)) << 2) + 0x14350ffc0)) << 2) + 0x1435113c0)
            ^ *((zx.q(*((zx.q(rdx_4) u>> 0x18 << 2) + 0x14350ffc0)) << 2) + 0x143510bc0)
            ^ *((zx.q(*((zx.q(rdx_4.b) << 2) + 0x14350ffc0)) << 2) + 0x1435117c0)
            ^ *((zx.q(*((zx.q(*(r10_2 - 2)) << 2) + 0x14350ffc0)) << 2) + 0x143510fc0)
        *(r10_2 - 4) = r8_5
        int32_t r8_7 = *((zx.q(*((zx.q((r9_2 u>> 0x10).b) << 2) + 0x14350ffc0)) << 2) + 0x143510fc0)
            ^ *((zx.q(*((zx.q((r9_2 u>> 8).b) << 2) + 0x14350ffc0)) << 2) + 0x1435113c0)
        int32_t r9_3 = *(r10_2 + 4)
        *r10_2 = r8_7 ^ *((zx.q(*((zx.q(r9_2) u>> 0x18 << 2) + 0x14350ffc0)) << 2) + 0x143510bc0)
            ^ *((zx.q(*((zx.q(r9_2.b) << 2) + 0x14350ffc0)) << 2) + 0x1435117c0)
        int32_t r8_11 =
            *((zx.q(*((zx.q((r9_3 u>> 0x10).b) << 2) + 0x14350ffc0)) << 2) + 0x143510fc0)
            ^ *((zx.q(*((zx.q((r9_3 u>> 8).b) << 2) + 0x14350ffc0)) << 2) + 0x1435113c0)
        int32_t r9_4 = *(r10_2 + 8)
        *(r10_2 + 4) = r8_11
            ^ *((zx.q(*((zx.q(r9_3) u>> 0x18 << 2) + 0x14350ffc0)) << 2) + 0x143510bc0)
            ^ *((zx.q(*((zx.q(r9_3.b) << 2) + 0x14350ffc0)) << 2) + 0x1435117c0)
        int32_t r8_15 =
            *((zx.q(*((zx.q((r9_4 u>> 0x10).b) << 2) + 0x14350ffc0)) << 2) + 0x143510fc0)
            ^ *((zx.q(*((zx.q((r9_4 u>> 8).b) << 2) + 0x14350ffc0)) << 2) + 0x1435113c0)
        *(r10_2 + 8) = r8_15
            ^ *((zx.q(*((zx.q(r9_4) u>> 0x18 << 2) + 0x14350ffc0)) << 2) + 0x143510bc0)
            ^ *((zx.q(*((zx.q(r9_4.b) << 2) + 0x14350ffc0)) << 2) + 0x1435117c0)
    while (i s< arg3[0x3c])

return 0
