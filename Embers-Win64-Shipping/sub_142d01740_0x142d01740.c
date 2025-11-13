// 函数: sub_142d01740
// 地址: 0x142d01740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = &data_143f46d70
int64_t i_1 = 3
void* rsi = &data_143f46d80
int64_t result
int64_t i

do
    rbx -= 0x30
    rsi -= 0x30
    *rbx = &data_1432aaf28
    sub_14198bce0(rbx)
    sub_1408081b0(rsi)
    sub_1405ec8a0(rsi + 0x10)
    sub_1405d1550(rsi + 8)
    sub_1405d1550(rsi)
    result = sub_1419948a0(rbx)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
