// 函数: sub_1403e3870
// 地址: 0x1403e3870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg1)
int32_t rax_2 = temp3 ^ temp2
int32_t r11

if (rax_2 == temp2)
    r11 = 0x20
else
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_2 - temp2)
    r11 = 0x1f - temp0_1

int32_t rbx_1 = arg1 << (r11 - 1).b
int32_t r8_1 = rbx_1 s>> 0x10
int32_t temp0_2 = divs.dp.d(0:0x1fffffff, r8_1)
int32_t r9 = sx.d(temp0_2.w)
int32_t rdx_5 = (neg.d(r9 * r8_1) << 3) - ((zx.d(rbx_1.w) * r9) s>> 0x10 << 3)
int32_t rcx_6 = 0x3d - (r11 - 1) - arg2
int32_t r8_9 = (((temp0_2 s>> 0xf) + 1) s>> 1) * rdx_5 + ((zx.d(rdx_5.w) * r9) s>> 0x10)
    + (rdx_5 s>> 0x10) * r9 + (temp0_2 << 0x10)

if (rcx_6 s> 0)
    if (rcx_6 s>= 0x20)
        return 0
    
    return zx.q(r8_9 s>> rcx_6.b)

char rcx_7 = (neg.d(rcx_6)).b
int32_t rax_9 = 0x80000000 s>> rcx_7
int32_t rdx_8 = 0x7fffffff s>> rcx_7

if (rax_9 s<= rdx_8)
    if (r8_9 s> rdx_8)
        return zx.q(rdx_8 << rcx_7)
    
    if (r8_9 s< rax_9)
        r8_9 = rax_9
    
    rax_9 = r8_9
else if (r8_9 s<= rax_9)
    int32_t rax_10 = r8_9
    
    if (r8_9 s< rdx_8)
        rax_10 = rdx_8
    
    return zx.q(rax_10 << rcx_7)

return zx.q(rax_9 << rcx_7)
