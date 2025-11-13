// 函数: sub_1422637f0
// 地址: 0x1422637f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x740))()
int64_t rax_1 = *arg1
arg1[0x54] = 0
(*(rax_1 + 0x690))(arg1, arg2)
void* rdx_1 = arg1[0x4a]

if (rdx_1 == 0)
    return sub_14256a4d0(arg1, rdx_1)

if ((*(rdx_1 + 0x58) & 0x40) != 0)
    sub_141f9ecf0(arg1)
    (*(*arg1 + 0x690))(arg1, 0)
    arg1[0x4a]
    jump(*(*arg1 + 0xcb8))

(*(*arg1 + 0xcb8))(arg1, rdx_1)
*(arg1[0x4a] + 0x258) = arg1
int64_t* rcx_4 = arg1[0x4a]
int64_t result = (*(*rcx_4 + 0x6e8))(rcx_4)

if (arg1[0x1e].b u< 3)
    int32_t arg_1c = 0
    void arg_8
    result = (*(*arg1 + 0x658))(arg1, (*sub_140b5e500(&arg_8, 0x140)).q)
    
    if (arg1[0x59].b != 0)
        (*(*arg1 + 0xd18))(arg1, arg1[0x4a])
        jump(*(*arg1 + 0xda0))

return result
