// 函数: sub_1419f0f30
// 地址: 0x1419f0f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x150))() != 0)
    int64_t rdi_1 = 0
    int32_t rax_4 = *((*(*arg1 + 0x150))(arg1) + 0xc)
    void* const rax_11
    
    if (rax_4 s>= data_143e1d9b4)
        rax_11 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_4)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_6 = temp1_1 + rdx_1
        rax_11 =
            *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_1) * 0x18
    
    if ((*(rax_11 + 8) & 0x30000000) == 0
            && (*(arg1 + 0x234) | arg1[0x46].d | *(arg1 + 0x22c) | arg1[0x45].d) != 0)
        void* rax_16 = sub_1419ede00(arg1)
        
        if (rax_16 != 0)
            int64_t rdx_3 = *arg1
            (*(rdx_3 + 0x150))(arg1, rdx_3)
            int32_t i = 0
            
            if (arg1[0x5f].d s> 0)
                int64_t* r14_1 = nullptr
                
                do
                    void* rdx_4 = *(r14_1 + arg1[0x5e])
                    
                    if (rdx_4 != 0)
                        sub_1419f0e60(rax_16, rdx_4)
                    
                    i += 1
                    r14_1 = &r14_1[1]
                while (i s< arg1[0x5f].d)
            
            if (sub_140a6c1e0(rax_16 + 0x70) != 0)
                sub_1419efd00(rax_16 + 0x70)
            
            void** rsi_1 = arg1[0x60]
            uint64_t r14_3 = sx.q(arg1[0x61].d) << 3 u>> 3
            
            if (rsi_1 u> &rsi_1[arg1[0x61]])
                r14_3 = 0
            
            if (r14_3 != 0)
                do
                    void* rdx_5 = *rsi_1
                    
                    if (rdx_5 != 0)
                        sub_1419f1100(rax_16, rdx_5)
                    
                    rsi_1 = &rsi_1[1]
                    rdi_1 += 1
                while (rdi_1 != r14_3)
            
            if (sub_140a6c1e0(rax_16 + 0xc0) != 0)
                sub_1419efd00(rax_16 + 0xc0)
        
        void* rax_24 = sub_1419ea690((*(*arg1 + 0x150))(arg1))
        
        if (rax_24 != 0)
            sub_141a1ff80(rax_24, arg1)

return sub_141ddade0(arg1, arg2) __tailcall
