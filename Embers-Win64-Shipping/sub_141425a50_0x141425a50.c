// 函数: sub_141425a50
// 地址: 0x141425a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r11_1 = *arg1
    void* r9_1 = &arg1[7]
    void* r8_1 = *(r9_1 + 8)
    int64_t rbx_2 = sx.q(arg2) * 0xc0
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(rbx_2 + r11_1 + 0xb4))
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t i = *(r9_1 + (rcx_1 << 2))
    void* r8_2 = r9_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *r8_2)
        if (i == arg2)
            *r8_2 = *(rbx_2 + r11_1 + 0xb0)
            break
        
        r8_2 = r11_1 + 0xb0 + sx.q(i) * 0xc0

void* r11_2 = &arg1[2]

if (*(arg1 + 0x34) != 0)
    *(sx.q(arg1[6].d) * 0xc0 + *arg1) = arg2

int32_t rcx_7 = -1
int32_t* rax_11 = sx.q(arg2) * 0xc0 + *arg1
*rax_11 = 0xffffffff

if (*(arg1 + 0x34) s> 0)
    rcx_7 = arg1[6].d

rax_11[1] = rcx_7
*(arg1 + 0x34) += 1
arg1[6].d = arg2
void* rax_12 = *(r11_2 + 0x10)

if (rax_12 != 0)
    r11_2 = rax_12

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
int32_t result = (temp1 + (temp0 & 0x1f)) s>> 5
int64_t result_1 = sx.q(result)
*(r11_2 + (result_1 << 2)) &= not.d(rol.d(1, arg2.b))
return result
