// 函数: sub_142625cf0
// 地址: 0x142625cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int32_t i_8 = *arg3
uint64_t rbx = 0
int32_t var_2e0 = 0
int32_t* r12 = arg4
int64_t* r15 = arg1
uint64_t rsi = 0
uint64_t r13 = 0
int32_t var_2e4 = 0

if (i_8 s> 0)
    int32_t* rcx = *(arg3 + 8)
    uint64_t i_4 = zx.q(i_8)
    uint64_t i
    
    do
        int32_t rax_2 = *rcx
        
        if (rax_2 s>= 3 && *(rcx + 0x12) != 0)
            rsi = zx.q(rsi.d + rax_2)
            rbx = zx.q(rbx.d - 2 + rax_2)
            
            if (r13.d s> rax_2)
                rax_2 = r13.d
            
            r13 = zx.q(rax_2)
        
        rcx = &rcx[6]
        i = i_4
        i_4 -= 1
    while (i != 1)
    var_2e0 = rbx.d
    var_2e4 = r13.d

*arg4 = 6
uint64_t result

if (rsi.d != 0)
    int64_t rax_4 = (*(*r15 + 0x10))(r15, zx.q(rsi.d))
    int32_t result_1
    
    if (rax_4 == 0)
        result_1 = -0x7ffffffc
    else
        int64_t count_2 = sx.q(rsi.d)
        memset(rax_4, 0, count_2)
        int64_t rax_5 = (*(*r15 + 0x10))(r15, zx.q((rsi * 3).d * 2))
        *(r12 + 0x10) = rax_5
        
        if (rax_5 == 0)
            result_1 = -0x7ffffffc
        else
            int64_t rax_7 = (*(*r15 + 0x10))(r15, zx.q((rbx * 3).d << 3))
            *(r12 + 0x18) = rax_7
            
            if (rax_7 == 0)
                result_1 = -0x7ffffffc
            else
                int64_t rax_9 = (*(*r15 + 0x10))(r15, zx.q(rbx.d))
                *(r12 + 0x28) = rax_9
                
                if (rax_9 == 0)
                    result_1 = -0x7ffffffc
                else
                    uint32_t rdi_2 = (rbx * 2).d
                    int64_t rax_11 = (*(*r15 + 0x10))(r15, zx.q(rdi_2))
                    *(r12 + 0x20) = rax_11
                    
                    if (rax_11 == 0)
                        result_1 = -0x7ffffffc
                    else
                        int64_t rax_13 = (*(*r15 + 0x10))(r15, zx.q(rdi_2))
                        *(r12 + 0x30) = rax_13
                        
                        if (rax_13 == 0)
                            result_1 = -0x7ffffffc
                        else
                            int64_t count_1 = sx.q(rbx.d)
                            int64_t count = count_1 * 2
                            memset(*(r12 + 0x20), 0, count)
                            int64_t rcx_9 = *(r12 + 0x10)
                            *(r12 + 4) = 0
                            memset(rcx_9, 0, count_2 * 6)
                            memset(*(r12 + 0x18), 0xff, count_1 * 0x18)
                            memset(*(r12 + 0x28), 0, count_1)
                            memset(*(r12 + 0x30), 0xff, count)
                            int16_t var_258[0x100]
                            __builtin_memset(&var_258, 0xffff, 0x200)
                            int64_t rax_15 = (*(*r15 + 0x10))(r15, zx.q((rsi * 2).d))
                            int64_t rdi_3 = rax_15
                            
                            if (rax_15 != 0)
                                int512_t zmm0_1 = memset(rax_15, 0, count_2 * 2)
                                int16_t* rax_18 = (*(*r15 + 0x10))(r15, zx.q((r13 << 1).d))
                                int16_t* r13_1 = rax_18
                                
                                if (rax_18 != 0)
                                    uint64_t rbx_2 = zx.q(var_2e4)
                                    void* rax_20 = (*(*r15 + 0x10))(r15, zx.q((rbx_2 * 3).d * 2))
                                    void* rbp_1 = rax_20
                                    
                                    if (rax_20 != 0)
                                        int16_t* rax_22 =
                                            (*(*r15 + 0x10))(r15, zx.q((rbx_2 * 3).d << 2))
                                        int16_t* r14_1 = rax_22
                                        
                                        if (rax_22 != 0)
                                            int32_t* rax_23 = arg3
                                            int32_t i_5 = 0
                                            int32_t var_2cc_1 = 0
                                            
                                            if (*rax_23 s<= 0)
                                            label_14262641b:
                                                int32_t rax_75 = r12[1]
                                                
                                                if (rax_75 s> 0)
                                                    int64_t rcx_42 = rax_4
                                                    
                                                    do
                                                        char* rdi_12 = sx.q(i_5) + rcx_42
                                                        
                                                        if (*rdi_12 != 0)
                                                            if (sub_142623030(r12, i_5.w) != 0)
                                                                int32_t result_2
                                                                result_2, zmm0_1 = MREngine::FOpen(
                                                                    arg2, r12, i_5.w, var_2e0)
                                                                result_1 = result_2
                                                                
                                                                if ((result_2 u>> 0x1f).b != 0)
                                                                    goto label_1426264d4
                                                                
                                                                int32_t i_1 = i_5
                                                                
                                                                if (i_5 s< r12[1])
                                                                    do
                                                                        i_1 += 1
                                                                        *rdi_12 = rdi_12[1]
                                                                        rdi_12 = &rdi_12[1]
                                                                    while (i_1 s< r12[1])
                                                                
                                                                i_5 -= 1
                                                            
                                                            rcx_42 = rax_4
                                                        
                                                        rax_75 = r12[1]
                                                        i_5 += 1
                                                    while (i_5 s< rax_75)
                                                
                                                result_1 = -0x7ffffffc
                                                
                                                if (sub_1426223e0(r15, *(r12 + 0x18), zx.q(r12[2]), 
                                                        *(r12 + 0x10), zmm0_1, rax_75, arg3) != 0)
                                                    result_1 = 0x40000000
                                            else
                                                void* rdi_4 = nullptr
                                                void* var_278_1 = nullptr
                                                
                                                while (true)
                                                    int32_t* rdi_5 = rdi_4 + *(rax_23 + 8)
                                                    int32_t* var_280_1 = rdi_5
                                                    int32_t rax_25 = *rdi_5
                                                    
                                                    if (rax_25 s>= 3 && *(rdi_5 + 0x12) != 0)
                                                        int32_t rcx_19 = 0
                                                        
                                                        if (rax_25 s> 0)
                                                            do
                                                                r13_1[sx.q(rcx_19)] = rcx_19.w
                                                                rcx_19 += 1
                                                                rax_25 = *rdi_5
                                                            while (rcx_19 s< rax_25)
                                                        
                                                        int32_t i_11 = sub_142634770(rax_25, 
                                                            *(rdi_5 + 8), r13_1, rbp_1)
                                                        int32_t i_7 = i_11
                                                        
                                                        if (i_11 s<= 0)
                                                            i_7 = neg.d(i_11)
                                                        
                                                        int32_t i_2 = 0
                                                        
                                                        if (*rdi_5 s> 0)
                                                            int64_t r14_2 = 0
                                                            int16_t* rsi_1 = r13_1
                                                            
                                                            do
                                                                int64_t r11_1 = *(r12 + 0x10)
                                                                int16_t* r15_2 = *(rdi_5 + 8) + r14_2
                                                                int16_t r9_1 = r15_2[2]
                                                                int16_t r10_1 = *r15_2
                                                                int16_t rbx_3 = r15_2[1]
                                                                uint64_t rax_29 =
                                                                    zx.q(r10_1.b * 0x43 + r9_1.b * 0x1f)
                                                                int16_t r13_2 = var_258[rax_29]
                                                                uint64_t rdi_6 = zx.q(r13_2)
                                                                
                                                                if (r13_2 == 0xffff)
                                                                label_1426260b8:
                                                                    rdi_6 = zx.q(arg4[1].w)
                                                                    arg4[1] += 1
                                                                    var_258[rax_29] = rdi_6.w
                                                                    uint64_t rax_38 = rdi_6 * 3
                                                                    *(r11_1 + (rax_38 << 1)) = r10_1
                                                                    *(r11_1 + (rax_38 << 1) + 2) = rbx_3
                                                                    *(r11_1 + (rax_38 << 1) + 4) = r9_1
                                                                    *(rax_15 + (rdi_6 << 1)) = r13_2
                                                                else
                                                                    while (true)
                                                                        uint64_t r8_10 = zx.q(rdi_6.w)
                                                                        uint64_t rax_30 = r8_10 * 3
                                                                        
                                                                        if (*(r11_1 + (rax_30 << 1)) == r10_1
                                                                                && *(r11_1 + (rax_30 << 1) + 4)
                                                                                == r9_1)
                                                                            int32_t temp2_1
                                                                            int32_t temp3_1
                                                                            temp2_1:temp3_1 = sx.q(
                                                                                zx.d(*(r11_1 + (rax_30 << 1) + 2))
                                                                                - zx.d(rbx_3))
                                                                            
                                                                            if ((temp3_1 ^ temp2_1) - temp2_1 s<= 2)
                                                                                break
                                                                        
                                                                        rdi_6 = zx.q(*(rax_15 + (r8_10 << 1)))
                                                                        
                                                                        if (rdi_6.w == 0xffff)
                                                                            goto label_1426260b8
                                                                
                                                                *rsi_1 = rdi_6.w
                                                                
                                                                if ((r15_2[3].b & 0x80) != 0)
                                                                    *(zx.q(rdi_6.w) + rax_4) = 1
                                                                
                                                                rdi_5 = var_280_1
                                                                i_2 += 1
                                                                r12 = arg4
                                                                r14_2 += 8
                                                                rsi_1 = &rsi_1[1]
                                                            while (i_2 s< *rdi_5)
                                                            
                                                            r13_1 = rax_18
                                                            i_5 = 0
                                                            r14_1 = rax_22
                                                        
                                                        int32_t r15_3 = 0
                                                        int64_t rbx_4 = 0
                                                        zmm0_1 =
                                                            memset(r14_1, 0xff, sx.q(var_2e4) * 0xc)
                                                        int64_t i_6 = sx.q(i_7)
                                                        rbp_1 = rax_20
                                                        
                                                        if (i_6 s> 0)
                                                            void* rdi_7 = &r14_1[2]
                                                            void* var_260_1 = rdi_7
                                                            void* rdx_17 = rbp_1 + 4
                                                            int64_t i_3
                                                            
                                                            do
                                                                int16_t r8_13 = *(rdx_17 - 2)
                                                                int16_t rax_42 = *(rdx_17 - 4)
                                                                
                                                                if (rax_42 != r8_13)
                                                                    int16_t rcx_26 = *rdx_17
                                                                    
                                                                    if (rax_42 != rcx_26 && r8_13 != rcx_26)
                                                                        r15_3 += 1
                                                                        rbx_4 += 1
                                                                        *(rdi_7 - 4) = r13_1[zx.q(rax_42)]
                                                                        *(rdi_7 - 2) =
                                                                            r13_1[zx.q(*(rdx_17 - 2))]
                                                                        *rdi_7 = r13_1[zx.q(*rdx_17)]
                                                                        rdi_7 += 0xc
                                                                
                                                                rdx_17 += 6
                                                                i_3 = i_6
                                                                i_6 -= 1
                                                            while (i_3 != 1)
                                                            
                                                            if (rbx_4 != 0)
                                                                void* rcx_32 = &r14_1[(rbx_4 - 1) * 6]
                                                                
                                                                while (true)
                                                                    int32_t rbx_5 = r15_3 - 1
                                                                    int32_t var_2d0_1 = 0
                                                                    int32_t rdx_18 = 0
                                                                    int32_t var_2e8_1 = 0
                                                                    int32_t rbp_2 = 0
                                                                    int32_t var_29c_1 = rbx_5
                                                                    uint64_t i_10 = 0
                                                                    uint64_t i_13 = 0
                                                                    int32_t r8_14 = 0
                                                                    
                                                                    if (rbx_5 s<= 0)
                                                                        break
                                                                    
                                                                    int32_t i_9
                                                                    
                                                                    do
                                                                        i_9 = i_5 + 1
                                                                        int32_t i_12 = i_9
                                                                        
                                                                        if (i_9 s< r15_3)
                                                                            void* rbx_6 = &r14_1[6]
                                                                            
                                                                            do
                                                                                int32_t var_2f8
                                                                                int32_t var_2a4
                                                                                var_2f8.q = &var_2a4
                                                                                int32_t var_2a8
                                                                                int32_t rax_47 = sub_14262c8f0(r14_1, 
                                                                                    rbx_6, *(arg4 + 0x10), &var_2a8, 
                                                                                    var_2f8)
                                                                                
                                                                                if (rax_47 s<= rbp_2)
                                                                                    rdx_18 = var_2e8_1
                                                                                    r8_14 = var_2d0_1
                                                                                else
                                                                                    rdx_18 = var_2a8
                                                                                    rbp_2 = rax_47
                                                                                    r8_14 = var_2a4
                                                                                    i_10 = zx.q(i_5)
                                                                                    var_2e8_1 = rdx_18
                                                                                    i_13 = zx.q(i_12)
                                                                                    var_2d0_1 = r8_14
                                                                                
                                                                                i_12 += 1
                                                                                rbx_6 += 0xc
                                                                            while (i_12 s< r15_3)
                                                                            
                                                                            rbx_5 = var_29c_1
                                                                        
                                                                        r14_1 = &r14_1[6]
                                                                        i_5 = i_9
                                                                    while (i_9 s< rbx_5)
                                                                    r14_1 = rax_22
                                                                    
                                                                    if (rbp_2 s<= 0)
                                                                        break
                                                                    
                                                                    void* rdi_8 = &r14_1[sx.q(((i_13 << 1).d
                                                                        + i_13.d) * 2)]
                                                                    zmm0_1 = sub_14262d220(
                                                                        &r14_1[sx.q((i_10 * 3).d * 2)], rdi_8, 
                                                                        rdx_18, r8_14)
                                                                    r15_3 = rbx_5
                                                                    *rdi_8 = *rcx_32
                                                                    int32_t rax_55 = *(rcx_32 + 8)
                                                                    rcx_32 -= 0xc
                                                                    i_5 = 0
                                                                    *(rdi_8 + 8) = rax_55
                                                                
                                                                r12 = arg4
                                                                i_5 = 0
                                                                int64_t rdi_9 = 0
                                                                
                                                                if (r15_3 s> 0)
                                                                    uint64_t rax_56 = zx.q(r12[2])
                                                                    void* r10_2 = var_260_1
                                                                    
                                                                    while (true)
                                                                        int16_t* rdx_21 = *(r12 + 0x18)
                                                                            + (sx.q((rax_56 * 3).d << 2) << 1)
                                                                        *rdx_21 = *(r10_2 - 4)
                                                                        rdx_21[1] = *(r10_2 - 2)
                                                                        rdx_21[2] = *r10_2
                                                                        rdx_21[3] = *(r10_2 + 2)
                                                                        rdx_21[4] = *(r10_2 + 4)
                                                                        rdx_21[5] = *(r10_2 + 6)
                                                                        *(sx.q(r12[2]) + *(r12 + 0x28)) =
                                                                            *(var_280_1 + 0x12)
                                                                        *(*(r12 + 0x30)
                                                                            + (sx.q(r12[2]) << 1)) = var_280_1[4].w
                                                                        rax_56 = zx.q(r12[2] + 1)
                                                                        r12[2] = rax_56.d
                                                                        
                                                                        if (rax_56.d s> var_2e0)
                                                                            if (arg2 != 0)
                                                                                sub_142627b60(arg2, 
                                                                                    "
                                                                                        can't store polys! npolys:%d limit:%d", 
                                                                                    zx.q(r15_3))
                                                                            
                                                                            r13_1 = rax_18
                                                                            result_1 = -0x7ffffff0
                                                                            r15 = arg1
                                                                            break
                                                                        
                                                                        rdi_9 += 1
                                                                        r10_2 += 0xc
                                                                        
                                                                        if (rdi_9 s>= sx.q(r15_3))
                                                                            goto label_1426263a1
                                                                    
                                                                    break
                                                                
                                                            label_1426263a1:
                                                                rbp_1 = rax_20
                                                    
                                                    int32_t rax_70 = var_2cc_1 + 1
                                                    rdi_4 = var_278_1 + 0x18
                                                    r13_1 = rax_18
                                                    var_2cc_1 = rax_70
                                                    var_278_1 = rdi_4
                                                    
                                                    if (rax_70 s>= *arg3)
                                                        r15 = arg1
                                                        goto label_14262641b
                                                    
                                                    rax_23 = arg3
                                        else
                                            result_1 = -0x7ffffffc
                                        
                                    label_1426264d4:
                                        (*(*r15 + 0x18))(r15, r14_1)
                                        rdi_3 = rax_15
                                        rbp_1 = rax_20
                                    else
                                        result_1 = -0x7ffffffc
                                    
                                    (*(*r15 + 0x18))(r15, rbp_1)
                                else
                                    result_1 = -0x7ffffffc
                                
                                (*(*r15 + 0x18))(r15, r13_1)
                                (*(*r15 + 0x18))(r15, rdi_3)
                            else
                                result_1 = -0x7ffffffc
                                (*(*r15 + 0x18))(r15, rdi_3)
    
    (*(*r15 + 0x18))(r15, rax_4)
    result = zx.q(result_1)
else
    result = 0x40000000

__security_check_cookie(rax_1 ^ &var_318)
return result
