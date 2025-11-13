// 函数: sub_141b63d80
// 地址: 0x141b63d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_14198bce0(arg1)
int64_t* rcx = arg1[0xc]
arg1[0xc] = 0

if (rcx != 0)
    result = (*(*rcx + 0x38))(rcx)

int64_t* rcx_1 = arg1[0xd]
arg1[0xd] = 0

if (rcx_1 != 0)
    result = (*(*rcx_1 + 0x38))(rcx_1)

int64_t* rcx_2 = arg1[0xe]
arg1[0xe] = 0

if (rcx_2 == 0)
    return result

jump(*(*rcx_2 + 0x38))
