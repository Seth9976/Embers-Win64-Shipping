// 函数: sub_1429008f0
// 地址: 0x1429008f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg1
void* rsi = arg2 + 0xfc
int32_t rax = arg1[1]
int32_t rdi = 3
uint32_t r9 = zx.d(r8.w)
uint32_t r8_1 = r8 u>> 0x10
uint32_t r10 = zx.d(rax.w)
int32_t r11 = 5
uint32_t rax_1 = rax u>> 0x10

while (true)
    rsi -= 0x10
    rax_1 = zx.d(((rax_1 << 0xb).w | (rax_1 u>> 5).w) - ((not.d(r10)).w & r9.w) - (r10.w & r8_1.w)
        - (*(rsi + 0x10)).w)
    r10 = zx.d(((r10 << 0xd).w | (r10 u>> 3).w) - ((not.d(r8_1)).w & rax_1.w) - (r8_1.w & r9.w)
        - (*(rsi + 0xc)).w)
    r8_1 = zx.d(((r8_1 << 0xe).w | (r8_1 u>> 2).w) - ((not.d(r9)).w & r10.w) - (rax_1.w & r9.w)
        - (*(rsi + 8)).w)
    r9 = zx.d(((r9 << 0xf).w | (r9 u>> 1).w) - ((not.d(rax_1)).w & r8_1.w) - (rax_1.w & r10.w)
        - (*(rsi + 4)).w)
    int32_t temp0_1 = r11
    r11 -= 1
    
    if (temp0_1 == 1)
        int32_t temp1_1 = rdi
        rdi -= 1
        
        if (temp1_1 == 1)
            break
        
        r11.b = rdi == 2
        r11 += 5
        rax_1 = zx.d(rax_1.w - (*(arg2 + ((zx.q(r10) & 0x3f) << 2))).w)
        r10 = zx.d(r10.w - (*(arg2 + ((zx.q(r8_1) & 0x3f) << 2))).w)
        r8_1 = zx.d(r8_1.w - (*(arg2 + ((zx.q(r9) & 0x3f) << 2))).w)
        r9 = zx.d(r9.w - (*(arg2 + ((zx.q(rax_1) & 0x3f) << 2))).w)

uint32_t result = rax_1 << 0x10 | r10
*arg1 = r8_1 << 0x10 | r9
arg1[1] = result
return result
