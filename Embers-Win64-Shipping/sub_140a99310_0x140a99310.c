// 函数: sub_140a99310
// 地址: 0x140a99310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a98040(&arg1[4])
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
