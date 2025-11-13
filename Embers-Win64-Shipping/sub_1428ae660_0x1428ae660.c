// 函数: sub_1428ae660
// 地址: 0x1428ae660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 != 0)
    int32_t* rcx = *arg2
    
    if (rcx != 0)
        int32_t* rdx = *(arg1 + 0xe0)
        
        if (rdx != 0 && sub_1428e6180(rcx, rdx) != 0)
            return 0x1e
    
    int32_t* rbx_1 = arg2[2]
    int32_t rax_4
    
    if (rbx_1 != 0)
        rax_4 = sub_1428e47f0(sub_14060ee10(arg1), rbx_1)
    
    if (rbx_1 != 0 && rax_4 != 0)
        return 0x1f
    
    int32_t* rdi_1 = arg2[1]
    
    if (rdi_1 != 0)
        int32_t rbx_2 = 0
        
        if (sub_142898c70(rdi_1) s> 0)
            int32_t* rax_6
            
            while (true)
                rax_6 = sub_142898ea0(rdi_1, rbx_2)
                
                if (*rax_6 == 4)
                    break
                
                rbx_2 += 1
                
                if (rbx_2 s>= sub_142898c70(rdi_1))
                    return 0
            
            void* rbx_3 = *(rax_6 + 8)
            
            if (rbx_3 != 0 && sub_1428a32a0(rbx_3, sub_1428a38f0(arg1)) != 0)
                return 0x1f

return 0
