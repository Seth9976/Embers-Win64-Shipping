// 函数: sub_140f58710
// 地址: 0x140f58710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
char var_210 = data_1439ae51c
void* var_e8 = nullptr
int32_t var_e0 = 0
char var_d8 = 0
int32_t var_dc = 4
sub_140de8410(arg1, arg3, &var_210)
char var_2b8 = arg8
int32_t rax_5
void* rdx_2
int128_t zmm6
int128_t zmm7
int128_t zmm8
float zmm9[0x4]
float zmm10[0x4]
rax_5, rdx_2, zmm6, zmm7, zmm8, zmm9, zmm10 =
    sub_140e1ff10(arg1, arg2, &var_210, arg3, arg4, arg5.d, arg6, arg7.b)
int32_t r12_1 = arg1[0x5a].d
void* r13 = arg1[0x62]
int32_t rax_7

if (r12_1 != 0xffffffff)
    int64_t rdx_3 = arg1[0x55]
    rax_7, rdx_2 = (*rdx_3)(&arg1[0x55], rdx_3)

void var_208
void* r8_2
int64_t r11

if (r12_1 == 0xffffffff || var_e0 == rax_7)
    r11 = zx.q(var_e0)
    r8_2 = var_e8
else
    r8_2 = var_e8
    void* r9_1 = &var_208
    r11 = sx.q(var_e0)
    
    if (r8_2 != 0)
        r9_1 = r8_2
    
    rdx_2 = r9_1
    void* r10_1 = r9_1 + r11 * 0x48
    
    if (r9_1 == r10_1)
    label_140f5884f:
        r12_1 = -1
    else
        while (*(rdx_2 + 0x38) != *(*(arg1[0x57] + (sx.q(arg1[0x5a].d) << 3)) + 0x10))
            rdx_2 += 0x48
            
            if (rdx_2 == r10_1)
                goto label_140f5884f
        
        int64_t rax_10
        rdx_2:rax_10 = muls.dp.q(0xe38e38e38e38e39, rdx_2 - r9_1)
        int64_t r12_3 = rdx_2 s>> 2
        r12_1 = r12_3.d + (r12_3 u>> 0x3f).d

int32_t rax_13 = (r11 - 1).d

if (rax_13 s> 0)
    int32_t rbx_2 = 1
    int128_t var_58_1 = zmm6
    int128_t var_68_1 = zmm7
    int128_t var_78_1 = zmm8
    float var_88_1[0x4] = zmm9
    float var_98_1[0x4] = zmm10
    float zmm11[0x4]
    float var_a8_1[0x4] = zmm11
    float zmm12[0x4]
    float var_b8_1[0x4] = zmm12
    
    while (true)
        if (rbx_2 s< 0)
            rax_13 = 0
        else if (rbx_2 s< rax_13)
            rax_13 = rbx_2
        
        void* rdi_1 = &var_208
        
        if (r8_2 != 0)
            rdi_1 = r8_2
        
        int64_t rsi_1 = sx.q(rax_13) * 9
        
        if (arg1[0x5b].d != 0)
            zmm12 = *(arg1 + 0x304)
            zmm10 = zx.o(0)
            zmm11 = *(rdi_1 + (rsi_1 << 3))
            zmm9 = zmm12 ^ 0x80000000
        else
            zmm11 = *(arg1 + 0x304)
            zmm9 = zx.o(0)
            zmm12 = *(rdi_1 + (rsi_1 << 3) + 4)
            zmm10 = zmm11 ^ 0x80000000
        
        char var_214
        int32_t* rax_22
        char rcx_7
        void* r9_2
        float zmm0_1[0x4]
        int32_t zmm2_1
        int32_t zmm3_1
        float zmm5_1[0x4]
        float zmm1_1
        int32_t zmm4_1
        
        if (r12_1 == rbx_2 - 1)
            void* rax_23 = arg1[0x62]
            float (* rcx_8)[0x4] = *(rax_23 + 0xc8)
            
            if (rcx_8 == 0)
                zmm0_1 = *(rax_23 + 0xb0)
            else
                zmm0_1 = *rcx_8
            
            float var_2a4_2[0x4] = zmm0_1
            zmm0_1 = var_2a4_2[0]
            zmm0_1[0] = zmm0_1[0] f* *arg7
            zmm1_1 = var_2a4_2[1] f* arg7[1]
            float var_258 = zmm0_1[0]
            zmm0_1 = var_2a4_2[2]
            zmm0_1[0] = zmm0_1[0] f* arg7[2]
            float var_254_1 = zmm1_1
            float var_250_1 = zmm0_1[0]
            float var_24c_1 = var_2a4_2[3] f* arg7[3]
            
            if (arg8 == 0)
                rdx_2.b = 0x20
            else
                if (arg1[0x34].d != 0)
                    int64_t* rcx_9 = arg1[0x33]
                    
                    if (rcx_9 != 0)
                        char rax_25
                        rax_25, rdx_2 = (*(*rcx_9 + 0x28))(rcx_9)
                        
                        if (rax_25 != 0)
                            int64_t* rcx_10
                            
                            if (arg1[0x34].d == 0)
                                rcx_10 = nullptr
                            else
                                rcx_10 = arg1[0x33]
                            
                            char rax_27
                            rax_27, rdx_2 = (*(*rcx_10 + 0x48))(rcx_10)
                            arg1[0x32].b = rax_27
                
                if (arg1[0x32].b == 0)
                    rdx_2.b = 0x20
                else
                    rdx_2.b = 0
            
            zmm4_1 = *(rdi_1 + (rsi_1 << 3) + 0x24)
            zmm1_1 = *(rdi_1 + (rsi_1 << 3) + 0x1c)
            zmm5_1 = zmm10
            zmm2_1 = *(rdi_1 + (rsi_1 << 3) + 0x20)
            zmm3_1 = *(rdi_1 + (rsi_1 << 3) + 0x28)
            void* r9_3 = arg1[0x62]
            rcx_7 = ((*(rdi_1 + (rsi_1 << 3) + 0x34) & 1) * 2) | (var_214 & 0xfc)
            zmm9[0] = zmm9[0] f* zmm4_1
            rax_22 = &var_258
            r9_2 = r9_3 + 0x90
            zmm5_1[0] = zmm5_1[0] * zmm1_1
            int32_t var_264_1 = zmm2_1
            zmm5_1[0] = zmm5_1[0] + zmm9[0]
            int32_t var_260_1 = zmm4_1
            int32_t var_25c_1 = zmm3_1
            zmm0_1 = zmm1_1.o
        else
            int128_t* rax_16 = *(r13 + 0x40)
            
            if (rax_16 == 0)
                zmm0_1 = *(r13 + 0x28)
            else
                zmm0_1 = *rax_16
            
            float var_2a4_1[0x4] = zmm0_1
            zmm0_1 = var_2a4_1[0]
            zmm0_1[0] = zmm0_1[0] f* *arg7
            zmm1_1 = var_2a4_1[1] f* arg7[1]
            float var_278 = zmm0_1[0]
            zmm0_1 = var_2a4_1[2]
            zmm0_1[0] = zmm0_1[0] f* arg7[2]
            float var_274_1 = zmm1_1
            float var_270_1 = zmm0_1[0]
            float var_26c_1 = var_2a4_1[3] f* arg7[3]
            
            if (arg8 == 0)
                rdx_2.b = 0x20
            else
                if (arg1[0x34].d != 0)
                    int64_t* rcx_5 = arg1[0x33]
                    
                    if (rcx_5 != 0)
                        char rax_18
                        rax_18, rdx_2 = (*(*rcx_5 + 0x28))(rcx_5)
                        
                        if (rax_18 != 0)
                            int64_t* rcx_6
                            
                            if (arg1[0x34].d == 0)
                                rcx_6 = nullptr
                            else
                                rcx_6 = arg1[0x33]
                            
                            char rax_20
                            rax_20, rdx_2 = (*(*rcx_6 + 0x48))(rcx_6)
                            arg1[0x32].b = rax_20
                
                if (arg1[0x32].b == 0)
                    rdx_2.b = 0x20
                else
                    rdx_2.b = 0
            
            zmm4_1 = *(rdi_1 + (rsi_1 << 3) + 0x24)
            r9_2 = r13 + 8
            zmm1_1 = *(rdi_1 + (rsi_1 << 3) + 0x1c)
            zmm5_1 = zmm10
            zmm2_1 = *(rdi_1 + (rsi_1 << 3) + 0x20)
            rcx_7 = *(rdi_1 + (rsi_1 << 3) + 0x34) & 1
            zmm3_1 = *(rdi_1 + (rsi_1 << 3) + 0x28)
            zmm9[0] = zmm9[0] f* zmm4_1
            rcx_7 = (rcx_7 * 2) | (var_214 & 0xfc)
            rax_22 = &var_278
            zmm5_1[0] = zmm5_1[0] * zmm1_1
            int32_t var_284_1 = zmm2_1
            zmm5_1[0] = zmm5_1[0] + zmm9[0]
            int32_t var_280_1 = zmm4_1
            int32_t var_27c_1 = zmm3_1
            zmm0_1 = zmm1_1.o
        zmm8 = *(rdi_1 + (rsi_1 << 3) + 8)
        zmm5_1[0] = zmm5_1[0] f+ *(rdi_1 + (rsi_1 << 3) + 0x2c)
        float var_22c_1[0x4] = zmm0_1
        int128_t* var_2d0_1 = rax_22
        void* var_2d8
        var_2d8.b = rdx_2.b
        zmm6.d = zmm8.d f* zmm9[0]
        var_214 = rcx_7
        zmm9[0] = zmm9[0] f* zmm3_1
        int64_t var_23c_1 = 0
        zmm6.d = zmm6.d f+ *(rdi_1 + (rsi_1 << 3) + 0x10)
        zmm7.d = zmm8.d f* zmm10[0]
        zmm10[0] = zmm10[0] f* zmm2_1
        zmm7.d = zmm7.d f+ *(rdi_1 + (rsi_1 << 3) + 0xc)
        int32_t var_244_1 = zmm6.d
        zmm9[0] = zmm9[0] + zmm10[0]
        int32_t var_240_1 = zmm8.d
        float var_234_1 = zmm11[0]
        float var_230_1 = zmm12[0]
        int32_t var_248 = zmm7.d
        zmm9[0] = zmm9[0] f+ *(rdi_1 + (rsi_1 << 3) + 0x30)
        int64_t var_21c_1 = (_mm_unpacklo_ps(zmm5_1, zmm9[0].q)).q
        sub_140db3600(arg5, rax_5 + 1, &var_248, r9_2, var_2d8.b, var_2d0_1)
        rbx_2 += 1
        rax_13 = var_e0 - 1
        
        if (rbx_2 s> rax_13)
            break
        
        r8_2 = var_e8

sub_140d94d20(&var_208)
__security_check_cookie(rax_1 ^ &var_2f8)
return zx.q(rax_5 + 1)
