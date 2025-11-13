// 函数: sub_14289d1b0
// 地址: 0x14289d1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rcx = *arg1

if (rcx != 0)
    sub_1428a5c40(*(rcx + 0x90))
    int32_t arg_8
    int32_t rax_1 = sub_14289dd60(*(*arg1 + 8), 1, arg2, &arg_8)
    int32_t rdi_1 = rax_1
    
    if (rax_1 s>= 0)
    label_14289d299:
        int32_t* result = sub_142898ba0()
        int32_t rbp_1 = arg_8
        int32_t rbx_2 = 0
        
        if (rbp_1 s> 0)
            do
                void* r14_1 = *(sub_142898ea0(*(*arg1 + 8), rdi_1) + 8)
                sub_1428a3ba0(r14_1)
                
                if (sub_142898d50(result, r14_1) == 0)
                    sub_1428a5d00(*(*arg1 + 0x90))
                    sub_1428a2c50(r14_1)
                    sub_142898cb0(result, sub_1428a2c50)
                    return nullptr
                
                rbx_2 += 1
                rdi_1 += 1
            while (rbx_2 s< rbp_1)
        
        sub_1428a5d00(*(*arg1 + 0x90))
        return result
    
    int32_t* rax_2 = sub_14289d150()
    sub_1428a5d00(*(*arg1 + 0x90))
    
    if (rax_2 != 0)
        int32_t rax_3 = sub_14289d720(arg1, 1, arg2, rax_2)
        sub_14289d0f0(rax_2)
        
        if (rax_3 != 0)
            sub_1428a5c40(*(*arg1 + 0x90))
            int32_t rax_4 = sub_14289dd60(*(*arg1 + 8), 1, arg2, &arg_8)
            rdi_1 = rax_4
            
            if (rax_4 s>= 0)
                goto label_14289d299
            
            sub_1428a5d00(*(*arg1 + 0x90))

return 0
