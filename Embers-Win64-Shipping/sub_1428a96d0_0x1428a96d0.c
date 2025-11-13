// 函数: sub_1428a96d0
// 地址: 0x1428a96d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 != 0)
    int32_t result = *(arg1 + 0x10)
    
    if (result != 0)
        return result
    
    if (*(arg1 + 0x14) != result)
        int64_t* rcx = data_143fecad8
        int32_t rbx_1 = 0
        
        if (rcx != 0)
            int32_t var_38 = 0
            void* var_30_1 = arg1
            int64_t* rax_1 = sub_1428a8d10(rcx, &var_38)
            
            if (rax_1 != 0)
                return *(rax_1[1] + 0x10)
        
        int64_t count = sx.q(*(arg1 + 0x14))
        int32_t rsi_1 = 0x42f
        
        while (true)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rsi_1 + rbx_1)
            uint64_t rax_6 = zx.q((temp1_1 - temp0_1) s>> 1)
            int32_t rdi_1 = rax_6.d
            int32_t rax_7 = count.d
            uint64_t r12_1 = zx.q(*(sx.q((rax_6 << 2).d) + &data_1434fb4d0))
            uint64_t rcx_2 = r12_1 * 5
            int32_t rax_8 = rax_7 - *((rcx_2 << 3) + 0x1434ed504)
            
            if (rax_7 != *((rcx_2 << 3) + 0x1434ed504))
                goto label_1428a97a7
            
            if (count.d != 0)
                rax_8 = memcmp(*(arg1 + 0x18), *((rcx_2 << 3) + 0x1434ed508), count)
            label_1428a97a7:
                
                if (rax_8 s< 0)
                    rsi_1 = rdi_1
                label_1428a97b2:
                    
                    if (rbx_1 s< rsi_1)
                        continue
                else if (rax_8 s> 0)
                    rbx_1 = rdi_1 + 1
                    goto label_1428a97b2
                
                if (rax_8 != 0)
                    break
            
            if (sx.q((rax_6 << 2).d) == -0xfffffffebcb04b30)
                break
            
            return *(r12_1 * 0x28 + 0x1434ed500)

return 0
