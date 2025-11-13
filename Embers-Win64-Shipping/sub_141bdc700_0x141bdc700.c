// 函数: sub_141bdc700
// 地址: 0x141bdc700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140d31640() != 0)
    void* rax_1 = *(arg1 + 0x3a0)
    
    if (rax_1 != 0)
        int32_t rax_2 = *(rax_1 + 0xc)
        void* const rax_9
        
        if (rax_2 s>= data_143e1d9b4)
            rax_9 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_2)
            uint32_t rdx_2 = zx.d(temp0_1)
            int32_t rax_4 = temp1_1 + rdx_2
            rax_9 =
                *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_2) * 0x18
        
        int64_t rdx
        
        if (((*(rax_9 + 8) u>> 0x1c).b & 1) == 0)
            char arg_8 = 0
            char* var_10_1 = &arg_8
            void*** (* var_18)() = sub_140884c50
            void* rax_12
            rax_12, rdx = sub_140a756e0(&var_18, &data_14397f5f0)
            
            if (*(rax_12 + 0x20) == 0)
                int64_t* rcx_5 = *(arg1 + 0x3a0)
                (*(*rcx_5 + 0x320))(rcx_5)
        
        int64_t* rcx_6 = *(arg1 + 0x3a0)
        rdx.b = 1
        (*(*rcx_6 + 0x260))(rcx_6, rdx)
        *(arg1 + 0x3a0) = 0

return sub_140de1b90(arg1 + 0x2b8, &data_143e244b0) __tailcall
