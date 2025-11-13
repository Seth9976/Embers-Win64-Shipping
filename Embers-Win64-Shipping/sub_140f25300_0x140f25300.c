// 函数: sub_140f25300
// 地址: 0x140f25300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[0xbd])
int64_t* rbx = arg1[0xba]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

sub_140745b20(&arg1[0xb7])
return sub_140f251d0(arg1, sub_140745b20(&arg1[0xb5])) __tailcall
