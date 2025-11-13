// 函数: sub_1408410b0
// 地址: 0x1408410b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_10 = &arg_8
void*** (* var_18)() = j_sub_140597fc0
void* rax = sub_140a756e0(&var_18, &data_143958018)
void*** result = (*(rax + 0x10) + 0xf) & 0xfffffffffffffff0
void* rax_1 = &result[0x37]

if (rax_1 u> *(rax + 0x18))
    sub_140b0e3d0(rax + 0x10, 0x1c8)
    result = (*(rax + 0x10) + 0xf) & 0xfffffffffffffff0
    rax_1 = &result[0x37]

*(rax + 0x10) = rax_1

if (result == 0)
    result = nullptr
else
    memset(&result[2], 0, 0x1a0)
    *result = &data_142ddb3f0
    result[2].d = 0xffffffff
    *(result + 0x14) = 4
    result[0x13] = 0
    result[0x14].d = 0
    *(result + 0xa4) = 8
    *(result + 0xa9) = 0xffffff00
    result[0x1a] = 0
    result[0x1b].d = 0
    *(result + 0xdc) = 2
    result[0x22] = 0
    result[0x23].d = 0
    *(result + 0x11c) = 3
    __builtin_memset(&result[0x24], 0, 0x18)
    result[0x27].d = 0xffffffff
    result[0x28] = 0
    result[0x29] = 0
    result[0x2a].d = 0xbf800000
    *(result + 0x154) = 3
    result[0x2b].b = 0
    result[0x15].b = 0
    result[1] = &data_142ddb370
    __builtin_memset(&result[0x2c], 0, 0x1c)
    __builtin_memset(&result[0x30], 0, 0x1c)
    result[0x34] = 0
    result[0x35].d = 0
    result[0x36] = 0

int64_t rsi_1 = sx.q(*(arg1 + 0xc0))
int32_t rcx_3 = (rsi_1 + 1).d
*(arg1 + 0xc0) = rcx_3

if (rcx_3 s> *(arg1 + 0xc4))
    sub_14083a310(arg1 + 0xb8, rsi_1.d)

*(*(arg1 + 0xb8) + (rsi_1 << 3)) = result
return result
