// 函数: sub_140f6bb30
// 地址: 0x140f6bb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = *(arg1 + 0x158)
void arg_8
char* r9 = sub_140e679c0(data_143e29f28, &arg_8)
char* result
result.b = 1

if ((rbx & 4) != 0)
    result.b = (*r9 & 3) != 0

char r8 = 0

if ((rbx & 8) != 0)
    char result_1 = 0
    
    if ((*r9 & 0xc0) != 0)
        result_1 = result.b
    
    result = zx.q(result_1)

if ((rbx & 1) != 0)
    char result_2 = 0
    
    if ((*r9 & 0xc) != 0)
        result_2 = result.b
    
    result = zx.q(result_2)

if ((rbx & 2) == 0)
    return result

if ((*r9 & 0x30) != 0)
    r8 = result.b

return zx.q(r8)
