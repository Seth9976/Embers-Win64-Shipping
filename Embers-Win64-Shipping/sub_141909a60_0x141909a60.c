// 函数: sub_141909a60
// 地址: 0x141909a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg4
int32_t rsi = arg4[2].d

if (r15 != 0 && *(r15 + 8) == arg5)
    return 

if (*(arg2 + 0x3f0) != arg3)
    data_143effc18(zx.q(arg3 + 0x84c0))
    *(arg2 + 0x3f0) = arg3

int32_t rbx_1 = *(arg5 + 0x20)
data_143effb50(zx.q(rsi), 0x2802, zx.q(*(arg5 + 0x1c)))
data_143effb50(zx.q(rsi), 0x2803, zx.q(rbx_1))
data_143effb50(zx.q(rsi), 0x8072, zx.q(*(arg5 + 0x24)))
data_143effb50(zx.q(rsi), 0x8501, zx.q(*(arg5 + 0x28)))
int32_t r8_4 = *(arg5 + 0x30)

if (*(arg4 + 0x1c) == 0)
    if (r8_4 == 0x2700)
        r8_4 = 0x2600
    else if (r8_4 == 0x2701)
        r8_4 = 0x2601
    else if (r8_4 == 0x2702)
        r8_4 = 0x2600
    else if (r8_4 == 0x2703)
        r8_4 = 0x2601

data_143effb50(zx.q(rsi), 0x2801, r8_4)
data_143effb50(zx.q(rsi), 0x2800, zx.q(*(arg5 + 0x2c)))

if (data_143efbce5 != 0)
    int32_t r8_6 = *(arg5 + 0x34)
    
    if (r8_6 s<= 1)
        r8_6 = 1
    
    data_143effb50(zx.q(rsi), 0x84fe, r8_6)

data_143effb50(zx.q(rsi), 0x884c, zx.q(*(arg5 + 0x38)))
data_143effb50(zx.q(rsi), 0x884d, zx.q(*(arg5 + 0x3c)))

if (r15 != 0)
    *(*arg4 + 8) = arg5
