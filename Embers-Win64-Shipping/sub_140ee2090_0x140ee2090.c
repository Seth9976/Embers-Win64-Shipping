// 函数: sub_140ee2090
// 地址: 0x140ee2090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rax_1 = arg2[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[2] = 0
arg1[2] = *arg3
*arg3 = 0
arg1[3].d = arg3[1].d
*(arg1 + 0x1c) = *(arg3 + 0xc)
arg3[1] = 0
int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140596d80(arg3)
return arg1
