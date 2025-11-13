// 函数: sub_142900a40
// 地址: 0x142900a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = *arg1
int32_t rdi = 3
uint32_t r10 = arg1[1]
uint32_t r8_1 = r9 u>> 0x10
uint32_t rax_1 = r10 u>> 0x10
int32_t r11 = 5
int64_t rsi = arg2

while (true)
    rsi += 0x10
    uint32_t rcx_2 =
        zx.d(((not.d(rax_1)).w & r8_1.w) + (rax_1.w & r10.w) + (*(rsi - 0x10)).w + r9.w)
    r9 = rcx_2 u>> 0xf | (rcx_2 * 2)
    uint64_t rcx_6 = zx.q(((not.d(r9)).w & r10.w) + (rax_1.w & r9.w) + (*(rsi - 0xc)).w + r8_1.w)
    r8_1 = rcx_6.d u>> 0xe | (rcx_6 << 2).d
    uint64_t rcx_10 = zx.q(((not.d(r8_1)).w & rax_1.w) + (r8_1.w & r9.w) + (*(rsi - 8)).w + r10.w)
    r10 = rcx_10.d u>> 0xd | (rcx_10 << 3).d
    uint32_t rcx_14 = zx.d(((not.d(r10)).w & r9.w) + (r10.w & r8_1.w) + (*(rsi - 4)).w + rax_1.w)
    rax_1 = rcx_14 u>> 0xb | rcx_14 << 5
    int32_t temp0_1 = r11
    r11 -= 1
    
    if (temp0_1 == 1)
        int32_t temp1_1 = rdi
        rdi -= 1
        
        if (temp1_1 == 1)
            break
        
        r11.b = rdi == 2
        r11 += 5
        r9 += *(arg2 + ((zx.q(rax_1) & 0x3f) << 2))
        r8_1 += *(arg2 + ((zx.q(r9) & 0x3f) << 2))
        r10 += *(arg2 + ((zx.q(r8_1) & 0x3f) << 2))
        rax_1 += *(arg2 + ((zx.q(r10) & 0x3f) << 2))

uint32_t result = rax_1 << 0x10 | zx.d(r10.w)
*arg1 = r8_1 << 0x10 | zx.d(r9.w)
arg1[1] = result
return result
