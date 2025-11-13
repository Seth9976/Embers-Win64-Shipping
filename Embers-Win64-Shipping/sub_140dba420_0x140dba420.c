// 函数: sub_140dba420
// 地址: 0x140dba420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x98))

if ((result.b & 2) != 0)
    result.b &= 0xfd
    *(arg1 + 0x98) = result.b
    
    if (data_143e20d08 != 0)
        void* rsi_1 = nullptr
        void var_18
        
        if (arg1 + 0x70 != &var_18)
            *(arg1 + 0x70) = 0
            int64_t* rbx_1 = *(arg1 + 0x78)
            
            if (rbx_1 != 0)
                *(arg1 + 0x78) = 0
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        
        void* rax_3 = *(arg1 + 0x48)
        
        if (rax_3 != 0 && (*(arg1 + 0x98) & 1) != 0)
            int32_t rax_4 = *(rax_3 + 0xc)
            
            if (rax_4 s< data_143e1d9b4)
                int16_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rax_4)
                uint32_t rdx_2 = zx.d(temp2_1)
                int32_t rax_6 = temp3_1 + rdx_2
                rsi_1 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
            
            *(rsi_1 + 8) &= 0xbfffffff
        
        result = data_143e20d08
        int64_t* rcx_6 = *(result + 0x20)
        
        if (rcx_6 != 0)
            jump(*(*rcx_6 + 0x88))

return result
