// 函数: sub_140839900
// 地址: 0x140839900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
int32_t i_3 = 0
int64_t result = sx.q(arg2[1].d)
int64_t* r12 = arg4
int16_t* rsi = arg3
int64_t* var_68 = rcx
int64_t* rdx = &rcx[result]
int64_t* var_88 = rdx

if (rcx != rdx)
    do
        void* rcx_1 = *rcx
        result = zx.q(*(rcx_1 + 0x40))
        char rdx_1 = *(rcx_1 + 0x50)
        char r14_1 = *(rcx_1 + 0x4f)
        char arg_10 = r14_1
        
        if (result.d != 0)
            int64_t* rbp_2 = *(rcx_1 + 0x20) + 0xe0
            int64_t var_70_1 = result
            int64_t i
            
            do
                int32_t* rsi_1 = rbp_2[-4]
                
                if (rsi_1 != 0)
                    int64_t var_58
                    result = sub_140886510(*(rsi_1 + 0x18), &var_58)
                    
                    if (var_58 != 0)
                        void* rdx_3 = *(rsi_1 + 8)
                        int64_t* rcx_3 = rbp_2
                        int64_t* rax = rbp_2[4]
                        char rdi_1 = *(rdx_3 + 0x28) & 1
                        
                        if (rax != 0)
                            rcx_3 = rax
                        
                        int64_t rax_1 = *(rdx_3 + 0x98)
                        rdx_3.b = 1
                        *rcx_3 = rax_1
                        int64_t* rbx_1 = rbp_2[4]
                        int64_t rax_2 = sub_1407e7150(*(rsi_1 + 8), rdx_3.b)
                        int64_t* rcx_5 = rbp_2
                        
                        if (rbx_1 != 0)
                            rcx_5 = rbx_1
                        
                        rcx_5[1] = rax_2
                        int64_t* rcx_6 = rbp_2
                        int64_t* rax_3 = rbp_2[4]
                        void* r10_1 = *(rsi_1 + 8)
                        
                        if (rax_3 != 0)
                            rcx_6 = rax_3
                        
                        int32_t rdx_4 = *(r10_1 + 0xc8)
                        void* rbx_2 = *rcx_6
                        void* r15_1 = rcx_6[1]
                        int32_t rcx_7 = 0
                        
                        if (r14_1 == 0)
                            rcx_7 = *(rbx_2 + 0xb0)
                        
                        int32_t r14_2 = 0
                        int32_t rax_6 = *(rbp_2 - 0xdc) + rbp_2[-0x1c].d + rcx_7
                        
                        if (rax_6 u<= rdx_4)
                            rdx_4 = rax_6
                        
                        if (rdx_4 - rcx_7 s>= 0)
                            r14_2 = rdx_4 - rcx_7
                        
                        int32_t rax_9 = rsi_1[0x97]
                        
                        if (rcx_7 u>= rdx_4)
                            rdx_4 = rcx_7
                        
                        if (rdx_4 u>= rax_9)
                            rax_9 = rdx_4
                        
                        if (rdi_1 != 0)
                            sub_1407e6d90(r10_1, rax_9 + 1, arg3, *(arg1 + 0x10), &data_142d40450)
                            int64_t rdi_2 = sx.q(arg5[1].d)
                            int32_t rax_11 = (rdi_2 + 1).d
                            arg5[1].d = rax_11
                            
                            if (rax_11 s> *(arg5 + 0xc))
                                sub_1405a4d70(arg5)
                            
                            *(*arg5 + (rdi_2 << 3)) = &rbp_2[-0x1c]
                        
                        int16_t* const var_a0_1 = &data_142d40450
                        sub_1407e6a00(r15_1, rax_9 + 1, arg1 + 0x30, arg3)
                        int64_t* rdx_9 = rbp_2
                        *(r15_1 + 0xb0) = rdx_4
                        *(r15_1 + 0xc0) = r14_2
                        int64_t* rax_15 = rbp_2[4]
                        
                        if (rax_15 != 0)
                            rdx_9 = rax_15
                        
                        rdx_9[3].d = *(*rdx_9 + 0x48)
                        int64_t* rcx_14 = rbp_2
                        int64_t* rax_17 = rbp_2[4]
                        
                        if (rax_17 != 0)
                            rcx_14 = rax_17
                        
                        if (rcx_14[3].d == 0xffffffff)
                            rcx_14[3].d = *rsi_1
                            rax_17 = rbp_2[4]
                        
                        int64_t* rdx_10 = rbp_2
                        
                        if (rax_17 != 0)
                            rdx_10 = rax_17
                        
                        *(rdx_10 + 0x1c) = *(rdx_10[1] + 0x48)
                        rdx_10.b = 1
                        result = sub_1407ecfd0(*(rsi_1 + 8), rdx_10.b)
                        void* rcx_17
                        
                        if (*(arg1 + 0x70) == 0 || *(arg1 + 0x78) == 0)
                            rcx_17 = rcx_1
                            
                            if (*(rcx_17 + 0x50) != 0 && *(rbx_2 + 0xb0) != 0
                                    && *rsi_1 == 0xffffffff)
                                result = zx.q(*(rbx_2 + 0x48))
                                
                                if (result.d != 0xffffffff)
                                    *rsi_1 = result.d
                                    result = zx.q(*(rbx_2 + 0xb0))
                                    rsi_1[1] = result.d
                                    *(rbx_2 + 0x48) = 0xffffffff
                        else
                            rcx_17 = rcx_1
                        
                        if (*(rcx_17 + 0x48) u> 0)
                            result = rbp_2[-4]
                            int32_t r15_2 = *(result + 0x1f8)
                            
                            if (r15_2 u> 1)
                                int32_t rbx_3 = 0
                                
                                if (r15_2 != 0)
                                    do
                                        int64_t rdi_4 = sx.q(rbx_3)
                                        int64_t r14_3
                                        
                                        if (rbx_3 == 0)
                                            r14_3 = 0
                                        else
                                            int64_t* rax_20 = rbp_2[4]
                                            int64_t* rcx_18 = rbp_2
                                            r14_3 = rdi_4
                                            
                                            if (rax_20 != 0)
                                                rcx_18 = rax_20
                                            
                                            int64_t* r8_3 = rdi_4 << 5
                                            *(r8_3 + rcx_18) = rcx_18[rdi_4 * 4 - 4]
                                            int64_t* rcx_19 = rbp_2
                                            int64_t* rax_22 = rbp_2[4]
                                            
                                            if (rax_22 != 0)
                                                rcx_19 = rax_22
                                            
                                            *(r8_3 + rcx_19 + 8) = rcx_19[rdi_4 * 4 - 3]
                                            int64_t* rcx_20 = rbp_2
                                            int64_t* rax_24 = rbp_2[4]
                                            
                                            if (rax_24 != 0)
                                                rcx_20 = rax_24
                                            
                                            *(r8_3 + rcx_20 + 0x18) = rcx_20[rdi_4 * 4 - 1].d
                                            int64_t* rcx_21 = rbp_2
                                            int64_t* rax_26 = rbp_2[4]
                                            
                                            if (rax_26 != 0)
                                                rcx_21 = rax_26
                                            
                                            *(r8_3 + rcx_21 + 0x1c) = *(&rcx_21[rdi_4 * 4] - 4)
                                        
                                        result = sub_140850790(&rbp_2[-0x1c], rbx_3)
                                        int64_t* rdx_14 = rbp_2[4]
                                        int64_t* rcx_23 = rbp_2
                                        
                                        if (rdx_14 != 0)
                                            rcx_23 = rdx_14
                                        
                                        rcx_23[r14_3 * 4 + 2] = result
                                        
                                        if (result != 0)
                                            result = zx.q(rsi_1[0x82] - rsi_1[0x8d])
                                            
                                            if (result.d s> 0)
                                                void* rdx_15 = &rsi_1[0x8e]
                                                void* rax_29 = *(rdx_15 + 8)
                                                int64_t rcx_26 = (sx.q(rsi_1[0x92]) - 1) & rdi_4
                                                
                                                if (*(rcx_1 + 0x4f) == 0)
                                                    if (rax_29 != 0)
                                                        rdx_15 = rax_29
                                                    
                                                    result = zx.q(*(rdx_15 + (rcx_26 << 2)))
                                                    
                                                    if (result.d != 0xffffffff)
                                                        int64_t rdx_17 = *(rsi_1 + 0x200)
                                                        
                                                        do
                                                            result = sx.q(result.d) * 3
                                                            
                                                            if (*(rdx_17 + (result << 2)) == rbx_3)
                                                                break
                                                            
                                                            result =
                                                                zx.q(*(rdx_17 + (result << 2) + 4))
                                                        while (result.d != 0xffffffff)
                                                else
                                                    if (rax_29 != 0)
                                                        rdx_15 = rax_29
                                                    
                                                    result = zx.q(*(rdx_15 + (rcx_26 << 2)))
                                                    
                                                    if (result.d != 0xffffffff)
                                                        int64_t rdx_16 = *(rsi_1 + 0x200)
                                                        
                                                        do
                                                            result = sx.q(result.d) * 3
                                                            
                                                            if (*(rdx_16 + (result << 2)) == rbx_3)
                                                                break
                                                            
                                                            result =
                                                                zx.q(*(rdx_16 + (result << 2) + 4))
                                                        while (result.d != 0xffffffff)
                                        else if (rbx_3 != 0)
                                            int64_t* rax_30 = rbp_2[4]
                                            int64_t* rdx_18 = rbp_2
                                            
                                            if (rax_30 != 0)
                                                rdx_18 = rax_30
                                            
                                            rdx_18[r14_3 * 4] = *(*(rsi_1 + 8) + 0x98)
                                            void* rax_32 = sub_1407e7150(*(rsi_1 + 8), 0)
                                            int64_t* rcx_31 = rbp_2[4]
                                            int64_t* rdx_19 = rbp_2
                                            
                                            if (rcx_31 != 0)
                                                rdx_19 = rcx_31
                                            
                                            rdx_19[r14_3 * 4 + 1] = rax_32
                                            int16_t* const var_a0_2 = &data_142d40450
                                            sub_1407e6a00(rax_32, rax_9 + 1, arg1 + 0x30, arg3)
                                            int64_t* rdx_21 = rbp_2
                                            *(rax_32 + 0xb0) = rdx_4
                                            int64_t* rax_34 = rbp_2[4]
                                            
                                            if (rax_34 != 0)
                                                rdx_21 = rax_34
                                            
                                            rdx_21[r14_3 * 4 + 3].d = *(rdx_21[r14_3 * 4] + 0x48)
                                            int64_t* rdx_22 = rbp_2
                                            int64_t* rax_36 = rbp_2[4]
                                            
                                            if (rax_36 != 0)
                                                rdx_22 = rax_36
                                            
                                            *(&rdx_22[r14_3 * 4] + 0x1c) =
                                                *(rdx_22[r14_3 * 4 + 1] + 0x48)
                                            rdx_22.b = 1
                                            result = sub_1407ecfd0(*(rsi_1 + 8), rdx_22.b)
                                        
                                        rbx_3 += 1
                                    while (rbx_3 u< r15_2)
                                    
                                    r12 = arg4
                        
                        if (rdx_1 != 0)
                            void* rdi_6 = *(*(rsi_1 + 8) + 0x98)
                            sub_14085b4f0(rsi_1, rdi_6)
                            int64_t rbx_4 = sx.q(r12[1].d)
                            int64_t rsi_2 = *(rdi_6 + 0x58)
                            int32_t rax_39 = (rbx_4 + 1).d
                            r12[1].d = rax_39
                            
                            if (rax_39 s> *(r12 + 0xc))
                                sub_14083a440(r12, rbx_4.d)
                            
                            *(*r12 + (rbx_4 << 3)) = rsi_2
                            int64_t rbx_5 = sx.q(r12[1].d)
                            int64_t rdi_7 = *(rdi_6 + 0x78)
                            int32_t rax_41 = (rbx_5 + 1).d
                            r12[1].d = rax_41
                            
                            if (rax_41 s> *(r12 + 0xc))
                                sub_14083a440(r12, rbx_5.d)
                            
                            result = *r12
                            *(result + (rbx_5 << 3)) = rdi_7
                        
                        r14_1 = arg_10
                
                rbp_2 = &rbp_2[0x22]
                i = var_70_1
                var_70_1 -= 1
            while (i != 1)
        
        rcx = &var_68[1]
        var_68 = rcx
    while (rcx != var_88)
    
    rsi = arg3

int64_t rbx_6 = sx.q(arg5[1].d)
int32_t temp0 = rbx_6.d

if (temp0 != 0)
    int64_t* rdi_8 = nullptr
    var_88 = nullptr
    uint64_t rbp_3 = 0
    int32_t var_7c_1 = 0
    int32_t var_80_1
    
    if (temp0 s> 0)
        var_80_1 = rbx_6.d
        sub_14083a440(&var_88, 0)
        rdi_8 = var_88
        memset(rdi_8, 0, rbx_6 << 3)
        rbp_3 = zx.q(var_80_1)
    else if (temp0 s< 0 && rbx_6.d != 0)
        var_80_1 = rbx_6.d
        sub_14083ab10(&var_88)
        rdi_8 = var_88
        rbp_3 = zx.q(var_80_1)
    int32_t i_1 = 0
    
    if (rbx_6.d != 0)
        do
            void* rcx_44 = (*arg5)[sx.q(i_1)] + 0xe0
            void* rax_44 = *(rcx_44 + 0x20)
            
            if (rax_44 != 0)
                rcx_44 = rax_44
            
            i_1 += 1
            rdi_8[sx.q(i_1)] = *(*(rcx_44 + 8) + 0x98)
        while (i_1 u< rbx_6.d)
    
    uint32_t rdx_27 = (rbp_3 << 3).d
    int64_t r15_3 = sx.q(rdx_27)
    int64_t* rsi_5 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_46 = rsi_5 + r15_3
    
    if (rax_46 u> *(rsi + 0x38))
        sub_140b0e3d0(&rsi[0x18], rdx_27 + 8)
        rsi_5 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
        rax_46 = rsi_5 + r15_3
    
    *(rsi + 0x30) = rax_46
    int64_t i_4 = sx.q(rbp_3.d)
    
    if (rbp_3.d s> 0)
        int64_t* rcx_47 = rsi_5
        int64_t i_2
        
        do
            *rcx_47 = *(rdi_8 - rsi_5 + rcx_47)
            rcx_47 = &rcx_47[1]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    void*** rcx_50 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_48 = &rcx_50[6]
    
    if (rax_48 u> *(rsi + 0x38))
        sub_140b0e3d0(&rsi[0x18], 0x38)
        rcx_50 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
        rax_48 = &rcx_50[6]
    
    *(rsi + 0x30) = rax_48
    int16_t* r10_2 = arg3
    void**** rax_49 = *(r10_2 + 8)
    *(r10_2 + 0x14) += 1
    *rax_49 = rcx_50
    *(r10_2 + 8) = &rcx_50[1]
    rcx_50[1] = 0
    result = &data_142da7798
    *rcx_50 = &data_142da7798
    rcx_50[2].d = rbp_3.d
    rcx_50[3] = rsi_5
    rcx_50[4].d = 1
    *(rcx_50 + 0x24) = 3
    rcx_50[5] = 0
    
    if (rbx_6.d != 0)
        do
            void* r8_8 = *(*arg5 + (sx.q(i_3) << 3)) + 0xe0
            void* rax_52 = *(r8_8 + 0x20)
            
            if (rax_52 != 0)
                r8_8 = rax_52
            
            result = sub_140888020(r10_2, *(arg1 + 0x10), *(r8_8 + 8) + 0x90)
            r10_2 = arg3
            i_3 += 1
        while (i_3 u< rbx_6.d)

return result
