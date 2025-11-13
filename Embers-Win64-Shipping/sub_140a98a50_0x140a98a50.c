// 函数: sub_140a98a50
// 地址: 0x140a98a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e63f58
int64_t rcx = arg1[0x11]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140a99420(&arg1[3])
int64_t* rbx = arg1[2]

if (rbx == 0)
    *arg1 = &data_142e61248
    return &data_142e61248

rbx[1].d -= 1

if (rbx[1].d == 1)
    (**rbx)(rbx)
    int32_t rsi_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rbx + 8))(rbx, zx.q(rsi_1))

*arg1 = &data_142e61248
return &data_142e61248
