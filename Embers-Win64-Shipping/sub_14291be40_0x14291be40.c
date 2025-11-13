// 函数: sub_14291be40
// 地址: 0x14291be40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg3 != 0)
    int64_t rdx = *arg3
    
    if (rdx != 0)
        void* rax_1 = *(arg4 + 0x18)
        
        if (rax_1 != 0 && (*(rax_1 + 8) & 2) != 0)
            int64_t rbx_1 = sx.q(*(rax_1 + 0x20))
            int64_t* rbx_2 = rbx_1 + rdx
            
            if (rbx_1 != neg.q(rdx) && *(rbx_2 + 0xc) == 0)
                if (arg2 != 0)
                    memcpy(*arg2, *rbx_2, rbx_2[1].d)
                    *arg2 += sx.q(rbx_2[1].d)
                
                if (arg1 != 0)
                    *arg1 = rbx_2[1].d
                
                return 1

return 0
