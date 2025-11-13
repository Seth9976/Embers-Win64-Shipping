// 函数: sub_141b84ea0
// 地址: 0x141b84ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x81]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

arg1[0x7f].d = 0
int64_t rcx_2 = arg1[0x7e]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_141b83d40(&arg1[0x76])
return sub_1406922a0(arg1) __tailcall
