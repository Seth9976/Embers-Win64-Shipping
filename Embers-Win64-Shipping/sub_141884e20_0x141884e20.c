// 函数: sub_141884e20
// 地址: 0x141884e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1

while (true)
    bool z_1
    
    if (0 == *(rbx + 0x78))
        *(rbx + 0x78) = 0
        z_1 = true
    else
        int64_t rax_1
        rax_1.b = *(rbx + 0x78)
        z_1 = false
    
    if (not(z_1))
        break
    
    int64_t* rcx = *(rbx + 0x70)
    (*(*rcx + 0x20))(rcx, 0xffffffff, 0)

*arg2 = 0
int64_t rsi = sx.q(*(rbx + 0x88))
int64_t rbx_1 = *(rbx + 0x80)
arg2[1].d = rsi.d

if (rsi.d != 0)
    sub_14083a1f0(arg2, rsi.d, 0)
    memcpy(*arg2, rbx_1, (rsi << 5).d)
else
    *(arg2 + 0xc) = 0

return arg2
