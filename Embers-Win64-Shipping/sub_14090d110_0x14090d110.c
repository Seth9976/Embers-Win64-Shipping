// 函数: sub_14090d110
// 地址: 0x14090d110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[5]

if (rcx != 0)
    int32_t rax_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (rax_1 == 1 && rcx != 0)
        (*(*rcx + 8))(rcx, 1)

int64_t* rdi = arg1[3]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

arg1[1] = &IModuleInterface::`vftable'
sub_140b0be90(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
