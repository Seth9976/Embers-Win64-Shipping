// 函数: sub_1408354d0
// 地址: 0x1408354d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_14074a210(*(arg1 + 0x14))

if (result.b != 0)
    if (arg4 != 0)
        sub_1408288d0(arg1, arg2, arg3, 2)
        void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax = &rcx_4[2]
        
        if (rax u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x18], 0x18)
            rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax = &rcx_4[2]
        
        *(arg2 + 0x30) = rax
        int64_t* rax_1 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_1 = rcx_4
        *(arg2 + 8) = &rcx_4[1]
        rcx_4[1] = 0
        *rcx_4 = &data_142da7758
        sub_140840b70(arg1, arg2, arg1 + 0x2f8)
        void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_3 = &rcx_11[2]
        
        if (rax_3 u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x18], 0x18)
            rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_3 = &rcx_11[2]
        
        *(arg2 + 0x30) = rax_3
        int64_t* rax_4 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_4 = rcx_11
        *(arg2 + 8) = &rcx_11[1]
        rcx_11[1] = 0
        *rcx_11 = &data_142da7768
        sub_14083cc90(arg1 + 0x2f8, 0, 0)
        result = sub_140829930(arg1)
    
    void*** rcx_19 = *(arg1 + 0x70)
    
    if (rcx_19 == 0 || *(arg1 + 0x78) == 0)
        result = *(arg1 + 0x34)
        
        if (result != 0)
            if (rcx_19 == 0)
                void*** rax_6 = j_sub_140a82f30(0x18)
                void arg_8
                
                if (rax_6 == 0)
                    rcx_19 = nullptr
                else
                    rcx_19 = sub_141961a80(rax_6, 
                        *sub_140b58260(&arg_8, Niagara GPU Instance Count Readback", 1))
                result = *(arg1 + 0x34)
                *(arg1 + 0x70) = rcx_19
            
            int64_t r8_2 = *(arg1 + 0x40)
            *(arg1 + 0x78) = result
            return (*rcx_19)[2](rcx_19, arg2, r8_2, 0)

return result
