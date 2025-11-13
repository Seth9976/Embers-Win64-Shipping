// 函数: sub_14227b990
// 地址: 0x14227b990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_24 = 0
void arg_18
int64_t rdx = (*sub_140b5e500(&arg_18, 0x142)).q
char rax_1 = sub_141f8dba0(arg1, rdx)
char rax_3

if (rax_1 == 0 || (arg1[0x7a].b & 0x10) == 0)
    arg_24 = 0
    rdx = (*sub_140b5e500(&arg_18, 0x145)).q
    rax_3 = sub_141f8dba0(arg1, rdx)

if (((rax_1 != 0 && (arg1[0x7a].b & 0x10) != 0) || rax_3 != 0)
        && (*(*arg1 + 0xd88))(arg1, rdx) == 0)
    return sub_14256a690(arg1) __tailcall

arg_24 = 0
void* result = sub_141f8dba0(arg1, (*sub_140b5e500(&arg_18, 0x142)).q)

if (result.b != 0)
    return sub_14256aa00(arg1) __tailcall

if (arg1[0x4a] != 0 && (arg1[0x7a].b & 2) == 0)
    result = (*(*arg1 + 0x150))(arg1)
    
    if ((*(result + 0x11d) & 4) == 0)
        int64_t* rcx_14 = arg1[0x4a]
        return (*(*rcx_14 + 0x650))(rcx_14, zx.q(arg2))

return result
