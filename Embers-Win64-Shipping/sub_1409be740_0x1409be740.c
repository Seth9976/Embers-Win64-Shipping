// 函数: sub_1409be740
// 地址: 0x1409be740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x28)
int32_t r9 = 0
int64_t rcx = sx.q(arg2) * 5
int64_t rax_1 = *(rsi + 0xe0)
int32_t rbx = *(rax_1 + (rcx << 3) + 8)

if (rbx s<= 0)
    return 0xffffffff

do
    int32_t* r11_1
    
    if (r9 s< 0 || r9 s>= rbx)
        r11_1 = &data_143a1c6b8
    else
        r11_1 = *(rax_1 + (rcx << 3)) + (sx.q(r9) << 2)
    
    int64_t rax_3 = sx.q(*r11_1)
    int32_t r10_2
    
    if (rax_3.d == data_143a1c6b8)
        r10_2 = data_143a1c6b4
    else
        r10_2 = *(*(rsi + 0x38) + rax_3 * 0x18)
    
    if (arg3 == r10_2)
        return zx.q(r9)
    
    r9 += 1
while (r9 s< rbx)

return 0xffffffff
