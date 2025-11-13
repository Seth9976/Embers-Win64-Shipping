// 函数: sub_141a13310
// 地址: 0x141a13310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r11_1 = *arg1
    void* r9_1 = &arg1[7]
    void* r8_1 = *(r9_1 + 8)
    int64_t rbx_1 = sx.q(arg2) * 0x2c
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(rbx_1 + r11_1 + 0x28))
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t i = *(r9_1 + (rcx_1 << 2))
    void* r8_2 = r9_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *r8_2)
        if (i == arg2)
            *r8_2 = *(rbx_1 + r11_1 + 0x24)
            break
        
        r8_2 = r11_1 + 0x24 + sx.q(i) * 0x2c

void* r9_2 = &arg1[2]

if (*(arg1 + 0x34) != 0)
    *(sx.q(arg1[6].d) * 0x2c + *arg1) = arg2

int32_t rcx_5 = -1
int32_t* rax_10 = sx.q(arg2) * 0x2c + *arg1
*rax_10 = 0xffffffff

if (*(arg1 + 0x34) s> 0)
    rcx_5 = arg1[6].d

rax_10[1] = rcx_5
*(arg1 + 0x34) += 1
arg1[6].d = arg2
void* rax_11 = *(r9_2 + 0x10)

if (rax_11 != 0)
    r9_2 = rax_11

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
int32_t result = (temp1 + (temp0 & 0x1f)) s>> 5
int64_t result_1 = sx.q(result)
*(r9_2 + (result_1 << 2)) &= not.d(rol.d(1, arg2.b))
return result
