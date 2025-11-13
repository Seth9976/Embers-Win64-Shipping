// 函数: sub_140e53930
// 地址: 0x140e53930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0xd]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140e52f80(&arg1[0xa])
arg1[9].d = 0
int64_t rcx_3 = arg1[8]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t result = sub_1407ece30(arg1, 0)
int64_t rcx_5 = arg1[4]

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *arg1

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
