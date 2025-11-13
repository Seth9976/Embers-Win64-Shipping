// 函数: sub_1413257b0
// 地址: 0x1413257b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && *(arg1 + (sx.q(*arg1) << 3) + 0x10) != 0 && *(data_143eb4040 + 4) == 0)
    void* rcx = *(arg1 + 0x20)
    
    if (rcx != 0)
        void* rdx_2 = *(rcx + 8)
        
        if (rdx_2 == 0)
        label_1413258ec:
            int32_t rbx_2 = data_143f02c24
            int32_t rax_8 = rbx_2
            
            if ((rbx_2 & (rbx_2 - 1)) != 0)
                rax_8 = 1
            
            if (rbx_2 != rax_8)
                int32_t rcx_9 = data_143f02bac
                data_143f02c24 = rax_8
                
                if (rcx_9 != 0)
                    void*** rdx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    void* rax_9 = &rdx_5[3]
                    
                    if (rax_9 u> data_143f02bd0)
                        sub_140b0e3d0(&data_143f02bc8, 0x20)
                        rcx_9 = data_143f02bac
                        rdx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                        rax_9 = &rdx_5[3]
                    
                    data_143f02bc8 = rax_9
                    int64_t* rax_10 = data_143f02ba0
                    data_143f02bac = rcx_9 + 1
                    *rax_10 = rdx_5
                    int32_t rax_11 = data_143f02c24
                    data_143f02ba0 = &rdx_5[1]
                    rdx_5[1] = 0
                    *rdx_5 = &data_142f11588
                    rdx_5[2].d = rax_11
                else
                    data_143f02c28 = rax_8
            
            int32_t* rax_12 = sub_141978070(*(arg1 + 0x20))
            
            if (rax_12 != 0)
                arg1[1] = *rax_12
                void* rcx_14 = *(arg1 + 0x20)
                arg1[2] = rax_12[2]
                sub_14198a670(rcx_14)
            
            int64_t rax_14 = sx.q(*arg1)
            void* rcx_15 = *(arg1 + 0x20)
            int128_t var_18 = data_142d3f800
            sub_14196d850(rcx_15, &data_143f02b98, *(*(arg1 + (rax_14 << 3) + 0x10) + 8), &var_18)
            
            if (data_143f02c24 != rbx_2)
                int32_t rcx_16 = data_143f02bac
                data_143f02c24 = rbx_2
                
                if (rcx_16 != 0)
                    void*** rdx_11 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    void* rax_15 = &rdx_11[3]
                    
                    if (rax_15 u> data_143f02bd0)
                        sub_140b0e3d0(&data_143f02bc8, 0x20)
                        rcx_16 = data_143f02bac
                        rdx_11 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                        rax_15 = &rdx_11[3]
                    
                    data_143f02bc8 = rax_15
                    void**** rax_16 = data_143f02ba0
                    data_143f02bac = rcx_16 + 1
                    *rax_16 = rdx_11
                    int64_t rax = zx.q(data_143f02c24)
                    data_143f02ba0 = &rdx_11[1]
                    rdx_11[1] = 0
                    *rdx_11 = &data_142f11588
                    rdx_11[2].d = rax.d
                else
                    data_143f02c28 = rbx_2
        else
            bool z_1
            
            if (0 == *(rdx_2 + 0x18))
                *(rdx_2 + 0x18) = 0
                z_1 = true
            else
                *(rdx_2 + 0x18)
                z_1 = false
            
            if (z_1)
                int64_t* rcx_8 = *(rcx + 8)
                
                if ((*(*rcx_8 + 0x18))(rcx_8, rdx_2).b != 0)
                    goto label_1413258ec
    else
        TEB* gsbase
        
        if (data_143eb8780
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143eb8780)
            
            if (data_143eb8780 == 0xffffffff)
                sub_140b58260(&data_143eb8778, u"Scene view state exposure readback", 1)
                _Init_thread_footer(&data_143eb8780)
        
        void*** rax_3 = j_sub_140a82f30(0x18)
        void*** rsi_1
        
        if (rax_3 == 0)
            rsi_1 = nullptr
        else
            rsi_1 = sub_141961d50(rax_3, data_143eb8778)
        
        void*** rbx_1 = *(arg1 + 0x20)
        void*** rcx_4 = rbx_1
        
        if (rbx_1 != rsi_1)
            *(arg1 + 0x20) = rsi_1
            rcx_4 = rsi_1
            
            if (rbx_1 != 0)
                sub_1405d1550(&rbx_1[2])
                *rbx_1 = &data_142f5b0f8
                sub_14081c9d0(&rbx_1[1])
                j_sub_140a74f90(rbx_1)
                rcx_4 = *(arg1 + 0x20)
        
        int64_t rax_5 = sx.q(*arg1)
        int128_t var_28 = data_142d3f800
        sub_14196d850(rcx_4, &data_143f02b98, *(*(arg1 + (rax_5 << 3) + 0x10) + 8), &var_28)

*arg1 = 1 - *arg1
