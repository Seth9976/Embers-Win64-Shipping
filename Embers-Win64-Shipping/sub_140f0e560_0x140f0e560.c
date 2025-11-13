// 函数: sub_140f0e560
// 地址: 0x140f0e560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1 = (*(*arg1 + 0x1c8))()
sub_140dc16f0(arg1, arg2)
char r8 = arg1[0xb6].b
uint32_t rdx_1

if (r8 == 1)
    (*(*arg1 + 0x260))(arg1)
else if (*(arg2 + 0x5c) != 0)
    rdx_1 = zx.d(*(arg1 + 0x5b1))
    
    if (rdx_1 != 0 && rdx_1 != 1 && (rdx_1 == 2 || r8 == 3))
        (*(*arg1 + 0x260))(arg1)
else if (r8 == 3)
    (*(*arg1 + 0x260))(arg1)

if (rax_1 != 0 && arg1[0xaf].d != 0)
    int64_t* rcx_2 = arg1[0xae]
    
    if (rcx_2 != 0)
        char rax_4
        rax_4, rdx_1 = (*(*rcx_2 + 0x28))(rcx_2)
        
        if (rax_4 != 0)
            int64_t* rcx_3
            
            if (arg1[0xaf].d == 0)
                rcx_3 = nullptr
            else
                rcx_3 = arg1[0xae]
            
            (*(*rcx_3 + 0x50))(rcx_3)

rdx_1.b = 1
return sub_140e19ef0(arg1, rdx_1.b) __tailcall
