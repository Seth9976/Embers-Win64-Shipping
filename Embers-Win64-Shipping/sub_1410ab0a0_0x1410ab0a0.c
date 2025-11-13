// 函数: sub_1410ab0a0
// 地址: 0x1410ab0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
int64_t* rdi = arg1
int64_t* var_158
int64_t* var_148
void*** var_120
void*** (* var_110)()
void var_100
void var_a8
void var_78
char arg_20

if (data_143f0f1c5 == 0)
    int32_t i = 0
    
    if (arg3[1].d s> 0)
        int64_t r12_1 = 0
        
        do
            void* r14_4 = *rbx
            var_110 = j_sub_140597fc0
            char* var_108_2 = &arg_20
            void* r14_5 = r14_4 + r12_1
            arg_20 = 0
            int64_t* rax_34 = sub_140a756e0(&var_110, &data_143958018) + 0x10
            var_148 = rax_34
            int64_t rcx_39 = *rax_34
            int64_t rcx_40 = rax_34[2]
            char var_130_3 = 0
            void*** (* rcx_41)() = rax_34[3]
            rax_34[3] = &var_148
            int64_t* rax_35 = var_148
            rax_35[4].d += 1
            sub_141385550(&var_a8, arg2, r14_5)
            int64_t* rax_36
            
            if (*(r14_5 + 0x1548) s< 3 || *(data_143e2de08 + 4) s< 1)
                rax_36.b = 0
            else
                rax_36.b = 1
            
            if (rax_36.b != 0)
                int32_t rbx_8 = *(arg2 + 0x8c)
                int32_t rax_37 = *(r14_5 + 0xad8)
                
                if (rbx_8 != rax_37)
                    *(arg2 + 0x8c) = rax_37
                    
                    if (*(arg2 + 0x14) u> 0)
                        void*** rdx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_38 = &rdx_33[3]
                        
                        if (rax_38 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_38 = &rdx_33[3]
                        
                        *(arg2 + 0x30) = rax_38
                        int64_t* rax_39 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_39 = rdx_33
                        int32_t rax_40 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_33[1]
                        rdx_33[1] = 0
                        *rdx_33 = &data_142f11588
                        rdx_33[2].d = rax_40
                    else
                        *(arg2 + 0x90) = rax_37
                
                sub_1412ff950(&var_100, arg2, &var_78, r14_5)
                sub_14108f6e0(&var_120, arg2, &var_100, 1)
                int128_t zmm0_2 = var_120.o
                var_158 = nullptr
                int64_t var_150_2 = 1
                int128_t var_d8_2 = zmm0_2
                sub_1405a4d70(&var_158)
                *var_158 = (var_120.o).q
                sub_1413a1370(&var_a8, &var_158)
                int64_t* rcx_49 = var_158
                
                if (rcx_49 != 0)
                    sub_140a74f90(rcx_49)
                
                if (*(arg2 + 0x8c) != rbx_8)
                    *(arg2 + 0x8c) = rbx_8
                    
                    if (*(arg2 + 0x14) u> 0)
                        void*** rdx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_42 = &rdx_42[3]
                        
                        if (rax_42 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_42 = &rdx_42[3]
                        
                        *(arg2 + 0x30) = rax_42
                        int64_t* rax_43 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_43 = rdx_42
                        int32_t rax_44 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_42[1]
                        rdx_42[1] = 0
                        *rdx_42 = &data_142f11588
                        rdx_42[2].d = rax_44
                    else
                        *(arg2 + 0x90) = rbx_8
                
                rbx = arg3
            
            sub_141386800(&var_a8)
            
            if (var_130_3 == 0)
                int64_t* rax_45 = var_148
                char var_130_4 = 1
                rax_45[4].d -= 1
                int64_t* rcx_53 = var_148
                
                if (rcx_40 != rcx_53[2])
                    sub_140b16b40(rcx_53, rcx_40)
                    rcx_53 = var_148
                
                *rcx_53 = rcx_39
                var_148[3] = rcx_41
            
            i += 1
            r12_1 += 0x5240
        while (i s< rbx[1].d)
    
    return 

sub_1410a6c20(arg1)
int32_t i_1 = 0

if (rbx[1].d s> 0)
    int64_t* rdi_1 = arg3
    void*** rbx_1 = nullptr
    var_120 = nullptr
    
    do
        arg_20 = 0
        char* var_108_1 = &arg_20
        var_110 = j_sub_140597fc0
        int64_t* r14_2 = rbx_1 * 0x5240 + *rdi_1
        int64_t* rax_2 = sub_140a756e0(&var_110, &data_143958018) + 0x10
        var_148 = rax_2
        int64_t rcx_1 = *rax_2
        int64_t rcx_2 = rax_2[2]
        char var_130_1 = 0
        int64_t rcx_3 = rax_2[3]
        rax_2[3] = &var_148
        int64_t* rax_3 = var_148
        rax_3[4].d += 1
        sub_141385550(&var_a8, arg2, r14_2)
        uint32_t rax_4 = sub_1410911f0(r14_2)
        uint32_t r15_1 = rax_4
        int32_t rdx_1
        
        if (r14_2[0x2a9].d s>= 3)
            rdx_1 = *(data_143e2de08 + 4)
        
        if (r14_2[0x2a9].d s< 3 || rdx_1 s< 1 || rax_4 != 1 || rdx_1 s< 2)
            rax_4.b = 0
        else
            rax_4 = zx.d(data_143f0f1c5)
            
            if (rdx_1 == 3)
                rax_4 = r15_1
        
        if (rax_4.b != 0)
            int32_t rdi_2 = *(arg2 + 0x8c)
            int32_t rax_5 = r14_2[0x15b].d
            
            if (rdi_2 != rax_5)
                *(arg2 + 0x8c) = rax_5
                
                if (*(arg2 + 0x14) u> 0)
                    void*** rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_6 = &rdx_4[3]
                    
                    if (rax_6 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_6 = &rdx_4[3]
                    
                    *(arg2 + 0x30) = rax_6
                    int64_t* rax_7 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_7 = rdx_4
                    int32_t rax_8 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_4[1]
                    rdx_4[1] = 0
                    *rdx_4 = &data_142f11588
                    rdx_4[2].d = rax_8
                else
                    *(arg2 + 0x90) = rax_5
            
            int32_t rbx_2 = data_143f02dec
            int32_t rax_9 = r14_2[0x15b].d
            
            if (rbx_2 != rax_9)
                int32_t rcx_10 = data_143f02d74
                data_143f02dec = rax_9
                
                if (rcx_10 != 0)
                    void*** rdx_9 = (data_143f02d90 + 7) & 0xfffffffffffffff8
                    void* rax_10 = &rdx_9[3]
                    
                    if (rax_10 u> data_143f02d98)
                        sub_140b0e3d0(&data_143f02d90, 0x20)
                        rcx_10 = data_143f02d74
                        rdx_9 = (data_143f02d90 + 7) & 0xfffffffffffffff8
                        rax_10 = &rdx_9[3]
                    
                    data_143f02d90 = rax_10
                    int64_t* rax_11 = data_143f02d68
                    data_143f02d74 = rcx_10 + 1
                    *rax_11 = rdx_9
                    int32_t rax_12 = data_143f02dec
                    data_143f02d68 = &rdx_9[1]
                    rdx_9[1] = 0
                    *rdx_9 = &data_142f11588
                    rdx_9[2].d = rax_12
                else
                    data_143f02df0 = rax_9
            
            sub_1412ff950(&var_100, arg2, &var_78, r14_2)
            int32_t r10_1 = *(data_143e2deb0 + 4)
            int64_t zmm0_1
            int128_t var_b8
            
            if (*(data_143e2de98 + 4) != 1)
                sub_14108f6e0(&var_b8, arg2, &var_100, r15_1)
                zmm0_1 = var_b8.q
            else
                int32_t r8_2 = r14_2[0x2a9].d
                char rcx_14 = data_143f0f1c5
                void* rdx_13 = data_143e2de08
                
                if (r8_2 s< 3)
                    sub_14108f6e0(&var_b8, arg2, &var_100, r15_1)
                    zmm0_1 = var_b8.q
                else
                    int32_t rax_15 = *(rdx_13 + 4)
                    
                    if (rax_15 s>= 1 && rax_15 s>= 2 && rcx_14 != 0 && r10_1 != 0)
                    label_1410ab38e:
                        int32_t r9_3
                        
                        if (rax_15 s< 2 || rcx_14 == 0)
                            r9_3 = 3
                        else
                            int32_t r9_2
                            r9_2.b = r10_1 != 0
                            r9_3 = r9_2 + 1
                        
                        int128_t var_c8
                        sub_141090370(&var_c8, arg2, &var_100, r9_3)
                        zmm0_1 = var_c8.q
                    else if (r8_2 s< 3)
                        sub_14108f6e0(&var_b8, arg2, &var_100, r15_1)
                        zmm0_1 = var_b8.q
                    else
                        rax_15 = *(rdx_13 + 4)
                        
                        if (rax_15 s>= 1 && rax_15 s>= 2 && rcx_14 != 0 && r10_1 == 0)
                            goto label_1410ab38e
                        
                        sub_14108f6e0(&var_b8, arg2, &var_100, r15_1)
                        zmm0_1 = var_b8.q
            var_158 = nullptr
            int64_t var_150_1 = 1
            sub_1405a4d70(&var_158)
            *var_158 = zmm0_1
            sub_1413a1370(&var_a8, &var_158)
            int64_t* rcx_19 = var_158
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            if (data_143f02dec != rbx_2)
                int32_t rcx_20 = data_143f02d74
                data_143f02dec = rbx_2
                
                if (rcx_20 != 0)
                    void*** rdx_20 = (data_143f02d90 + 7) & 0xfffffffffffffff8
                    void* rax_17 = &rdx_20[3]
                    
                    if (rax_17 u> data_143f02d98)
                        sub_140b0e3d0(&data_143f02d90, 0x20)
                        rcx_20 = data_143f02d74
                        rdx_20 = (data_143f02d90 + 7) & 0xfffffffffffffff8
                        rax_17 = &rdx_20[3]
                    
                    data_143f02d90 = rax_17
                    int64_t* rax_18 = data_143f02d68
                    data_143f02d74 = rcx_20 + 1
                    *rax_18 = rdx_20
                    int32_t rax_19 = data_143f02dec
                    data_143f02d68 = &rdx_20[1]
                    rdx_20[1] = 0
                    *rdx_20 = &data_142f11588
                    rdx_20[2].d = rax_19
                else
                    data_143f02df0 = rbx_2
            
            if (*(arg2 + 0x8c) != rdi_2)
                *(arg2 + 0x8c) = rdi_2
                
                if (*(arg2 + 0x14) u> 0)
                    void*** rdx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_20 = &rdx_25[3]
                    
                    if (rax_20 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_20 = &rdx_25[3]
                    
                    *(arg2 + 0x30) = rax_20
                    int64_t* rax_21 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_21 = rdx_25
                    int32_t rax_22 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_25[1]
                    rdx_25[1] = 0
                    *rdx_25 = &data_142f11588
                    rdx_25[2].d = rax_22
                else
                    *(arg2 + 0x90) = rdi_2
            
            rbx_1 = var_120
            rdi_1 = arg3
        
        sub_141386800(&var_a8)
        
        if (var_130_1 == 0)
            int64_t* rax_23 = var_148
            char var_130_2 = 1
            rax_23[4].d -= 1
            int64_t* rcx_26 = var_148
            
            if (rcx_2 != rcx_26[2])
                sub_140b16b40(rcx_26, rcx_2)
                rcx_26 = var_148
            
            *rcx_26 = rcx_1
            var_148[3] = rcx_3
        
        rbx_1 += 1
        i_1 += 1
        var_120 = rbx_1
    while (i_1 s< rdi_1[1].d)
    
    rdi = arg1

if (*rdi == 0)
    return 

void*** rcx_30 = (data_143f02d90 + 7) & 0xfffffffffffffff8
void* rax_26 = &rcx_30[3]

if (rax_26 u> data_143f02d98)
    sub_140b0e3d0(&data_143f02d90, 0x20)
    rcx_30 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    rax_26 = &rcx_30[3]

data_143f02d74 += 1
data_143f02d90 = rax_26
*data_143f02d68 = rcx_30
data_143f02d68 = &rcx_30[1]
rcx_30[1] = 0
*rcx_30 = &data_142f115f8
rcx_30[2].d = 4
int64_t rax_29 = data_143f02d98
int64_t rdi_3 = *rdi
int64_t rbx_5 = (data_143f02d90 + 7) & 0xfffffffffffffff8

if (rbx_5 u> rax_29)
    sub_140b0e3d0(&data_143f02d90, 8)
    rax_29 = data_143f02d98
    rbx_5 = (data_143f02d90 + 7) & 0xfffffffffffffff8

data_143f02d90 = rbx_5
void*** rcx_35 = (rbx_5 + 7) & 0xfffffffffffffff8

if (&rcx_35[6] u> rax_29)
    sub_140b0e3d0(&data_143f02d90, 0x38)
    rcx_35 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    data_143f02d90 = &rcx_35[6]
else
    data_143f02d90 = &rcx_35[6]

void**** rax_31 = data_143f02d68
data_143f02d74 += 1
*rax_31 = rcx_35
data_143f02d68 = &rcx_35[1]
rcx_35[1] = 0
*rcx_35 = &data_142da7798
rcx_35[2].d = 0
rcx_35[3] = rbx_5
rcx_35[4].d = 0
*(rcx_35 + 0x24) = 1
rcx_35[5] = rdi_3
sub_141974410(&data_143f02d60)
