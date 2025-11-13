// 函数: sub_140d434a0
// 地址: 0x140d434a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx_1 = not.d(zx.d(arg2))
int32_t r11_1 = rbx_1 & 0x200
uint8_t r8 = ((((((arg2.b u>> 2 & 1) * 2) | (arg2.b u>> 1 & 1)) * 2) | (arg2.b & 1)) * 2)
    | (arg2.b u>> 3 & 1) | (*(arg1 + 0x20) & 0xf0)
char r10

if ((rbx_1.b & 0x10) == 0 || r11_1 == 0)
    r10 = 0
else
    r10 = 0x10

uint16_t rcx
rcx.b = (arg2 u>> 7).b << 5
rcx.b ^= r8 | r10
rcx.b &= 0x20
rcx.b ^= (r8 & 0xef) | r10
uint8_t rax_4

if (not(test_bit(rbx_1, 8)) || r11_1 == 0)
    rax_4 = 0
else
    rax_4 = 0x40

rcx.b &= 0x3f
rcx.b |= rax_4
uint64_t rax_5
rax_5.w = arg2 u>> 9
rcx.b &= 0x7f
rax_5.b <<= 7
rcx.b |= rax_5.b
*(arg1 + 0x20) = rcx.b

if ((arg2.b & 0x20) == 0)
    arg2.b u>>= 5
    arg2.b &= 2
    *(arg1 + 0x21) = arg2.b
else
    *(arg1 + 0x21) = 1

if (*(arg1 + 0x18) == 0)
    if ((rcx.b & 2) != 0)
        int64_t rax_6 = data_143e202d0
        *(arg1 + 0x18) = rax_6
        return rax_6
    
    rax_5 = data_143e202e0
    
    if ((rcx.b & 8) != 0)
        rax_5 = data_143e202d8
    
    *(arg1 + 0x18) = rax_5

return rax_5
