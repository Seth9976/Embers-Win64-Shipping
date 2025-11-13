// 函数: sub_142444ea0
// 地址: 0x142444ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

BOOL result

if (*(arg1 + 0x538) != *arg2 || *(arg1 + 0x53c) != arg2[1] || *(arg1 + 0x540) != arg2[2])
    result.b = 0
else
    result.b = 1

if (result.b == 0)
    if (*(arg1 + 0xe0) != 0 || *(arg1 + 0xe8) != 0)
        result.b = 1
    
    if (result.b != 0)
        result.b = 0
        return result
    
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int64_t r14
    r14.b = 0
    int32_t rdx = data_14399fde0
    int32_t rcx_2 = data_14399fdec + 1
    uint128_t zmm6 = zx.o(*arg2)
    int32_t r15_1 = arg2[2]
    uint128_t zmm7 = zx.o(*(arg1 + 0x538))
    int32_t r12_1 = *(arg1 + 0x540)
    data_14399fdec = rcx_2
    int64_t rsi_1 = sx.q(rdx - 1)
    uint64_t var_68
    uint64_t var_58
    
    if (rdx - 1 s>= 0)
        int64_t rdi_2 = rsi_1 << 4
        int64_t temp0_1
        
        do
            int64_t rcx_3 = data_14399fdd8
            
            if (*(rdi_2 + rcx_3 + 8) == 0)
                r14.b = 1
            else
                int64_t* rcx_4 = *(rdi_2 + rcx_3)
                
                if (rcx_4 == 0)
                    r14.b = 1
                else
                    int64_t rax_1 = *rcx_4
                    var_68 = zmm6.q
                    int32_t var_60_1 = r15_1
                    var_58 = zmm7.q
                    int32_t var_50_1 = r12_1
                    
                    if ((*(rax_1 + 0x50))(rcx_4, arg1, &var_58, &var_68) == 0)
                        r14.b = 1
            
            rdi_2 -= 0x10
            temp0_1 = rsi_1
            rsi_1 -= 1
        while (temp0_1 - 1 s>= 0)
        rcx_2 = data_14399fdec
        rdx = data_14399fde0
    
    int32_t rsi_2 = 0
    data_14399fdec = rcx_2 - 1
    
    if (r14.b != 0 && rcx_2 - 1 s<= 0)
        int32_t r15_2 = rdx
        int32_t r14_1 = 0
        
        if (rdx s> 0)
            int64_t* rdi_3 = nullptr
            
            do
                int64_t rcx_6 = data_14399fdd8
                
                if (*(rdi_3 + rcx_6 + 8) == 0)
                    sub_1405a4880(&data_14399fdd8, r14_1, 1, 1)
                else
                    int64_t* rcx_7 = *(rdi_3 + rcx_6)
                    
                    if (rcx_7 == 0)
                        sub_1405a4880(&data_14399fdd8, r14_1, 1, 1)
                    else if ((*(*rcx_7 + 0x20))(rcx_7) != 0)
                        sub_1405a4880(&data_14399fdd8, r14_1, 1, 1)
                    else
                        r14_1 += 1
                        rdi_3 = &rdi_3[2]
                
                rdx = data_14399fde0
            while (r14_1 s< rdx)
        
        int32_t rax_5 = rdx * 2
        
        if (rax_5 s<= 2)
            rax_5 = 2
        
        data_14399fde8 = rax_5
        
        if (r15_2 s> rax_5 && data_14399fde4 != rdx)
            sub_1405a5410(&data_14399fdd8, rdx)
    
    int32_t rax_6 = arg2[1]
    int32_t rdx_4 = *(arg1 + 0x540) - arg2[2]
    var_68 = *(arg1 + 0x538)
    var_68:4.d -= rax_6
    int32_t rcx_9 = var_68.d - *arg2
    var_68.d = rcx_9
    int64_t* rcx_10 = *(arg1 + 0x1b0)
    uint128_t zmm2 = _mm_cvtepi32_ps(zx.o((var_68 u>> 0x20).d))
    float temp0_3[0x4] = _mm_cvtepi32_ps(zx.o(rcx_9))
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rdx_4))
    float temp0_5[0x4] = _mm_unpacklo_ps(temp0_3, zmm2.q)
    int32_t var_70_1 = zmm0.d
    *(arg1 + 0x550) = temp0_5.q
    *(arg1 + 0x558) = var_70_1
    int64_t var_78 = temp0_5.q
    int32_t var_50_2 = var_70_1
    int64_t rax_10 = *rcx_10
    var_58 = temp0_5.q
    (*(rax_10 + 0x290))(rcx_10, &var_58)
    void* rcx_11 = *(arg1 + 0x1f8)
    
    if (rcx_11 != 0)
        var_58 = var_78
        var_50_2 = var_70_1
        sub_142260e40(rcx_11, &var_58)
    
    int32_t i = 0
    
    if (*(arg1 + 0x150) s> 0)
        void** r15_3 = nullptr
        
        do
            void* rdi_4 = *(r15_3 + *(arg1 + 0x148))
            char rax_13
            
            if ((*(rdi_4 + 0x1f4) & 0x20) == 0)
                rax_13 = sub_1420e6590(rdi_4)
            
            if ((*(rdi_4 + 0x1f4) & 0x20) != 0 || rax_13 != 0)
                sub_1420dd830(rdi_4, &var_78, 1)
            
            i += 1
            r15_3 = &r15_3[1]
        while (i s< *(arg1 + 0x150))
    
    int64_t* rcx_14 = *(arg1 + 0x120)
    
    if (rcx_14 != 0)
        (*(*rcx_14 + 0x290))(rcx_14, &var_78, 1)
    
    var_58 = 0
    var_50_2.q = 0
    sub_140d3ccc0(arg1, &var_58, 0, 0, 0)
    uint64_t r14_2 = var_58
    int64_t r15_4 = r14_2 + (sx.q(var_50_2) << 3)
    void* r8_3
    
    if (r14_2 != r15_4)
        do
            int64_t* rdi_5 = *r14_2
            
            if (rdi_5 != 0)
                void* rax_16 = sub_142459c10()
                void* rcx_16 = rdi_5[2]
                int64_t rax_17 = sx.q(*(rax_16 + 0x38))
                
                if (rax_17.d s<= *(rcx_16 + 0x38)
                        && *(*(rcx_16 + 0x30) + (rax_17 << 3)) == rax_16 + 0x30
                        && rdi_5[0x14] == 0)
                    r8_3.b = 1
                    (*(*rdi_5 + 0x3d8))(rdi_5, &var_78, r8_3)
            
            r14_2 += 8
        while (r14_2 != r15_4)
        
        r14_2 = var_58
    
    if (r14_2 != 0)
        sub_140a74f90(r14_2)
    
    int64_t* rcx_19 = *(arg1 + 0x40)
    
    if (rcx_19 != 0)
        r8_3.b = 1
        (*(*rcx_19 + 0x3d8))(rcx_19, &var_78, r8_3)
    
    int64_t* rcx_20 = *(arg1 + 0x48)
    
    if (rcx_20 != 0)
        r8_3.b = 1
        (*(*rcx_20 + 0x3d8))(rcx_20, &var_78, r8_3)
    
    int64_t* rcx_21 = *(arg1 + 0x50)
    
    if (rcx_21 != 0)
        r8_3.b = 1
        (*(*rcx_21 + 0x3d8))(rcx_21, &var_78, r8_3)
    
    int32_t i_1 = 0
    zmm6 = zx.o(*(arg1 + 0x538))
    int32_t r12_2 = *(arg1 + 0x540)
    *(arg1 + 0x538) = *arg2
    *(arg1 + 0x53c) = arg2[1]
    *(arg1 + 0x540) = arg2[2]
    *(arg1 + 0x544) = *arg2
    *(arg1 + 0x548) = arg2[1]
    *(arg1 + 0x54c) = arg2[2]
    
    if (*(arg1 + 0x150) s> 0)
        void** rdi_6 = nullptr
        
        do
            void* rcx_22 = *(rdi_6 + *(arg1 + 0x148))
            
            if ((*(rcx_22 + 0x1f4) & 0x20) != 0)
                int64_t* rcx_23 = *(rcx_22 + 0xe8)
                
                if (rcx_23 != 0)
                    int32_t rax_30 = *(arg1 + 0x540)
                    var_58 = *(arg1 + 0x538)
                    int32_t var_50_3 = rax_30
                    var_68 = zmm6.q
                    int32_t var_60_2 = r12_2
                    zmm6 = sub_14252ebf0(rcx_23, &var_68, &var_58)
            
            i_1 += 1
            rdi_6 = &rdi_6[1]
        while (i_1 s< *(arg1 + 0x150))
    
    int64_t* rcx_24 = *(arg1 + 0x138)
    
    if (rcx_24 != 0)
        int32_t var_50_4 = *(arg1 + 0x540)
        int64_t rax_32 = *rcx_24
        var_58 = *(arg1 + 0x538)
        var_68 = zmm6.q
        int32_t var_60_3 = r12_2
        (*(rax_32 + 0x268))(rcx_24, &var_68, &var_58)
    
    r15_4.b = 0
    int32_t rdx_17 = data_14399fdf8
    int32_t rcx_26 = data_14399fe04 + 1
    zmm7 = zx.o(*(arg1 + 0x538))
    int32_t r13_1 = *(arg1 + 0x540)
    data_14399fe04 = rcx_26
    int64_t r14_3 = sx.q(rdx_17 - 1)
    
    if (rdx_17 - 1 s>= 0)
        int64_t rdi_8 = r14_3 << 4
        int64_t temp1_1
        
        do
            int64_t rcx_27 = data_14399fdf0
            
            if (*(rdi_8 + rcx_27 + 8) == 0)
                r15_4.b = 1
            else
                int64_t* rcx_28 = *(rdi_8 + rcx_27)
                
                if (rcx_28 == 0)
                    r15_4.b = 1
                else
                    int64_t rax_34 = *rcx_28
                    var_58 = zmm7.q
                    int32_t var_50_5 = r13_1
                    var_68 = zmm6.q
                    int32_t var_60_4 = r12_2
                    
                    if ((*(rax_34 + 0x50))(rcx_28, arg1, &var_68, &var_58) == 0)
                        r15_4.b = 1
            
            rdi_8 -= 0x10
            temp1_1 = r14_3
            r14_3 -= 1
        while (temp1_1 - 1 s>= 0)
        rcx_26 = data_14399fe04
        rdx_17 = data_14399fdf8
    
    data_14399fe04 = rcx_26 - 1
    
    if (r15_4.b != 0 && rcx_26 - 1 s<= 0)
        int32_t rdi_9 = rdx_17
        
        if (rdx_17 s> 0)
            int64_t* rbx_1 = nullptr
            
            do
                int64_t rcx_30 = data_14399fdf0
                
                if (*(rbx_1 + rcx_30 + 8) == 0)
                    sub_1405a4880(&data_14399fdf0, rsi_2, 1, 1)
                else
                    int64_t* rcx_31 = *(rbx_1 + rcx_30)
                    
                    if (rcx_31 == 0)
                        sub_1405a4880(&data_14399fdf0, rsi_2, 1, 1)
                    else if ((*(*rcx_31 + 0x20))(rcx_31) != 0)
                        sub_1405a4880(&data_14399fdf0, rsi_2, 1, 1)
                    else
                        rsi_2 += 1
                        rbx_1 = &rbx_1[2]
                
                rdx_17 = data_14399fdf8
            while (rsi_2 s< rdx_17)
        
        int32_t rax_38 = rdx_17 * 2
        
        if (rax_38 s<= 2)
            rax_38 = 2
        
        data_14399fe00 = rax_38
        
        if (rdi_9 s> rax_38 && data_14399fdfc != rdx_17)
            sub_1405a5410(&data_14399fdf0, rdx_17)
    
    QueryPerformanceCounter(&performanceCount)

result.b = 1
return result
