// 函数: sub_1407821d0
// 地址: 0x1407821d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg1
int64_t* r12 = arg1
int64_t* rcx_5

if (*(r10 + 0xd0) == *(r10 + 0xfc))
label_140782272:
    rcx_5 = nullptr
else
    int64_t r11_1 = arg1[1]
    void* r9_1 = r10 + 0x100
    void* r8_1 = *(r9_1 + 8)
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax_5 =
        *(r9_1 + ((sx.q((r11_1 u>> 0x20).d * 0x17 + r11_1.d) & (sx.q(*(r10 + 0x110)) - 1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_140782272_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax_5) * 0x50 + *(r10 + 0xc8)
            
            if (*rcx_5 == r11_1)
                break
            
            rax_5 = rcx_5[9].d
            
            if (rax_5 == 0xffffffff)
                goto label_140782272_2
        
        if (rax_5 == 0xffffffff)
        label_140782272_2:
            rcx_5 = nullptr

void* const result = r12[2]
void* r14 = &rcx_5[1]

if (rcx_5 == 0)
    r14 = nullptr

if (result != 0 && *(result + 0x10) != 0 && r14 != 0)
    int64_t* r9_2 = *(r14 + 0x30)
    
    if (r9_2 != 0)
        int32_t rax_6 = data_143dbb190
        int32_t rcx_6 = *r14
        int32_t r8_3 = *(r14 + 4)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r12[3].d)
        int32_t rax_10 = divs.dp.d(temp2_1:temp3_1, *(r14 + 8)) * r8_3
        int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int32_t var_ac_1 = mods.dp.d(temp2_1:temp3_1, *(r14 + 8)) * rcx_6
        void* rcx_7 = &rbx_3[1]
        uint64_t var_a0_1 = data_143dbb188.q
        int64_t var_94_1 = 0
        int64_t var_8c_1 = 1
        int32_t var_84_1 = 0
        int32_t var_b4_1 = r8_3
        int32_t var_b0_1 = 1
        int32_t var_a4_1 = 0
        int64_t rax_11 = *r9_2
        
        if (rcx_7 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_7 = &rbx_3[1]
        
        *(arg2 + 0x30) = rcx_7
        *rbx_3 = rax_11
        void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_12 = &rcx_11[5]
        
        if (rax_12 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_12 = &rcx_11[5]
        
        *(arg2 + 0x30) = rax_12
        *(arg2 + 0x14) += 1
        **(arg2 + 8) = rcx_11
        *(arg2 + 8) = &rcx_11[1]
        rcx_11[1] = 0
        rcx_11[3] = rbx_3
        *rcx_11 = &data_142d549c8
        rcx_11[2].d = 1
        rcx_11[4].d = 0
        int64_t* rbx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int64_t rcx_15 = *(r12[2] + 0x10)
        void* rax_16 = &rbx_8[1]
        
        if (rax_16 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rbx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_16 = &rbx_8[1]
        
        *(arg2 + 0x30) = rax_16
        *rbx_8 = rcx_15
        void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_17 = &rcx_19[5]
        
        if (rax_17 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_17 = &rcx_19[5]
        
        *(arg2 + 0x30) = rax_17
        *(arg2 + 0x14) += 1
        **(arg2 + 8) = rcx_19
        *(arg2 + 8) = &rcx_19[1]
        rcx_19[1] = 0
        *rcx_19 = &data_142d549c8
        rcx_19[2].d = 1
        rcx_19[3] = rbx_8
        rcx_19[4].d = 1
        int64_t rax_21 = *(r12[2] + 0x10)
        int64_t* r15_1 = **(r14 + 0x30)
        
        if (data_143f0f19d == 0)
            int32_t i = 0
            int32_t var_40_1 = 1
            uint128_t var_78_1 = rcx_6.o
            uint64_t var_48_1 = var_8c_1
            
            do
                void*** rbx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_41 = &rbx_18[0xc]
                
                if (rax_41 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x68)
                    rbx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_41 = &rbx_18[0xc]
                
                *(arg2 + 0x30) = rax_41
                void**** rax_42 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_42 = rbx_18
                *(arg2 + 8) = &rbx_18[1]
                rbx_18[1] = 0
                *rbx_18 = &data_142da7788
                *(rbx_18 + 0x10) = var_78_1
                *(rbx_18 + 0x20) = rax_10.o
                *(rbx_18 + 0x30) = rax_6.o
                rbx_18[8] = var_48_1
                rbx_18[9].d = 1
                rbx_18[0xa] = r15_1
                rbx_18[0xb] = rax_21
                
                if ((*(*r15_1 + 8))(r15_1) == 0)
                    int64_t* rcx_34 = rbx_18[0xa]
                    
                    if ((*(*rcx_34 + 0x10))(rcx_34) == 0)
                        int64_t* rcx_35 = rbx_18[0xa]
                        
                        if ((*(*rcx_35 + 0x18))(rcx_35) == 0)
                            int64_t* rcx_36 = rbx_18[0xa]
                            (*(*rcx_36 + 0x20))(rcx_36)
                
                int64_t* rcx_37 = rbx_18[0xb]
                
                if ((*(*rcx_37 + 8))(rcx_37) == 0)
                    int64_t* rcx_38 = rbx_18[0xb]
                    
                    if ((*(*rcx_38 + 0x10))(rcx_38) == 0)
                        int64_t* rcx_39 = rbx_18[0xb]
                        
                        if ((*(*rcx_39 + 0x18))(rcx_39) == 0)
                            int64_t* rcx_40 = rbx_18[0xb]
                            (*(*rcx_40 + 0x20))(rcx_40)
                
                var_48_1.d += 1
                var_48_1:4.d += 1
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(var_78_1.d)
                int32_t rax_61 = (temp9_1 - temp8_1) s>> 1
                
                if (rax_61 s<= 1)
                    rax_61 = 1
                
                var_78_1.d = rax_61
                int32_t temp10_1
                int32_t temp11_1
                temp10_1:temp11_1 = sx.q(var_78_1:4.d)
                int32_t rax_65 = (temp11_1 - temp10_1) s>> 1
                
                if (rax_65 s<= 1)
                    rax_65 = 1
                
                i += 1
                var_78_1:4.d = rax_65
            while (i u< 1)
            
            r12 = arg1
        else
            void*** rbx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_23 = &rbx_13[0xc]
            
            if (rax_23 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x68)
                rbx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_23 = &rbx_13[0xc]
            
            *(arg2 + 0x30) = rax_23
            int64_t* rax_24 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_24 = rbx_13
            *(arg2 + 8) = &rbx_13[1]
            rbx_13[1] = 0
            *rbx_13 = &data_142da7788
            *(rbx_13 + 0x10) = rcx_6.o
            *(rbx_13 + 0x20) = rax_10.o
            *(rbx_13 + 0x30) = rax_6.o
            rbx_13[8] = var_8c_1
            rbx_13[9].d = 1
            rbx_13[0xb] = rax_21
            rbx_13[0xa] = r15_1
            
            if ((*(*r15_1 + 8))(r15_1) == 0)
                int64_t* rcx_25 = rbx_13[0xa]
                
                if ((*(*rcx_25 + 0x10))(rcx_25) == 0)
                    int64_t* rcx_26 = rbx_13[0xa]
                    
                    if ((*(*rcx_26 + 0x18))(rcx_26) == 0)
                        int64_t* rcx_27 = rbx_13[0xa]
                        (*(*rcx_27 + 0x20))(rcx_27)
            
            int64_t* rcx_28 = rbx_13[0xb]
            
            if ((*(*rcx_28 + 8))(rcx_28) == 0)
                int64_t* rcx_29 = rbx_13[0xb]
                
                if ((*(*rcx_29 + 0x10))(rcx_29) == 0)
                    int64_t* rcx_30 = rbx_13[0xb]
                    
                    if ((*(*rcx_30 + 0x18))(rcx_30) == 0)
                        int64_t* rcx_31 = rbx_13[0xb]
                        (*(*rcx_31 + 0x20))(rcx_31)
        
        int64_t* rbx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int64_t* rcx_41 = *(r12[2] + 0x10)
        void* rax_67 = &rbx_23[1]
        
        if (rax_67 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rbx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_67 = &rbx_23[1]
        
        *(arg2 + 0x30) = rax_67
        *rbx_23 = rcx_41
        void*** rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_68 = &rcx_45[5]
        
        if (rax_68 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_68 = &rcx_45[5]
        
        *(arg2 + 0x30) = rax_68
        void**** rax_69 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_69 = rcx_45
        *(arg2 + 8) = &rcx_45[1]
        rcx_45[1] = 0
        *rcx_45 = &data_142d549c8
        result = 1
        rcx_45[3] = rbx_23
        rcx_45[2].d = 1
        rcx_45[4].d = 0

return result
