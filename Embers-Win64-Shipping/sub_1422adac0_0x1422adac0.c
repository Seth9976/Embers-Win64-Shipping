// 函数: sub_1422adac0
// 地址: 0x1422adac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1
int64_t* r13 = arg4
char var_118 = 0
int32_t var_d8 = &var_118
void*** (* var_e0)() = j_sub_140597fc0
int64_t* rax_1 = sub_140a756e0(&var_e0, &data_143958018) + 0x10
void*** (* var_d0)() = j_sub_140597fc0
int64_t* var_110 = rax_1
int64_t rcx_1 = *rax_1
int64_t rcx_2 = rax_1[2]
char var_f8 = 0
int64_t rcx_3 = rax_1[3]
rax_1[3] = &var_110
int64_t* rax_2 = var_110
rax_2[4].d += 1
char* var_c8 = &var_118
var_118 = 0
void* rax_3 = sub_140a756e0(&var_d0, &data_143958018)
int64_t rcx_5 = sx.q(rsi[0x1f].d)
int32_t rbx = 1
int32_t rax_4 = 4 * rcx_5

if (mulu.dp.q(4, rcx_5) u>> 0x40 != zx.o(0))
    rax_4 = -1

int32_t* rax_5
uint128_t zmm6
rax_5, zmm6 = sub_14081d830(rax_4, rax_3 + 0x10, 1, 0)
int32_t rdx_1 = 0
int32_t i = 0
int32_t r15 = 0
int32_t* r14 = rax_5
int32_t* r8 = rax_5
void* rdi_1
int64_t r11_1
int64_t zmm0_1

if (rsi[0x1f].d s> 0)
    rdi_1 = &rsi[6]
    int64_t r10_1 = 0
    
    do
        void* rax_6 = *(rdi_1 + 0xc0)
        void* rcx_7 = rdi_1
        
        if (rax_6 != 0)
            rcx_7 = rax_6
        
        zmm0_1.d = (*arg2).d f* *(rcx_7 + r10_1)
        float zmm2 = *(rcx_7 + r10_1 + 4) f* *(arg2 + 4) f+ zmm0_1.d
            + *(rcx_7 + r10_1 + 8) f* arg2[1].d f- *(arg2 + 0xc)
        
        if (zmm2 < 0f)
            *r8 = 1
            
            if (zmm2 < -0.25f)
                rdx_1 = 1
        else
            *r8 = 0
            
            if (not(zmm2 <= 0.25f))
                r15 = 1
        
        r11_1 = sx.q(rsi[0x1f].d)
        i += 1
        r10_1 += 0xc
        r8 = &r8[1]
    while (i s< r11_1.d)

if (rsi[0x1f].d s<= 0 || r15 == 0)
    rbx = sbb.d(1, 1, rdx_1 != 0) & 2
else if (rdx_1 != 0)
    int64_t* r8_1 = arg3
    
    if (r8_1 != 0)
        void* rax_7 = *(rdi_1 + 0xc0)
        int32_t r15_1 = r14[r11_1 - 1]
        int32_t i_2 = 0
        
        if (rax_7 != 0)
            rdi_1 = rax_7
        
        void* rdx_4 = rdi_1 + (r11_1 - 1) * 0xc
        
        if (r11_1.d s> 0)
            uint128_t var_58_1 = zmm6
            int128_t zmm7
            int128_t var_68_1 = zmm7
            int128_t zmm8
            int128_t var_78_1 = zmm8
            int128_t zmm9
            int128_t var_88_1 = zmm9
            int128_t zmm10
            int128_t var_98_1 = zmm10
            int128_t zmm11
            int128_t var_a8_1 = zmm11
            int128_t zmm12
            int128_t var_b8_1 = zmm12
            int32_t i_1
            
            do
                int32_t r12_1 = *r14
                r14 = &r14[1]
                void* rdx_10
                
                if (r12_1 == r15_1)
                    void* rbx_5 = &r8_1[6]
                    
                    if (r12_1 != 0)
                        rbx_5 = &r13[6]
                    
                    int64_t rsi_3 = sx.q(*(rbx_5 + 0xc8))
                    int32_t rax_19 = (rsi_3 + 1).d
                    bool cond:5_1 = rax_19 s<= *(rbx_5 + 0xcc)
                    *(rbx_5 + 0xc8) = rax_19
                    
                    if (not(cond:5_1))
                        sub_141eca250(rbx_5, rsi_3.d)
                    
                    void* rax_20 = *(rbx_5 + 0xc0)
                    
                    if (rax_20 != 0)
                        rbx_5 = rax_20
                    
                    rdx_10 = rbx_5 + rsi_3 * 0xc
                else
                    void* rsi_1 = &r8_1[6]
                    zmm10 = *rdx_4
                    zmm11 = *(rdx_4 + 4)
                    zmm12 = *(rdx_4 + 8)
                    zmm6 = *(arg2 + 0xc)
                    int32_t zmm5_1 = *(arg2 + 4)
                    int64_t zmm3 = *arg2
                    float zmm4_1 = arg2[1].d
                    zmm7.d = (*rdi_1).d f- zmm10.d
                    zmm8.d = (*(rdi_1 + 4)).d f- zmm11.d
                    int64_t rbx_1 = sx.q(*(rsi_1 + 0xc8))
                    zmm9.d = (*(rdi_1 + 8)).d f- zmm12.d
                    zmm0_1.d = zmm3.d f* zmm10.d
                    int32_t rax_9 = (rbx_1 + 1).d
                    *(rsi_1 + 0xc8) = rax_9
                    zmm3.d = zmm3.d f* zmm7.d
                    zmm6.d = zmm6.d f- (zmm5_1 f* zmm11.d f+ zmm0_1.d + zmm4_1 f* zmm12.d)
                    zmm6.d = zmm6.d f/ (zmm5_1 f* zmm8.d f+ zmm3.d f+ zmm4_1 f* zmm9.d)
                    zmm0_1.d = zmm6.q.d f* zmm7.d
                    float zmm1_1 = zmm6.d f* zmm8.d
                    zmm0_1.d = zmm0_1.d f+ zmm10.d
                    zmm6.d = zmm6.d f* zmm9.d
                    zmm6.d = zmm6.d f+ zmm12.d
                    var_e0.d = zmm0_1.d
                    var_e0:4.d = zmm1_1 f+ zmm11.d
                    var_d8 = zmm6.d
                    
                    if (rax_9 s> *(rsi_1 + 0xcc))
                        sub_141eca250(rsi_1, rbx_1.d)
                    
                    void* rax_10 = *(rsi_1 + 0xc0)
                    zmm6 = zx.o(var_e0)
                    void* rdx_6 = rsi_1
                    
                    if (rax_10 != 0)
                        rdx_6 = rax_10
                    
                    void* rax_11 = rdx_6 + rbx_1 * 0xc
                    
                    if (rax_11 != 0)
                        *rax_11 = zmm6.q
                        *(rax_11 + 8) = var_d8
                    
                    void* rbx_3 = &arg4[6]
                    int64_t r14_1 = sx.q(*(rbx_3 + 0xc8))
                    int32_t rax_12 = (r14_1 + 1).d
                    *(rbx_3 + 0xc8) = rax_12
                    
                    if (rax_12 s> *(rbx_3 + 0xcc))
                        sub_141eca250(rbx_3, r14_1.d)
                    
                    void* rax_13 = *(rbx_3 + 0xc0)
                    void* rdx_8 = rbx_3
                    
                    if (rax_13 != 0)
                        rdx_8 = rax_13
                    
                    uint64_t* rax_14 = rdx_8 + r14_1 * 0xc
                    
                    if (rax_14 != 0)
                        *rax_14 = zmm6.q
                        rax_14[1].d = var_d8
                    
                    if (r15_1 != 0)
                        int64_t rbx_4 = sx.q(*(rsi_1 + 0xc8))
                        int32_t rax_17 = (rbx_4 + 1).d
                        *(rsi_1 + 0xc8) = rax_17
                        
                        if (rax_17 s> *(rsi_1 + 0xcc))
                            sub_141eca250(rsi_1, rbx_4.d)
                        
                        void* rax_18 = *(rsi_1 + 0xc0)
                        r13 = arg4
                        
                        if (rax_18 != 0)
                            rsi_1 = rax_18
                        
                        rdx_10 = rsi_1 + rbx_4 * 0xc
                    else
                        int64_t rsi_2 = sx.q(*(rbx_3 + 0xc8))
                        int32_t rax_15 = (rsi_2 + 1).d
                        *(rbx_3 + 0xc8) = rax_15
                        
                        if (rax_15 s> *(rbx_3 + 0xcc))
                            sub_141eca250(rbx_3, rsi_2.d)
                        
                        void* rax_16 = *(rbx_3 + 0xc0)
                        r13 = arg4
                        
                        if (rax_16 != 0)
                            rbx_3 = rax_16
                        
                        rdx_10 = rbx_3 + rsi_2 * 0xc
                
                if (rdx_10 != 0)
                    *rdx_10 = *rdi_1
                    *(rdx_10 + 8) = *(rdi_1 + 8)
                
                rdx_4 = rdi_1
                rsi = arg1
                i_1 = i_2 + 1
                r8_1 = arg3
                rdi_1 += 0xc
                r15_1 = r12_1
                i_2 = i_1
            while (i_1 s< rsi[0x1f].d)
        
        *r8_1 = *rsi
        r8_1[1].d = rsi[1].d
        *(r8_1 + 0xc) = *(rsi + 0xc)
        *(r8_1 + 0x14) = *(rsi + 0x14)
        r8_1[0x20].d = rsi[0x20].d
        *r13 = *rsi
        r13[1].d = rsi[1].d
        *(r13 + 0xc) = *(rsi + 0xc)
        *(r13 + 0x14) = *(rsi + 0x14)
        r13[0x20].d = rsi[0x20].d
    
    rbx = 3

if (var_f8 == 0)
    int64_t* rax_29 = var_110
    char var_f8_1 = 1
    rax_29[4].d -= 1
    int64_t* rcx_18 = var_110
    
    if (rcx_2 != rcx_18[2])
        sub_140b16b40(rcx_18, rcx_2)
        rcx_18 = var_110
    
    *rcx_18 = rcx_1
    var_110[3] = rcx_3
    int64_t var_108_1 = 0
    
    if (var_f8_1 == 0)
        int64_t* rax_32 = var_110
        char var_f8_2 = 1
        rax_32[4].d -= 1
        int64_t* rax_33 = var_110
        
        if (rcx_2 != rax_33[2])
            sub_140b16b40(rax_33, rcx_2)
            rax_33 = var_110
        
        *rax_33 = var_108_1
        var_110[3] = rcx_3

return zx.q(rbx)
