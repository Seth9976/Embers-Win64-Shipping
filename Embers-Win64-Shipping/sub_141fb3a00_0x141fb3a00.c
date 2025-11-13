// 函数: sub_141fb3a00
// 地址: 0x141fb3a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b8 = 0
int32_t var_ac = 0
int64_t* result = arg1
int64_t r12 = 0
int32_t r15 = 0
int32_t r13 = 0

if (arg2 != 0)
    int32_t rcx
    rcx.b = sub_140b5b8a0(*arg3, 0) == 0
    
    if ((arg3[1] != 0 | rcx.b) != 0)
        void* rcx_1 = arg2[5]
        
        if (rcx_1 != 0)
            void* i_5 = sub_140cdb8f0(rcx_1, *arg3)
            void* i_2 = i_5
            int32_t var_d8
            
            if (i_5 == 0)
                void* rbx_1 = arg2[5]
                void* rax_2 = sub_1425b9140()
                void* rdx_1 = *(rbx_1 + 0x10)
                int64_t rcx_2 = sx.q(*(rax_2 + 0x38))
                
                if (rcx_2.d s<= *(rdx_1 + 0x38)
                        && *(*(rdx_1 + 0x30) + (rcx_2 << 3)) == rax_2 + 0x30)
                    int16_t* var_80
                    sub_140b63b70(arg3, &var_80)
                    void* rax_4 = arg2[5]
                    var_d8.q = rax_4
                    void* i_4
                    
                    if (rax_4 == 0)
                        i_4 = nullptr
                    else
                        i_4 = *(rax_4 + 0x50)
                    
                    int32_t var_c8_1 = 0xffffffff
                    int64_t var_c4
                    var_c4.w = 0x101
                    var_c4:2.b = 0
                    sub_1406328d0(&var_d8)
                    void* i_3
                    
                    for (void* i = i_4; i != 0; i = i_3)
                        int64_t* rcx_5 = arg2[5]
                        int64_t var_70
                        int64_t* rax_6 = (*(*rcx_5 + 0x2d8))(rcx_5, &var_70, i)
                        int16_t* rdx_4
                        
                        if (rax_6[1].d == 0)
                            rdx_4 = &data_142d40450
                        else
                            rdx_4 = *rax_6
                        
                        int16_t* const rcx_6 = &data_142d40450
                        int32_t var_78
                        
                        if (var_78 != 0)
                            rcx_6 = var_80
                        
                        int32_t rax_7 = sub_140a54510(rcx_6, rdx_4)
                        int64_t rcx_7 = var_70
                        int32_t* rsi
                        rsi.b = rax_7 == 0
                        
                        if (rcx_7 != 0)
                            sub_140a74f90(rcx_7)
                        
                        if (rsi.b != 0)
                            i_2 = i
                            break
                        
                        i_3 = *(i + 0x20)
                        sub_1406328d0(&var_d8)
                    
                    int16_t* rcx_9 = var_80
                    
                    if (rcx_9 != 0)
                        sub_140a74f90(rcx_9)
            
            if (sub_141fba690(i_2) != 0 && i_2 != 0)
                void* rax_10 = (*(*arg2 + 0x278))(arg2)
                int32_t rcx_12 = 0
                var_d8 = 0
                int32_t r10_1 = 0
                int32_t var_d4_1 = 1
                int32_t r8_2 = 0
                int32_t var_c8_2 = 0xffffffff
                int32_t rbx_2 = *(rax_10 + 0x28)
                void* r9 = rax_10 + 0x10
                void* var_d0_3 = r9
                int64_t var_c4_1 = 0
                
                if (rbx_2 != 0)
                    void* rax_11 = *(r9 + 0x10)
                    r10_1 = rbx_2
                    
                    if (rax_11 != 0)
                        r9 = rax_11
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rbx_2 - 1)
                    int32_t rdx_7 = *r9
                    
                    if (rdx_7 != 0)
                    label_141fb3c48:
                        int32_t rax_18 = neg.d(rdx_7) & rdx_7
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_18)
                        int32_t var_d4_2 = rax_18
                        int32_t rax_19
                        
                        if (rax_18 == 0)
                            rax_19 = 0x20
                        else
                            rax_19 = 0x1f - temp0_2
                        
                        int32_t rax_20 = r8_2 - rax_19 + 0x1f
                        
                        if (rax_20 s> rbx_2)
                            rax_20 = rbx_2
                        
                        r10_1 = rax_20
                        var_c4_1.d = rax_20
                    else
                        while (true)
                            int64_t rdx_8 = sx.q(rcx_12)
                            r8_2 += 0x20
                            rcx_12 += 1
                            var_c4_1:4.d = r8_2
                            var_d8 = rcx_12
                            
                            if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                var_c4_1.d = rbx_2
                                break
                            
                            rdx_7 = *(r9 + (rdx_8 << 2) + 4)
                            var_c8_2 = 0xffffffff
                            
                            if (rdx_7 != 0)
                                goto label_141fb3c48
                
                double zmm2_1[0x2] = var_c8_2.o
                int128_t var_58_1 = var_d8.o
                double var_48_1[0x2] = zmm2_1
                int64_t var_88_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                int128_t var_a8 = rax_10.o
                int128_t var_98_1 = var_58_1
                
                if (r10_1 s< rbx_2)
                    int32_t i_1 = var_98_1:0xc.d
                    
                    do
                        int64_t* rax_23 =
                            sub_141fb61b0(&var_d8, i_2, *(*var_a8.q + sx.q(i_1) * 0x18 + 8), arg4)
                        int64_t rsi_3 = sx.q(r15)
                        r15 = (rsi_3 + 1).d
                        
                        if (r15 s> r13)
                            sub_1405a4f90(&var_b8)
                            r13 = var_ac
                            r12 = var_b8
                        
                        int64_t* rcx_19 = (rsi_3 << 4) + r12
                        *rcx_19 = 0
                        *rcx_19 = *rax_23
                        *rax_23 = 0
                        rcx_19[1].d = rax_23[1].d
                        *(rcx_19 + 0xc) = *(rax_23 + 0xc)
                        rax_23[1] = 0
                        int64_t rcx_20 = var_d8.q
                        
                        if (rcx_20 != 0)
                            sub_140a74f90(rcx_20)
                        
                        var_98_1:8.d &= not.d(var_a8:0xc.d)
                        sub_14059bdd0(&var_a8:8)
                        i_1 = var_98_1:0xc.d
                    while (i_1 s< *(var_98_1.q + 0x18))
                    
                    result = arg1
        
        *result = r12
        result[1].d = r15
        *(result + 0xc) = r13
    else
        *result = 0
        result[1] = 0
else
    *arg1 = 0
    arg1[1] = 0

return result
