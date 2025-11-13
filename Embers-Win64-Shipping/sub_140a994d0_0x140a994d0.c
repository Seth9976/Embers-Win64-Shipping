// 函数: sub_140a994d0
// 地址: 0x140a994d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xd].d = 0
int64_t rcx = arg1[0xc]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140aa9190(&arg1[4], 0)
int64_t rcx_2 = arg1[8]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[4]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rbx = arg1[3]

if (rbx == 0)
    *arg1 = &data_142e63698
    return &data_142e63698

rbx[1].d -= 1

if (rbx[1].d == 1)
    (**rbx)(rbx)
    int32_t rsi_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rbx + 8))(rbx, zx.q(rsi_1))

*arg1 = &data_142e63698
return &data_142e63698
