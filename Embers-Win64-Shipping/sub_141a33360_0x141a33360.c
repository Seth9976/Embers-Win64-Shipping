// 函数: sub_141a33360
// 地址: 0x141a33360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x29]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x27]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rbx = arg1[0x1b]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140596eb0(&arg1[7])
return sub_140d163b0(arg1) __tailcall
