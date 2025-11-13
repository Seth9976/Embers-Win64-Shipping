// 函数: sub_141f641a0
// 地址: 0x141f641a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x440)

if (r9 != 0)
    void* r9_1 = *(r9 + 0x50)
    
    if (r9_1 != 0 && (*(r9_1 + 0x5c) != 0 || *(r9_1 + 8) == *(arg1 + 0x468)))
        int64_t result = *(arg2 + 0x18)
        
        if (result != 0)
            return result
        
        void* rcx = *(arg1 + 0xa0)
        
        if (rcx != 0)
            void* rax_2 = sub_141dc9840(rcx)
            
            if (rax_2 != 0)
                void* rcx_1 = *(rax_2 + 0xb8)
                
                if (rcx_1 != 0)
                    void* rax_3 = sub_1420f98f0(rcx_1)
                    void* rcx_2
                    
                    if (rax_3 != 0)
                        rcx_2 = *(rax_3 + 0x1e0)
                    
                    if (rax_3 != 0 && rcx_2 != 0)
                    label_141f6423e:
                        int128_t var_18
                        int128_t* rdx = &var_18
                        var_18 = *arg2
                        
                        if (arg3 == 0)
                            return sub_1420fa520(rcx_2, rdx)
                        
                        return sub_1420fa4c0(rcx_2, rdx)
                    
                    rcx_2 = *(rax_2 + 0x1e0)
                    
                    if (rcx_2 != 0)
                        goto label_141f6423e

return 0
