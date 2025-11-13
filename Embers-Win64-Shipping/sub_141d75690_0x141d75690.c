// 函数: sub_141d75690
// 地址: 0x141d75690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ae080(arg1 + 0x80)
sub_141d75b40(&arg1[0xc], arg1[0xc])

if (arg1[8].b != 0)
    arg1[8].b = 0
    int64_t* rbx_1 = arg1[6]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

return sub_140d163b0(arg1) __tailcall
