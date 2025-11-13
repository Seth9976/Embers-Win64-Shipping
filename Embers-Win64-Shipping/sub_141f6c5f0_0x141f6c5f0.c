// 函数: sub_141f6c5f0
// 地址: 0x141f6c5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
uint64_t i = arg1

do
    void* rdi_1 = i + 0x438
    int64_t* rbx_4 = ((sx.q(*(i + 0x490)) + 0x58) << 4) + i
    
    if (sub_140d3e110(rdi_1).b == 0 && rsi.d s< rbx_4[1].d)
        if (rsi.d == 0xffffffff)
            break
        
        int64_t rax
        rax.b = *(rsi + *rbx_4) != 1
        return rax
    
    i = sub_140d3c6e0(rdi_1)
while (i != 0)

i.b = 0
return i
