// 函数: sub_142b97340
// 地址: 0x142b97340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *arg1
int32_t r9 = arg1[1]
int32_t rbp = 1
int32_t r15 = 1

if (r10 s< 0)
    r10 = neg.d(r10)
    rbp = -1

if (r9 s< 0)
    r9 = neg.d(r9)
    r15 = -1

if (r10 == 0)
    if (r9 != 0)
        arg1[1] = r15 << 0x10
    
    return zx.q(r9)

if (r9 == 0)
    if (r10 != 0)
        *arg1 = rbp << 0x10
    
    return zx.q(r10)

int32_t rax_4

if (r10 u<= r9)
    rax_4 = (r10 u>> 1) + r9
else
    rax_4 = (r9 u>> 1) + r10

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(rax_4)
int32_t r8
r8.b = rax_4 u>= 0xaaaaaaaa u>> (0x1f - temp0).b
int32_t r11_1 = 0x1f - temp0 + 0xfffffff1 - r8
int32_t rax_9
int32_t r9_1
int32_t r10_1

if (r11_1 s<= 0)
    char rcx_4 = (neg.d(r11_1)).b
    r10_1 = r10 u>> rcx_4
    r9_1 = r9 u>> rcx_4
    rax_9 = rax_4 u>> rcx_4
else
    r10_1 = r10 << r11_1.b
    r9_1 = r9 << r11_1.b
    
    if (r10_1 u<= r9_1)
        rax_9 = (r10_1 u>> 1) + r9_1
    else
        rax_9 = (r9_1 u>> 1) + r10_1

int32_t rsi = 0x10000 - rax_9
int32_t rbx_4
int32_t r8_4
int32_t i

do
    rbx_4 = ((rsi * r10_1) s>> 0x10) + r10_1
    r8_4 = ((rsi * r9_1) s>> 0x10) + r9_1
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r8_4 * r8_4 + rbx_4 * rbx_4)
    int16_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(neg.d((temp1_1 + (temp0_1 & 0x1ff)) s>> 9) * ((rsi + 0x10000) s>> 8))
    i = (temp3_1 + zx.d(temp2_1)) s>> 0x10
    rsi += i
while (i s> 0)
int32_t rax_22 = rbx_4

if (rbp s< 0)
    rax_22 = neg.d(rax_22)

*arg1 = rax_22
int32_t rax_23 = r8_4

if (r15 s< 0)
    rax_23 = neg.d(rax_23)

arg1[1] = rax_23
int16_t temp4
int32_t temp5
temp4:temp5 = sx.q(rbx_4 * r10_1 + r8_4 * r9_1)

if (r11_1 s<= 0)
    return zx.q((((temp5 + zx.d(temp4)) s>> 0x10) + 0x10000) << (neg.d(r11_1)).b)

return zx.q((((temp5 + zx.d(temp4)) s>> 0x10) + 0x10000 + (1 << (r11_1.b - 1))) u>> r11_1.b)
