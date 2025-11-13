// 函数: sub_1406b7970
// 地址: 0x1406b7970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d8e0c0
void* rcx = arg1[0x22]

if (rcx == 0)
    sub_1406aec80()
    noreturn

sub_1406afdf0(rcx)
int64_t* rbx = arg1[0x23]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx)

sub_1406b6510(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
