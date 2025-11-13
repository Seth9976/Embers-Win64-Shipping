// 函数: sub_140e77cc0
// 地址: 0x140e77cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*(arg1 - 0x118) + 0xf0))(arg1 - 0x118) != 0)
    return 0

uint64_t rbp
rbp.b = 1
int32_t i = 0

if (*(arg1 + 0x2b8) s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        int64_t rax_2 = *(arg1 + 0x2b0)
        
        if (*(rbx_1 + rax_2 + 8) != 0)
            int64_t* rcx_1 = *(rbx_1 + rax_2)
            
            if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
                int64_t rax_5 = *(arg1 + 0x2b0)
                int64_t* rcx_2
                
                if (*(rbx_1 + rax_5 + 8) == 0)
                    rcx_2 = nullptr
                else
                    rcx_2 = *(rbx_1 + rax_5)
                
                rbp = zx.q(rbp.b)
                
                if ((*(*rcx_2 + 0x48))(rcx_2, arg2, zx.q(arg3)) != 0)
                    rbp = 0
        
        i += 1
        rbx_1 = &rbx_1[2]
    while (i s< *(arg1 + 0x2b8))

return zx.q(rbp.b)
