// 函数: sub_140928be0
// 地址: 0x140928be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140ab3dc0(arg1 + 0x60) == 0)
    *arg2 = *(arg1 + 0x60)
    void* rax_2 = *(arg1 + 0x68)
    arg2[1] = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    arg2[2].d = *(arg1 + 0x70)
    return arg2

int64_t rdx = sx.q(*(arg1 + 0x78))
int128_t var_18 = zx.o(0)
sub_140a9fe80(arg2, rdx, arg1 + 0xa0, &var_18)
int64_t* rbx = var_18:8.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

return arg2
