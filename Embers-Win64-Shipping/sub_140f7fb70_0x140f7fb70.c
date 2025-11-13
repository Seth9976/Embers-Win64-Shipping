// 函数: sub_140f7fb70
// 地址: 0x140f7fb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg4 + 0x48)

if (rbx != 0)
    rbx[1].d += 1

int64_t rsi
rsi.b = *(arg4 + 0x38) == data_143e1e020

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rsi.b != 0)
    *(arg1 + 0x418) = 0

sub_140f795a0(*(arg1 + 0x2b0), arg2, arg3, arg4, arg5, arg6)
return arg2
