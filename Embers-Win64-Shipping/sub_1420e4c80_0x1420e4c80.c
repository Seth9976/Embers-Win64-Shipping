// 函数: sub_1420e4c80
// 地址: 0x1420e4c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0xc)
uint32_t rcx = data_1439c7a08

if (rax != 4)
    rcx = zx.d(rax)

void* result

if (sub_1423d2320(rcx).b != 0 && *(data_143f483b0 + 4) != 0)
    char rax_1 = *(arg1 + 0xc)
    uint32_t rcx_1 = data_1439c7a08
    
    if (rax_1 != 4)
        rcx_1 = zx.d(rax_1)
    
    if (sub_1419ba670(rcx_1).b != 0)
        result.b = 1
        return result

result.b = 0
return result
