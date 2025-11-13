// 函数: sub_1427178d0
// 地址: 0x1427178d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142717960(arg1, arg2)
void* rsi = arg1[0x1d]

if (rsi != 0)
    void* rax_1 = sub_142490590()
    void* rdx = *(rsi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        arg1[0x4c] = rsi
        return zx.q(rax)

arg1[0x4c] = 0
return zx.q(rax)
