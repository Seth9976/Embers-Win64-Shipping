// 函数: sub_140a1d9d0
// 地址: 0x140a1d9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t var_f8
void var_d8

if ((arg1[5].b & 1) == 0)
    (*(*arg1 + 8))(arg1, sx.q(arg2[1].d) * 2, sx.q(*(arg2 + 0xc)) * 2)
    
    if ((arg1[5].b & 0x40) != 0)
    label_140a1dda4:
        int32_t rax_26 = arg2[1].d
        int64_t i = 0
        int32_t rdx_22 = rax_26 - 1
        
        if (rax_26 == 0)
            rdx_22 = 0
        
        uint64_t rbx_3
        
        if (rax_26 == 0)
            rbx_3 = &data_142d40450
        else
            rbx_3 = *arg2
        
        int32_t rcx_26 = rdx_22 + 1
        uint64_t rax_28
        
        if (rbx_3 == 0)
            rbx_3 = 0
            rax_28 = 0
        else
            if (rcx_26 s> 0 && *(rbx_3 + (sx.q(rdx_22) << 1)) == 0)
                rcx_26 = rdx_22
            
            if (rcx_26 != 0xffffffff)
                rax_28 = zx.q(rcx_26)
            else
                rax_28 = -1
                
                do
                    rax_28 += 1
                while (*(rbx_3 + (rax_28 << 1)) != 0)
        
        int64_t* rcx_27 = arg1[1]
        int32_t r14_2 = (rax_28 + 1).d
        var_f8 = neg.d(r14_2)
        int32_t* rdx_23 = *rcx_27
        
        if (&rdx_23[1] u> rcx_27[1])
            int32_t* rdx_24 = &var_f8
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_24, arg3)
            else
                (*(*arg1 + 0x150))(arg1, rdx_24, 4)
        else
            var_f8 = *rdx_23
            *rcx_27 += 4
        
        if (r14_2 != 0)
            int64_t r15_1 = sx.q(r14_2)
            int64_t r12_1 = r15_1 * 2
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                uint64_t var_e8 = 0
                int32_t var_e0_1 = r14_2
                sub_1405a4c70(&var_e8, r14_2, 0)
                uint64_t rbx_4 = var_e8
                memcpy(rbx_4, rbx_3, r12_1.d)
                int32_t i_3 = 0
                
                if (r14_2 s> 0 && r14_2 u>= 0x20 && data_143ccb970 s>= 2)
                    int32_t rax_36 = r14_2 & 0x8000001f
                    
                    if (rax_36 s< 0)
                        rax_36 = ((rax_36 - 1) | 0xffffffe0) + 1
                    
                    void* rax_39 = rbx_4 + 0x20
                    
                    do
                        int32_t zmm0_1[0x4] = *(rax_39 - 0x20)
                        i_3 += 0x20
                        rax_39 += 0x40
                        i += 0x20
                        *(rax_39 - 0x60) = __pshufb_xmmdq_memdq(zmm0_1, data_142e51f30)
                        *(rax_39 - 0x50) = __pshufb_xmmdq_memdq(*(rax_39 - 0x50), data_142e51f30)
                        arg3.o = *(rax_39 - 0x40)
                        arg3.o = __pshufb_xmmdq_memdq(arg3.o, data_142e51f30)
                        *(rax_39 - 0x40) = arg3.o
                        *(rax_39 - 0x30) = __pshufb_xmmdq_memdq(*(rax_39 - 0x30), data_142e51f30)
                    while (i s< sx.q(r14_2 - rax_36))
                
                for (int64_t i_1 = sx.q(i_3); i_1 s< r15_1; i_1 += 1)
                    *(rbx_4 + (i_1 << 1)) = ror.w(*(rbx_4 + (i_1 << 1)), 8)
                
                (*(*arg1 + 0x150))(arg1, rbx_4, r12_1)
                
                if (rbx_4 != 0)
                    sub_140a74f90(rbx_4)
            else
                (*(*arg1 + 0x150))(arg1, rbx_3, r12_1)
    else
        int32_t rdx_15 = arg2[1].d
        
        if (rdx_15 != 0)
            uint64_t rcx_19 = *arg2
            int16_t i_2 = *rcx_19
            
            while (i_2 != 0)
                if (i_2 u> 0x7f)
                    goto label_140a1dda4
                
                i_2 = *(rcx_19 + 2)
                rcx_19 += 2
        
        int64_t* rcx_20 = arg1[1]
        var_f8 = rdx_15
        int32_t* rdx_16 = *rcx_20
        
        if (&rdx_16[1] u> rcx_20[1])
            int32_t* rdx_17 = &var_f8
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_17, arg3)
            else
                (*(*arg1 + 0x150))(arg1, rdx_17, 4)
        else
            var_f8 = *rdx_16
            *rcx_20 += 4
        
        int32_t rcx_22 = var_f8
        
        if (rcx_22 != 0)
            uint64_t r14_1 = *arg2
            void* rsi_1 = nullptr
            void* var_58_2 = nullptr
            
            if (r14_1 == 0)
                int64_t var_50_3 = 0
                int32_t var_48_3 = 0
            else
                int32_t r8_8 = 0
                
                if (rcx_22 s> 0 && *(r14_1 + (sx.q(rcx_22 - 1) << 1)) == 0)
                    r8_8 = 1
                    rcx_22 -= 1
                
                int32_t rbx_2 = r8_8 + rcx_22
                int32_t var_48_2 = rcx_22
                
                if (rbx_2 u> 0x80 && rbx_2 != 0)
                    void* rax_24 = sub_140a84c80(0, sx.q(rbx_2), 0)
                    rsi_1 = rax_24
                    var_58_2 = rax_24
                
                void* rcx_23 = &var_d8
                
                if (rsi_1 != 0)
                    rcx_23 = rsi_1
                
                sub_14060abb0(rcx_23, rbx_2, r14_1, rbx_2, 0x3f)
                rcx_22 = var_f8
                rsi_1 = rcx_23
            
            (*(*arg1 + 0x150))(arg1, rsi_1, sx.q(rcx_22))
            
            if (var_58_2 != 0)
                sub_140a74f90(var_58_2)
else
    int64_t* rcx = arg1[1]
    int32_t* rdx = *rcx
    
    if (&rdx[1] u> rcx[1])
        int32_t* rdx_1 = &var_f8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_1, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_1, 4)
    else
        var_f8 = *rdx
        *rcx += 4
    
    int32_t rcx_2 = var_f8
    int64_t r15
    r15.b = rcx_2 s< 0
    
    if (rcx_2 s>= 0)
        goto label_140a1da6c
    
    if (rcx_2 != 0x80000000)
        rcx_2 = neg.d(rcx_2)
        var_f8 = rcx_2
    label_140a1da6c:
        int64_t rdx_2 = arg1[7]
        
        if (rdx_2 s<= 0 || sx.q(rcx_2) s<= rdx_2)
            int32_t rdx_3 = 0
            arg2[1].d = 0
            
            if (*(arg2 + 0xc) != rcx_2)
                sub_1405947f0(arg2, rcx_2)
                rdx_3 = arg2[1].d
                rcx_2 = var_f8
            
            int32_t rax_6 = rdx_3 + rcx_2
            arg2[1].d = rax_6
            
            if (rax_6 s> *(arg2 + 0xc))
                sub_140594770(arg2)
                rcx_2 = var_f8
            
            if (rcx_2 != 0)
                uint64_t rbx_1 = *arg2
                
                if (r15.b == 0)
                    char* rax_14 = nullptr
                    char* var_58_1 = nullptr
                    int32_t var_48_1 = rcx_2
                    int32_t var_44_1 = rcx_2
                    
                    if (rcx_2 u> 0x80)
                        rax_14 = sub_140a84c80(0, sx.q(rcx_2), 0)
                        rcx_2 = var_f8
                        var_58_1 = rax_14
                    
                    int64_t r9_1 = *arg1
                    char* rdx_10 = &var_d8
                    
                    if (rax_14 != 0)
                        rdx_10 = rax_14
                    
                    (*(r9_1 + 0x150))(arg1, rdx_10, sx.q(rcx_2), r9_1)
                    char* rdx_11 = &var_d8
                    char* r8_5 = &var_d8
                    
                    if (var_58_1 != 0)
                        rdx_11 = var_58_1
                    
                    rdx_11[sx.q(var_f8 - 1)] = 0
                    char var_108
                    var_108.w = 0x3f
                    
                    if (var_58_1 != 0)
                        r8_5 = var_58_1
                    
                    sub_1405a7220(rbx_1, var_48_1, r8_5, var_44_1, var_108)
                    
                    if (var_58_1 != 0)
                        sub_140a74f90(var_58_1)
                else
                    (*(*arg1 + 0x150))(arg1, rbx_1, sx.q(rcx_2) * 2)
                    int32_t rax_8 = var_f8
                    
                    if ((*(arg1 + 0x29) & 0x20) != 0)
                        int32_t rdx_6 = 0
                        
                        if (rax_8 s> 0)
                            uint64_t rcx_6 = rbx_1
                            
                            do
                                int16_t rax_9 = *rcx_6
                                rcx_6 += 2
                                rdx_6 += 1
                                *(rcx_6 - 2) = ror.w(rax_9, 8)
                                rax_8 = var_f8
                            while (rdx_6 s< rax_8)
                    
                    *(rbx_1 + (sx.q(rax_8 - 1) << 1)) = 0
                    uint64_t r8_3 = *arg2
                    uint64_t rcx_8 = r8_3
                    int64_t rdx_7 = r8_3 + (sx.q(arg2[1].d) << 1)
                    
                    if (r8_3 != rdx_7)
                        do
                            if (*rcx_8 == 0xffff)
                                int32_t rcx_10 = ((rcx_8 - r8_3) s>> 1).d
                                
                                if (rcx_10 != 0xffffffff)
                                    *(r8_3 + (sx.q(rcx_10) << 1)) = 0
                                    int32_t rdx_8 = arg2[1].d
                                    
                                    if (rdx_8 != 0)
                                        int64_t rax_13 = -1
                                        
                                        do
                                            rax_13 += 1
                                        while (*(*arg2 + (rax_13 << 1)) != 0)
                                        
                                        int32_t rcx_12 = (rax_13 + 1).d
                                        
                                        if (rax_13.d s<= 0)
                                            rcx_12 = 0
                                        
                                        if (rdx_8 != rcx_12)
                                            arg2[1].d = rcx_12
                                            sub_1405a50a0(arg2)
                                
                                break
                            
                            rcx_8 += 2
                        while (rcx_8 != rdx_7)
                
                if (var_f8 == 1)
                    arg2[1].d = 0
                    
                    if (*(arg2 + 0xc) != 0)
                        sub_1405947f0(arg2, 0)
        else
            *(arg1 + 0x29) |= 3
    else
        *(arg1 + 0x29) |= 3
__security_check_cookie(rax_1 ^ &var_128)
return arg1
