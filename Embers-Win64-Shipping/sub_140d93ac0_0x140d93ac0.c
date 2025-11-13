// 函数: sub_140d93ac0
// 地址: 0x140d93ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
*(arg1 + 0x10) = *arg5
*(arg1 + 0x20) = arg5[1]
arg1[6] = *arg2
void* rax_2 = arg2[1]
arg1[7] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[8] = *arg4
arg1[9].d = arg3
*(arg1 + 0x4c) = 3
int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg1
