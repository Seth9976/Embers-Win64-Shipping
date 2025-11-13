// 函数: sub_141abb120
// 地址: 0x141abb120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax
int512_t result
rax, result = sub_141abb710(arg1)

if (rax != 0)
    void* rcx = *(arg1 + 0x48)
    
    if (rcx != 0)
        result.o = *(*sub_141e40740(rcx, *rax) + 0x90)
        return result

result.o = zx.o(0)
return result
