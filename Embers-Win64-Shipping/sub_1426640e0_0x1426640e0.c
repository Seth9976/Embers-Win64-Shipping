// 函数: sub_1426640e0
// 地址: 0x1426640e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2

if (arg2 == 0)
    return 0

int32_t rax_1 = *(arg2 + 0xc)
void* const rax_7

if (rax_1 s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18

if (((*(rax_7 + 8) u>> 0x1d).b & 1) != 0)
    return 1

if ((arg2[0x7f].b & 1) != 0)
    return 5

EnterCriticalSection(arg1 + 0x1d0)
void var_e8
sub_141dde3b0(&var_e8, &arg2[0x46])
char rax_12
uint32_t zmm6_1[0x4]
int32_t zmm7_1
int32_t zmm8_1
rax_12, zmm6_1, zmm7_1, zmm8_1 = sub_14265daf0(&var_e8)

if (rax_12 == 0 && *(arg1 + 0x80) == 1)
    sub_1426459e0(&var_e8, *(arg1 + 0x78))
    (*(*arg2 + 0x670))(arg2, *(arg1 + 0x78))
    sub_142668c50(arg2, 1)
    sub_142662b80(arg2, arg1 + 0x3c0, 0)

uint32_t var_48_1[0x4] = zmm6_1
int32_t var_58_1 = zmm7_1
int32_t var_68_1 = zmm8_1
int32_t rbx_1

if (sub_14265daf0(&var_e8) != 1)
    rbx_1 = 3
else
    void* rax_15 = sub_14269be10()
    void* rdx_8 = arg2[2]
    int64_t rax_16 = sx.q(*(rax_15 + 0x38))
    
    if (rax_16.d s<= *(rdx_8 + 0x38) && *(*(rdx_8 + 0x30) + (rax_16 << 3)) == rax_15 + 0x30)
        int64_t rax_18 = *(arg1 + 0x30)
        
        if (rax_18 == 0 || rax_18 == arg2)
            (*(*arg2 + 0x638))(arg2)
            rbx_1 = 5
        label_142664587:
            
            if (j_sub_140d3e110(arg1 + 0xf8) != 0)
                int64_t* rax_39 = sub_140d3c6e0(arg1 + 0xf8)
                int64_t r8_8 = *rax_39
                (*(r8_8 + 0x268))(rax_39, arg2, r8_8)
        else
            rbx_1 = 2
    else
        int32_t var_e4
        int32_t var_e0
        float var_dc
        
        if (*(arg1 + 0x200) == *(arg1 + 0x22c))
        label_14266438d:
            int32_t i = 0
            char arg_18 = 0
            
            if (*(arg1 + 0x80) s> 0)
                void* r12_2 = nullptr
                
                do
                    int64_t r13_1 = arg2[2]
                    int64_t* arg_20
                    uint64_t* rax_28
                    uint32_t zmm6_2[0x4]
                    int32_t zmm7_2
                    int32_t zmm8_2
                    rax_28, zmm6_2, zmm7_2, zmm8_2 =
                        sub_142640050(sx.q(i) * 0x78 + *(arg1 + 0x78), &arg_20)
                    uint64_t rdx_15
                    
                    if (*rax_28 == 0)
                        rdx_15 = 0
                    else
                        void* rax_29 = sub_14269c200()
                        
                        if (rax_29 == 0)
                            rdx_15 = 0
                        else
                            rdx_15 = *rax_28
                            int64_t rax_30 = sx.q(*(rax_29 + 0x38))
                            
                            if (rax_30.d s> *(rdx_15 + 0x38)
                                    || *(*(rdx_15 + 0x30) + (rax_30 << 3)) != rax_29 + 0x30)
                                rdx_15 = 0
                    
                    if (r13_1 == rdx_15)
                        int64_t rax_32 = *(arg1 + 0x78)
                        uint32_t zmm0_2[0x4] = *(r12_2 + rax_32 + 4)
                        void* rcx_22 = r12_2 + rax_32
                        zmm0_2[0] = zmm0_2[0] f- var_e4
                        zmm0_2 = _mm_and_ps(zmm0_2, zmm6_2)
                        
                        if (zmm0_2[0] f>= zmm7_2)
                            rax_32.b = 0
                        else
                            zmm0_2 = *(rcx_22 + 8)
                            zmm0_2[0] = zmm0_2[0] f- var_e0
                            zmm0_2 = _mm_and_ps(zmm0_2, zmm6_2)
                            
                            if (zmm0_2[0] f>= zmm7_2)
                                rax_32.b = 0
                            else
                                zmm0_2 = *(rcx_22 + 0xc)
                                
                                if (zmm0_2[0] f< zmm8_2 || var_dc f< zmm8_2)
                                label_14266445e:
                                    
                                    if (sub_141ded5a0(rcx_22, &var_e8).b == 0)
                                        rax_32.b = 0
                                    else
                                        rax_32.b = 1
                                else
                                    zmm0_2[0] = zmm0_2[0] f- var_dc
                                    zmm0_2 = _mm_and_ps(zmm0_2, zmm6_2)
                                    
                                    if (not(zmm0_2[0] f>= zmm7_2))
                                        goto label_14266445e
                                    
                                    rax_32.b = 0
                        
                        if (rax_32.b == 1)
                            int64_t r8_5 = *arg2
                            int64_t rbx_4 = sx.q(i) * 0x78
                            arg_18 = 1
                            (*(r8_5 + 0x670))(zmm0_2, *(arg1 + 0x78) + rbx_4, r8_5)
                            sub_140d3a3a0(&arg_20, arg2)
                            sub_14263f170(arg1 + 0x1f8, *(arg1 + 0x78) + rbx_4, &arg_20)
                            sub_142668c50(arg2, *(*(arg1 + 0x78) + rbx_4 + 0x30) == *(arg1 + 0x38))
                            sub_142662b80(arg2, arg1 + 0x3c0, zx.q(i))
                            arg_20 = arg2
                            sub_1405a9f90(arg1 + 0xc0, &arg_20)
                            sub_1405a7050(arg1 + 0x90, &arg_10)
                            (*(*arg2 + 0x638))(arg2)
                            break
                    
                    i += 1
                    r12_2 += 0x78
                while (i s< *(arg1 + 0x80))
            
            rbx_1 = ((zx.q(arg_18) << 1) + 3).d
            
            if (rbx_1 == 5)
                goto label_142664587
        else
            void* r8_3 = *(arg1 + 0x238)
            void* r9_1 = arg1 + 0x230
            float zmm1_1 = var_dc
            
            if (r8_3 != 0)
                r9_1 = r8_3
            
            int32_t rbx_2 = *(r9_1 + ((((sx.q(sx.d((int.d(fconvert.t(var_e4))).w) << 0x10)
                | sx.q((int.d(fconvert.t(var_e0))).w)) ^ sx.q(int.d(zmm1_1)))
                & (sx.q(*(arg1 + 0x240)) - 1)) << 2))
            
            if (rbx_2 == 0xffffffff)
                goto label_14266438d
            
            int64_t rax_26 = *(arg1 + 0x1f8)
            int64_t rsi_2
            
            while (true)
                rsi_2 = sx.q(rbx_2) << 6
                uint32_t zmm0_1[0x4] = *(rsi_2 + rax_26 + 4)
                void* rcx_18 = rsi_2 + rax_26
                zmm0_1[0] = zmm0_1[0] f- var_e4
                
                if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f>= 5f)
                    rax_26.b = 0
                else
                    zmm0_1 = *(rcx_18 + 8)
                    zmm0_1[0] = zmm0_1[0] f- var_e0
                    
                    if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f>= 5f)
                        rax_26.b = 0
                    else
                        zmm0_1 = *(rcx_18 + 0xc)
                        
                        if (zmm0_1[0] f< 0f || zmm1_1 < 0f)
                        label_142664364:
                            zmm1_1 = var_dc
                            
                            if (sub_141ded5a0(rcx_18, &var_e8).b == 0)
                                rax_26.b = 0
                            else
                                rax_26.b = 1
                        else
                            zmm0_1[0] = zmm0_1[0] f- zmm1_1
                            
                            if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f>= 5f))
                                goto label_142664364
                            
                            rax_26.b = 0
                
                if (rax_26.b != 0)
                    break
                
                rax_26 = *(arg1 + 0x1f8)
                rbx_2 = *(rax_26 + rsi_2 + 0x38)
                
                if (rbx_2 == 0xffffffff)
                    goto label_14266438d
            
            if (rbx_2 == 0xffffffff)
                goto label_14266438d
            
            void* rcx_23 = *(arg1 + 0x1f8)
            void* rcx_24 = rcx_23 + rsi_2
            
            if (rcx_23 == neg.q(rsi_2) || rcx_24 == -0x30)
                goto label_14266438d
            
            int64_t rax_33 = sub_140d3c6e0(rcx_24 + 0x30)
            
            if (rax_33 == 0)
                goto label_14266438d
            
            if (rax_33 == arg2)
                rbx_1 = 5
                goto label_142664587
            
            rbx_1 = 2

int64_t var_80

if (var_80 != 0)
    sub_140a74f90(var_80)

int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

if (arg1 != -0x1d0)
    LeaveCriticalSection(arg1 + 0x1d0)

return zx.q(rbx_1)
