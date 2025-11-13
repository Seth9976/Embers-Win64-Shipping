// 函数: sub_140f89df0
// 地址: 0x140f89df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140f07390(arg1[9])

if (result != 0)
    return result

void* rdx_1 = arg1[9]
int32_t r8_1 = 0
int64_t arg_8 = 0
int64_t r9_1 = sx.q(*(rdx_1 + 0x20))

if (&arg_8 != &arg1[0xf0])
    arg1[0xf0] = 0
    arg1[0xf1].b = 1

int32_t rdi_1 = (r9_1 - 1).d
void* r11_1 = arg1[9]
int64_t rsi_1 = r9_1
arg_8.d = rdi_1
int32_t rax_1 = *(*(r9_1 * 0x70 + *(rdx_1 + 0x18) - 0x70) + 8)
int32_t r10_1 = rax_1 - 1

if (rax_1 == 0)
    r10_1 = 0

r9_1.b = 0
arg_8:4.d = r10_1
int64_t rax_2 = arg_8
arg_8 = rax_2

if (r10_1 s> 0)
    int32_t rcx_5 = *(*(rsi_1 * 0x70 + *(r11_1 + 0x18) - 0x70) + 8)
    int32_t rdx_4 = rcx_5 - 1
    
    if (rcx_5 == 0)
        rdx_4 = 0
    
    if (rdx_4 == r10_1)
        uint32_t rax_3 = (rax_2 u>> 0x20).d
        r9_1.b = 1
        arg_8.d = rdi_1
        
        if (rax_3 - 1 s>= 0)
            r8_1 = rax_3 - 1
        
        arg_8:4.d = r8_1
        arg_8 = arg_8

char rdx_6
uint32_t r8_3
rdx_6, r8_3 = sub_140f8af60(&arg1[0xf2], r11_1, &arg_8, r9_1.b, arg3, arg2)
return sub_140f8fc70(arg1, rdx_6, r8_3)
