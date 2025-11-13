// 函数: sub_1418ebff0
// 地址: 0x1418ebff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = &arg1[7]
    void* r11_1 = *arg1
    void* r8_1 = *(r9_1 + 8)
    int64_t rbx_2 = sx.q(arg2) * 2
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(r11_1 + (rbx_2 << 3) + 0xc))
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t i = *(r9_1 + (rcx_1 << 2))
    void* r8_2 = r9_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *r8_2)
        if (i == arg2)
            *r8_2 = *(r11_1 + (rbx_2 << 3) + 8)
            break
        
        r8_2 = r11_1 + 8 + (sx.q(i) << 4)

void* r11_2 = &arg1[2]

if (*(arg1 + 0x34) != 0)
    *(*arg1 + sx.q(arg1[6].d) * 0x10) = arg2

int32_t rax_8 = -1
int32_t* r8_6 = (sx.q(arg2) << 4) + *arg1
*r8_6 = 0xffffffff

if (*(arg1 + 0x34) s> 0)
    rax_8 = arg1[6].d

r8_6[1] = rax_8
*(arg1 + 0x34) += 1
arg1[6].d = arg2
void* rax_9 = *(r11_2 + 0x10)

if (rax_9 != 0)
    r11_2 = rax_9

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
int32_t result = (temp1 + (temp0 & 0x1f)) s>> 5
int64_t result_1 = sx.q(result)
*(r11_2 + (result_1 << 2)) &= not.d(rol.d(1, arg2.b))
return result
