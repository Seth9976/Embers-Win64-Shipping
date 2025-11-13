// 函数: sub_142c00490
// 地址: 0x142c00490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = sub_142bffe60(arg2 + 0x18)
void* rcx_1 = *(arg1 + 0x18)
int64_t rsi = sx.q(*(arg1 + 0x24))
int16_t rdi = *(rax + 4)
uint32_t r9 = *(rcx_1 + 0x2c)

if (r9 == 0)
    r9 = sub_142bf7870(rcx_1)

int64_t rcx_3 = rsi * sx.q(rdi)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r9)
int32_t rax_6 = (temp3 - temp2) s>> 1

if (rcx_3 s< 0)
    rax_6 = neg.d(rax_6)

*arg3 = (divs.dp.q(sx.o(sx.q(rax_6) + rcx_3), sx.q(r9))).d
void* rcx_5 = *(arg1 + 0x18)
int16_t rdi_1 = *(rax + 8)
int64_t rsi_1 = sx.q(*(arg1 + 0x24))
uint32_t r8 = *(rcx_5 + 0x2c)

if (r8 == 0)
    r8 = sub_142bf7870(rcx_5)

int64_t rcx_7 = rsi_1 * sx.q(rdi_1)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r8)
int32_t rax_16 = (temp5 - temp4) s>> 1

if (rcx_7 s< 0)
    rax_16 = neg.d(rax_16)

arg3[1] = (divs.dp.q(sx.o(sx.q(rax_16) + rcx_7), sx.q(r8))).d
void* rcx_9 = *(arg1 + 0x18)
int16_t rdi_2 = *(rax + 0xc)
int64_t rsi_2 = sx.q(*(arg1 + 0x24))
uint32_t r8_1 = *(rcx_9 + 0x2c)

if (r8_1 == 0)
    r8_1 = sub_142bf7870(rcx_9)

int64_t rcx_11 = rsi_2 * sx.q(rdi_2)
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(r8_1)
int32_t rax_26 = (temp7 - temp6) s>> 1

if (rcx_11 s< 0)
    rax_26 = neg.d(rax_26)

arg3[2] = (divs.dp.q(sx.o(sx.q(rax_26) + rcx_11), sx.q(r8_1))).d
return zx.q(*rax)
