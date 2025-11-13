// 函数: sub_140781ad0
// 地址: 0x140781ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg1
int64_t* r15 = arg1
int64_t* rcx_5

if (*(r10 + 0xd0) == *(r10 + 0xfc))
label_140781b72:
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
    label_140781b72_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax_5) * 0x50 + *(r10 + 0xc8)
            
            if (*rcx_5 == r11_1)
                break
            
            rax_5 = rcx_5[9].d
            
            if (rax_5 == 0xffffffff)
                goto label_140781b72_2
        
        if (rax_5 == 0xffffffff)
        label_140781b72_2:
            rcx_5 = nullptr

int64_t* result = r15[2]
void* r14 = &rcx_5[1]

if (rcx_5 == 0)
    r14 = nullptr

if (result != 0 && result[2] != 0 && r14 != 0)
    result = *(r14 + 0x30)
    
    if (result != 0)
        int64_t rax_6 = *result
        int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_6 = &rbx_3[1]
        
        if (rcx_6 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_6 = &rbx_3[1]
        
        *(arg2 + 0x30) = rcx_6
        *rbx_3 = rax_6
        void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_7 = &rcx_10[5]
        
        if (rax_7 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_7 = &rcx_10[5]
        
        *(arg2 + 0x30) = rax_7
        *(arg2 + 0x14) += 1
        **(arg2 + 8) = rcx_10
        *(arg2 + 8) = &rcx_10[1]
        rcx_10[1] = 0
        rcx_10[3] = rbx_3
        rcx_10[2].d = 1
        *rcx_10 = &data_142d549c8
        rcx_10[4].d = 0
        int64_t* rbx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int64_t rcx_14 = *(r15[2] + 0x10)
        void* rax_11 = &rbx_8[1]
        
        if (rax_11 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rbx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_11 = &rbx_8[1]
        
        *(arg2 + 0x30) = rax_11
        *rbx_8 = rcx_14
        void*** rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_12 = &rcx_18[5]
        
        if (rax_12 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_12 = &rcx_18[5]
        
        *(arg2 + 0x30) = rax_12
        *(arg2 + 0x14) += 1
        **(arg2 + 8) = rcx_18
        *(arg2 + 8) = &rcx_18[1]
        rcx_18[1] = 0
        *rcx_18 = &data_142d549c8
        rcx_18[2].d = 1
        rcx_18[3] = rbx_8
        rcx_18[4].d = 1
        int32_t rax_15 = data_143dbb190
        uint128_t zmm0 = zx.o(data_143dbb188.q)
        int32_t var_b0_1 = rax_15
        int32_t var_a4_1 = rax_15
        uint64_t var_b8_1 = zmm0.q
        uint64_t var_ac_1 = zmm0.q
        uint64_t var_a0_1 = zmm0.q
        int64_t var_94_1 = 0
        int64_t var_8c_1 = 1
        int32_t var_84_1 = 0
        int64_t rax_17 = *(r15[2] + 0x10)
        int64_t* r12_1 = **(r14 + 0x30)
        
        if (data_143f0f19d == 0)
            int32_t i = 0
            int32_t var_40_1 = 1
            uint128_t var_78_1 = var_b8_1.o
            uint64_t var_48_1 = var_8c_1
            
            do
                void*** rbx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_37 = &rbx_18[0xc]
                
                if (rax_37 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x68)
                    rbx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_37 = &rbx_18[0xc]
                
                *(arg2 + 0x30) = rax_37
                void**** rax_38 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_38 = rbx_18
                *(arg2 + 8) = &rbx_18[1]
                rbx_18[1] = 0
                *rbx_18 = &data_142da7788
                *(rbx_18 + 0x10) = var_78_1
                *(rbx_18 + 0x20) = var_ac_1:4.o
                *(rbx_18 + 0x30) = rax_15.o
                rbx_18[8] = var_48_1
                rbx_18[9].d = 1
                rbx_18[0xa] = r12_1
                rbx_18[0xb] = rax_17
                
                if ((*(*r12_1 + 8))(r12_1) == 0)
                    int64_t* rcx_33 = rbx_18[0xa]
                    
                    if ((*(*rcx_33 + 0x10))(rcx_33) == 0)
                        int64_t* rcx_34 = rbx_18[0xa]
                        
                        if ((*(*rcx_34 + 0x18))(rcx_34) == 0)
                            int64_t* rcx_35 = rbx_18[0xa]
                            (*(*rcx_35 + 0x20))(rcx_35)
                
                int64_t* rcx_36 = rbx_18[0xb]
                
                if ((*(*rcx_36 + 8))(rcx_36) == 0)
                    int64_t* rcx_37 = rbx_18[0xb]
                    
                    if ((*(*rcx_37 + 0x10))(rcx_37) == 0)
                        int64_t* rcx_38 = rbx_18[0xb]
                        
                        if ((*(*rcx_38 + 0x18))(rcx_38) == 0)
                            int64_t* rcx_39 = rbx_18[0xb]
                            (*(*rcx_39 + 0x20))(rcx_39)
                
                var_48_1.d += 1
                var_48_1:4.d += 1
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(var_78_1.d)
                int32_t rax_57 = (temp1_1 - temp0_1) s>> 1
                
                if (rax_57 s<= 1)
                    rax_57 = 1
                
                var_78_1.d = rax_57
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(var_78_1:4.d)
                int32_t rax_61 = (temp3_1 - temp2_1) s>> 1
                
                if (rax_61 s<= 1)
                    rax_61 = 1
                
                i += 1
                var_78_1:4.d = rax_61
            while (i u< 1)
            
            r15 = arg1
        else
            void*** rbx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_19 = &rbx_13[0xc]
            
            if (rax_19 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x68)
                rbx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_19 = &rbx_13[0xc]
            
            *(arg2 + 0x30) = rax_19
            int64_t* rax_20 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_20 = rbx_13
            *(arg2 + 8) = &rbx_13[1]
            rbx_13[1] = 0
            *rbx_13 = &data_142da7788
            *(rbx_13 + 0x10) = var_b8_1.o
            *(rbx_13 + 0x20) = var_ac_1:4.o
            *(rbx_13 + 0x30) = rax_15.o
            rbx_13[8] = var_8c_1
            rbx_13[9].d = 1
            rbx_13[0xb] = rax_17
            rbx_13[0xa] = r12_1
            
            if ((*(*r12_1 + 8))(r12_1) == 0)
                int64_t* rcx_24 = rbx_13[0xa]
                
                if ((*(*rcx_24 + 0x10))(rcx_24) == 0)
                    int64_t* rcx_25 = rbx_13[0xa]
                    
                    if ((*(*rcx_25 + 0x18))(rcx_25) == 0)
                        int64_t* rcx_26 = rbx_13[0xa]
                        (*(*rcx_26 + 0x20))(rcx_26)
            
            int64_t* rcx_27 = rbx_13[0xb]
            
            if ((*(*rcx_27 + 8))(rcx_27) == 0)
                int64_t* rcx_28 = rbx_13[0xb]
                
                if ((*(*rcx_28 + 0x10))(rcx_28) == 0)
                    int64_t* rcx_29 = rbx_13[0xb]
                    
                    if ((*(*rcx_29 + 0x18))(rcx_29) == 0)
                        int64_t* rcx_30 = rbx_13[0xb]
                        (*(*rcx_30 + 0x20))(rcx_30)
        
        int64_t* rbx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int64_t* rcx_40 = *(r15[2] + 0x10)
        void* rax_63 = &rbx_23[1]
        
        if (rax_63 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rbx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_63 = &rbx_23[1]
        
        *(arg2 + 0x30) = rax_63
        *rbx_23 = rcx_40
        void*** rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_64 = &rcx_44[5]
        
        if (rax_64 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_64 = &rcx_44[5]
        
        *(arg2 + 0x30) = rax_64
        void**** rax_65 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_65 = rcx_44
        *(arg2 + 8) = &rcx_44[1]
        rcx_44[1] = 0
        *rcx_44 = &data_142d549c8
        result = 1
        rcx_44[3] = rbx_23
        rcx_44[2].d = 1
        rcx_44[4].d = 0

return result
