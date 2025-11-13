// 函数: sub_1410fa850
// 地址: 0x1410fa850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r13 = arg3
sub_140b33630("RenderDFAO")
char rax = sub_141146960(arg1)
wchar32* rbx

if (*(arg1 + 8) != 0)
    if (sub_1419767e0() == 0)
        int64_t rcx_1 = sx.q(*(*(arg1 + 8) + 8))
        char rax_3 = sub_14110e330(rcx_1.d, (*U"1111")[rcx_1])
        char rax_4
        
        if (rax_3 != 0)
            rax_4 = sub_141108ca0(arg1)
        
        int64_t rbp
        
        if (rax_3 == 0 || rax_4 == 0)
            rbp.b = 0
        else
            rbp.b = 1
        
        void* rax_5 = *(arg1 + 8)
        
        if (rax_5 == 0)
            rbx.b = 0
        else
            int64_t rcx_3 = sx.q(*(rax_5 + 8))
            
            if (sub_14110e330(rcx_3.d, (*U"1111")[rcx_3]) == 0)
                rbx.b = 0
            else if (sub_141108ca0(arg1) == 0
                    && (*(arg1 + 0xa8) s<= 0 || (*(*(arg1 + 0xa0) + 0x497c) & 0x80) == 0))
                int64_t* rcx_5 = *(*(arg1 + 8) + 0x18)
                
                if (rcx_5 == 0)
                    rbx.b = 0
                else if ((*(*rcx_5 + 0x50))(rcx_5) == 0 || data_1439b5c30 == 0)
                    rbx.b = 0
                else
                    rbx.b = 1
            else if (data_1439b5c30 == 0)
                rbx.b = 0
            else
                rbx.b = 1
        
        char rax_12 = sub_1410c2080(arg1)
        char rax_13
        
        if (rbx.b == 0 && rbp.b == 0)
            rax_13 = sub_1411467d0(arg1)
        
        if (rbx.b != 0 || rbp.b != 0 || rax_13 != 0 || rax_12 != 0)
            rbx.b = 1
    else
        rbx.b = 0
else
    rbx.b = 0

if (rax != 0)
    if (data_1439b5c24 s> 2)
        sub_141fef340(&data_143f3dad0, arg2, *(arg1 + 0x3b0))
    
    sub_141fef340(&data_143f3d8f0, arg2, *(arg1 + 0x3b0))
    sub_14115b600(arg1, arg2)
    goto label_1410fa9bf

if (rbx.b != 0)
    sub_14111d2b0(arg1, 0)
label_1410fa9bf:
    
    if (rbx.b != 0)
        sub_141fee310(&data_143a2dd30, arg2, *(arg1 + 0x3b0))
        int128_t zmm2_1
        int128_t zmm3_1
        zmm2_1, zmm3_1 = sub_141156e30(arg1, arg2)
        
        if (r13 != 0 && *(arg2 + 0x14) u> 0)
            zmm2_1, zmm3_1 = j_sub_14196ef60(&data_143f02b88, arg2, zmm2_1, zmm3_1)
        
        int32_t i = 0
        
        if (*(arg1 + 0xa8) s> 0)
            int64_t r12_1 = 0
            
            do
                int32_t rbx_1 = *(arg2 + 0x8c)
                int64_t* rbp_2 = *(arg1 + 0xa0) + r12_1
                int32_t rax_14 = rbp_2[0x15b].d
                
                if (rbx_1 != rax_14)
                    bool cond:1_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rax_14
                    
                    if (cond:1_1)
                        void*** rdx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_15 = &rdx_10[3]
                        
                        if (rax_15 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_15 = &rdx_10[3]
                        
                        *(arg2 + 0x30) = rax_15
                        int64_t* rax_16 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_16 = rdx_10
                        int32_t rax_17 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_10[1]
                        rdx_10[1] = 0
                        *rdx_10 = &data_142f11588
                        rdx_10[2].d = rax_17
                    else
                        *(arg2 + 0x90) = rax_14
                
                zmm2_1, zmm3_1 = sub_1411f3430(&rbp_2[0xa1b], rbp_2, arg2)
                
                if (sub_141108d80(arg1) != 0)
                    void* r8_4 = *(arg1 + 8)
                    void* rax_19 = *(r8_4 + 0xf80)
                    zmm3_1 = *(r8_4 + 0x6318)
                    
                    if (rax_19 != 0)
                        char rcx_15 = *(rax_19 + 0x20)
                        
                        if ((rcx_15 & 1) != 0 && (rcx_15 & 2) == 0)
                            zmm3_1 = *(rax_19 + 0xc0)
                    
                    void* rdx_15 = sx.q(i) * 0x5240 + *(arg1 + 0xa0)
                    zmm2_1, zmm3_1 =
                        sub_1411591f0(arg2, rdx_15, r8_4, zmm3_1, zmm2_1, rdx_15 + 0x17b0)
                
                if (*(arg2 + 0x8c) != rbx_1)
                    bool cond:2_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rbx_1
                    
                    if (cond:2_1)
                        void*** rdx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_22 = &rdx_18[3]
                        
                        if (rax_22 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_22 = &rdx_18[3]
                        
                        *(arg2 + 0x30) = rax_22
                        int64_t* rax_23 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_23 = rdx_18
                        int32_t rax_24 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_18[1]
                        rdx_18[1] = 0
                        *rdx_18 = &data_142f11588
                        rdx_18[2].d = rax_24
                    else
                        *(arg2 + 0x90) = rbx_1
                
                i += 1
                r12_1 += 0x5240
            while (i s< *(arg1 + 0xa8))
            
            r13 = arg3
        
        if (r13 == 0 && *(arg2 + 0x14) u> 0)
            j_sub_14196ef60(&data_143f02b88, arg2, zmm2_1, zmm3_1)

return sub_140b37f60("RenderDFAO") __tailcall
