// 函数: sub_140d97bd0
// 地址: 0x140d97bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec3110
int64_t* rbx = arg1[0xc]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

arg1[0xa].d = 0
int64_t rcx_2 = arg1[9]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140d9f040(&arg1[1], 0)
int64_t rcx_4 = arg1[5]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[1]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
