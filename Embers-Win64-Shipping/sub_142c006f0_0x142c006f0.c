// 函数: sub_142c006f0
// 地址: 0x142c006f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1 = sub_142bff350(sub_142c00060(arg2 + 0x110), arg1, arg3, arg4)
char rdi = rax_1

if (rax_1 == 0)
    char rax_3 = sub_142bfe670(sub_142bffd60(arg2 + 0x38), arg3, arg4)
    rdi = rax_3
    
    if (rax_3 == 0)
        char rax_5 = sub_142c0b2f0(sub_142bff950(arg2 + 0x40), arg3, arg4)
        rdi = rax_5
        
        if (rax_5 == 0)
            char rax_7 = sub_142c0f720(sub_142bffb60(arg2 + 0x48), arg1, arg3, arg4)
            rdi = rax_7
            
            if (rax_7 == 0)
                rdi = sub_142bfe240(sub_142bff670(arg2 + 0x108), arg1, arg3, arg4)

void* rcx_10 = *(arg1 + 0x18)
int16_t rbp_1 = *arg4
int64_t r14_1 = sx.q(*(arg1 + 0x20))
uint32_t r8_5 = *(rcx_10 + 0x2c)

if (r8_5 == 0)
    r8_5 = sub_142bf7870(rcx_10)

int64_t rcx_12 = r14_1 * sx.q(rbp_1)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r8_5)
int32_t rax_15 = (temp3 - temp2) s>> 1

if (rcx_12 s< 0)
    rax_15 = neg.d(rax_15)

int16_t rbp_2 = arg4[1].w
*arg4 = (divs.dp.q(sx.o(sx.q(rax_15) + rcx_12), sx.q(r8_5))).d
void* rcx_14 = *(arg1 + 0x18)
int64_t r14_2 = sx.q(*(arg1 + 0x24))
uint32_t r8_6 = *(rcx_14 + 0x2c)

if (r8_6 == 0)
    r8_6 = sub_142bf7870(rcx_14)

int64_t rcx_16 = r14_2 * sx.q(rbp_2)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r8_6)
int32_t rax_25 = (temp5 - temp4) s>> 1

if (rcx_16 s< 0)
    rax_25 = neg.d(rax_25)

int16_t rbp_3 = arg4[2].w
arg4[1] = (divs.dp.q(sx.o(sx.q(rax_25) + rcx_16), sx.q(r8_6))).d
void* rcx_18 = *(arg1 + 0x18)
int64_t r14_3 = sx.q(*(arg1 + 0x20))
uint32_t r8_7 = *(rcx_18 + 0x2c)

if (r8_7 == 0)
    r8_7 = sub_142bf7870(rcx_18)

int64_t rcx_20 = r14_3 * sx.q(rbp_3)
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(r8_7)
int32_t rax_35 = (temp7 - temp6) s>> 1

if (rcx_20 s< 0)
    rax_35 = neg.d(rax_35)

int16_t rbp_4 = arg4[3].w
arg4[2] = (divs.dp.q(sx.o(sx.q(rax_35) + rcx_20), sx.q(r8_7))).d
void* rcx_22 = *(arg1 + 0x18)
int64_t r14_4 = sx.q(*(arg1 + 0x24))
uint32_t r8_8 = *(rcx_22 + 0x2c)

if (r8_8 == 0)
    r8_8 = sub_142bf7870(rcx_22)

int64_t rcx_24 = r14_4 * sx.q(rbp_4)
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(r8_8)
int32_t rax_45 = (temp9 - temp8) s>> 1

if (rcx_24 s< 0)
    rax_45 = neg.d(rax_45)

arg4[3] = (divs.dp.q(sx.o(sx.q(rax_45) + rcx_24), sx.q(r8_8))).d
return zx.q(rdi)
