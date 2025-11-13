// 函数: sub_1420dc470
// 地址: 0x1420dc470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* r13 = arg4
void* const rsi = arg3
int32_t rdi = arg2

if (arg2 != *arg1)
    int32_t r8 = data_143e1d9b4
    int64_t r9 = data_143e1d9a0
    int64_t rbp_1 = 0
    uint64_t r15_1 = zx.q(arg6)
    
    while (*(rsi + 0xc) == 0)
        result = zx.q(*(r13 + 0xc))
        
        if (result.d s<= data_143e1d994)
            break
        
        void* const rdx_1
        
        if (result.d s>= r8)
            rdx_1 = nullptr
        else
            uint32_t rcx = zx.d(result.w)
            
            if (result.d s< 0)
                result = zx.q(result.d + 0xffff)
                rcx -= 0x10000
            
            rdx_1 = *(r9 + (sx.q(result.d s>> 0x10) << 3)) + sx.q(rcx) * 0x18
        
        result = zx.q(*(rdx_1 + 8) u>> 0x1e)
        
        if ((result.b & 1) != 0)
            break
        
        int64_t r14_1 = sx.q(arg5[1].d)
        int32_t rax_4 = (r14_1 + 1).d
        arg5[1].d = rax_4
        
        if (rax_4 s> *(arg5 + 0xc))
            sub_1405a4d70(arg5)
        
        *(*arg5 + (r14_1 << 3)) = r13
        *(rsi + 0xc) = *arg1
        void* rsi_1 = *(arg1 + 8)
        int64_t r14_2 = sx.q(*(rsi_1 + 0x10))
        int32_t rax_7 = (r14_2 + 1).d
        *(rsi_1 + 0x10) = rax_7
        
        if (rax_7 s> *(rsi_1 + 0x14))
            sub_1405a4cf0(rsi_1 + 8)
        
        result = *(rsi_1 + 8)
        *(result + (r14_2 << 2)) = rdi
        
        if (r15_1.b == 0)
            break
        
        int64_t* rdi_1 = r13[4]
        int32_t arg_8
        int32_t arg_10
        int32_t* rcx_12
        int32_t* rdx_11
        int32_t i
        void* rdi_2
        int64_t r8_3
        int64_t r14_3
        
        if (sub_1420de8c0(arg1, rdi_1) == 0)
            i = *(rdi_1 + 0xc)
            rdi_2 = *(arg1 + 8)
            rdx_11 = *(rdi_2 + 0x28)
            r8_3 = sx.q(*(rdi_2 + 0x30))
            rcx_12 = rdx_11
            r14_3 = r8_3 << 2
            void* rax_36 = r14_3 + rdx_11
            
            if (rdx_11 == rax_36)
            label_1420dc84b:
                int32_t rax_37 = (r8_3 + 1).d
                bool cond:0_1 = rax_37 s<= *(rdi_2 + 0x34)
                *(rdi_2 + 0x30) = rax_37
                
                if (not(cond:0_1))
                    sub_1405a4cf0(rdi_2 + 0x28)
                
                *(r14_3 + *(rdi_2 + 0x28)) = i
            else
                while (*rcx_12 != i)
                    rcx_12 = &rcx_12[1]
                    
                    if (rcx_12 == rax_36)
                        goto label_1420dc84b
                
            label_1420dc846:
                
                if (((rcx_12 - rdx_11) s>> 2).d == 0xffffffff)
                    goto label_1420dc84b
        else if (rdi_1 != 0)
            int32_t r8_1 = *(rdi_1 + 0xc)
            void* const rsi_2
            
            if (r8_1 s>= data_143e1d9b4)
                rsi_2 = nullptr
            else
                uint32_t rdx_5 = zx.d(r8_1.w)
                int32_t rax_9 = r8_1
                
                if (r8_1 s< 0)
                    rax_9 = r8_1 + 0xffff
                    rdx_5 -= 0x10000
                
                rsi_2 = *(data_143e1d9a0 + (sx.q(rax_9 s>> 0x10) << 3)) + sx.q(rdx_5) * 0x18
            
            int32_t rax_13 = *(rsi_2 + 0xc)
            
            if (rax_13 != *arg1)
                char rcx_7 = *(rsi_2 + 0xb) & 1
                
                if (rcx_7 != 0 || rax_13 != 0)
                    if (rcx_7 == 0)
                        r8_1 = rax_13
                    
                    bool cond:1_1 = r8_1 s>= data_143e1d9b4
                    arg_10 = r8_1
                    void* const rax_26
                    
                    if (cond:1_1)
                        rax_26 = nullptr
                    else
                        uint32_t rax_23 = zx.d(r8_1.w)
                        
                        if (r8_1 s< 0)
                            r8_1 += 0xffff
                            rax_23 -= 0x10000
                        
                        rax_26 =
                            *(data_143e1d9a0 + (sx.q(r8_1 s>> 0x10) << 3)) + sx.q(rax_23) * 0x18
                    
                    r15_1 = sx.q(not.d(*(rax_26 + 0xc))) * 0x50 + data_143e1d678
                    sub_1408d92c0(*(arg1 + 8) + 0x18, &arg_10)
                    sub_1408d92c0(r15_1 + 0x38, arg1)
                    int64_t rsi_3 = 0
                    int32_t* rdi_3 = *(r15_1 + 0x18)
                    uint64_t r14_5 = sx.q(*(r15_1 + 0x20)) << 2 u>> 2
                    
                    if (rdi_3 u> &rdi_3[sx.q(*(r15_1 + 0x20))])
                        r14_5 = 0
                    
                    if (r14_5 != 0)
                        do
                            int32_t rax_32 = *rdi_3
                            arg_8 = rax_32
                            
                            if (rax_32 != *arg1)
                                sub_1408d92c0(*(arg1 + 8) + 0x18, &arg_8)
                            
                            rdi_3 = &rdi_3[1]
                            rsi_3 += 1
                        while (rsi_3 != r14_5)
                    
                    int64_t rsi_4 = 0
                    int32_t* rdi_4 = *(r15_1 + 0x28)
                    uint64_t r14_7 = sx.q(*(r15_1 + 0x30)) << 2 u>> 2
                    
                    if (rdi_4 u> &rdi_4[sx.q(*(r15_1 + 0x30))])
                        r14_7 = 0
                    
                    if (r14_7 != 0)
                        do
                            int64_t* rcx_21 = *(arg1 + 8) + 0x28
                            arg_8 = *rdi_4
                            sub_1408d92c0(rcx_21, &arg_8)
                            rsi_4 += 1
                            rdi_4 = &rdi_4[1]
                        while (rsi_4 != r14_7)
                else if (r8_1 s> data_143e1d994)
                    char rax_14 = sub_1420de8c0(arg1, rdi_1)
                    void* const rax_19
                    int32_t r10_1
                    
                    if (rax_14 != 0 && (rdi_1[1].d & 0x1400) == 0)
                        r10_1 = *(rdi_1 + 0xc)
                        
                        if (r10_1 s>= data_143e1d9b4)
                            rax_19 = nullptr
                        else
                            uint32_t rdx_8 = zx.d(r10_1.w)
                            int32_t rax_15 = r10_1
                            
                            if (r10_1 s< 0)
                                rax_15 = r10_1 + 0xffff
                                rdx_8 -= 0x10000
                            
                            rax_19 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3))
                                + sx.q(rdx_8) * 0x18
                    
                    if (rax_14 == 0 || (rdi_1[1].d & 0x1400) != 0
                            || ((*(rax_19 + 8) u>> 0x1e).b & 1) != 0)
                        i = *(rdi_1 + 0xc)
                        rdi_2 = *(arg1 + 8)
                        rdx_11 = *(rdi_2 + 0x28)
                        r8_3 = sx.q(*(rdi_2 + 0x30))
                        rcx_12 = rdx_11
                        r14_3 = r8_3 << 2
                        void* rax_22 = r14_3 + rdx_11
                        
                        if (rdx_11 == rax_22)
                            goto label_1420dc84b
                        
                        while (*rcx_12 != i)
                            rcx_12 = &rcx_12[1]
                            
                            if (rcx_12 == rax_22)
                                goto label_1420dc84b
                        
                        goto label_1420dc846
                    
                    sub_1420dc470(arg1, zx.q(r10_1), rsi_2, rdi_1, arg5, 1)
        int64_t* rdi_5 = r13[2]
        result = zx.q(*(rdi_5 + 0xcc) u>> 7)
        
        if ((result.b & 1) != 0)
            break
        
        if (rdi_5 != 0)
            int32_t r8_5 = *(rdi_5 + 0xc)
            void* const rsi_5
            
            if (r8_5 s>= data_143e1d9b4)
                rsi_5 = nullptr
            else
                uint32_t rdx_18 = zx.d(r8_5.w)
                int32_t rax_40 = r8_5
                
                if (r8_5 s< 0)
                    rax_40 = r8_5 + 0xffff
                    rdx_18 -= 0x10000
                
                rsi_5 = *(data_143e1d9a0 + (sx.q(rax_40 s>> 0x10) << 3)) + sx.q(rdx_18) * 0x18
            
            int32_t rax_44 = *(rsi_5 + 0xc)
            
            if (rax_44 != *arg1)
                char rcx_27 = *(rsi_5 + 0xb) & 1
                
                if (rcx_27 != 0 || rax_44 != 0)
                    if (rcx_27 == 0)
                        r8_5 = rax_44
                    
                    bool cond:2_1 = r8_5 s>= data_143e1d9b4
                    arg_10 = r8_5
                    void* const rax_59
                    
                    if (cond:2_1)
                        rax_59 = nullptr
                    else
                        uint32_t rax_56 = zx.d(r8_5.w)
                        
                        if (r8_5 s< 0)
                            r8_5 += 0xffff
                            rax_56 -= 0x10000
                        
                        rax_59 =
                            *(data_143e1d9a0 + (sx.q(r8_5 s>> 0x10) << 3)) + sx.q(rax_56) * 0x18
                    
                    r15_1 = sx.q(not.d(*(rax_59 + 0xc))) * 0x50 + data_143e1d678
                    sub_1408d92c0(*(arg1 + 8) + 0x18, &arg_10)
                    sub_1408d92c0(r15_1 + 0x38, arg1)
                    int64_t rsi_6 = 0
                    int32_t* rdi_7 = *(r15_1 + 0x18)
                    uint64_t r14_10 = sx.q(*(r15_1 + 0x20)) << 2 u>> 2
                    
                    if (rdi_7 u> &rdi_7[sx.q(*(r15_1 + 0x20))])
                        r14_10 = 0
                    
                    if (r14_10 != 0)
                        do
                            int32_t rax_65 = *rdi_7
                            arg_8 = rax_65
                            
                            if (rax_65 != *arg1)
                                sub_1408d92c0(*(arg1 + 8) + 0x18, &arg_8)
                            
                            rdi_7 = &rdi_7[1]
                            rsi_6 += 1
                        while (rsi_6 != r14_10)
                    
                    int64_t rsi_7 = 0
                    int32_t* rdi_8 = *(r15_1 + 0x28)
                    uint64_t r14_12 = sx.q(*(r15_1 + 0x30)) << 2 u>> 2
                    
                    if (rdi_8 u> &rdi_8[sx.q(*(r15_1 + 0x30))])
                        r14_12 = 0
                    
                    if (r14_12 != 0)
                        do
                            int64_t* rcx_44 = *(arg1 + 8) + 0x28
                            arg_8 = *rdi_8
                            sub_1408d92c0(rcx_44, &arg_8)
                            rsi_7 += 1
                            rdi_8 = &rdi_8[1]
                        while (rsi_7 != r14_12)
                else if (r8_5 s> data_143e1d994)
                    char rax_45 = sub_1420de8c0(arg1, rdi_5)
                    void* const rax_50
                    int32_t r10_2
                    
                    if (rax_45 != 0 && (rdi_5[1].d & 0x1400) == 0)
                        r10_2 = *(rdi_5 + 0xc)
                        
                        if (r10_2 s>= data_143e1d9b4)
                            rax_50 = nullptr
                        else
                            uint32_t rdx_21 = zx.d(r10_2.w)
                            int32_t rax_46 = r10_2
                            
                            if (r10_2 s< 0)
                                rax_46 = r10_2 + 0xffff
                                rdx_21 -= 0x10000
                            
                            rax_50 = *(data_143e1d9a0 + (sx.q(rax_46 s>> 0x10) << 3))
                                + sx.q(rdx_21) * 0x18
                    
                    if (rax_45 == 0 || (rdi_5[1].d & 0x1400) != 0
                            || ((*(rax_50 + 8) u>> 0x1e).b & 1) != 0)
                        int32_t i_1 = *(rdi_5 + 0xc)
                        void* rdi_6 = *(arg1 + 8)
                        int32_t* rdx_24 = *(rdi_6 + 0x28)
                        int64_t r8_7 = sx.q(*(rdi_6 + 0x30))
                        int32_t* rcx_32 = rdx_24
                        void* rax_53 = &rdx_24[r8_7]
                        
                        if (rdx_24 != rax_53)
                            while (*rcx_32 != i_1)
                                rcx_32 = &rcx_32[1]
                                
                                if (rcx_32 == rax_53)
                                    goto label_1420dc9cf
                        
                        if (rdx_24 == rax_53 || ((rcx_32 - rdx_24) s>> 2).d == 0xffffffff)
                        label_1420dc9cf:
                            int32_t rax_54 = (r8_7 + 1).d
                            *(rdi_6 + 0x30) = rax_54
                            
                            if (rax_54 s> *(rdi_6 + 0x34))
                                sub_1405a4cf0(rdi_6 + 0x28)
                            
                            *((r8_7 << 2) + *(rdi_6 + 0x28)) = i_1
                    else
                        sub_1420dc470(arg1, zx.q(r10_2), rsi_5, rdi_5, arg5, 1)
        
        result = r13[2]
        r13 = result[4]
        
        if (r13 == 0)
            break
        
        int32_t r8_9 = *(r13 + 0xc)
        
        if (r8_9 s>= data_143e1d9b4)
            rsi = nullptr
        else
            uint32_t rdx_31 = zx.d(r8_9.w)
            int32_t rax_69 = r8_9
            
            if (r8_9 s< 0)
                rax_69 = r8_9 + 0xffff
                rdx_31 -= 0x10000
            
            rsi = *(data_143e1d9a0 + (sx.q(rax_69 s>> 0x10) << 3)) + sx.q(rdx_31) * 0x18
        
        result = zx.q(*(rsi + 0xc))
        
        if (result.d == *arg1)
            break
        
        char rcx_47 = *(rsi + 0xb) & 1
        
        if (rcx_47 != 0 || result.d != 0)
            if (rcx_47 == 0)
                r8_9 = result.d
            
            bool cond:3_1 = r8_9 s>= data_143e1d9b4
            arg_10 = r8_9
            void* const rax_87
            
            if (cond:3_1)
                rax_87 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r8_9)
                uint32_t rdx_39 = zx.d(temp0_1)
                int32_t rax_82 = temp1_1 + rdx_39
                rax_87 = *(data_143e1d9a0 + (sx.q(rax_82 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_82.w) - rdx_39) * 0x18
            
            void* r15_8 = sx.q(not.d(*(rax_87 + 0xc))) * 0x50 + data_143e1d678
            sub_1408d92c0(*(arg1 + 8) + 0x18, &arg_10)
            sub_1408d92c0(r15_8 + 0x38, arg1)
            int64_t rsi_9 = 0
            int32_t* rdi_9 = *(r15_8 + 0x18)
            uint64_t r14_14 = sx.q(*(r15_8 + 0x20)) << 2 u>> 2
            
            if (rdi_9 u> &rdi_9[sx.q(*(r15_8 + 0x20))])
                r14_14 = 0
            
            if (r14_14 != 0)
                do
                    int32_t rax_93 = *rdi_9
                    arg_8 = rax_93
                    
                    if (rax_93 != *arg1)
                        sub_1408d92c0(*(arg1 + 8) + 0x18, &arg_8)
                    
                    rdi_9 = &rdi_9[1]
                    rsi_9 += 1
                while (rsi_9 != r14_14)
            
            int32_t* rdi_10 = *(r15_8 + 0x28)
            result = &rdi_10[sx.q(*(r15_8 + 0x30))]
            uint64_t rsi_11 = sx.q(*(r15_8 + 0x30)) << 2 u>> 2
            
            if (rdi_10 u> result)
                rsi_11 = 0
            
            if (rsi_11 != 0)
                do
                    int64_t* rcx_65 = *(arg1 + 8) + 0x28
                    arg_8 = *rdi_10
                    result = sub_1408d92c0(rcx_65, &arg_8)
                    rbp_1 += 1
                    rdi_10 = &rdi_10[1]
                while (rbp_1 != rsi_11)
            
            break
        
        if (r8_9 s<= data_143e1d994)
            break
        
        if (sub_1420de8c0(arg1, r13) != 0 && (r13[1].d & 0x1400) == 0)
            rdi = *(r13 + 0xc)
            r8 = data_143e1d9b4
            r9 = data_143e1d9a0
            void* const rdx_35
            
            if (rdi s>= r8)
                rdx_35 = nullptr
            else
                uint32_t rcx_49 = zx.d(rdi.w)
                int32_t rax_74 = rdi
                
                if (rdi s< 0)
                    rax_74 = rdi + 0xffff
                    rcx_49 -= 0x10000
                
                rdx_35 = *(r9 + (sx.q(rax_74 s>> 0x10) << 3)) + sx.q(rcx_49) * 0x18
            
            result = zx.q(*(rdx_35 + 8) u>> 0x1e)
            
            if ((result.b & 1) == 0)
                r15_1.b = 1
                
                if (rdi == *arg1)
                    break
                
                continue
        
        void* rbx_1 = *(arg1 + 8)
        int32_t i_2 = *(r13 + 0xc)
        void* rdx_36 = *(rbx_1 + 0x28)
        int64_t r8_10 = sx.q(*(rbx_1 + 0x30))
        void* rcx_51 = rdx_36
        int32_t* rsi_8 = r8_10 << 2
        result = rdx_36 + rsi_8
        
        if (rdx_36 != result)
            while (*rcx_51 != i_2)
                rcx_51 += 4
                
                if (rcx_51 == result)
                    goto label_1420dcc55
        
        if (rdx_36 == result || ((rcx_51 - rdx_36) s>> 2).d == 0xffffffff)
        label_1420dcc55:
            int32_t rax_79 = (r8_10 + 1).d
            *(rbx_1 + 0x30) = rax_79
            
            if (rax_79 s> *(rbx_1 + 0x34))
                sub_1405a4cf0(rbx_1 + 0x28)
            
            result = *(rbx_1 + 0x28)
            *(rsi_8 + result) = i_2
        
        break

return result
