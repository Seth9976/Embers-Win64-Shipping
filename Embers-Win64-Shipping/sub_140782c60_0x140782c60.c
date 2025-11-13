// 函数: sub_140782c60
// 地址: 0x140782c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142dc0428
int64_t* rcx = arg1[0x1d]

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

*arg1 = &data_142d40498

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
