// 函数: sub_140bc81e0
// 地址: 0x140bc81e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr

if (arg2 != 0)
    int32_t rax_1 = *(arg2 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
        void* rsi = *(arg1 + 0x90)
        EnterCriticalSection(rsi + 0x58)
        
        if (arg2 != *(rsi + 0x80))
            *(rsi + 0x80) = arg2
            int32_t arg_10
            sub_140865c40(rsi + 8, &arg_10, arg2)
            int64_t rax_11 = sx.q(arg_10)
            void* const rcx_6
            
            if (rax_11.d == 0xffffffff)
                rcx_6 = nullptr
            else
                rcx_6 = *(rsi + 8) + rax_11 * 0x18
            
            int64_t* rax_13 = rcx_6 + 8
            
            if (rcx_6 == 0)
                rax_13 = nullptr
            
            if (rax_13 == 0)
                *(rsi + 0x88) = 0
            else
                *(rsi + 0x88) = *rax_13
        
        void* rsi_1 = *(rsi + 0x88)
        
        if (rsi != -0x58)
            LeaveCriticalSection(rsi + 0x58)
        
        if (rsi_1 != 0)
            return rsi_1
        
        if (arg3 != 0)
            int64_t r8
            r8.b = 1
            void* rax_16 = sub_140bc81e0(arg1, *(arg2 + 0x20), r8)
            
            if (rax_16 != 0)
                int32_t rax_17 = *(arg2 + 0xc)
                
                if (rax_17 s< data_143e1d9b4)
                    int16_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(rax_17)
                    uint32_t rdx_7 = zx.d(temp2_1)
                    int32_t rax_19 = temp3_1 + rdx_7
                    rdi = *(data_143e1d9a0 + (sx.q(rax_19 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_19.w) - rdx_7) * 0x18
                
                void* rax_25 = sub_140d2dfc0(*(arg2 + 0x10), rax_16, *(arg2 + 0x18), 
                    (*(arg1 + 0xa8) & *(arg2 + 8)) | *(arg1 + 0xac), 
                    (*(rdi + 8) & *(arg1 + 0xb0)) | *(arg1 + 0xb4), sub_140d209c0(arg2), 1, 
                    *(arg1 + 0xb8), 0)
                sub_140bc2650(arg1, arg2, rax_25)
                return rax_25
        
        return nullptr

return 0
