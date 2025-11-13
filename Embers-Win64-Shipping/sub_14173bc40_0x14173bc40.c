// 函数: sub_14173bc40
// 地址: 0x14173bc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int32_t rdx_5 = *(arg1 + 0x40) * *(arg1 + 0x3c) * *(arg1 + 0x68) * *(arg1 + 0x38) + *(arg1 + 0x78)
    + *(arg1 + 0x18)

if (rdx_5 s> *(arg2 + 0xc))
    sub_1405a52a0(arg2, rdx_5)

sub_14153eaf0(arg2, rbx + 0x10)
int64_t* rsi = *(rbx + 0x70)
int64_t result = sx.q(*(rbx + 0x78))
void* r15_1 = result * 0x58 + rsi
int128_t zmm0_1
int128_t zmm1_1
int64_t zmm2
int64_t zmm3
int64_t zmm4_1

if (rsi != r15_1)
    int64_t* rdi_1 = rsi + 0xc
    
    do
        int64_t rbp_1 = sx.q(arg2[1].d)
        zmm0_1 = *(rdi_1 + 0xc)
        int32_t r12_1 = rsi[1].d
        zmm1_1 = *(rdi_1 + 0x1c)
        int32_t rax = (rbp_1 + 1).d
        int32_t r13_1 = rdi_1[1].d
        zmm2 = *(rdi_1 + 0x2c)
        zmm3 = *rsi
        zmm4_1 = *rdi_1
        arg2[1].d = rax
        
        if (rax s> *(arg2 + 0xc))
            sub_1405c4fe0(arg2)
        
        rsi = &rsi[0xb]
        rdi_1 = &rdi_1[0xb]
        result = (rbp_1 << 6) + *arg2
        *result = zmm0_1
        *(result + 0x10) = zmm1_1
        *(result + 0x20) = zmm2
        *(result + 0x28) = zmm3
        *(result + 0x34) = zmm4_1
        *(result + 0x30) = r12_1
        *(result + 0x3c) = r13_1
    while (rsi != r15_1)

int32_t i = 0

if (*(rbx + 0x38) s> 0)
    do
        int32_t j = 0
        
        if (*(rbx + 0x3c) s> 0)
            do
                int32_t k = 0
                
                if (*(rbx + 0x40) s> 0)
                    do
                        int64_t* rax_10 =
                            (sx.q((*(rbx + 0x54) * i + j) * *(rbx + 0x58) + k) << 4) + *(rbx + 0x60)
                        int64_t* rdi_2 = *rax_10
                        result = sx.q(rax_10[1].d)
                        void* r15_3 = result * 0x58 + rdi_2
                        
                        if (rdi_2 != r15_3)
                            int32_t* rbx_1 = &rdi_2[9]
                            
                            do
                                if (rbx_1[-2] == i && rbx_1[-1] == j && *rbx_1 == k)
                                    int64_t rbp_2 = sx.q(arg2[1].d)
                                    zmm0_1 = *(rbx_1 - 0x30)
                                    int64_t arg_10
                                    arg_10.d = rdi_2[1].d
                                    zmm1_1 = *(rbx_1 - 0x20)
                                    int64_t arg_18
                                    arg_18.d = rbx_1[-0xd]
                                    int32_t rax_13 = (rbp_2 + 1).d
                                    zmm2 = *(rbx_1 - 0x10)
                                    zmm3 = *rdi_2
                                    zmm4_1 = *(rbx_1 - 0x3c)
                                    arg2[1].d = rax_13
                                    int128_t var_88
                                    var_88.q = zmm3
                                    int128_t var_78
                                    var_78.q = zmm4_1
                                    
                                    if (rax_13 s> *(arg2 + 0xc))
                                        sub_1405c4fe0(arg2)
                                        zmm3 = var_88.q
                                        zmm4_1 = var_78.q
                                    
                                    result = (rbp_2 << 6) + *arg2
                                    *result = zmm0_1
                                    *(result + 0x10) = zmm1_1
                                    *(result + 0x20) = zmm2
                                    *(result + 0x28) = zmm3
                                    *(result + 0x30) = arg_10.d
                                    *(result + 0x34) = zmm4_1
                                    *(result + 0x3c) = arg_18.d
                                
                                rdi_2 = &rdi_2[0xb]
                                rbx_1 = &rbx_1[0x16]
                            while (rdi_2 != r15_3)
                            
                            rbx = arg1
                        
                        k += 1
                    while (k s< *(rbx + 0x40))
                
                j += 1
            while (j s< *(rbx + 0x3c))
        
        i += 1
    while (i s< *(rbx + 0x38))

return result
