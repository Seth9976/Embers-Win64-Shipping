// 函数: sub_142266590
// 地址: 0x142266590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x4a] != 0)
    if (arg1[0x53] != 0 || arg1[0x1e].b != 3)
        sub_141f9ecf0(arg1)
    else
        (*(*arg1 + 0xcc0))()

if (arg1[0xa9] != 0)
    (*(*arg1 + 0xd60))(arg1)

int64_t* rcx_1 = arg1[0x56]

if (rcx_1 != 0)
    sub_141dbe590(rcx_1, 0, 1)
    arg1[0x56] = 0

int64_t* rcx_2 = arg1[0x57]

if (rcx_2 != 0)
    sub_141dbe590(rcx_2, 0, 1)
    arg1[0x57] = 0

int64_t* rcx_4 = *((*(*arg1 + 0x150))(arg1) + 0x128)

if (rcx_4 != 0)
    sub_142027540(rcx_4, arg1)

arg1[0x69] = 0
arg1[0x67] = 0
return sub_141f850a0(arg1) __tailcall
