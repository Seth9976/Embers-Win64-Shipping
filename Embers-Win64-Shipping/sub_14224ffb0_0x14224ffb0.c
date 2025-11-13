// 函数: sub_14224ffb0
// 地址: 0x14224ffb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x16] != 0)
    (*(*arg1 + 0x3f0))()

int64_t* rcx = arg1[0x29]

if (rcx != 0)
    int64_t* rax_3 = (*(*rcx + 0xe0))(rcx)
    
    if (rax_3 != 0)
        int64_t r9_1 = *rax_3
        (*(r9_1 + 0x358))(rax_3, 0, 0, r9_1)
        int64_t* rcx_2 = arg1[0x29]
        int64_t rdx_1 = *rcx_2
        (*rdx_1)(rcx_2, rdx_1)
        int64_t* rcx_3 = arg1[0x2a]
        arg1[0x29] = 0
        (**rcx_3)(rcx_3)
        arg1[0x2a] = 0
        (*(*rax_3 + 0x360))(rax_3)

return sub_141eea780(arg1) __tailcall
