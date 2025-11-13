// 函数: sub_14210caf0
// 地址: 0x14210caf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0xe]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0xc]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rcx_2 = arg1[8]

if (rcx_2 != 0)
    rcx_2[9].d -= 1
    
    if (rcx_2[9].d == 1)
        sub_140a2f6e0(rcx_2)

arg1[6] = &data_142d44da8
arg1[5] = &data_142d44dd8
return sub_140d163b0(arg1) __tailcall
