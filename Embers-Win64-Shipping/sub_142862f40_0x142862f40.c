// 函数: sub_142862f40
// 地址: 0x142862f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)

if (arg3 == 0xffffffff)
    arg3 = *(arg2 + 0x18)

if (arg3 u<= 8)
    int64_t rax_2 = *(arg1 + 0x488)
    int64_t rbp_1 = sx.q(arg3) * 0x28
    
    if (*(rax_2 + rbp_1 + 0x20) != 0 && *(rax_2 + rbp_1 + 0x28) != 0)
        void* rax_3 = *(arg1 + 0xa8)
        
        if (*(rax_3 + 0x2f0) == 0)
        label_142863073:
            return 1
        
        int64_t i = 0
        
        if (*(rax_3 + 0x300) u> 0)
            do
                int64_t j = 0
                char const (** const rbx_1)[0x17] = &data_1434dc750
                
                do
                    if (rbx_1[1].w == *(*(rax_3 + 0x2f0) + (i << 1)))
                        int32_t arg_18
                        int32_t arg_20
                        
                        if (sub_1428a3ac0(*(*(arg1 + 0x488) + rbp_1 + 0x20), &arg_18, &arg_20, 
                                nullptr, nullptr) == 0)
                            goto label_14286303f
                        
                        if (arg_18 != *(rbx_1 + 0xc))
                            goto label_14286303f
                        
                        if (arg_20 == *(rbx_1 + 0x14))
                            goto label_142863073
                        
                        goto label_14286303f
                    
                    j += 1
                    rbx_1 = &rbx_1[5]
                while (j u< 0x1a)
                
            label_14286303f:
                rax_3 = *(arg1 + 0xa8)
                i += 1
            while (i u< *(rax_3 + 0x300))

return 0
