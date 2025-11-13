// 函数: sub_142bb4f30
// 地址: 0x142bb4f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1
char r11

if (*(*(*arg1 + 0x90) + 0x78) != 0x28)
    r11 = 0
else
    void* rax_1 = arg1[0x1d]
    uint64_t rdx
    
    if (rax_1 == 0)
        rdx.b = 0
    else
        rdx = zx.q(*(rax_1 + 0x371))
    
    if (rax_1 == 0)
        arg1.b = 0
    else
        arg1 = zx.q(*(rax_1 + 0x376))
    
    if (rdx.b == 0 || arg1.b == 0)
        r11 = 0
    else
        r11 = 1

int32_t result_1 = 0
int32_t rax_3 = r8[7].d - r8[9].d
int32_t rbx = *(r8 + 0x4c)
r8[0xb].d = rax_3
*(r8 + 0x5c) = 0
r8[0xc].d = rax_3 + rbx
*(r8 + 0x64) = 0
int32_t result

if (r11 == 0)
    result = 0
else
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx)
    result = (temp1_1 - temp0_1) s>> 1

int32_t r9_1 = r8[0x21].d + *(r8 + 0x44)
r8[0x22].d = result
*(r8 + 0x114) = r9_1

if (r11 != 0)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx)
    result = (temp3_1 - temp2_1) s>> 1
    result_1 = result

*(r8 + 0x11c) = r9_1 - *(r8 + 0x10c)
r8[0x23].d = result_1
return result
