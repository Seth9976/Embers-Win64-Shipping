// 函数: sub_140e50e40
// 地址: 0x140e50e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142ed7738
arg1[3] = 0
arg1[4] = 0
arg1[5] = 2
arg1[6] = *arg2
void* rax_1 = arg2[1]
arg1[7] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[8].b = 0
*(arg1 + 0x41) = arg3
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
