// 函数: sub_140e5a710
// 地址: 0x140e5a710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
void** const result = __security_cookie ^ &var_328
void** const result_1 = result
int64_t rcx = *(arg1 + 0x1d0)

if (rcx != 0)
    int64_t* rbx_1 = *(arg1 + 0x1d8)
    char rdx_1 = 0
    void** const var_2d8 = &data_142ecfd88
    int32_t r8_1 = 0
    float zmm1[0x4] = zx.o(0)
    double zmm2[0x2] = zx.o(0)
    int64_t* r10_1 = &data_143e20e70
    int16_t var_27c_1 = 0
    int64_t r9_1 = 0
    int64_t var_278_1 = 0
    int16_t var_270_1 = 0
    int32_t var_280_1 = 0x3f800000
    char var_2ce_1 = 0
    int32_t var_2cc
    __builtin_memset(&var_2cc, 0, 0x24)
    int64_t* var_2a8_1 = &data_143e20e70
    int64_t var_2a0
    __builtin_memset(&var_2a0, 0, 0x20)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        r10_1 = var_2a8_1
        int32_t var_2bc
        zmm2 = var_2bc
        int32_t var_2c0
        zmm1 = var_2c0
        int64_t var_2c8
        r9_1 = var_2c8
        r8_1 = var_2cc
        rdx_1 = var_2ce_1
    
    int16_t var_2d0
    int16_t var_230_1 = var_2d0 & 0xfe00
    int64_t var_200_1 = var_2a0
    int128_t var_298
    int64_t var_1f8_1 = var_298.q
    int64_t* rax_4 = var_298:8.q
    float var_220_1 = zmm1[0]
    int32_t var_21c_1 = zmm2[0].d
    char var_22e_1 = rdx_1
    int32_t var_22c_1 = r8_1
    int64_t var_228_1 = r9_1
    float var_2b8[0x4]
    float var_218_1[0x4] = var_2b8
    int64_t* var_208_1 = r10_1
    
    if (rax_4 != 0)
        rax_4[1].d += 1
    
    int64_t var_288
    int32_t var_1e8_1 = var_288.d
    int32_t var_1e4_1 = var_288:4.d
    char var_1dc_1 = var_27c_1.b
    char var_1db_1 = var_27c_1:1.b
    char var_1d0_1 = var_270_1.b
    char var_1cf_1 = var_270_1:1.b
    char var_1ce_1 = 0
    float var_1e0_1 = var_280_1[0]
    void** const var_238 = &data_142ed7318
    float var_1d8_1 = var_278_1.d[0]
    float var_1d4_1 = var_278_1:4.d[0]
    int64_t var_1c8_1 = rcx
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int32_t var_2f4_1 = 1
    int32_t r11_1 = *(arg1 + 0x218)
    void* var_2f0_1 = arg1 + 0x200
    int32_t rcx_3 = 0
    int32_t var_2f8 = 0
    int32_t r8_2 = 0
    int32_t var_2e8_1 = 0xffffffff
    int64_t var_2e4_1 = 0
    
    if (r11_1 != 0)
        void* rax_14 = *(arg1 + 0x210)
        void* r9_2 = arg1 + 0x200
        
        if (rax_14 != 0)
            r9_2 = rax_14
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_4 = *r9_2
        
        if (rdx_4 != 0)
        label_140e5a97b:
            int32_t rax_21 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_21)
            int32_t var_2f4_2 = rax_21
            int32_t rax_22
            
            if (rax_21 == 0)
                rax_22 = 0x20
            else
                rax_22 = 0x1f - temp0_2
            
            var_2e4_1.d = r8_2 - rax_22 + 0x1f
            
            if (r8_2 - rax_22 + 0x1f s> r11_1)
                var_2e4_1.d = r11_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_3)
                r8_2 += 0x20
                rcx_3 += 1
                var_2e4_1:4.d = r8_2
                var_2f8 = rcx_3
                
                if (rdx_5.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_2 + (rdx_5 << 2) + 4)
                var_2e8_1 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_140e5a97b
            
            var_2e4_1.d = r11_1
    
    int32_t rdx_6 = *(arg1 + 0x218)
    zmm2 = var_2e8_1.o
    double var_1a0_1[0x2] = zmm2
    int32_t rsi_1 = 0xffffffff << (rdx_6.b & 0x1f)
    float var_1b0_1[0x4] = var_2f8.o
    int32_t r8_5 = rdx_6 s>> 5
    int32_t r9_4 = rdx_6 & 0xffffffe0
    int64_t var_248_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_2e8_2 = rsi_1
    var_2e4_1.d = rdx_6
    float zmm0[0x4] = (arg1 + 0x1f0).o
    float var_268[0x4] = zmm0
    
    if (rdx_6 != r11_1)
        void* rax_24 = *(arg1 + 0x210)
        void* r10_2 = arg1 + 0x200
        
        if (rax_24 != 0)
            r10_2 = rax_24
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_1 - 1)
        int32_t rdx_10 = *(r10_2 + (sx.q(r8_5) << 2)) & rsi_1
        
        if (rdx_10 != 0)
        label_140e5aa53:
            int32_t rax_31 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_31)
            int32_t rbx_2
            
            if (rax_31 == 0)
                rbx_2 = 0x20
            else
                rbx_2 = 0x1f - temp0_4
            
            var_2e4_1.d = r9_4 - rbx_2 + 0x1f
            
            if (r9_4 - rbx_2 + 0x1f s> r11_1)
                var_2e4_1.d = r11_1
        else
            while (true)
                int64_t rcx_8 = sx.q(r8_5)
                r9_4 += 0x20
                r8_5 += 1
                
                if (rcx_8.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_2 + (rcx_8 << 2) + 4)
                var_2e8_2 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_140e5aa53
            
            var_2e4_1.d = r11_1
    
    while (true)
        int64_t rax_33 = sx.q(var_1b0_1[3])
        int64_t* rdx_11 = var_268[0].q
        
        if (rax_33.d == (var_2e8_2.q u>> 0x20).d && var_1b0_1[0].q == arg1 + 0x200
                && rdx_11 == arg1 + 0x1f0)
            break
        
        void var_190
        sub_140dbf000(rax_33 * 0x30 + *rdx_11 + 8, &var_190, 0, 0, zmm0, data_1439ae51c)
        void var_188
        
        if (sub_140db3500(&var_190) != 0)
            int32_t var_60
            int64_t rbx_3 = sx.q(var_60 - 1)
            
            if (var_60 - 1 s>= 0)
                int64_t rdi_2 = rbx_3 * 0x48
                int64_t temp9_1
                
                do
                    void* rcx_14 = &var_188
                    void* var_68
                    
                    if (var_68 != 0)
                        rcx_14 = var_68
                    
                    int64_t* rcx_15 = *(rcx_14 + rdi_2 + 0x38)
                    (*(*rcx_15 + 0xc8))(rcx_15, &var_238)
                    temp9_1 = rbx_3
                    rbx_3 -= 1
                    rdi_2 -= 0x48
                while (temp9_1 - 1 s>= 0)
        
        void var_40
        sub_140596d80(&var_40)
        int64_t* var_48
        
        if (var_48 != 0)
            var_48[1].d -= 1
            
            if (var_48[1].d == 1)
                (**var_48)(var_48)
                int32_t temp8_1 = *(var_48 + 0xc)
                *(var_48 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_48 + 8))(var_48, 1)
        
        zmm0 = sub_140d94d20(&var_188)
        var_1b0_1[2] &= not.d(var_268[3])
        sub_14059bdd0(&var_268[2])
    
    int64_t* rcx_21 = *(arg1 + 0x1d0)
    (*(*rcx_21 + 0x10))(rcx_21, 0, &var_2d8)
    sub_140e865f0(arg1 + 0x1f0)
    
    if (arg1 + 0x1d0 != &var_2f8)
        *(arg1 + 0x1d0) = 0
        int64_t* rbx_5 = *(arg1 + 0x1d8)
        
        if (rbx_5 != 0)
            *(arg1 + 0x1d8) = 0
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp14_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp13_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t temp16_1 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rax_4 + 8))(rax_4, 1)
    
    int64_t* rbx_8 = var_298:8.q
    result = &data_142d7f690
    var_238 = &data_142d7f690
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            result = (**rbx_8)(rbx_8)
            int32_t temp17_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp17_1 == 1)
                result = (*(*rbx_8 + 8))(rbx_8, 1)

__security_check_cookie(result_1 ^ &var_328)
return result
