// 函数: sub_1423bede0
// 地址: 0x1423bede0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int32_t* r13 = arg3
int32_t var_128 = 0
void* rdi = arg1
void* rax
int64_t r9
rax, r9 = sub_140bdf730()
r9.b = 1
void* rax_1
int128_t zmm6
int128_t zmm7
rax_1, zmm6, zmm7 = sub_140d2ee50(rax, -ffffffffffffffff, u"ETickingGroup", r9)
void* r10 = rax_1
int32_t var_120
double var_f8[0x2]
int16_t* var_c8
int64_t var_b8
int64_t var_a8
int64_t var_98
double zmm2_1[0x2]

if (arg5 == 0)
    void* i = *(rdi + 0x58)
    
    while (i != 0)
        i = *(*(i + 0x20) + 0x18)
        *r13 += 1
else
    int32_t rcx_1 = 0
    int128_t var_48_1 = zmm6
    int128_t var_58_1 = zmm7
    int32_t r11_1 = *(rdi + 0x30)
    void* r9_1 = rdi + 0x18
    int32_t r8 = 0
    var_120 = 0
    int32_t var_11c_1 = 1
    void* var_118_1 = r9_1
    int32_t var_110_1 = 0xffffffff
    int64_t var_10c_1 = 0
    
    if (r11_1 != 0)
        void* rax_2 = *(r9_1 + 0x10)
        
        if (rax_2 != 0)
            r9_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_1423beeeb:
            int32_t rax_9 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_11c_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_10c_1.d = r8 - rax_10 + 0x1f
            
            if (r8 - rax_10 + 0x1f s> r11_1)
                var_10c_1.d = r11_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx_1)
                r8 += 0x20
                rcx_1 += 1
                var_10c_1:4.d = r8
                var_120 = rcx_1
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_110_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_1423beeeb
            
            var_10c_1.d = r11_1
    
    zmm2_1 = var_110_1.o
    void* var_d0_1 = rdi + 8
    double var_70_1[0x2] = zmm2_1
    double var_80_1[0x2] = var_120.o
    var_f8 = (rdi + 8).o
    uint32_t rax_13 = (zmm2_1[0] u>> 0x20).d
    int64_t var_d8_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    
    if (rax_13 s< r11_1)
        int32_t i_1 = var_80_1[1]:4.d
        
        do
            int64_t* r15_1 = *(*var_f8[0] + sx.q(i_1) * 0x10)
            void* rdx_6 = r15_1[4]
            int32_t rsi_1 = r15_1[3].d
            *(r15_1 + 0xb)
            void* rcx_4 = rdx_6 + 1
            
            if (rdx_6 == 0)
                rcx_4 = &r15_1[1]
            
            int64_t* rax_16 = sub_140bdef30(r10, &var_b8, zx.q(*rcx_4))
            int16_t* const rbx_2
            
            if (rax_16[1].d == 0)
                rbx_2 = &data_142d40450
            else
                rbx_2 = *rax_16
            
            int64_t* rax_18 = (*(*r15_1 + 0x10))(r15_1, &var_c8)
            int16_t* const r8_3
            
            if (rax_18[1].d == 0)
                r8_3 = &data_142d40450
            else
                r8_3 = *rax_18
            
            int32_t var_130_1 = rsi_1
            int16_t* const var_138_1 = rbx_2
            sub_140b1f700(arg2, u"%s, %s, ActualStartTickGroup: %s, Prerequesities: %d", r8_3)
            int16_t* rcx_8 = var_c8
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            int64_t rcx_9 = var_b8
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            int32_t j = 0
            
            if (r15_1[3].d s> 0)
                int64_t r14_1 = 0
                
                do
                    int32_t* rbx_4 = r15_1[2] + r14_1
                    
                    if (sub_140d3e110(rbx_4) == 0)
                        sub_140b1f640(arg2, u"    Invalid Prerequisite")
                    else
                        int64_t* rcx_12 = *(rbx_4 + 8)
                        int64_t* rax_21 = (*(*rcx_12 + 0x10))(rcx_12, &var_98)
                        
                        if (rax_21[1].d != 0)
                            *rax_21
                        
                        int64_t* rax_23 = sub_140d21830(sub_140d3c6e0(rbx_4), &var_a8, 0, 0)
                        int16_t* const r8_4
                        
                        if (rax_23[1].d == 0)
                            r8_4 = &data_142d40450
                        else
                            r8_4 = *rax_23
                        
                        sub_140b1f700(arg2, u"    %s, %s", r8_4)
                        int64_t rcx_16 = var_a8
                        
                        if (rcx_16 != 0)
                            sub_140a74f90(rcx_16)
                        
                        int64_t rcx_17 = var_98
                        
                        if (rcx_17 != 0)
                            sub_140a74f90(rcx_17)
                    
                    j += 1
                    r14_1 += 0x10
                while (j s< r15_1[3].d)
            
            var_80_1[1].d &= not.d(var_f8[1]:4.d)
            sub_14059bdd0(&var_f8[1])
            i_1 = var_80_1[1]:4.d
            r10 = rax_1
        while (i_1 s< *(var_80_1[0] i+ 0x18))
        
        rdi = arg1
        var_128 = 0
        r15 = 0
        r13 = arg3
    
    int64_t* i_2 = *(rdi + 0x58)
    zmm6 = zx.o(0)
    
    if (i_2 != 0)
        do
            void* rdx_11 = i_2[4]
            zmm6.d = zmm6.d f+ *(rdx_11 + 0x20)
            
            if (*(i_2 + 0xb) != 0 && not(zmm6.d f<= 0f))
                zmm2_1 = zx.o(0)
                zmm2_1[0] = fconvert.d(zmm6.d)
                r15 |= 2
                var_128 = r15
                sub_140a2e390(&var_c8, u"Cooling Down for %.4g seconds", zmm2_1[0])
                rdx_11 = i_2[4]
            
            int32_t r14_2 = i_2[3].d
            void* rcx_21 = rdx_11 + 1
            
            if (rdx_11 == 0)
                rcx_21 = &i_2[1]
            
            int64_t* rax_28
            rax_28, zmm6 = sub_140bdef30(rax_1, &var_a8, zx.q(*rcx_21))
            int16_t* const rdi_3
            
            if (rax_28[1].d == 0)
                rdi_3 = &data_142d40450
            else
                rdi_3 = *rax_28
            
            int64_t* rax_30 = (*(*i_2 + 0x10))(i_2, &var_98)
            int16_t* const r8_7
            
            if (rax_30[1].d == 0)
                r8_7 = &data_142d40450
            else
                r8_7 = *rax_30
            
            int32_t var_130_2 = r14_2
            int16_t* const var_138_2 = rdi_3
            sub_140b1f700(arg2, u"%s, %s, ActualStartTickGroup: %s, Prerequesities: %d", r8_7)
            int64_t rcx_25 = var_98
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            int64_t rcx_26 = var_a8
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            if ((r15.b & 2) != 0)
                int16_t* rcx_27 = var_c8
                r15 &= 0xfffffffd
                var_128 = r15
                
                if (rcx_27 != 0)
                    sub_140a74f90(rcx_27)
            
            int32_t j_1 = 0
            
            if (i_2[3].d s> 0)
                int64_t r15_2 = 0
                
                do
                    int32_t* rbx_7 = i_2[2] + r15_2
                    
                    if (sub_140d3e110(rbx_7) == 0)
                        sub_140b1f640(arg2, u"    Invalid Prerequisite")
                    else
                        int64_t* rcx_29 = *(rbx_7 + 8)
                        int64_t* rax_33 = (*(*rcx_29 + 0x10))(rcx_29, &var_120)
                        
                        if (rax_33[1].d != 0)
                            *rax_33
                        
                        int64_t* rax_35
                        rax_35, zmm6 = sub_140d21830(sub_140d3c6e0(rbx_7), &var_b8, 0, 0)
                        int16_t* const r8_8
                        
                        if (rax_35[1].d == 0)
                            r8_8 = &data_142d40450
                        else
                            r8_8 = *rax_35
                        
                        sub_140b1f700(arg2, u"    %s, %s", r8_8)
                        int64_t rcx_33 = var_b8
                        
                        if (rcx_33 != 0)
                            sub_140a74f90(rcx_33)
                        
                        int64_t rcx_34 = var_120.q
                        
                        if (rcx_34 != 0)
                            sub_140a74f90(rcx_34)
                    
                    j_1 += 1
                    r15_2 += 0x10
                while (j_1 s< i_2[3].d)
                
                r15 = var_128
            
            i_2 = *(i_2[4] + 0x18)
            *r13 += 1
        while (i_2 != 0)
        
        rdi = arg1

*r13 += *(rdi + 0x10) - *(rdi + 0x3c)

if (arg6 != 0)
    int32_t rcx_36 = 0
    int32_t var_11c_3 = 1
    var_120 = 0
    int32_t r10_1 = *(rdi + 0x88)
    void* r9_6 = rdi + 0x70
    int32_t r8_9 = 0
    void* var_118_2 = r9_6
    int32_t var_110_2 = 0xffffffff
    int64_t var_10c_2 = 0
    
    if (r10_1 != 0)
        void* rax_39 = *(r9_6 + 0x10)
        
        if (rax_39 != 0)
            r9_6 = rax_39
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_18 = *r9_6
        
        if (rdx_18 != 0)
        label_1423bf40b:
            int32_t rax_46 = neg.d(rdx_18) & rdx_18
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_46)
            int32_t var_11c_4 = rax_46
            int32_t rsi_2
            
            if (rax_46 == 0)
                rsi_2 = 0x20
            else
                rsi_2 = 0x1f - temp0_4
            
            var_10c_2.d = r8_9 - rsi_2 + 0x1f
            
            if (r8_9 - rsi_2 + 0x1f s> r10_1)
                var_10c_2.d = r10_1
        else
            while (true)
                int64_t rdx_19 = sx.q(rcx_36)
                r8_9 += 0x20
                rcx_36 += 1
                var_10c_2:4.d = r8_9
                var_120 = rcx_36
                
                if (rdx_19.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_18 = *(r9_6 + (rdx_19 << 2) + 4)
                var_110_2 = 0xffffffff
                
                if (rdx_18 != 0)
                    goto label_1423bf40b
            
            var_10c_2.d = r10_1
    
    zmm2_1 = var_110_2.o
    void* var_d0_2 = rdi + 0x60
    double var_70_2[0x2] = zmm2_1
    double var_80_2[0x2] = var_120.o
    var_f8 = (rdi + 0x60).o
    uint32_t rax_50 = (zmm2_1[0] u>> 0x20).d
    int64_t var_d8_2 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    
    if (rax_50 s< r10_1)
        int32_t i_3 = var_80_2[1]:4.d
        int32_t r13_1 = var_128
        
        do
            int64_t* r15_3 = *(*var_f8[0] + sx.q(i_3) * 0x10)
            void* rdx_22 = r15_3[4]
            int32_t rsi_3 = r15_3[3].d
            *(r15_3 + 0xb)
            void* rcx_39 = rdx_22 + 1
            
            if (rdx_22 == 0)
                rcx_39 = &r15_3[1]
            
            int64_t* rax_53 = sub_140bdef30(rax_1, &var_98, zx.q(*rcx_39))
            int16_t* const rbx_9
            
            if (rax_53[1].d == 0)
                rbx_9 = &data_142d40450
            else
                rbx_9 = *rax_53
            
            int64_t* rax_55 = (*(*r15_3 + 0x10))(r15_3, &var_120)
            int16_t* const r8_12
            
            if (rax_55[1].d == 0)
                r8_12 = &data_142d40450
            else
                r8_12 = *rax_55
            
            int32_t var_130_3 = rsi_3
            int16_t* const var_138_3 = rbx_9
            sub_140b1f700(arg2, u"%s, %s, ActualStartTickGroup: %s, Prerequesities: %d", r8_12)
            int64_t rcx_43 = var_120.q
            
            if (rcx_43 != 0)
                sub_140a74f90(rcx_43)
            
            int64_t rcx_44 = var_98
            
            if (rcx_44 != 0)
                sub_140a74f90(rcx_44)
            
            if ((r13_1.b & 4) != 0)
                int16_t* rcx_45 = var_c8
                r13_1 &= 0xfffffffb
                
                if (rcx_45 != 0)
                    sub_140a74f90(rcx_45)
            
            int32_t j_2 = 0
            
            if (r15_3[3].d s> 0)
                int64_t r14_3 = 0
                
                do
                    int32_t* rbx_11 = r15_3[2] + r14_3
                    
                    if (sub_140d3e110(rbx_11) == 0)
                        sub_140b1f640(arg2, u"    Invalid Prerequisite")
                    else
                        int64_t* rcx_47 = *(rbx_11 + 8)
                        int64_t* rax_58 = (*(*rcx_47 + 0x10))(rcx_47, &var_b8)
                        
                        if (rax_58[1].d != 0)
                            *rax_58
                        
                        int64_t* rax_60 = sub_140d21830(sub_140d3c6e0(rbx_11), &var_a8, 0, 0)
                        int16_t* const r8_13
                        
                        if (rax_60[1].d == 0)
                            r8_13 = &data_142d40450
                        else
                            r8_13 = *rax_60
                        
                        sub_140b1f700(arg2, u"    %s, %s", r8_13)
                        int64_t rcx_51 = var_a8
                        
                        if (rcx_51 != 0)
                            sub_140a74f90(rcx_51)
                        
                        int64_t rcx_52 = var_b8
                        
                        if (rcx_52 != 0)
                            sub_140a74f90(rcx_52)
                    
                    j_2 += 1
                    r14_3 += 0x10
                while (j_2 s< r15_3[3].d)
            
            var_80_2[1].d &= not.d(var_f8[1]:4.d)
            sub_14059bdd0(&var_f8[1])
            i_3 = var_80_2[1]:4.d
        while (i_3 s< *(var_80_2[0] i+ 0x18))
        
        rdi = arg1

int32_t result = *(rdi + 0x68) - *(rdi + 0x94)
*arg4 += result
return result
