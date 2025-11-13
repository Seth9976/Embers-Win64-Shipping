// 函数: sub_14264d860
// 地址: 0x14264d860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg3
void* r13 = arg2
void* rax_1 = (*(*arg1 + 0x150))()
void* r12 = rax_1
int32_t rax_2 = sub_14265bea0(arg1, r13)

if (rax_2 == 0xffffffff)
    uint64_t rax_3 = sub_140d3c6e0(r13 + 0x50)
    uint64_t rbx_1 = rax_3
    
    if (rax_3 == 0)
        if (*(r13 + 0x60) == rax_3)
            return nullptr
        
        if (rax_3.d == data_1439aaa30)
            data_1439aaa30 = 0
        else
            rax_3 = zx.q(data_1439aaa30)
        
        if (rax_3.d == *(r13 + 0x58) && *(r13 + 0x50) == rax_2)
            return nullptr
        
        void* rax_4 = sub_140d2bce0(r13 + 0x60)
        sub_140d3a3a0(r13 + 0x50, rax_4)
        
        if (rax_4 != 0 || data_143e1d7b4 == rax_4.b)
            int32_t rax_5 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_5 = data_1439aaa30
            
            *(r13 + 0x58) = rax_5
        
        uint64_t rax_6 = sub_140d3c6e0(r13 + 0x50)
        rbx_1 = rax_6
        
        if (rax_6 == 0)
            return nullptr
    
    void* rax_7 = sub_140bdf2e0()
    void* rdx_2 = *(rbx_1 + 0x10)
    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
    
    if (rax_8.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
        return nullptr
    
    void* rax_10 = sub_142452380()
    
    if (rax_10 == 0)
        return nullptr
    
    int64_t rax_11 = sx.q(*(rax_10 + 0x38))
    
    if (rax_11.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
        return nullptr
    
    void* rax_13 = sub_14269be10()
    
    if (rax_13 == 0)
        return nullptr
    
    int64_t rax_14 = sx.q(*(rax_13 + 0x38))
    
    if (rax_14.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
        return nullptr

void var_70
sub_142427eb0(&var_70)

if ((arg1[0xd].b & 2) == 0)
label_14264dc04:
    
    if (rsi == 0)
        int64_t var_50_3 = *(r12 + 0x30)
else if (rsi == 0)
    if (arg1[0x22].d - *(arg1 + 0x13c) s> 0)
        int32_t var_128_1 = 0
        int32_t r10_1 = arg1[0x26].d
        int32_t rcx_9 = 0
        int32_t var_124_1 = 1
        int32_t r8_1 = 0
        void* var_120_1 = &arg1[0x23]
        int32_t var_118_1 = 0xffffffff
        int64_t var_114_1 = 0
        
        if (r10_1 != 0)
            void* rax_18 = arg1[0x25]
            void* r9_1 = &arg1[0x23]
            
            if (rax_18 != 0)
                r9_1 = rax_18
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_7 = *r9_1
            
            if (rdx_7 != 0)
            label_14264da6c:
                int32_t rax_25 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_25)
                int32_t var_124_2 = rax_25
                int32_t rax_26
                
                if (rax_25 == 0)
                    rax_26 = 0x20
                else
                    rax_26 = 0x1f - temp0_2
                
                var_114_1.d = r8_1 - rax_26 + 0x1f
                
                if (r8_1 - rax_26 + 0x1f s> r10_1)
                    var_114_1.d = r10_1
            else
                while (true)
                    int64_t rdx_8 = sx.q(rcx_9)
                    r8_1 += 0x20
                    rcx_9 += 1
                    var_114_1:4.d = r8_1
                    var_128_1 = rcx_9
                    
                    if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
                    int32_t var_118_2 = 0xffffffff
                    
                    if (rdx_7 != 0)
                        goto label_14264da6c
                
                var_114_1.d = r10_1
        
        int32_t rdx_9 = arg1[0x26].d
        int32_t var_cc_1 = rdx_9
        int128_t var_90_1 = var_128_1.o
        int32_t r12_1 = 0xffffffff << (rdx_9 & 0x1f).b
        int128_t var_80_1 = 0xffffffff
        int32_t r8_4 = rdx_9 s>> 5
        int32_t r9_3 = rdx_9 & 0xffffffe0
        int64_t var_e8_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_d0_1 = r12_1
        int128_t var_108 = (&arg1[0x21]).o
        int128_t var_f8_1 = var_90_1
        
        if (rdx_9 != r10_1)
            void* rax_30 = arg1[0x25]
            void* r11_1 = &arg1[0x23]
            
            if (rax_30 != 0)
                r11_1 = rax_30
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_13 = *(r11_1 + (sx.q(r8_4) << 2)) & r12_1
            int32_t var_cc_3
            
            if (rdx_13 != 0)
            label_14264db47:
                int32_t rax_36 = ((rdx_13 - 1) & rdx_13) ^ rdx_13
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_36)
                int32_t rdi_1
                
                if (rax_36 == 0)
                    rdi_1 = 0x20
                else
                    rdi_1 = 0x1f - temp0_4
                
                int32_t var_cc_2 = r9_3 - rdi_1 + 0x1f
                
                if (r9_3 - rdi_1 + 0x1f s> r10_1)
                    var_cc_3 = r10_1
            else
                while (true)
                    int64_t rcx_13 = sx.q(r8_4)
                    r9_3 += 0x20
                    r8_4 += 1
                    
                    if (rcx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_13 = *(r11_1 + (rcx_13 << 2) + 4)
                    var_d0_1 = 0xffffffff
                    
                    if (rdx_13 != 0)
                        goto label_14264db47
                
                var_cc_3 = r10_1
        
        while (true)
            int64_t rcx_15 = sx.q(var_f8_1:0xc.d)
            int32_t rax_29
            
            if (rcx_15.d != (var_d0_1.q u>> 0x20).d || var_f8_1.q != &arg1[0x23])
                rax_29.b = 0
            else
                rax_29.b = 1
            
            int64_t rdx_14 = var_108.q
            
            if (rax_29.b == 0 || rdx_14 != &arg1[0x21])
                rax_29.b = 1
            else
                rax_29.b = 0
            
            if (rax_29.b == 0)
                break
            
            void* rcx_17 = rcx_15 * 0x34 + *rdx_14
            bool rdx_15 = false
            
            if (rax_2 u<= 0xf)
                rdx_15 = test_bit(*(rcx_17 + 0x20), rax_2)
            
            if (rdx_15 != 0 && sub_140d3e110(rcx_17 + 0x24) != 0)
                int64_t rax_41 = sub_140d3c6e0(rcx_17 + 0x24)
                rsi = rax_41
                int64_t var_50_2 = rax_41
                break
            
            var_f8_1:8.d &= not.d(var_108:0xc.d)
            sub_14059bdd0(&var_108:8)
        
        r12 = rax_1
    
    r13 = arg2
    goto label_14264dc04

uint64_t var_c0
uint64_t* rax_43 = sub_142640050(r13, &var_c0)
uint64_t rdx_17

if (*rax_43 == 0)
    rdx_17 = 0
else
    void* rax_44 = sub_14269c200()
    
    if (rax_44 == 0)
        rdx_17 = 0
    else
        rdx_17 = *rax_43
        int64_t rax_45 = sx.q(*(rax_44 + 0x38))
        
        if (rax_45.d s> *(rdx_17 + 0x38) || *(*(rdx_17 + 0x30) + (rax_45 << 3)) != rax_44 + 0x30)
            rdx_17 = 0

void* result = sub_1420efae0(r12, rdx_17, nullptr, nullptr, &var_70)

if (result != 0)
    int64_t r8_6 = *result
    (*(r8_6 + 0x670))(result, r13, r8_6)
    bool rdx_19 = sub_140b5b8a0(*(r13 + 0x30), 0) == 0
    
    if ((*(r13 + 0x34) != 0 | rdx_19) != 0)
        int64_t var_a8
        int64_t* rax_48 = sub_140b63b70(r13 + 0x30, &var_a8)
        int16_t* const rsi_2 = &data_142d40450
        
        if (rax_48[1].d != 0)
            *rax_48
        
        int64_t arg_20 = *(result + 0x18)
        int64_t var_b8
        int64_t* rax_50 = sub_140b5e690(&arg_20, &var_b8)
        int16_t* const r8_7
        
        if (rax_50[1].d == 0)
            r8_7 = &data_142d40450
        else
            r8_7 = *rax_50
        
        int16_t* var_138
        sub_140a2e390(&var_138, u"%s-%s", r8_7)
        int64_t rcx_29 = var_b8
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        int64_t rcx_30 = var_a8
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        int16_t* r8_8 = &data_142d40450
        int64_t r9_6
        r9_6.b = 1
        int32_t var_130
        
        if (var_130 != 0)
            r8_8 = var_138
        
        int64_t* i_2 = sub_140d2ee50(nullptr, *(result + 0x20), r8_8, r9_6)
        int64_t* i_1 = i_2
        
        if (i_2 != 0)
            int64_t* i
            
            do
                if (i_1 != 0)
                    void* rax_51 = sub_14269c200()
                    void* rdx_23 = i_1[2]
                    int64_t rax_52 = sx.q(*(rax_51 + 0x38))
                    
                    if (rax_52.d s<= *(rdx_23 + 0x38)
                            && *(*(rdx_23 + 0x30) + (rax_52 << 3)) == rax_51 + 0x30)
                        (*(*arg1 + 0x300))(arg1, i_1)
                
                (*(*i_1 + 0x138))(i_1, 0, 0, 0x75)
                int16_t* r8_10 = &data_142d40450
                int64_t r9_7
                r9_7.b = 1
                
                if (var_130 != 0)
                    r8_10 = var_138
                
                i = sub_140d2ee50(nullptr, *(result + 0x20), r8_10, r9_7)
                i_1 = i
            while (i != 0)
        
        if (var_130 != 0)
            rsi_2 = var_138
        
        (*(*result + 0x138))(result, rsi_2, 0, 5)
        int16_t* rcx_35 = var_138
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)

return result
