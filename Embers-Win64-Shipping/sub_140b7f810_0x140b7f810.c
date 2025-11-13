// 函数: sub_140b7f810
// 地址: 0x140b7f810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
char result
int128_t zmm6
result, zmm6 = sub_140b7a720(arg1)

if (result != 0)
    int64_t rbx_1 = data_143ddb418
    int32_t rdi_2 = *(arg1 + 0x10) - *(arg1 + 0x3c)
    void var_e8
    int64_t* rax_2 = sub_140a96170(&var_e8)
    void var_b8
    sub_140b2f260(&var_b8, _mm_cvtepi32_ps(zx.o(rdi_2)), rax_2, 1, rbx_1)
    sub_140b40000(&var_b8)
    int64_t* var_e0
    
    if (var_e0 != 0)
        var_e0[1].d -= 1
        
        if (var_e0[1].d == 1)
            (**var_e0)(var_e0)
            int32_t rax_5 = *(var_e0 + 0xc)
            *(var_e0 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*var_e0 + 8))(var_e0, 1)
    
    int32_t rcx_5 = 0
    int32_t var_17c_1 = 1
    int32_t var_180_1 = 0
    int32_t rbx_3 = *(arg1 + 0x30)
    void* var_178_1 = arg1 + 0x18
    int32_t r8_2 = 0
    int32_t var_170_1 = 0xffffffff
    int64_t var_16c_1 = 0
    
    if (rbx_3 != 0)
        void* rax_7 = *(arg1 + 0x28)
        void* r9_2 = arg1 + 0x18
        
        if (rax_7 != 0)
            r9_2 = rax_7
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rbx_3 - 1)
        int32_t rdx_2 = *r9_2
        
        if (rdx_2 != 0)
        label_140b7f97b:
            int32_t rax_14 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_4
            temp0_4, rflags_1 = _bit_scan_reverse(rax_14)
            int32_t var_17c_2 = rax_14
            int32_t var_118_1 = temp0_4
            int32_t rax_15
            
            if (rax_14 == 0)
                rax_15 = 0x20
            else
                rax_15 = 0x1f - temp0_4
            
            var_16c_1.d = r8_2 - rax_15 + 0x1f
            
            if (r8_2 - rax_15 + 0x1f s> rbx_3)
                var_16c_1.d = rbx_3
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx_5)
                r8_2 += 0x20
                rcx_5 += 1
                var_16c_1:4.d = r8_2
                var_180_1 = rcx_5
                
                if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_2 + (rdx_3 << 2) + 4)
                var_170_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_140b7f97b
            
            var_16c_1.d = rbx_3
    
    int32_t rdx_4 = *(arg1 + 0x30)
    void* var_160 = arg1 + 8
    double zmm2_1[0x2] = var_170_1.o
    int32_t var_124_1 = rdx_4
    int128_t var_158_1 = var_180_1.o
    int128_t zmm0_1 = var_160.o
    int32_t rsi_1 = 0xffffffff << (rdx_4 & 0x1f).b
    double var_148_1 = zmm2_1[0]
    int32_t r8_5 = rdx_4 s>> 5
    int32_t r9_4 = rdx_4 & 0xffffffe0
    uint64_t rdi_3 = zx.q(rbx_3)
    int64_t var_f0_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    int32_t var_138_1 = r8_5
    int32_t var_128_1 = rsi_1
    int32_t var_120_1 = r9_4
    int128_t var_110 = zmm0_1
    int128_t var_100_1 = var_158_1
    
    if (rdx_4 != rbx_3)
        void* rax_19 = *(arg1 + 0x28)
        void* r10_1 = arg1 + 0x18
        
        if (rax_19 != 0)
            r10_1 = rax_19
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rbx_3 - 1)
        int32_t rdx_8 = *(r10_1 + (sx.q(r8_5) << 2)) & rsi_1
        int32_t var_124_3
        
        if (rdx_8 != 0)
        label_140b7fa6d:
            int32_t rax_25 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_6
            temp0_6, rflags_2 = _bit_scan_reverse(rax_25)
            int32_t var_114_1 = temp0_6
            int32_t r11_1
            
            if (rax_25 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_6
            
            int32_t var_124_2 = r9_4 - r11_1 + 0x1f
            
            if (r9_4 - r11_1 + 0x1f s> rdi_3.d)
                var_124_3 = rdi_3.d
        else
            while (true)
                int64_t rcx_9 = sx.q(r8_5)
                r9_4 += 0x20
                r8_5 += 1
                int32_t var_120_2 = r9_4
                int32_t var_138_2 = r8_5
                
                if (rcx_9.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r10_1 + (rcx_9 << 2) + 4)
                var_128_1 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_140b7fa6d
            
            var_124_3 = rdi_3.d
    
    int128_t zmm6_1 = 0x3f800000
    
    while (true)
        int64_t rcx_11 = sx.q(var_100_1:0xc.d)
        int64_t* rdx_9 = var_110.q
        int32_t rax_18
        
        if (rcx_11.d != (var_128_1.q u>> 0x20).d || var_100_1.q != arg1 + 0x18 || rdx_9 != arg1 + 8)
            rax_18.b = 1
        else
            rax_18.b = 0
        
        if (rax_18.b == 0)
            rdi_3.b = 1
            break
        
        int64_t* rbx_5 = *rdx_9 + rcx_11 * 0x28
        sub_140596d10(&var_160, rbx_5)
        void* rsi_2 = rbx_5[2]
        double rbx_6 = rbx_5[3]
        var_158_1:8.q = rsi_2
        
        if (rbx_6 != 0)
            *(rbx_6 i+ 8) += 1
        
        void var_d0
        zmm6_1 = sub_140b389c0(&var_b8, zmm6_1, sub_140a96170(&var_d0))
        uint64_t var_c8
        
        if (var_c8 != 0)
            int32_t rax_28 = *(var_c8 + 8)
            *(var_c8 + 8) -= 1
            
            if (rax_28 == 1)
                (**var_c8)(var_c8)
                int32_t rax_30 = *(var_c8 + 0xc)
                *(var_c8 + 0xc) -= 1
                
                if (rax_30 == 1)
                    (*(*var_c8 + 8))(var_c8, 1)
            
            rsi_2 = var_158_1:8.q
        
        if (*(rsi_2 + 0x1e4) != 0 && *(rsi_2 + 0x127) == 0)
            char rax_32
            rax_32, zmm6_1 = sub_140b8b860(rsi_2, arg2)
            
            if (rax_32 == 0)
                if (rbx_6 != 0)
                    int32_t temp10_1 = *(rbx_6 i+ 8)
                    *(rbx_6 i+ 8) -= 1
                    
                    if (temp10_1 == 1)
                        (**rbx_6)(rbx_6)
                        int32_t temp11_1 = *(rbx_6 i+ 0xc)
                        *(rbx_6 i+ 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
                
                void* rcx_25 = var_160
                
                if (rcx_25 != 0)
                    sub_140a74f90(rcx_25)
                
                rdi_3.b = 0
                break
        
        if (rbx_6 != 0)
            int32_t temp8_1 = *(rbx_6 i+ 8)
            *(rbx_6 i+ 8) -= 1
            
            if (temp8_1 == 1)
                (**rbx_6)(rbx_6)
                int32_t temp9_1 = *(rbx_6 i+ 0xc)
                *(rbx_6 i+ 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
        
        void* rcx_21 = var_160
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        var_100_1:8.d &= not.d(var_110:0xc.d)
        sub_14059bdd0(&var_110:8)
    
    sub_140b365b0(&var_b8)
    int512_t zmm6_2
    zmm6_2.o = zmm6
    char var_6c_1 = 0
    int64_t* var_98
    
    if (var_98 != 0)
        var_98[1].d -= 1
        
        if (var_98[1].d == 1)
            (**var_98)(var_98)
            int32_t rax_42 = *(var_98 + 0xc)
            *(var_98 + 0xc) -= 1
            
            if (rax_42 == 1)
                (*(*var_98 + 8))(var_98, 1)
    
    int64_t* var_b0
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            (**var_b0)(var_b0)
            int32_t r14_1 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (r14_1 == 1)
                int64_t r8_8 = *var_b0
                (*(r8_8 + 8))(var_b0, zx.q(r14_1), r8_8)
    
    result = rdi_3.b

__security_check_cookie(rax_1 ^ &var_1b8)
return result
