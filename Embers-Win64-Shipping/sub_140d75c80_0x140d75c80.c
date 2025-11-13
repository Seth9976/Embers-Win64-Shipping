// 函数: sub_140d75c80
// 地址: 0x140d75c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[5] = &data_142ebfa58
arg1[6] = &data_142ebfa78
arg1[7] = &data_142ebfac8
arg1[8] = &data_142ebfb10
arg1[9] = &data_142ebfb38
arg1[0xa] = &data_142ebfb80
arg1[0xb] = &data_142ebfbb0
*arg1 = &data_142ebf998
void* rcx = arg1[1]

if (rcx != 0)
    sub_1409740e0(rcx + 0x50, arg1)

int64_t* rbx = arg1[3]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
