// 函数: sub_141e71c70
// 地址: 0x141e71c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]

if (rcx != 0)
    (*(*rcx + 0x20))(rcx, 0xffffffff, 0)
    sub_140a4fc50(arg1[1])
    arg1[1] = 0

int64_t* rcx_2 = *arg1

if (rcx_2 == 0)
    return 

rcx_2[9].d -= 1

if (rcx_2[9].d == 1)
    return sub_140a2f6e0(rcx_2) __tailcall
