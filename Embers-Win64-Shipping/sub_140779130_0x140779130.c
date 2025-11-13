// 函数: sub_140779130
// 地址: 0x140779130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
*arg1 = 0
int32_t* r14 = arg2
arg1[1] = 0

if (arg3 != 0)
    void* rax_1 = sub_140bdf730()
    void* rdx = *(arg3 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    int16_t* var_c0
    int16_t* rcx_8
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int64_t* rax_4 = sub_140bdef30(arg3, &var_c0, sx.q(*r14))
        
        if (arg1 != rax_4)
            int64_t rcx_2 = *arg1
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            *arg1 = *rax_4
            *rax_4 = 0
            arg1[1].d = rax_4[1].d
            *(arg1 + 0xc) = *(rax_4 + 0xc)
            rax_4[1] = 0
        
        rcx_8 = var_c0
        goto label_140779266
    
    void* rax_7 = sub_140bdfe30()
    void* rdx_2 = *(arg3 + 0x10)
    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
    
    if (rax_8.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
        int16_t* var_e8
        
        if (arg3 != data_143ce3870)
            if (arg3 == data_143ce3880)
                sub_140a2e390(&var_e8, u"%d ", zx.q(*r14))
                goto label_14077924b
            
            if (arg3 != data_143ce3878)
                void* i_1 = *(arg3 + 0x50)
                int32_t var_c8_1 = 0xffffffff
                void* var_d8 = arg3
                int16_t var_c4_1 = 0x101
                char var_c2_1 = 0
                sub_1406328d0(&var_d8)
                void* i = i_1
                
                if (i != 0)
                    wchar16 const* const rdi_1 = u"True"
                    
                    do
                        void* rbx_3 = sx.q(*(i + 0x4c)) + r14
                        sub_140d113c0()
                        
                        if ((*(*(i + 8) + 0x10) & data_143e1bfc8) == 0)
                            sub_140d11680()
                            
                            if ((*(*(i + 8) + 0x10) & data_143e1be38) == 0)
                                sub_140d11050()
                                
                                if ((*(*(i + 8) + 0x10) & data_143e1b9d8) == 0)
                                    int64_t var_40
                                    int64_t* rax_22 = sub_140779130(&var_40, rbx_3, *(i + 0x78))
                                    
                                    if (rax_22[1].d != 0)
                                        *rax_22
                                    
                                    int64_t var_50
                                    int64_t* rax_23 = sub_140cdd710(i, &var_50)
                                    int16_t* const r8_19
                                    
                                    if (rax_23[1].d == 0)
                                        r8_19 = &data_142d40450
                                    else
                                        r8_19 = *rax_23
                                    
                                    sub_140a2e390(&var_c0, u"%s: (%s) ", r8_19)
                                    int32_t var_b8
                                    int32_t r8_21
                                    
                                    if (var_b8 == 0)
                                        r8_21 = 0
                                    else
                                        r8_21 = var_b8 - 1
                                    
                                    sub_140a20ba0(arg1, var_c0, r8_21)
                                    int16_t* rcx_39 = var_c0
                                    
                                    if (rcx_39 != 0)
                                        sub_140a74f90(rcx_39)
                                    
                                    int64_t rcx_40 = var_50
                                    
                                    if (rcx_40 != 0)
                                        sub_140a74f90(rcx_40)
                                    
                                    int64_t rcx_41 = var_40
                                    
                                    if (rcx_41 != 0)
                                        sub_140a74f90(rcx_41)
                                else
                                    int32_t rax_18 = *r14
                                    
                                    if (rax_18 != 0xffffffff)
                                        rdi_1 = u"Invalid"
                                        
                                        if (rax_18 == 0)
                                            rdi_1 = u"False"
                                    
                                    int32_t rdx_9 = 0
                                    int32_t rax_19 = 0
                                    int16_t* r14_1 = nullptr
                                    int32_t var_e0_1 = 0
                                    int32_t var_dc_1 = 0
                                    var_e8 = nullptr
                                    
                                    if (*rdi_1 != 0)
                                        int64_t rbx_4 = -1
                                        
                                        do
                                            rbx_4 += 1
                                        while (rdi_1[rbx_4] != 0)
                                        
                                        if (rbx_4.d + 1 s> 0)
                                            sub_1405947f0(&var_e8, rbx_4.d + 1)
                                            rax_19 = var_dc_1
                                            rdx_9 = var_e0_1
                                            r14_1 = var_e8
                                        
                                        if (rbx_4.d + 1 + rdx_9 s> rax_19)
                                            sub_140594770(&var_e8)
                                            r14_1 = var_e8
                                        
                                        UnDecorator::getReferenceType(r14_1, rdi_1, 
                                            (rbx_4.d + 1) * 2)
                                    
                                    int64_t var_60
                                    int64_t* rax_20 = sub_140cdd710(i, &var_60)
                                    int16_t* const r8_15
                                    
                                    if (rax_20[1].d == 0)
                                        r8_15 = &data_142d40450
                                    else
                                        r8_15 = *rax_20
                                    
                                    int64_t var_90
                                    sub_140a2e390(&var_90, u"%s: %d ", r8_15)
                                    int32_t var_88
                                    int32_t r8_17
                                    
                                    if (var_88 == 0)
                                        r8_17 = 0
                                    else
                                        r8_17 = var_88 - 1
                                    
                                    sub_140a20ba0(arg1, var_90, r8_17)
                                    int64_t rcx_31 = var_90
                                    
                                    if (rcx_31 != 0)
                                        sub_140a74f90(rcx_31)
                                    
                                    int64_t rcx_32 = var_60
                                    
                                    if (rcx_32 != 0)
                                        sub_140a74f90(rcx_32)
                                    
                                    if (r14_1 != 0)
                                        sub_140a74f90(r14_1)
                                    
                                    r14 = arg2
                                    rdi_1 = u"True"
                            else
                                int64_t var_70
                                int64_t* rax_16 = sub_140cdd710(i, &var_70)
                                int16_t* const r8_10
                                
                                if (rax_16[1].d == 0)
                                    r8_10 = &data_142d40450
                                else
                                    r8_10 = *rax_16
                                
                                *rbx_3
                                int64_t var_a0
                                sub_140a2e390(&var_a0, u"%s: %d ", r8_10)
                                int32_t var_98
                                int32_t r8_12
                                
                                if (var_98 == 0)
                                    r8_12 = 0
                                else
                                    r8_12 = var_98 - 1
                                
                                sub_140a20ba0(arg1, var_a0, r8_12)
                                int64_t rcx_22 = var_a0
                                
                                if (rcx_22 != 0)
                                    sub_140a74f90(rcx_22)
                                
                                int64_t rcx_23 = var_70
                                
                                if (rcx_23 != 0)
                                    sub_140a74f90(rcx_23)
                        else
                            int64_t var_80
                            int64_t* rax_14 = sub_140cdd710(i, &var_80)
                            int16_t* const r8_7
                            
                            if (rax_14[1].d == 0)
                                r8_7 = &data_142d40450
                            else
                                r8_7 = *rax_14
                            
                            _mm_cvtps_pd(*rbx_3)
                            int64_t var_b0
                            sub_140a2e390(&var_b0, u"%s: %g ", r8_7)
                            int32_t var_a8
                            int32_t r8_9
                            
                            if (var_a8 == 0)
                                r8_9 = 0
                            else
                                r8_9 = var_a8 - 1
                            
                            sub_140a20ba0(arg1, var_b0, r8_9)
                            int64_t rcx_16 = var_b0
                            
                            if (rcx_16 != 0)
                                sub_140a74f90(rcx_16)
                            
                            int64_t rcx_17 = var_80
                            
                            if (rcx_17 != 0)
                                sub_140a74f90(rcx_17)
                        
                        void* i_2 = *(i + 0x20)
                        sub_1406328d0(&var_d8)
                        i = i_2
                    while (i != 0)
            else
                int32_t rax_11 = *r14
                wchar16 const* const rcx_9
                
                if (rax_11 != 0xffffffff)
                    rcx_9 = u"Invalid"
                    
                    if (rax_11 == 0)
                        rcx_9 = u"False"
                else
                    rcx_9 = u"True"
                
                int64_t rax_12 = -1
                
                do
                    rax_12 += 1
                while (rcx_9[rax_12] != 0)
                
                sub_140a20ba0(arg1, rcx_9, rax_12.d)
        else
            sub_140a2e390(&var_e8, u"%g ", _mm_cvtps_pd(*r14))
        label_14077924b:
            int32_t var_e0
            
            if (var_e0 != 0)
                r15 = var_e0 - 1
            
            sub_140a20ba0(arg1, var_e8, r15)
            rcx_8 = var_e8
        label_140779266:
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)

return arg1
