// 函数: sub_14217ba70
// 地址: 0x14217ba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[0x28]

if (rbx != 0)
    sub_1405c2d80(rbx + 0x370, arg1[0xb7])
    sub_1405c2d80(rbx + 0x388, arg1[0xb8])
    sub_1405c2d80(rbx + 0x3a0, arg1[0xb9])
    sub_1405c2d80(rbx + 0x3b8, arg1[0xba])
    int64_t* rbx_1 = arg1[0xde]
    arg1[0x28] = 0
    arg1[0x29] = 0
    arg1[0x41] = 0
    sub_142165ea0(rbx_1, 0)
    sub_142165ea0(&rbx_1[0xa], 0)
    sub_142165ea0(&rbx_1[0x14], 0)
    sub_14084f020(&rbx_1[0x1e], 0)

if (arg2 != 0)
    arg1[0x28] = arg2
    arg1[0x29] = sub_140d21d80(arg2)
    arg1[0x41] = arg2 + 0x28
    sub_142173330(arg1, arg2)
    sub_14215f280(arg1[0xde], arg2, arg1)

int64_t* rcx_11 = arg1[0xdd]

if (rcx_11 == 0)
    return 

(*(*rcx_11 + 0x260))(rcx_11, arg2)
int64_t* rcx_12 = arg1[0xdd]
(*(*rcx_12 + 0x270))(rcx_12, arg2)
