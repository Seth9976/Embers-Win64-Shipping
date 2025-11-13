// 函数: sub_14238e570
// 地址: 0x14238e570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) != 0)
    if (*(arg1 + 0x70) s<= 0)
        int64_t* rbx_1 = *(arg1 + 0x78)
        void* rdi_3 = &rbx_1[sx.q(*(arg1 + 0x80)) * 2]
        
        if (rbx_1 != rdi_3)
            while (true)
                int64_t result = sub_14238e570(*rbx_1)
                
                if (result != 0)
                    return result
                
                rbx_1 = &rbx_1[2]
                
                if (rbx_1 == rdi_3)
                    return 0
    else
        int64_t* rax_1 = *(arg1 + 0x68)
        
        if (*(arg1 + 0x12) != 0 || *(arg1 + 0x11) != 0)
            return sub_140d2bce0(rax_1) __tailcall
        
        int64_t* rax_2 = sub_14238cd90(*(arg1 + 0x98), rax_1)
        
        if (rax_2 != 0)
            return *rax_2

return 0
