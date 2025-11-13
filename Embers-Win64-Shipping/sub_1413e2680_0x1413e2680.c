// 函数: sub_1413e2680
// 地址: 0x1413e2680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1413c7920(&arg1[2])

if (arg1[0x1e].b != 0)
    arg1[0x1e].b = 0

arg1[0x20].b = 0
*arg1 = &data_142f79158
int64_t* rcx_1 = arg1[0x21]

if (rcx_1 != 0)
    rcx_1[9].d -= 1
    
    if (rcx_1[9].d == 1)
        sub_140a2f6e0(rcx_1)

*arg1 = &data_142d40498
return j_sub_140a74f90(arg1) __tailcall
