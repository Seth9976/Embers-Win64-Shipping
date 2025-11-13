// 函数: sub_1427ca380
// 地址: 0x1427ca380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x50)

if (rcx != 0 && arg2 != 0)
    int32_t i = 0
    
    if (*((*(*rcx + 8))(rcx) + 0x10) u> 0)
        void* rax_6
        
        do
            int64_t* rcx_1 = *(arg1 + 0x50)
            int64_t* rax_4 = (*(*rcx_1 + 0x18))(rcx_1, zx.q(i))
            
            if (rax_4 != 0)
                char* rcx_2 = *rax_4
                void* r9_2 = arg2 - rcx_2
                uint32_t j
                uint32_t r8_1
                
                do
                    r8_1 = zx.d(*rcx_2)
                    j = zx.d(*(rcx_2 + r9_2))
                    
                    if (r8_1 != j)
                        break
                    
                    rcx_2 = &rcx_2[1]
                while (j != 0)
                
                if (r8_1 - j == 0)
                    return &rax_4[1]
            
            int64_t* rcx_3 = *(arg1 + 0x50)
            i += 1
            rax_6 = (*(*rcx_3 + 8))(rcx_3)
        while (i u< *(rax_6 + 0x10))

return 0
