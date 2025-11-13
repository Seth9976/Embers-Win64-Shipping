// 函数: sub_1408ba910
// 地址: 0x1408ba910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x59].d != 0)
    int64_t* rcx = arg1[0x58]
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx, 0)
        int64_t rcx_1 = arg1[0x58]
        
        if (rcx_1 != 0)
            arg1[0x58] = sub_140a84c80(rcx_1, 0, 0)
        
        arg1[0x59].d = 0

int64_t rcx_2 = arg1[0x58]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rdi = arg1[0x57]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

return sub_140de0ac0(arg1) __tailcall
