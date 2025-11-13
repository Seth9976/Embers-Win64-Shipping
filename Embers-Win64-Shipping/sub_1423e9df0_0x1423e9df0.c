// 函数: sub_1423e9df0
// 地址: 0x1423e9df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x8f8) & 1) == 0)
    return 

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0xc40))
        break
    
    int64_t rcx_2 = *((*(arg1 + 0xc38))[sx.q(i)] + 0x218)
    
    if (rcx_2 != 0)
        int64_t* rax = sub_140a3f490(rcx_2)
        int32_t j = 0
        
        if (rax[1].d s> 0)
            int64_t rdi_1 = 0
            
            do
                void* rcx_4 = *(*(*rax + rdi_1) + 0x30)
                
                if (rcx_4 != 0)
                    int64_t* rcx_5 = *(rcx_4 + 0x2b0)
                    
                    if (rcx_5 != 0)
                        (*(*rcx_5 + 0x6c8))(rcx_5, zx.q(arg2))
                
                j += 1
                rdi_1 += 8
            while (j s< rax[1].d)
