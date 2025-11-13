// 函数: sub_141f7be60
// 地址: 0x141f7be60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x1c]

if (rcx != 0)
    sub_142394bb0(rcx)

int64_t* rcx_1 = arg1[0x15]

if (rcx_1 != 0)
    rcx_1[9].d -= 1
    
    if (rcx_1[9].d == 1)
        sub_140a2f6e0(rcx_1)

sub_141994e10(&arg1[0x10])
int64_t rcx_3 = arg1[0xd]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[8] = &data_142d44da8
return sub_140d163b0(arg1) __tailcall
