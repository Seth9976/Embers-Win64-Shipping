// 函数: sub_1403e0590
// 地址: 0x1403e0590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg1)
int32_t rax_2 = temp3 ^ temp2
int32_t r10

if (rax_2 == temp2)
    r10 = 0x20
else
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_2 - temp2)
    r10 = 0x1f - temp0_1

int32_t temp5
int32_t temp6
temp5:temp6 = sx.q(arg2)
int32_t rax_7 = temp6 ^ temp5
int32_t r11_1 = arg1 << (r10 - 1).b
int32_t r9

if (rax_7 == temp5)
    r9 = 0x20
else
    uint64_t rflags_2
    int32_t temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(rax_7 - temp5)
    r9 = 0x1f - temp0_2

int32_t rbx_1 = arg2 << (r9 - 1).b
int32_t r10_3 = r10 - 1 - (r9 - 1) - arg3
int32_t rdx_2 = sx.d((divs.dp.d(0:0x1fffffff, rbx_1 s>> 0x10)).w)
int32_t r8_3 = ((zx.d(r11_1.w) * rdx_2) s>> 0x10) + (r11_1 s>> 0x10) * rdx_2
int32_t r11_2 = r11_1 - (((sx.q(r8_3) * sx.q(rbx_1)) s>> 0x20).d << 3)
int32_t rdx_5 = rdx_2 * (r11_2 s>> 0x10) + r8_3 + ((zx.d(r11_2.w) * rdx_2) s>> 0x10)

if (r10_3 + 0x1d s>= 0)
    if (r10_3 + 0x1d s>= 0x20)
        return 0
    
    return zx.q(rdx_5 s>> (r10_3 + 0x1d).b)

char r10_5 = (neg.d(r10_3 + 0x1d)).b
int32_t rax_18 = 0x80000000 s>> r10_5
int32_t r8_4 = 0x7fffffff s>> r10_5

if (rax_18 s<= r8_4)
    if (rdx_5 s> r8_4)
        return zx.q(r8_4 << r10_5)
    
    if (rdx_5 s< rax_18)
        rdx_5 = rax_18
    
    rax_18 = rdx_5
else if (rdx_5 s<= rax_18)
    int32_t rax_19 = rdx_5
    
    if (rdx_5 s< r8_4)
        rax_19 = r8_4
    
    return zx.q(rax_19 << r10_5)

return zx.q(rax_18 << r10_5)
