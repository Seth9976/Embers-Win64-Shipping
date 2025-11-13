// 函数: sub_1427ed710
// 地址: 0x1427ed710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = 0
bool cond:0_1

while (true)
    char r8_1 = arg2[rcx]
    rcx += 1
    char temp0_1 = data_1434cfe28[0xf][rcx]
    cond:0_1 = r8_1 == temp0_1
    
    if (r8_1 != temp0_1)
        break
    
    if (rcx == 7)
        cond:0_1 = r8_1 == data_1434cfe28[0xf][rcx]
        break

int64_t result
result.b = cond:0_1
return result
