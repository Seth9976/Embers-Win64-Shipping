// 函数: sub_142233530
// 地址: 0x142233530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1
void* rsi = arg2
sub_1409d9c00(arg1 + 0x28)
int64_t* r14 = rsi + 0x20
int64_t* var_68 = r14

if (*(rsi + 0x10) s> 0)
    int32_t rdx = 0
    int64_t* r15
    int64_t* var_40_1 = r15
    
    while (true)
        uint64_t rax
        
        if (rdx s< 0 || rdx s>= *(rdi + 0x20))
            rax.b = 0
        else
            rax.b = 1
        
        if (rax.b == 0)
            break
        
        int64_t* rax_2 = *(*(rdi + 0x18) + (sx.q(rdx) << 3))
        int32_t var_88
        sub_140865c40(rdi + 0xf8, &var_88, rax_2)
        int64_t rax_3 = sx.q(var_88)
        void* rbp_1
        
        if (rax_3.d != 0xffffffff)
            rbp_1 = *(rdi + 0xf8) + rax_3 * 0x18
        
        int64_t rbp_3
        
        if (rax_3.d == 0xffffffff || rbp_1 == 0 || rbp_1 == -8)
            rbp_3 = 0
        else
            rbp_3 = *(rbp_1 + 8)
        
        int32_t var_84
        sub_1405ba560(r14, &var_84, rbp_3)
        rax = sx.q(var_84)
        
        if (rax.d != 0xffffffff)
            uint64_t rcx_5 = rax << 5
            void* rcx_6 = rcx_5 + *r14
            
            if (rcx_5 != neg.q(*r14) && rcx_6 != -8)
                int32_t* r12_1 = *(rcx_6 + 8)
                rax = &r12_1[sx.q(*(rcx_6 + 0x10))]
                
                if (r12_1 != rax)
                    do
                        uint8_t arg_18
                        int64_t* rdi_3 = (sx.q(sub_141d36a50(*r12_1, &arg_18)) << 7) + *(rsi + 8)
                        int64_t rsi_1
                        
                        if (arg_18 == 0)
                            rsi_1 = rdi_3[0xf]
                        else
                            rsi_1 = rdi_3[0xe]
                        
                        int64_t rbx_2
                        
                        if (*(arg1 + 0x30) == *(arg1 + 0x5c))
                        label_1422336f1:
                            int64_t rbx_1 = sx.q(*(rdi + 0x80))
                            r15.b = 1
                            int32_t rax_14 = (rbx_1 + 1).d
                            *(rdi + 0x80) = rax_14
                            
                            if (rax_14 s> *(rdi + 0x84))
                                sub_1405fde00(rdi + 0x78)
                            
                            rbx_2 = rbx_1 * 0x68
                            memset(*(rdi + 0x78) + rbx_2, 0, 0x68)
                        else
                            void* rdx_5 = *(arg1 + 0x68)
                            void* r8_3 = arg1 + 0x60
                            
                            if (rdx_5 != 0)
                                r8_3 = rdx_5
                            
                            int32_t rax_13 = *(r8_3 + (((sx.q((rsi_1 << 0x12).d) ^ sx.q(rbp_3.d))
                                & (sx.q(*(arg1 + 0x70)) - 1)) << 2))
                            
                            if (rax_13 == 0xffffffff)
                                goto label_1422336f1
                            
                            int64_t rdx_6 = *(arg1 + 0x28)
                            int64_t r9_1
                            
                            while (true)
                                r9_1 = sx.q(rax_13)
                                int64_t rcx_13 = r9_1 << 5
                                
                                if (*(rcx_13 + rdx_6) != rbp_3 || *(rcx_13 + rdx_6 + 8) != rsi_1)
                                    r8_3.b = 0
                                else
                                    r8_3.b = 1
                                
                                if (r8_3.b != 0)
                                    break
                                
                                rax_13 = *(rcx_13 + rdx_6 + 0x18)
                                
                                if (rax_13 == 0xffffffff)
                                    goto label_1422336f1
                            
                            if (rax_13 == 0xffffffff)
                                goto label_1422336f1
                            
                            int64_t r9_2 = r9_1 << 5
                            void* r9_3 = r9_2 + rdx_6
                            
                            if (r9_2 == neg.q(rdx_6) || r9_3 == -0x10)
                                goto label_1422336f1
                            
                            r15.b = 0
                            rbx_2 = sx.q(*(r9_3 + 0x10)) * 0x68
                        
                        char* rbx_3 = rbx_2 + *(rdi + 0x78)
                        float zmm4_1 = *(rdi_3 + 0x1c)
                        uint128_t zmm3 = rdi_3[3].d
                        uint128_t zmm0_1
                        zmm0_1.d = zmm3.d f* *(rdi_3 + 0xc)
                        float var_58_1 = *(rdi_3 + 0x14)
                        uint128_t zmm5_1 = rdi_3[4].d
                        uint128_t zmm1
                        zmm1.d = zmm5_1.d f* *(rdi_3 + 0x14)
                        float zmm2 = zmm4_1 f* rdi_3[2].d f+ zmm0_1.d f+ zmm1.d
                        zmm1 = zx.o(*(rdi_3 + 0xc))
                        zmm4_1 = zmm4_1 * zmm2
                        zmm3.d = zmm3.d f* zmm2
                        zmm5_1.d = zmm5_1.d f* zmm2
                        zmm0_1.d = _mm_shuffle_ps(zmm1, zmm1, 0x55).d f- zmm4_1
                        zmm1.d = zmm1.d f- zmm3.d
                        zmm3.d = zmm3.d f+ *(rbx_3 + 0x50)
                        zmm2 = var_58_1 f- zmm5_1.d
                        zmm4_1 = zmm4_1 f+ *(rbx_3 + 0x54)
                        zmm5_1.d = zmm5_1.d f+ *(rbx_3 + 0x58)
                        *(rbx_3 + 0x50) = zmm3.d
                        *(rbx_3 + 0x54) = zmm4_1
                        *(rbx_3 + 0x58) = zmm5_1.d
                        zmm1.d = zmm1.d f+ *(rbx_3 + 0x5c)
                        zmm0_1.d = zmm0_1.d f+ *(rbx_3 + 0x60)
                        zmm2 = zmm2 f+ *(rbx_3 + 0x64)
                        *(rbx_3 + 0x5c) = zmm1.d
                        *(rbx_3 + 0x60) = zmm0_1.d
                        *(rbx_3 + 0x64) = zmm2
                        
                        if (r15.b != 0)
                            int32_t var_80
                            sub_140865c40(arg1 + 0xa8, &var_80, rsi_1)
                            int64_t rax_15 = sx.q(var_80)
                            int64_t* rsi_4
                            
                            if (rax_15.d == 0xffffffff)
                                rsi_4 = nullptr
                            else
                                void* rsi_2 = *(arg1 + 0xa8) + rax_15 * 0x18
                                
                                if (rsi_2 == 0 || rsi_2 == -8)
                                    rsi_4 = nullptr
                                else
                                    rsi_4 = *(rsi_2 + 8)
                                    
                                    if (rsi_4 == 0)
                                        rsi_4 = nullptr
                                    else
                                        void* rax_17 = sub_142577430()
                                        void* rdx_10 = rsi_4[2]
                                        int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                                        
                                        if (rax_18.d s> *(rdx_10 + 0x38)
                                                || *(*(rdx_10 + 0x30) + (rax_18 << 3))
                                                != rax_17 + 0x30)
                                            rsi_4 = nullptr
                            
                            *rbx_3 = 1
                            sub_142234b00(&rbx_3[4], rax_2)
                            sub_142234b00(&rbx_3[0x20], rsi_4)
                            int64_t rsi_5 = sx.q(*(rbx_3 + 0x48))
                            int32_t rax_20 = (rsi_5 + 1).d
                            *(rbx_3 + 0x48) = rax_20
                            
                            if (rax_20 s> *(rbx_3 + 0x4c))
                                sub_1405c4f50(&rbx_3[0x40])
                            
                            int64_t* rcx_24 = rsi_5 * 0x30 + *(rbx_3 + 0x40)
                            __builtin_memset(rcx_24, 0, 0x30)
                            *(rcx_24 + 0xc) = rdi_3[3]
                            *(rcx_24 + 0x14) = rdi_3[4].d
                            *rcx_24 = *rdi_3
                            rcx_24[1].d = rdi_3[1].d
                            rcx_24[3].d = *(rdi_3 + 0x5c)
                        
                        rsi = arg2
                        r12_1 = &r12_1[1]
                    while (r12_1 != rax)
                    
                    rdi = arg1
                    r14 = var_68
        
        rdx += 1

char* rdi_4 = *(rdi + 0x78)
void* rbp_5 = sx.q(*(rdi + 0x80)) * 0x68 + rdi_4

if (rdi_4 != rbp_5)
    int32_t* rbx_4 = &rdi_4[4]
    
    do
        if (*rdi_4 != 0 && sub_140d3e110(rbx_4) != 0)
            int64_t* rax_26 = sub_140d3c6e0(rbx_4)
            (*(*rax_26 + 0x488))(rax_26, rbx_4, &rbx_4[7], &rbx_4[0xf])
        
        rdi_4 = &rdi_4[0x68]
        rbx_4 = &rbx_4[0x1a]
    while (rdi_4 != rbp_5)

int32_t result = *(rdi + 0x84)
void* rdi_5 = *(rdi + 0x78)
int32_t i_2 = *(rdi + 0x80)

if (result s>= 0)
    if (i_2 != 0)
        int64_t* rdi_6 = rdi_5 + 0x40
        int32_t i
        
        do
            int64_t rcx_28 = *rdi_6
            
            if (rcx_28 != 0)
                result = sub_140a74f90(rcx_28)
            
            rdi_6 = &rdi_6[0xd]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    *(rdi + 0x80) = 0
    return result

if (i_2 != 0)
    void* rdi_7 = rdi_5 + 0x40
    int32_t i_1
    
    do
        int64_t rcx_29 = *rdi_7
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        rdi_7 += 0x68
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    result = *(rdi + 0x84)

*(rdi + 0x80) = 0

if (result == 0)
    return result

return sub_1405fdf40(rdi + 0x78, 0)
