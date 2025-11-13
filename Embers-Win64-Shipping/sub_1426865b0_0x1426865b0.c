// 函数: sub_1426865b0
// 地址: 0x1426865b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
void* result = __security_cookie ^ &var_1a8
void* result_1 = result
void* r12 = arg1
int64_t rcx = *(arg1 + 8)
uint64_t* r14 = arg3

if (rcx != 0)
    int32_t* rax_1 = sub_1405e25d0(rcx)
    int32_t* rbx_1 = rax_1
    void* rax_2 = sub_1405e25d0(*(r12 + 8))
    int128_t* r13_1 = *arg2
    int64_t rsi_1 = 0
    int32_t rcx_2 = 0
    int32_t rdx = 0
    int128_t zmm0 = *(rax_2 + 0xc)
    void* rax_4 = sx.q(arg2[1].d) * 0x1c
    int64_t var_c8
    __builtin_memset(&var_c8, 0, 0x2c)
    void* rax_5 = rax_4 + r13_1
    int32_t var_9c_1 = 0x80
    int32_t var_98_1 = 0xffffffff
    int32_t var_94_1 = 0
    int64_t var_88_1 = 0
    int32_t var_80_1 = 0
    void* var_170 = rax_5
    int32_t var_178
    int32_t var_160
    int32_t var_140
    int32_t var_130
    int32_t var_128
    int32_t var_120
    int128_t zmm1
    
    if (r13_1 != rax_5)
        void* r14_1 = &r13_1[1]
        int128_t zmm7
        zmm7.d = 1f f/ zmm0.d
        
        do
            zmm1 = *(r14_1 - 0xc) ^ 0x80000000
            var_130 = (*r13_1 ^ 0x80000000).d
            int32_t var_12c_1 = (*(r14_1 - 8)).d
            var_128 = zmm1.d
            int32_t var_124_1 = (*(r14_1 - 4) ^ 0x80000000).d
            var_120 = (*(r14_1 + 4)).d
            int32_t var_11c_1 = (*r14_1 ^ 0x80000000).d
            sub_140acc6d0(&var_160, &var_130, 2)
            zmm1.d = var_160.d f- *rbx_1
            zmm1.d = zmm1.d f* zmm7.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            int32_t r15_1 = int.d(zmm1.d)
            int64_t var_158
            zmm1.d = var_158:4.d.d f- *rbx_1
            int32_t r15_2 = r15_1 s>> 1
            zmm1.d = zmm1.d f* zmm7.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            int32_t rdi_1 = int.d(zmm1.d)
            int32_t var_14c
            zmm1.d = var_14c.d f- rbx_1[2]
            int32_t rdi_2 = rdi_1 s>> 1
            zmm1.d = zmm1.d f* zmm7.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            int32_t r12_1 = int.d(zmm1.d)
            zmm1.d = var_158.d.d f- rbx_1[2]
            int32_t r12_2 = r12_1 s>> 1
            zmm1.d = zmm1.d f* zmm7.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            int32_t rsi_3 = int.d(zmm1.d) s>> 1
            
            if (rsi_3 s<= r12_2)
                do
                    int32_t rbx_2 = r15_2
                    
                    if (r15_2 s<= rdi_2)
                        int32_t var_174_1 = rsi_3
                        
                        do
                            var_178 = rbx_2
                            sub_14266ea10(&var_c8, &var_140, &var_178, nullptr)
                            rbx_2 += 1
                        while (rbx_2 s<= rdi_2)
                    
                    rsi_3 += 1
                while (rsi_3 s<= r12_2)
                
                rbx_1 = rax_1
            
            r13_1 += 0x1c
            r14_1 += 0x1c
        while (r13_1 != var_170)
        
        rdx = var_94_1
        rsi_1 = 0
        int32_t var_c0
        rcx_2 = var_c0
        r14 = arg3
        r12 = arg1
    
    uint32_t rdx_3 = (rcx_2 - rdx) * 3
    
    if (rdx_3 s> *(r14 + 0xc))
        sub_1405dadb0(r14, rdx_3)
    
    var_170 = nullptr
    int64_t var_168_1 = 0
    sub_1405c5570(&var_170, 3)
    int32_t var_a0
    int32_t r11_1 = var_a0
    int64_t var_bc
    void* var_158_1 = &var_bc:4
    int32_t rcx_8 = 0
    var_160 = 0
    int32_t r8_1 = 0
    int32_t var_15c_1 = 1
    int32_t var_150_1 = 0xffffffff
    int32_t var_14c_1 = 0
    var_140 = r11_1
    void* var_a8
    
    if (r11_1 != 0)
        void* r9_1 = &var_bc:4
        
        if (var_a8 != 0)
            r9_1 = var_a8
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_6 = *r9_1
        
        if (rdx_6 != 0)
        label_1426868bb:
            int32_t rax_13 = neg.d(rdx_6) & rdx_6
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
            var_15c_1 = rax_13
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_2
            
            int32_t rax_15 = r8_1 - rax_14 + 0x1f
            
            if (rax_15 s> r11_1)
                rax_15 = r11_1
            
            var_14c_1 = rax_15
        else
            while (true)
                int64_t rdx_7 = sx.q(rcx_8)
                r8_1 += 0x20
                rcx_8 += 1
                var_14c_1 = r8_1
                var_160 = rcx_8
                
                if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_14c_1 = r11_1
                    break
                
                rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
                var_150_1 = 0xffffffff
                
                if (rdx_6 != 0)
                    goto label_1426868bb
    
    int32_t r15_3 = var_168_1.d
    double zmm2[0x2] = var_150_1.o
    void* r13_2 = var_170
    var_128.o = var_160.o
    var_130.q = &var_c8
    int128_t zmm0_1 = var_130.o
    var_178 = r15_3
    double var_118_1[0x2] = zmm2
    double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
    int128_t var_f0 = zmm0_1
    int128_t var_e0_1 = var_120.o
    int64_t var_d0_1 = temp0_3.q
    
    while (true)
        int64_t rcx_10 = sx.q(var_e0_1:0xc.d)
        int64_t rax_16 = var_f0.q
        
        if (rcx_10.d == r11_1 && var_e0_1.q == &var_bc:4 && rax_16 == &var_c8)
            break
        
        int32_t* rdi_5 = (rcx_10 << 4) + *rax_16
        int32_t rax_17 = sub_142610f80(*(r12 + 8), *rdi_5, rdi_5[1])
        int64_t rbx_3 = sx.q(rax_17)
        
        if (rax_17 s> 0)
            if (rbx_3.d s> r15_3)
                int64_t r12_3 = sx.q(r15_3)
                int32_t rsi_5 = rbx_3.d - r15_3
                r15_3 = r12_3.d + rsi_5
                var_178 = r15_3
                var_168_1.d = r15_3
                
                if (r15_3 s> var_168_1:4.d)
                    sub_1405a4d70(&var_170)
                    r15_3 = var_168_1.d
                    r13_2 = var_170
                    var_178 = r15_3
                
                memset((r12_3 << 3) + r13_2, 0, sx.q(rsi_5) << 3)
                r12 = arg1
                rsi_1 = 0
            else if (rbx_3.d s< r15_3)
                int32_t rax_19 = r15_3 - rbx_3.d
                
                if (r15_3 != rbx_3.d)
                    r15_3 -= rax_19
                    var_178 = r15_3
                    
                    if (r15_3 != rbx_3.d)
                        memmove((rbx_3 << 3) + r13_2, (sx.q(rax_19 + rbx_3.d) << 3) + r13_2, 
                            (r15_3 - rbx_3.d) << 3)
            
            int64_t rax_22 = sx.q(sub_142611090(*(r12 + 8), *rdi_5, rdi_5[1], r13_2, rbx_3.d))
            
            if (rax_22 s> 0)
                do
                    int32_t* rdi_6 = *(r13_2 + (rsi_1 << 3))
                    int64_t rax_23 = sub_14260f690(*(r12 + 8), rdi_6)
                    
                    if (rax_23 != 0)
                        void* rcx_22 = *(rdi_6 + 8)
                        zmm1 = *(rcx_22 + 0x5c)
                        var_130 = (*(rcx_22 + 0x54) ^ 0x80000000).d
                        int32_t var_128_1 = (*(rcx_22 + 0x58)).d
                        int32_t var_12c_2 = (zmm1 ^ 0x80000000).d
                        int32_t var_120_1 = (*(rcx_22 + 0x68) ^ 0x80000000).d
                        int32_t var_11c_2 = (*(rcx_22 + 0x64)).d
                        int32_t var_124_2 = (*(rcx_22 + 0x60) ^ 0x80000000).d
                        sub_140acc6d0(&var_160, &var_130, 2)
                        int32_t* i = *arg2
                        
                        for (void* rdx_16 = sx.q(arg2[1].d) * 0x1c + i; i != rdx_16; i = &i[7])
                            if (not(var_160 f> i[3]) && not(var_158_1:4.d f< *i)
                                    && not(var_15c_1 f> i[4]) && not(var_150_1.d f< i[1])
                                    && not(var_158_1.d f> i[5]) && var_14c_1.d f>= i[2])
                                void* rax_26 = *(r12 + 8)
                                int64_t rdi_7 = sx.q(r14[1].d)
                                int32_t rbx_6 = (rax_23 u>> (*(rax_26 + 0xa0)).b).d
                                    & ((1 << (*(rax_26 + 0x9c)).b).d - 1)
                                int32_t rax_29 = (rdi_7 + 1).d
                                r14[1].d = rax_29
                                
                                if (rax_29 s> *(r14 + 0xc))
                                    sub_1405a4cf0(r14)
                                
                                *(*r14 + (rdi_7 << 2)) = rbx_6
                                break
                    
                    rsi_1 += 1
                while (rsi_1 s< rax_22)
                
                r15_3 = var_178
            
            rsi_1 = 0
        
        var_e0_1:8.d &= not.d(var_f0:0xc.d)
        sub_14059bdd0(&var_f0:8)
        r11_1 = var_140
    
    if (r13_2 != 0)
        sub_140a74f90(r13_2)
    
    int32_t var_80_2 = 0
    
    if (var_88_1 != 0)
        sub_140a74f90(var_88_1)
    
    int32_t var_c0_1 = 0
    
    if (var_bc.d != 0)
        sub_1405a5410(&var_c8, 0)
    
    int32_t var_98_2 = 0xffffffff
    int32_t var_94_2 = 0
    result = sub_14059a8e0(&var_bc:4, 0)
    
    if (var_a8 != 0)
        result = sub_140a74f90(var_a8)
    
    int64_t rcx_33 = var_c8
    
    if (rcx_33 != 0)
        result = sub_140a74f90(rcx_33)

__security_check_cookie(result_1 ^ &var_1a8)
return result
