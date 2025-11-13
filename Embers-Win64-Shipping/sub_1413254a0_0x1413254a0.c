// 函数: sub_1413254a0
// 地址: 0x1413254a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && *(arg1 + sx.q(*arg1) * 0x18 + 0x28) != 0 && *(data_143eb4040 + 4) == 0)
    void* rcx = *(arg1 + 0x58)
    
    if (rcx != 0)
        void* rdx_3 = *(rcx + 8)
        
        if (rdx_3 == 0)
        label_1413255ac:
            int32_t rbx_1 = data_143f02c24
            int32_t rax_8 = rbx_1
            
            if ((rbx_1 & (rbx_1 - 1)) != 0)
                rax_8 = 1
            
            if (rbx_1 != rax_8)
                int32_t rcx_7 = data_143f02bac
                data_143f02c24 = rax_8
                
                if (rcx_7 != 0)
                    void*** rdx_6 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    void* rax_9 = &rdx_6[3]
                    
                    if (rax_9 u> data_143f02bd0)
                        sub_140b0e3d0(&data_143f02bc8, 0x20)
                        rcx_7 = data_143f02bac
                        rdx_6 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                        rax_9 = &rdx_6[3]
                    
                    data_143f02bc8 = rax_9
                    int64_t* rax_10 = data_143f02ba0
                    data_143f02bac = rcx_7 + 1
                    *rax_10 = rdx_6
                    int32_t rax_11 = data_143f02c24
                    data_143f02ba0 = &rdx_6[1]
                    rdx_6[1] = 0
                    *rdx_6 = &data_142f11588
                    rdx_6[2].d = rax_11
                else
                    data_143f02c28 = rax_8
            
            int32_t* rax_12 = sub_141978000(*(arg1 + 0x58), 0x10)
            
            if (rax_12 != 0)
                arg1[1] = *rax_12
                void* rcx_12 = *(arg1 + 0x58)
                arg1[2] = rax_12[2]
                sub_14198a650(rcx_12)
            
            sub_14196d720(*(arg1 + 0x58), &data_143f02b98, *(arg1 + sx.q(*arg1) * 0x18 + 0x28), 0)
            
            if (data_143f02c24 != rbx_1)
                int32_t rcx_14 = data_143f02bac
                data_143f02c24 = rbx_1
                
                if (rcx_14 != 0)
                    void*** rdx_11 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    void* rax_15 = &rdx_11[3]
                    
                    if (rax_15 u> data_143f02bd0)
                        sub_140b0e3d0(&data_143f02bc8, 0x20)
                        rcx_14 = data_143f02bac
                        rdx_11 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                        rax_15 = &rdx_11[3]
                    
                    data_143f02bc8 = rax_15
                    void**** rax_16 = data_143f02ba0
                    data_143f02bac = rcx_14 + 1
                    *rax_16 = rdx_11
                    int64_t rax = zx.q(data_143f02c24)
                    data_143f02ba0 = &rdx_11[1]
                    rdx_11[1] = 0
                    *rdx_11 = &data_142f11588
                    rdx_11[2].d = rax.d
                else
                    data_143f02c28 = rbx_1
        else
            bool z_1
            
            if (0 == *(rdx_3 + 0x18))
                *(rdx_3 + 0x18) = 0
                z_1 = true
            else
                *(rdx_3 + 0x18)
                z_1 = false
            
            if (z_1)
                int64_t* rcx_6 = *(rcx + 8)
                
                if ((*(*rcx_6 + 0x18))(rcx_6, rdx_3).b != 0)
                    goto label_1413255ac
    else
        TEB* gsbase
        
        if (data_143eb8790
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143eb8790)
            
            if (data_143eb8790 == 0xffffffff)
                sub_140b58260(&data_143eb8788, u"Scene view state exposure readback", 1)
                _Init_thread_footer(&data_143eb8790)
        
        void*** rax_3 = j_sub_140a82f30(0x18)
        void*** rbp_1
        
        if (rax_3 == 0)
            rbp_1 = nullptr
        else
            rbp_1 = sub_141961a80(rax_3, data_143eb8788)
        
        void*** rcx_5 = *(arg1 + 0x58)
        
        if (rcx_5 != rbp_1)
            *(arg1 + 0x58) = rbp_1
            sub_141303770(&arg1[0x16], rcx_5)
            rcx_5 = *(arg1 + 0x58)
        
        sub_14196d720(rcx_5, &data_143f02b98, *(arg1 + sx.q(*arg1) * 0x18 + 0x28), 0)

*arg1 = 1 - *arg1
