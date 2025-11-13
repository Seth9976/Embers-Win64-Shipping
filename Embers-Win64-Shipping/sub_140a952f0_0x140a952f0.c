// 函数: sub_140a952f0
// 地址: 0x140a952f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e66758
arg1[1] = *arg2
arg1[2].d = arg2[1].d
arg1[3] = arg2[2]
void* rax_3 = arg2[3]
arg1[4] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

int64_t* rbx = arg2[3]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg1
