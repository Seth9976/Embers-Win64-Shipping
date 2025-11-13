// 函数: sub_140d75d60
// 地址: 0x140d75d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[5] = &data_142ebf9a8
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
