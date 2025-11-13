// 函数: sub_141a119a0
// 地址: 0x141a119a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140ce3290(arg1)
int64_t rcx = arg1[8]

if (rcx != 0 && arg1[6].d == 0)
    int64_t rsi_1 = sx.q(arg1[6].d)
    char var_19
    char var_19_1 = (var_19 & 0xf9) | 1
    int32_t var_44_1 = arg1[0xa].d
    int32_t var_40_1 = *(arg1 + 0x54)
    char var_1c_1 = arg1[0xb].b
    char var_1b_1 = *(arg1 + 0x59)
    int32_t rax_5 = (rsi_1 + 1).d
    int32_t var_50_1 = arg1[9].d.d
    int32_t var_48_1 = (*(arg1 + 0x4c)).d
    char var_4c_1 = 1
    int32_t var_3c_1 = 0xffffffff
    int32_t var_34
    __builtin_memcpy(&var_34, 
        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
        0x18)
    char var_1a_1 = 0
    char var_16_1 = 0
    arg1[6].d = rax_5
    
    if (rax_5 s> *(arg1 + 0x34))
        sub_140775520(&arg1[5])
    
    result = arg1[5]
    int64_t rcx_2 = rsi_1 * 9
    *(result + (rcx_2 << 3)) = rcx.o
    *(result + (rcx_2 << 3) + 0x10) = var_48_1.o
    *(result + (rcx_2 << 3) + 0x20) = 0.o
    int32_t var_28
    *(result + (rcx_2 << 3) + 0x30) = var_28.o
    *(result + (rcx_2 << 3) + 0x40) = 0x101.q
    arg1[8] = 0

return result
