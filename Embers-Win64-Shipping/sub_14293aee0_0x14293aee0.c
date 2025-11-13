// 函数: sub_14293aee0
// 地址: 0x14293aee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t result = arg1[2]
int32_t rax = arg1[4].d

if ((rax.b & 2) != 0)
    (*(*arg1 + 0x38))(arg1, result)
    rax = arg1[4].d
    result = 0

arg1[2] = arg2
arg1[4].d = rax & 0xfffffffd
return result
