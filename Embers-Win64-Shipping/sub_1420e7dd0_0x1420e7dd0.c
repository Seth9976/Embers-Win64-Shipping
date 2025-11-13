// 函数: sub_1420e7dd0
// 地址: 0x1420e7dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t* r12 = arg1
int64_t* result

if (arg2 != 0)
    result = *(arg2 + 0x10)

if (arg2 == 0 || ((*(result + 0xcc) u>> 0x12).b & 1) != 0)
    int64_t* r14_1 = nullptr
    int32_t rbx_1 = 0
    int64_t* r15_1 = &arg1[0xa]
    int32_t arg_20
    int32_t i_4
    
    while (true)
        i_4 = r15_1[1].d
        arg_20 = rbx_1
        
        if (rbx_1 s< 0)
            break
        
        if (rbx_1 s>= i_4)
            break
        
        int64_t r13_1 = sx.q(rbx_1) * 3
        int32_t var_e8
        sub_14066d570(r12, &var_e8, *(*r15_1 + (r13_1 << 3)))
        int64_t rax_2 = sx.q(var_e8)
        void* const rcx_3
        
        if (rax_2.d == 0xffffffff)
            rcx_3 = nullptr
        else
            rcx_3 = (rax_2 << 5) + *r12
        
        int64_t* rax_3 = rcx_3 + 8
        
        if (rcx_3 == 0)
            rax_3 = nullptr
        
        int64_t* rsi_1
        
        if (rax_3 == 0)
            rsi_1 = nullptr
        else
            rsi_1 = *rax_3
        
        int64_t rax_4 = *r15_1
        int64_t* r12_1 = *(rax_4 + (r13_1 << 3) + 0x10)
        int64_t* rcx_4 = *(rax_4 + (r13_1 << 3) + 8)
        
        if (r12_1 != 0)
            r12_1[1].d += 1
        
        if (rcx_4 != 0 && rsi_1 != 0)
            int32_t* i = *rcx_4
            int64_t r9_1
            
            for (void* r15_4 = &i[sx.q(rcx_4[1].d) * 4]; i != r15_4; i = &i[4])
                int64_t* rdi_1 = *(i + 8)
                int64_t rbx_2 = sx.q(*i)
                sub_141d54100(rsi_1, rsi_1[1].d - *(rsi_1 + 0x34), 0)
                int64_t rax_5 = sx.q(rsi_1[9].d)
                
                if (rax_5.d != 0)
                    void* rcx_6 = rsi_1[8]
                    void* r8_5 = &rsi_1[7]
                    
                    if (rcx_6 != 0)
                        r8_5 = rcx_6
                    
                    int32_t j = *(r8_5 + (((rax_5 - 1) & rbx_2) << 2))
                    int32_t j_1 = j
                    int32_t j_3 = j
                    
                    if (j != 0xffffffff)
                        int64_t r8_6 = *rsi_1
                        
                        do
                            int64_t rcx_7 = sx.q(j_1) * 3
                            j = *(r8_6 + (rcx_7 << 3) + 0x10)
                            j_3 = j
                            
                            if (*(r8_6 + (rcx_7 << 3)) == rbx_2.d)
                                break
                            
                            j_1 = j
                        while (j != 0xffffffff)
                    
                    if (j_1 != 0xffffffff)
                        r9_1 = *rsi_1
                        
                        do
                            if (*(r9_1 + sx.q(j_1) * 0x18 + 8) == rdi_1)
                                sub_1405c2fb0(rsi_1, j_1)
                                
                                if (rdi_1 != 0)
                                    (*(*rdi_1 + 0x18))(rdi_1)
                                    (**rdi_1)(rdi_1, 1)
                                
                                break
                            
                            j_1 = j_3
                            
                            if (j == 0xffffffff)
                                break
                            
                            do
                                int64_t rcx_9 = sx.q(j_1) * 3
                                j = *(r9_1 + (rcx_9 << 3) + 0x10)
                                j_3 = j
                                
                                if (*(r9_1 + (rcx_9 << 3)) == rbx_2.d)
                                    break
                                
                                j_1 = j
                            while (j != 0xffffffff)
                        while (j_1 != 0xffffffff)
            
            r15_1 = &arg1[0xa]
            int64_t rax_11 = sub_140d3c6e0(*r15_1 + (r13_1 << 3))
            rsi_1.b = 0
            int32_t rdx_5 = data_143a2e4b0
            int32_t r8_9 = data_143a2e4bc + 1
            data_143a2e4bc = r8_9
            int64_t rdi_2 = sx.q(rdx_5 - 1)
            
            if (rdx_5 - 1 s>= 0)
                int64_t rbx_4 = rdi_2 << 4
                int64_t temp12_1
                
                do
                    int64_t rcx_15 = data_143a2e4a8
                    
                    if (*(rbx_4 + rcx_15 + 8) == 0)
                        rsi_1.b = 1
                    else
                        int64_t* rcx_16 = *(rbx_4 + rcx_15)
                        
                        if (rcx_16 == 0)
                            rsi_1.b = 1
                        else
                            char rax_13
                            rax_13, r9_1 = (*(*rcx_16 + 0x50))(rcx_16, rax_11, 0)
                            
                            if (rax_13 == 0)
                                rsi_1.b = 1
                    
                    rbx_4 -= 0x10
                    temp12_1 = rdi_2
                    rdi_2 -= 1
                while (temp12_1 - 1 s>= 0)
                r8_9 = data_143a2e4bc
                rdx_5 = data_143a2e4b0
            
            r14_1 = nullptr
            data_143a2e4bc = r8_9 - 1
            
            if (rsi_1.b != 0 && r8_9 - 1 s<= 0)
                int32_t rsi_2 = rdx_5
                int32_t rdi_3 = 0
                
                if (rdx_5 s> 0)
                    int64_t* rbx_5 = nullptr
                    
                    do
                        int64_t rcx_17 = data_143a2e4a8
                        
                        if (*(rbx_5 + rcx_17 + 8) == 0)
                            r9_1.b = 1
                            sub_1405a4880(&data_143a2e4a8, rdi_3, 1, r9_1.b)
                        else
                            int64_t* rcx_18 = *(rbx_5 + rcx_17)
                            
                            if (rcx_18 == 0)
                                r9_1.b = 1
                                sub_1405a4880(&data_143a2e4a8, rdi_3, 1, r9_1.b)
                            else
                                char rax_15
                                rax_15, r9_1 = (*(*rcx_18 + 0x20))(rcx_18)
                                
                                if (rax_15 != 0)
                                    r9_1.b = 1
                                    sub_1405a4880(&data_143a2e4a8, rdi_3, 1, r9_1.b)
                                else
                                    rdi_3 += 1
                                    rbx_5 = &rbx_5[2]
                        
                        rdx_5 = data_143a2e4b0
                    while (rdi_3 s< rdx_5)
                
                int32_t rax_16 = rdx_5 * 2
                
                if (rax_16 s<= 2)
                    rax_16 = 2
                
                data_143a2e4b8 = rax_16
                
                if (rsi_2 s> rax_16 && data_143a2e4b4 != rdx_5)
                    sub_1405a5410(&data_143a2e4a8, rdx_5)
            
            rbx_1 = arg_20
        
        if (r12_1 != 0)
            r12_1[1].d -= 1
            
            if (r12_1[1].d == 1)
                (**r12_1)(r12_1)
                int32_t temp11_1 = *(r12_1 + 0xc)
                *(r12_1 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*r12_1 + 8))(r12_1, 1)
        
        r12 = arg1
        rbx_1 += 1
    
    int32_t rax_19 = *(r15_1 + 0xc)
    void* rsi_3 = *r15_1
    
    if (rax_19 s< 0)
        if (i_4 != 0)
            void* rsi_5 = rsi_3 + 0x10
            int32_t i_1
            
            do
                int64_t* rbx_7 = *rsi_5
                
                if (rbx_7 != 0)
                    rbx_7[1].d -= 1
                    
                    if (rbx_7[1].d == 1)
                        (**rbx_7)(rbx_7)
                        int32_t temp4_1 = *(rbx_7 + 0xc)
                        *(rbx_7 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rbx_7 + 8))(rbx_7, 1)
                
                rsi_5 += 0x18
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            rax_19 = *(r15_1 + 0xc)
        
        r15_1[1].d = 0
        
        if (rax_19 != 0)
            sub_1405a5130(r15_1, 0)
    else
        if (i_4 != 0)
            int64_t* rsi_4 = rsi_3 + 0x10
            int32_t i_2
            
            do
                int64_t* rbx_6 = *rsi_4
                
                if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t temp5_1 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
                
                rsi_4 = &rsi_4[3]
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        r15_1[1].d = 0
    
    void* r13_2 = arg_10
    
    if (r13_2 == 0)
        int32_t r11_1 = r12[5].d
        void* r9_3 = &r12[2]
        int32_t var_104_1 = 1
        int32_t rcx_32 = 0
        int32_t var_108_1 = 0
        int32_t r8_13 = 0
        void* var_100_1 = r9_3
        int32_t var_f8_1 = 0xffffffff
        int64_t var_f4_1 = 0
        
        if (r11_1 != 0)
            void* rax_25 = *(r9_3 + 0x10)
            
            if (rax_25 != 0)
                r9_3 = rax_25
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_1 - 1)
            int32_t rdx_12 = *r9_3
            
            if (rdx_12 != 0)
            label_1420e82fb:
                int32_t rax_32 = neg.d(rdx_12) & rdx_12
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_32)
                int32_t var_104_2 = rax_32
                int32_t rax_33
                
                if (rax_32 == 0)
                    rax_33 = 0x20
                else
                    rax_33 = 0x1f - temp0_1
                
                var_f4_1.d = r8_13 - rax_33 + 0x1f
                
                if (r8_13 - rax_33 + 0x1f s> r11_1)
                    var_f4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_13 = sx.q(rcx_32)
                    r8_13 += 0x20
                    rcx_32 += 1
                    var_f4_1:4.d = r8_13
                    var_108_1 = rcx_32
                    
                    if (rdx_13.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_12 = *(r9_3 + (rdx_13 << 2) + 4)
                    int32_t var_f8_2 = 0xffffffff
                    
                    if (rdx_12 != 0)
                        goto label_1420e82fb
                
                var_f4_1.d = r11_1
        
        int64_t* var_50_1 = r12
        int64_t var_c8_1 = 0xffffffff
        int128_t var_d8 = var_108_1.o
        int16_t var_80_1 = 0
        int128_t zmm3 = var_d8
        result = zmm3.q
        int128_t var_a8_1 = zmm3
        double var_b8[0x2] = r12.o
        int128_t zmm0
        zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        
        if (0 s< result[3].d)
            int32_t i_3 = var_a8_1:0xc.d
            
            do
                double rbx_8 = var_b8[0]
                void** rdi_5 = sx.q(i_3) << 5
                arg_10 = *(rdi_5 + *rbx_8)
                int64_t rax_36 = sub_140d3c6e0(&arg_10)
                int64_t* rdi_6 = *(*rbx_8 + rdi_5 + 8)
                
                if (rax_36 == 0)
                    int32_t r10_1 = rdi_6[5].d
                    void* r9_5 = &rdi_6[2]
                    int32_t var_104_3 = 1
                    int32_t rcx_40 = 0
                    int32_t var_108_2 = 0
                    int32_t r8_16 = 0
                    void* var_100_2 = r9_5
                    int32_t var_f8_3 = 0xffffffff
                    int64_t var_f4_2 = 0
                    
                    if (r10_1 != 0)
                        void* rax_37 = *(r9_5 + 0x10)
                        
                        if (rax_37 != 0)
                            r9_5 = rax_37
                        
                        int32_t temp9_1
                        int32_t temp10_1
                        temp9_1:temp10_1 = sx.q(r10_1 - 1)
                        int32_t rdx_16 = *r9_5
                        
                        if (rdx_16 != 0)
                        label_1420e847b:
                            int32_t rax_44 = neg.d(rdx_16) & rdx_16
                            uint64_t rflags_2
                            int32_t temp0_3
                            temp0_3, rflags_2 = _bit_scan_reverse(rax_44)
                            int32_t var_104_4 = rax_44
                            int32_t rax_45
                            
                            if (rax_44 == 0)
                                rax_45 = 0x20
                            else
                                rax_45 = 0x1f - temp0_3
                            
                            var_f4_2.d = r8_16 - rax_45 + 0x1f
                            
                            if (r8_16 - rax_45 + 0x1f s> r10_1)
                                var_f4_2.d = r10_1
                        else
                            while (true)
                                int64_t rdx_17 = sx.q(rcx_40)
                                r8_16 += 0x20
                                rcx_40 += 1
                                var_f4_2:4.d = r8_16
                                var_108_2 = rcx_40
                                
                                if (rdx_17.d s>= (temp10_1 + (temp9_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_16 = *(r9_5 + (rdx_17 << 2) + 4)
                                int32_t var_f8_4 = 0xffffffff
                                
                                if (rdx_16 != 0)
                                    goto label_1420e847b
                            
                            var_f4_2.d = r10_1
                    
                    int128_t var_60_1 = 0xffffffff
                    int64_t* var_e0_1
                    var_e0_1.o = rdi_6.o
                    var_c8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                    var_d8 = var_108_2.o
                    
                    if (0 s< r10_1)
                        int32_t j_2 = var_c8_1:4.d
                        
                        do
                            int64_t* rbx_9 = *(*var_e0_1 + sx.q(j_2) * 0x18 + 8)
                            
                            if (rbx_9 != 0)
                                (*(*rbx_9 + 0x10))(rbx_9)
                                (**rbx_9)(rbx_9, 1)
                            
                            var_c8_1.d &= not.d(var_d8:4.d)
                            sub_14059bdd0(&var_d8)
                            j_2 = var_c8_1:4.d
                        while (j_2 s< *(var_d8:8.q + 0x18))
                    
                    sub_1408d84f0(rdi_6)
                else if (rdi_6[0xa].b == 0 && rdi_6[1].d - *(rdi_6 + 0x34) s> 0)
                    sub_1420f1660(r12, arg3, rdi_6, rax_36)
                    rdi_6[0xa].b = 1
                
                if (rdi_6[1].d == *(rdi_6 + 0x34))
                    sub_141b643e0(zmm0:8.q, i_3)
                    var_80_1.b = 1
                
                var_a8_1:8.d &= not.d(var_b8[1]:4.d)
                sub_14059bdd0(&var_b8[1])
                result = var_a8_1.q
                i_3 = var_a8_1:0xc.d
            while (i_3 s< result[3].d)
            
            if (var_80_1.b != 0 && var_80_1:1.b != 0)
                return sub_141b50c00(r12, r12[1].d - *(r12 + 0x34), 1)
    else
        sub_140d3a3a0(&arg_20, r13_2)
        sub_14066d570(r12, &arg_10, arg_20.q)
        int64_t rax_24 = sx.q(arg_10.d)
        void* const rcx_30
        
        if (rax_24.d == 0xffffffff)
            rcx_30 = nullptr
        else
            rcx_30 = (rax_24 << 5) + *r12
        
        result = rcx_30 + 8
        
        if (rcx_30 == 0)
            result = nullptr
        
        if (result != 0)
            r14_1 = *result
        
        if (r14_1 != 0 && r14_1[0xa].b == 0)
            result = sub_1420f1660(r12, arg3, r14_1, r13_2)
            r14_1[0xa].b = 1

return result
