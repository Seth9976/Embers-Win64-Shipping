// 函数: sub_140bbab90
// 地址: 0x140bbab90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_18
sub_140cad130(&arg_18)
int32_t r14 = *(arg1 + 0xa0)
int32_t r12 = 0

if (r14 == 0)
    int32_t i = 0
    
    if (*(*(arg1 + 0x50) + 0x10) s> 0)
        int64_t rdx_1 = 0
        
        do
            rdx_1 += 0x38
            i += 1
            *(*(*(arg1 + 0x50) + 8) + rdx_1 - 3) = 0
        while (i s< *(*(arg1 + 0x50) + 0x10))
        
        r14 = *(arg1 + 0xa0)

int32_t temp0 = *(*(arg1 + 0x50) + 0x10)
bool cond:0 = r14 == temp0

if (r14 s< temp0)
    int32_t temp2_1
    
    do
        int64_t rdx_2 = *(arg1 + 0x50)
        *(arg1 + 0xa0) = r14 + 1
        bool arg_10 = true
        void var_60
        int512_t zmm1_1 = sub_140cad480(&var_60, rdx_2, r14)
        int64_t rbx_1 = sx.q(r14)
        int64_t rax_7 = rbx_1 * 0x38
        void* rsi_2 = *(*(arg1 + 0x50) + 8) + rax_7
        char var_1a8
        int32_t var_1a0
        int32_t var_198
        int64_t* arg_8
        
        if (*(rsi_2 + 8) == 0)
            if (*(rsi_2 + 0x36) == 0)
                int64_t* rbx_2 = *(rsi_2 + 0x20)
                arg_8 = rbx_2
                
                if (rbx_2 != 0)
                    goto label_140bbad00
                
                var_198 = 0
                var_1a0 = 0
                var_1a8 = 0
                int64_t* rax_9 = sub_140d2f0c0(sub_140cddea0(), 0, *rsi_2, 0, 0, 0)
                arg_8 = rax_9
                rbx_2 = rax_9
                
                if (rax_9 != 0)
                    *(rsi_2 + 0x20) = rax_9
                    sub_140b9aae0(arg1, rax_9)
                label_140bbad00:
                    void var_128
                    sub_140812a70(arg1 + 0x1e8, &var_128, &arg_8, nullptr)
                    void* rcx_6 = rbx_2[0xd]
                    
                    if (rcx_6 != 0)
                        void* rcx_7 = *(rcx_6 + 0x2e0)
                        
                        if (rcx_7 != 0 && *(rcx_7 + 0x238) u<= 7)
                            int64_t rax_10 = *(rcx_7 + 0x14)
                            int32_t rbx_4 = *(rcx_7 + 0x23c)
                            int32_t var_a0
                            sub_140a9e570(arg1 + 0x3f0, &var_a0)
                            int64_t* var_98
                            *var_98 = rax_10
                            var_98[1].d = rbx_4
                            *(var_98 + 0xc) = 0xffffffff
                            int64_t rbx_5 = *var_98
                            var_1a0.q = 0
                            int32_t r8_4 = (rbx_5 u>> 0x20).d + sub_140b5ead0(rbx_5.d)
                            var_1a8.d = var_a0
                            void var_124
                            sub_140ba2440(arg1 + 0x3f0, &var_124, r8_4, var_98, var_1a8, nullptr)
                else
                    *(rsi_2 + 0x36) = 1
            
            goto label_140bbb2be
        
        void* rcx_11 = *(rsi_2 + 0x20)
        char rax_13
        
        if (rcx_11 != 0)
            rax_13, zmm1_1 = sub_140bc92e0(rcx_11)
        
        if (rcx_11 != 0 && rax_13 != 0 && data_14399fa4c == 0)
            goto label_140bbb2be
        
        void* rcx_12 = *(arg1 + 0x50)
        int32_t i_2 = not.d(r14)
        int32_t i_3 = i_2
        int32_t i_4 = i_2
        int64_t r8_5 = *(rcx_12 + 8)
        
        for (int32_t i_1 = *(rbx_1 * 0x38 + r8_5 + 8); i_1 != 0; 
                i_1 = *(sx.q(not.d(i_1)) * 0x38 + r8_5 + 8))
            i_4 = i_2
            i_2 = i_1
        
        int64_t* r11_2 = sx.q(not.d(i_2)) * 0x38 + r8_5
        arg_8 = r11_2
        void* rbx_7 = r11_2[4]
        void* var_160_1 = rbx_7
        
        if (rbx_7 != 0)
            goto label_140bbae71
        
        var_198 = 0
        var_1a0 = 0
        var_1a8 = 0
        void* rax_17 = sub_140d2f0c0(sub_140cddea0(), 0, *r11_2, 0, 0, 0)
        var_160_1 = rax_17
        rbx_7 = rax_17
        
        if (rax_17 != 0)
            arg_8[4] = rbx_7
            int64_t rcx_15
            rcx_15, zmm1_1 = sub_140b9aae0(arg1, rbx_7)
            r11_2 = arg_8
        label_140bbae71:
            void* r13_1 = *(rbx_7 + 0x68)
            
            if (r13_1 == 0 || *(r13_1 + 0x295) == 0)
                rcx_15.b = 0
            else
                rcx_15.b = 1
            
            arg_8.b = rcx_15.b
            
            if (data_14399fa4c == 0)
                if (r13_1 == 0 || *(r13_1 + 0x2e0) == 0)
                label_140bbaf43:
                    sub_140ba61f0(arg1, r14)
                    char rax_31
                    rax_31, zmm1_1 = sub_140bc92e0(*(rsi_2 + 0x20))
                    
                    if (*(rsi_2 + 0x20) == 0)
                        *(rsi_2 + 0x36) = 1
                    else if (rax_31 == 0)
                        *(rsi_2 + 0x20) = 0
                        *(rsi_2 + 0x36) = 1
                    
                    goto label_140bbaf75
                
            label_140bbaf75:
                
                if (r13_1 != 0 && *(r13_1 + 0x2e0) != 0)
                    int32_t rbx_9 = 0
                    uint64_t* r9_5 = *(arg1 + 0x50) + 8
                    uint64_t rax_32 = *r9_5
                    int32_t r8_8 = *(rax_7 + rax_32 + 8)
                    
                    if (r8_8 s< 0)
                        int32_t var_180
                        sub_140ba6960(&var_180, r13_1, not.d(r8_8), r9_5, zmm1_1)
                        void* rdi_4 = *(r13_1 + 0x2e0)
                        int64_t var_120 = *(rax_7 + rax_32)
                        int32_t var_118_1 = var_180
                        int32_t var_17c
                        sub_140ba6e00(rdi_4 + 0x3a0, &var_17c, &var_120)
                        rax_32 = sx.q(var_17c)
                        
                        if (rax_32.d != 0xffffffff)
                            rax_32 = *(rdi_4 + 0x3a0) + rax_32 * 0x18
                            
                            if (rax_32 != 0 && rax_32 != -0xc)
                                rbx_9 = *(rax_32 + 0xc)
                    
                    uint64_t var_188 = 0
                    
                    if (rbx_9 != 0)
                        int64_t rcx_25 = *(r13_1 + 0x18)
                        rax_32 = sx.q(*((sx.q(rbx_9) << 7) + rcx_25 - 0x78))
                        int32_t temp4_1 = rax_32.d
                        
                        if (temp4_1 s> 0)
                            var_188 = *((rax_32 << 7) + rcx_25 - 0x80)
                        else if (temp4_1 == 0)
                            var_188 = *(*(r13_1 + 0xa0) + 0x18)
                    
                    char rcx_27 = arg_8.b
                    
                    if (rcx_27 == 0 || rbx_9 != 0)
                        arg_8.b = 0
                    else
                        arg_8.b = 1
                        int32_t rbx_10
                        rbx_10.b = *(r13_1 + 0x20) == 2
                        rbx_9 = rbx_10 + 1
                    
                    rax_32.b = rbx_9 == 0
                    *(rsi_2 + 0x36) = rax_32.b
                    
                    if (rcx_27 != 0 && rbx_9 == 0)
                        i_3.q = *(var_160_1 + 0x18)
                        int16_t* var_110
                        sub_140b63b70(&i_3, &var_110)
                        int16_t* const rax_41 = &data_142d40450
                        int32_t var_108
                        
                        if (var_108 != rbx_9)
                            rax_41 = var_110
                        
                        int64_t var_70
                        int64_t* rax_42 = sub_140b63b70(rsi_2, &var_70)
                        int16_t* const rdi_5
                        
                        if (rax_42[1].d == rbx_9)
                            rdi_5 = &data_142d40450
                        else
                            rdi_5 = *rax_42
                        
                        int64_t var_80
                        int64_t* rax_43 = sub_140b63b70(&var_188, &var_80)
                        int16_t* const r9_6
                        
                        if (rax_43[1].d == 0)
                            r9_6 = &data_142d40450
                        else
                            r9_6 = *rax_43
                        
                        var_1a0.q = rax_41
                        var_1a8.q = rdi_5
                        sub_140af98a0("Unknown", 0x83f, 
                            Could not find dynamic import %s.%s in package %s.", r9_6)
                        int64_t rcx_31 = var_80
                        
                        if (rcx_31 != 0)
                            sub_140a74f90(rcx_31)
                        
                        int64_t rcx_32 = var_70
                        
                        if (rcx_32 != 0)
                            sub_140a74f90(rcx_32)
                        
                        int16_t* rcx_33 = var_110
                        
                        if (rcx_33 != 0)
                            sub_140a74f90(rcx_33)
                        
                        sub_140afbb40()
                        rax_32 = zx.q(*(rsi_2 + 0x36))
                    
                    if (rax_32.b == 0)
                        void* r12_3 = (sx.q(rbx_9) << 7) + *(r13_1 + 0x18)
                        char rax_45 = *(r12_3 - 0x2f)
                        *(rsi_2 + 0x36) = rax_45
                        
                        if (rax_45 != 0)
                            r12 = 0
                        else if (arg_8.b == rax_45)
                            *(rsi_2 + 0x30) = rbx_9 - 1
                            *(rsi_2 + 0x28) = r13_1
                            int32_t rdi_7 = not.d(r14)
                            void* rdx_22 = *(r12_3 - 0x40)
                            
                            if (rdx_22 != 0)
                                *(rsi_2 + 0x20) = rdx_22
                                sub_140b9aae0(arg1, rdx_22)
                            else
                                int64_t var_e0 = *(r13_1 + 0x2e0)
                                int32_t var_13c_1 = 0
                                int32_t var_d4_1 = 0
                                void* var_148 = arg1
                                int32_t var_140_1 = rdi_7
                                int32_t var_d8_1 = rbx_9
                                sub_140b9a370(arg1, &var_e0, &var_148)
                                int64_t var_d0 = *(r13_1 + 0x2e0)
                                int32_t var_c8_1 = 0
                                int32_t var_c4_1 = 2
                                sub_140b9a370(arg1, &var_148, &var_d0)
                            
                            if (sub_140bc92e0(*(r12_3 - 0x40)) == 0)
                                int64_t var_b0 = *(r13_1 + 0x2e0)
                                void* var_c0 = arg1
                                int32_t var_b8_1 = rdi_7
                                int32_t var_b4_1 = 1
                                int32_t var_a8_1 = rbx_9
                                int32_t var_a4_1 = 1
                                sub_140b9a370(arg1, &var_b0, &var_c0)
                            
                            r12 = 0
                        else
                            r12 = 0
                            
                            if (sub_140bc92e0(*(r12_3 - 0x40)) == 0)
                                void* var_158 = arg1
                                int32_t var_14c_1 = 0
                                int32_t var_150_1 = not.d(r14)
                                int64_t var_100 = *(r13_1 + 0x2e0)
                                int32_t var_f8_1 = rbx_9
                                int32_t var_f4_1 = 1
                                sub_140b9a370(arg1, &var_100, &var_158)
                                int64_t var_f0 = *(r13_1 + 0x2e0)
                                int32_t var_e8_1 = 0
                                int32_t var_e4_1 = 2
                                sub_140b9a370(arg1, &var_158, &var_f0)
                
                if (arg_10 != 0)
                    goto label_140bbb2be
            else
                if (r13_1 != 0)
                    if (*(r13_1 + 0x2e0) != 0)
                        goto label_140bbaf75
                    
                    goto label_140bbaf43
                
                if (((*(rbx_7 + 0x50) u>> 4).b & 1) == 0 || rcx_15.b != 0)
                    goto label_140bbaf43
                
                int64_t* rcx_18 = *(arg1 + 0x1e0)
                var_1a8.d = i_3
                char rax_24 = (*(*rcx_18 + 8))(rcx_18, arg1, *r11_2, 
                    *(sx.q(not.d(i_4)) * 0x38 + *(*(arg1 + 0x50) + 8)), var_1a8, var_1a0, var_198)
                arg_10 = rax_24 == 0
                
                if (rax_24 == 0)
                    goto label_140bbaf43
            
            uint64_t r14_1 = zx.q(not.d(r14))
            int32_t var_12c_1 = 0
            int32_t var_130_1 = r14_1.d
            int32_t temp3_1 = r14_1.d
            void* rax_30
            
            if (temp3_1 != 0)
                int64_t rcx_49 = var_130_1.q
                int32_t rcx_52
                
                if (temp3_1 s>= 0)
                    rcx_52 = (rcx_49 u>> 0x20).d + (r14_1 * 3).d + *(arg1 + 0x564) - 3
                else
                    rcx_52 = (rcx_49 u>> 0x20).d - ((r14_1 << 1) + 2).d + *(arg1 + 0x560)
                
                rax_30 = *(arg1 + 0x548) + sx.q(rcx_52) * 0x18
            else
                rax_30 = arg1 + ((sx.q((var_130_1.q u>> 0x20).d) * 3 + 0xa0) << 3)
            
            *(rax_30 + 0x14) = 1
        else
            *(rsi_2 + 0x36) = 1
        label_140bbb2be:
            uint64_t r14_2 = zx.q(not.d(r14))
            void* var_170 = arg1
            int32_t var_168_1 = r14_2.d
            int32_t var_164_1 = 0
            int32_t temp1_1 = r14_2.d
            void* rax_60
            
            if (temp1_1 != 0)
                int64_t rcx_41 = var_168_1.q
                int32_t rcx_44
                
                if (temp1_1 s>= 0)
                    rcx_44 = (rcx_41 u>> 0x20).d + (r14_2 * 3).d + *(arg1 + 0x564) - 3
                else
                    rcx_44 = (rcx_41 u>> 0x20).d - ((r14_2 << 1) + 2).d + *(arg1 + 0x560)
                
                rax_60 = *(arg1 + 0x548) + sx.q(rcx_44) * 0x18
            else
                rax_60 = arg1 + ((sx.q((var_168_1.q u>> 0x20).d) * 3 + 0xa0) << 3)
            
            if (*(rax_60 + 0x10) == 0)
                *(rax_60 + 0x14) = 1
                sub_140ba89e0(var_170, &var_170)
        
        sub_140cada60(&var_60)
        r14 = *(arg1 + 0xa0)
        temp2_1 = *(*(arg1 + 0x50) + 0x10)
        cond:0 = r14 == temp2_1
    while (r14 s< temp2_1)

if (cond:0)
    r12 = 2

sub_140cad790()
return zx.q(r12)
