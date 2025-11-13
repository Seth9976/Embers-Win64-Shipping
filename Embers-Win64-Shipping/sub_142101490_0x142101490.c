// 函数: sub_142101490
// 地址: 0x142101490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int64_t r11_1 = *arg1
    void* r9_1 = &arg1[7]
    void* r8_1 = *(r9_1 + 8)
    void* rbx_1 = r11_1 + sx.q(arg2) * 0x28
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(rbx_1 + 0x24))
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t i = *(r9_1 + (rcx_1 << 2))
    void* r8_2 = r9_1 + (rcx_1 << 2)
    
    while (i != 0xffffffff)
        if (i == arg2)
            *r8_2 = *(rbx_1 + 0x20)
            break
        
        int64_t i_1 = sx.q(i)
        int64_t r8_4 = i_1 + ((i_1 + 1) << 2)
        i = *(r11_1 + (r8_4 << 3))
        r8_2 = r11_1 + (r8_4 << 3)

void* r11_2 = &arg1[2]

if (*(arg1 + 0x34) != 0)
    *(*arg1 + sx.q(arg1[6].d) * 0x28) = arg2

int32_t* r9_3 = *arg1 + sx.q(arg2) * 0x28
int32_t rax_10 = -1
*r9_3 = 0xffffffff

if (*(arg1 + 0x34) s> 0)
    rax_10 = arg1[6].d

r9_3[1] = rax_10
*(arg1 + 0x34) += 1
arg1[6].d = arg2
void* rax_11 = *(r11_2 + 0x10)

if (rax_11 != 0)
    r11_2 = rax_11

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
int32_t result = (temp1 + (temp0 & 0x1f)) s>> 5
int64_t result_1 = sx.q(result)
*(r11_2 + (result_1 << 2)) &= not.d(rol.d(1, arg2.b))
return result
