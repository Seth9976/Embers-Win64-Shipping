// 函数: sub_1405b5300
// 地址: 0x1405b5300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dbafe0(arg1)
void* rcx = arg1[0xa0]

if (rcx != 0)
    sub_1405c2450(rcx, arg1, 0)
    void var_18
    
    if (&arg1[0xa0] != &var_18)
        arg1[0xa0] = 0
        int64_t* rbx_1 = arg1[0xa1]
        
        if (rbx_1 != 0)
            arg1[0xa1] = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

return sub_1405bc050(arg1) __tailcall
