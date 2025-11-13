// 函数: sub_140d975c0
// 地址: 0x140d975c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x13]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t i_1 = arg1[0xb].d
void* rbx_1 = arg1[0xa]

if (i_1 != 0)
    int32_t i
    
    do
        sub_140d95810(rbx_1)
        rbx_1 += 0x78
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = arg1[0xa]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

arg1[9].d = 0
int64_t rcx_4 = arg1[8]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140d950c0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
