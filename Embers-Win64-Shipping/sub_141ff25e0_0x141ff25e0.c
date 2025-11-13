// 函数: sub_141ff25e0
// 地址: 0x141ff25e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)

if (rsi.d == 0)
    return 0

int32_t rbx = 0
int32_t r15 = 0
int32_t var_a8 = 0
uint64_t rax_1
void* r8
rax_1, r8 = sub_141ff9600(arg2, *arg1, arg3)
float zmm9 = 9.99999975e-05f
uint128_t zmm10 = 0x3f000000
int64_t rcx_1 = rsi
int64_t r12
r12.b = rax_1.b == 0
int64_t arg_20 = rcx_1
int64_t rbp = 0

do
    int64_t r14_1 = sx.q(r15)
    rbp += 1
    r15 += 1
    
    if (rbp s< rcx_1)
        int64_t rbx_2 = rbp << 4
        
        do
            int64_t rsi_1 = *arg1
            uint64_t rdx_1 = *(rbx_2 + rsi_1)
            
            if (rdx_1 == 0)
                rax_1.b = 0
            else if ((*(rdx_1 + 0x30) & 6) != 0)
                rax_1 = rdx_1
                
                if (*(rdx_1 + 0x14) == 1)
                    void* rcx_2 = *arg2
                    
                    if ((*(rcx_2 + 0x28) & 8) != 0)
                        arg2[1].d
                        void* var_b0_1 = rcx_2 + 0x2c
                        int64_t var_b8_1 = arg2[3]
                        r8, zmm9, zmm10 = sub_141ffa9a0(rcx_2, rdx_1, r8, arg2[2])
                        rdx_1 = *(rbx_2 + rsi_1)
                        rax_1 = rdx_1
                
                char rcx_3 = *(rax_1 + 0x80)
                
                if (rcx_3 == 2)
                    uint128_t zmm6_1 = *(rax_1 + 0x90)
                    void* rax_4 = arg2[3]
                    uint64_t var_a0
                    int32_t rcx_4
                    uint128_t zmm0_1
                    uint128_t zmm1_1
                    uint128_t zmm3_1
                    float zmm4_1
                    uint128_t zmm5_1
                    uint128_t zmm7_1
                    uint128_t zmm8_1
                    
                    if (zmm6_1.d f>= zmm9)
                        zmm8_1 = *(rax_4 + 0xc8)
                        zmm7_1 = *(rax_4 + 0xc4)
                        zmm0_1.d = zmm8_1.d f* zmm8_1.d
                        zmm1_1.d = zmm7_1.d f* zmm7_1.d
                        zmm1_1.d = zmm1_1.d f+ zmm0_1.d
                        zmm0_1.d = zmm6_1.d f* zmm6_1.d
                        
                        if (zmm1_1.d f<= zmm0_1.d)
                            rcx_4 = *(rax_4 + 0xcc)
                            var_a0 = *(rax_4 + 0xc4)
                        else
                            zmm4_1 = zmm10.d
                            zmm5_1 = _mm_rsqrt_ss(zmm1_1.d, zmm1_1.d)
                            zmm3_1.d = zmm1_1.d f* zmm4_1
                            zmm0_1.d = zmm5_1.d f* zmm5_1.d
                            zmm1_1.d = zmm3_1.d f* zmm0_1.d
                            zmm0_1.d = zmm5_1.d f* (zmm4_1 f- zmm1_1.d)
                            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                            zmm1_1.d = zmm5_1.d f* zmm5_1.d
                            zmm3_1.d = zmm3_1.d f* zmm1_1.d
                            zmm0_1.d = zmm5_1.d f* (zmm4_1 f- zmm3_1.d)
                            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                            zmm5_1.d = zmm5_1.d f* zmm6_1.d
                            zmm7_1.d = zmm7_1.d f* zmm5_1.d
                            zmm8_1.d = zmm8_1.d f* zmm5_1.d
                            var_a0.d = zmm7_1.d
                            var_a0:4.d = zmm8_1.d
                            rcx_4 = (*(rax_4 + 0xcc)).d
                    else
                        var_a0 = 0
                        rcx_4 = (*(rax_4 + 0xcc)).d
                    
                    *(rax_4 + 0xc4) = var_a0
                    *(rax_4 + 0xcc) = rcx_4
                    void* rcx_5 = arg2[3]
                    *(rcx_5 + 0xcc) =
                        __minss_xmmss_memss((*(*(rbx_2 + rsi_1) + 0x90)).d, *(rcx_5 + 0xcc)).d
                    void* rcx_6 = *arg2
                    
                    if ((*(rcx_6 + 0x28) & 8) != 0)
                        zmm6_1 = *(*(rbx_2 + rsi_1) + 0x90)
                        uint64_t var_94
                        int32_t rax_6
                        
                        if (zmm6_1.d f>= zmm9)
                            zmm8_1 = *(rcx_6 + 0x30)
                            zmm7_1 = *(rcx_6 + 0x2c)
                            zmm0_1.d = zmm8_1.d f* zmm8_1.d
                            zmm1_1.d = zmm7_1.d f* zmm7_1.d
                            zmm1_1.d = zmm1_1.d f+ zmm0_1.d
                            zmm0_1.d = zmm6_1.d f* zmm6_1.d
                            
                            if (zmm1_1.d f<= zmm0_1.d)
                                rax_6 = *(rcx_6 + 0x34)
                                var_94 = *(rcx_6 + 0x2c)
                            else
                                zmm4_1 = zmm10.d
                                zmm5_1 = _mm_rsqrt_ss(zmm1_1.d, zmm1_1.d)
                                zmm3_1.d = zmm1_1.d f* zmm4_1
                                zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                zmm1_1.d = zmm3_1.d f* zmm0_1.d
                                zmm0_1.d = zmm5_1.d f* (zmm4_1 f- zmm1_1.d)
                                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                zmm1_1.d = zmm5_1.d f* zmm5_1.d
                                zmm3_1.d = zmm3_1.d f* zmm1_1.d
                                zmm0_1.d = zmm5_1.d f* (zmm4_1 f- zmm3_1.d)
                                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                rax_6 = (*(rcx_6 + 0x34)).d
                                zmm5_1.d = zmm5_1.d f* zmm6_1.d
                                zmm7_1.d = zmm7_1.d f* zmm5_1.d
                                zmm8_1.d = zmm8_1.d f* zmm5_1.d
                                var_94.d = zmm7_1.d
                                var_94:4.d = zmm8_1.d
                        else
                            rax_6 = (*(rcx_6 + 0x34)).d
                            var_94 = 0
                        
                        *(rcx_6 + 0x2c) = var_94
                        *(rcx_6 + 0x34) = rax_6
                        void* rcx_7 = *arg2
                        *(rcx_7 + 0x34) =
                            __minss_xmmss_memss((*(*(rbx_2 + rsi_1) + 0x90)).d, *(rcx_7 + 0x34)).d
                else if (rcx_3 == 1)
                    void* rcx_8 = arg2[3]
                    *(rcx_8 + 0xc4) = *(rdx_1 + 0x84)
                    *(rcx_8 + 0xcc) = *(rdx_1 + 0x8c)
                    void* rdx_2 = *arg2
                    
                    if ((*(rdx_2 + 0x28) & 8) != 0)
                        rax_1 = *(rbx_2 + rsi_1)
                        int32_t rcx_9 = *(rax_1 + 0x8c)
                        *(rdx_2 + 0x2c) = *(rax_1 + 0x84)
                        *(rdx_2 + 0x34) = rcx_9
                
                rcx_1 = arg_20
                rax_1.b = 0
            else
                rax_1.b = 1
            
            if (r12.b != rax_1.b)
                break
            
            r15 += 1
            rbp += 1
            rbx_2 += 0x10
        while (rbp s< rcx_1)
        
        rbx = var_a8
    
    int32_t i_1 = r15 - r14_1.d
    
    if (r12.b != 0)
        if (rbx != r14_1.d)
            int64_t rax_7 = *arg1
            rax_1, r8 = memmove((sx.q(rbx) << 4) + rax_7, (r14_1 << 4) + rax_7, i_1 << 4)
        
        var_a8 = rbx + i_1
        rcx_1 = arg_20
    else if (i_1 != 0)
        int64_t* r14_4 = (r14_1 << 4) + 8 + *arg1
        int32_t i
        
        do
            int64_t* rbx_4 = *r14_4
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    rax_1, r8 = (**rbx_4)(rbx_4)
                    int32_t temp2_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        rax_1, r8 = (*(*rbx_4 + 8))(rbx_4, 1)
            
            r14_4 = &r14_4[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx_1 = arg_20
    
    rbx = var_a8
    r12.b ^= 1
while (rbp s< rcx_1)

arg1[1].d = rbx
return zx.q(rsi.d - rbx)
