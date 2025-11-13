// 函数: sub_140eb67d0
// 地址: 0x140eb67d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(arg1 + 0x300)
int64_t* rbx = *(arg1 + 0x2f0)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return sub_140691ff0(arg1 + 0x10) __tailcall
