// 函数: sub_141f682a0
// 地址: 0x141f682a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* rbp = arg2

if ((*(arg1 + 0x44c) & 0x40) != 0)
    return 

void* rcx = arg1[0x88]

if (rcx == 0)
    return 

arg2.b = 1

if (sub_142368cd0(rcx, arg2.b, 0xffffffff).b == 0)
    return 

(*(*arg1 + 0x8a8))(arg1)
void* r8 = &arg1[0x8e]
int128_t zmm3
zmm3.d = arg4.d f* *(arg1 + 0x45c)

if (*(arg1 + 0x14f) != 0)
    r8 = nullptr

int128_t zmm7_1
uint128_t zmm8_1
zmm7_1, zmm8_1 = sub_141f1b870(arg1, rbp, r8, zmm3, arg3)
int32_t rcx_3 = arg1[0x8d].d
int32_t r13_1 = 0
uint128_t zmm6_1

if (rcx_3 s> 0)
    int128_t* r12_1 = nullptr
    int128_t var_48_1 = zmm7_1
    
    do
        void* rax_2 = arg1[0x88]
        int64_t rsi_1 = arg1[0x8c]
        void* const rsi_2
        void* rdi_1
        
        if (rax_2 == 0)
            rdi_1 = nullptr
            rsi_2 = nullptr
        else
            void* rax_3 = *(rax_2 + 0x50)
            
            if (rax_3 == 0 || (*(rax_3 + 0x5c) == 0 && *(rax_3 + 8) != rcx_3))
                rdi_1 = nullptr
                rsi_2 = nullptr
            else
                rdi_1 = *(r12_1 + rsi_1 + 0x18)
                
                if (rdi_1 != 0)
                label_141f68420:
                    int64_t* rcx_7 = *rdi_1
                    
                    if (rcx_7 == 0)
                        rsi_2 = nullptr
                    else
                        int64_t rdx_2 = *rcx_7
                        rsi_2 = (*(rdx_2 + 0x38))(rcx_7, rdx_2)
                else
                    void* rcx_4 = arg1[0x14]
                    
                    if (rcx_4 == 0)
                        rdi_1 = nullptr
                        rsi_2 = nullptr
                    else
                        void* rax_4 = sub_141dc9840(rcx_4)
                        
                        if (rax_4 == 0)
                            rdi_1 = nullptr
                            rsi_2 = nullptr
                        else
                            void* rcx_5 = *(rax_4 + 0xb8)
                            
                            if (rcx_5 == 0)
                                rdi_1 = nullptr
                                rsi_2 = nullptr
                            else
                                void* rax_5 = sub_1420f98f0(rcx_5)
                                void* rcx_6
                                
                                if (rax_5 != 0)
                                    rcx_6 = *(rax_5 + 0x1e0)
                                
                                if (rax_5 != 0 && rcx_6 != 0)
                                label_141f6840e:
                                    float var_68[0x4] = *(r12_1 + rsi_1)
                                    void* rax_6 = sub_1420fa4c0(rcx_6, &var_68)
                                    rdi_1 = rax_6
                                    
                                    if (rax_6 != 0)
                                        goto label_141f68420
                                    
                                    rsi_2 = nullptr
                                else
                                    rcx_6 = *(rax_4 + 0x1e0)
                                    
                                    if (rcx_6 != 0)
                                        goto label_141f6840e
                                    
                                    rdi_1 = nullptr
                                    rsi_2 = nullptr
        
        int32_t rbp_1
        rbp_1.b = sub_1423d2320(*(rbp + 0x2c)) == 0
        float zmm0[0x4]
        int64_t zmm1_1
        
        if (rsi_2 != 0 && sub_1420e6790(rsi_2, rbp_1) != 0)
            zmm1_1 = *(rsi_2 + 0xd0)
            
            if (not(zmm1_1.d f<= 9.99999994e-09f))
                zmm0 = *(rsi_2 + 0xd4)
                
                if (not(zmm0[0] <= 9.99999994e-09f))
                    void* rax_10 = arg1[0x88]
                    float temp0_1[0x4] = _mm_min_ss(zmm0[0], zmm1_1.d)
                    zmm6_1.d = zmm8_1.d f* *(rax_10 + 0x78)
                    zmm6_1.d = zmm6_1.d f/ temp0_1[0]
                    int64_t* rax_11 = sub_1419f4150(0x30, arg3)
                    
                    if (rax_11 != 0)
                        *rax_11 = sub_1420e4c50(rsi_2, rbp_1)
                        *(rax_11 + 8) = *(arg1 + 0x100)
                        rax_11[3] = arg1[0x22]
                        int32_t rax_13 = arg1[0x23].d
                        *(rax_11 + 0x2c) &= 0xfffffffe
                        *(rax_11 + 0x24) = zmm6_1.d
                        rax_11[4].d = rax_13
                        rax_11[5].d = 0xffff0000
                    
                    int64_t* rax_14 = sub_1419f4150(0x30, arg3)
                    
                    if (rax_14 != 0)
                        *rax_14 = sub_1405f7040(rsi_2)
                        *(rax_14 + 8) = *(arg1 + 0x100)
                        rax_14[3] = arg1[0x22]
                        int32_t rcx_12 = arg1[0x23].d
                        *(rax_14 + 0x2c) &= 0xfffffffe
                        *(rax_14 + 0x24) = zmm6_1.d
                        rax_14[4].d = rcx_12
                        rax_14[5].d = 0xffff0000
                    
                    int64_t* rax_16 = sub_1419f4150(0x30, arg3)
                    
                    if (rax_16 != 0)
                        *rax_16 = sub_140963350(rsi_2)
                        *(rax_16 + 8) = *(arg1 + 0x100)
                        rax_16[3] = arg1[0x22]
                        int32_t rcx_14 = arg1[0x23].d
                        *(rax_16 + 0x2c) &= 0xfffffffe
                        *(rax_16 + 0x24) = zmm6_1.d
                        rax_16[4].d = rcx_14
                        rax_16[5].d = 0xffff0000
        
        if (rdi_1 != 0)
            int64_t* rcx_15 = *(rdi_1 + 8)
            
            if (rcx_15 != 0)
                void* rax_19 = (*(*rcx_15 + 0x30))(rcx_15)
                
                if (rax_19 != 0 && *(rax_19 + 0x20) != 0)
                    zmm1_1 = *(rax_19 + 0x28)
                    
                    if (not(zmm1_1.d f<= 9.99999994e-09f))
                        zmm0 = *(rax_19 + 0x2c)
                        
                        if (not(zmm0[0] <= 9.99999994e-09f))
                            void* rax_20 = arg1[0x88]
                            float temp0_2[0x4] = _mm_min_ss(zmm0[0], zmm1_1.d)
                            zmm6_1.d = zmm8_1.d f* *(rax_20 + 0x78)
                            zmm6_1.d = zmm6_1.d f/ temp0_2[0]
                            int64_t* rax_21 = sub_1419f4150(0x30, arg3)
                            
                            if (rax_21 != 0)
                                *rax_21 = sub_1408d7580(rax_19)
                                *(rax_21 + 8) = *(arg1 + 0x100)
                                rax_21[3] = arg1[0x22]
                                int32_t rcx_17 = arg1[0x23].d
                                *(rax_21 + 0x2c) &= 0xfffffffe
                                *(rax_21 + 0x24) = zmm6_1.d
                                rax_21[4].d = rcx_17
                                rax_21[5].d = 0xffff0000
        
        rcx_3 = arg1[0x8d].d
        r13_1 += 1
        rbp = arg_10
        r12_1 = &r12_1[9]
    while (r13_1 s< rcx_3)

if (sub_1423b27f0(arg1[0x88]).b == 0)
    return 

int32_t rdx_9 = arg1[0x86].d

if (rdx_9 s> 0)
    zmm6_1 = _mm_cvtepi32_ps(zx.o(rdx_9 - *(*(arg1[0x88] + 0x50) + 8) - 1))
else if ((arg1[0x11].b & 1) == 0)
    zmm6_1 = zx.o(0)
else
    zmm6_1 = arg1[0x23].d
    zmm6_1.d = zmm6_1.d f+ zmm6_1.d

int64_t rdi_4 = sx.q(arg3[1].d)
uint32_t rax = (rdi_4 + 1).d
arg3[1].d = rax

if (rax s> *(arg3 + 0xc))
    sub_1405c4f50(arg3)

int64_t rcx_22 = rdi_4 * 0x30
int64_t* rcx_23 = rcx_22 + *arg3

if (rcx_22 == neg.q(*arg3))
    return 

*rcx_23 = arg1[0x88]
*(rcx_23 + 8) = *(arg1 + 0x100)
rcx_23[3] = arg1[0x22]
rax = arg1[0x23].d
*(rcx_23 + 0x2c) |= 1
*(rcx_23 + 0x24) = zmm6_1.d
rcx_23[4].d = rax
rcx_23[5].d = 0xffff0000
