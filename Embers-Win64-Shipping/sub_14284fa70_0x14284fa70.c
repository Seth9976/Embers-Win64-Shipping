// 函数: sub_14284fa70
// 地址: 0x14284fa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 s> 0)
    return 0

int32_t rax_1 = sub_1428a54c0()

if (rax_1 == 0)
    int32_t rax_7
    
    if (*(arg1 + 0x28) != 3)
    label_14284fb23:
        
        if (*(arg1 + 0x28) == 2)
            void* rdi_2 = *(arg1 + 0x18)
            
            if (sub_14289a9f0(rdi_2, 2) != 0)
                return 3
            
            if (sub_14289a9f0(rdi_2, 1) != 0)
                return 2
            
            if (sub_14289a9f0(rdi_2, 4) != 0)
                rax_7 = sub_1408cb8f0(rdi_2)
                
                if (rax_7 != 2)
                    goto label_14284fb0a
                
                return 7
        
        int32_t rcx_8 = *(arg1 + 0x28)
        
        if (rcx_8 == 4)
            return zx.q(rcx_8)
        
        if (rcx_8 == 5)
            return zx.q(rcx_8 + 4)
        
        if (rcx_8 == 6)
            return zx.q(rcx_8 + 4)
        
        if (rcx_8 == 7)
            return zx.q(rcx_8 + 4)
        
        if ((*(arg1 + 0x44) & 2) != 0 && *(*(arg1 + 0xa8) + 0xf4) == 0)
            return 6
    else
        void* rdi_1 = *(arg1 + 0x10)
        int32_t rax_4 = sub_14289a9f0(rdi_1, 1)
        
        if (rax_4 != 0)
            return 2
        
        int32_t rax_5 = sub_14289a9f0(rdi_1, rax_4 + 2)
        
        if (rax_5 != 0)
            return 3
        
        if (sub_14289a9f0(rdi_1, rax_5 + 4) == 0)
            goto label_14284fb23
        
        rax_7 = sub_1408cb8f0(rdi_1)
        
        if (rax_7 == 2)
            return 7
        
    label_14284fb0a:
        
        if (rax_7 == 3)
            return 8
else if ((rax_1 & 0xff000000) != 0x2000000)
    return 1

return 5
