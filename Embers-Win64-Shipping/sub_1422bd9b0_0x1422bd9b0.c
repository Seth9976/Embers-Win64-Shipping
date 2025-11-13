// 函数: sub_1422bd9b0
// 地址: 0x1422bd9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2
void* r13 = arg1

if (arg2[0xf].d == 0 || *(arg1 + 0x30) == 0)
    return 

void* rcx = &arg2[0xe]
int64_t rdi_1 = *arg2
int64_t* r14_1 = *rcx
int64_t* var_88_1 = r14_1
void* rax_2 = &r14_1[sx.q(arg2[0xf].d)]

if (r14_1 != rax_2)
    do
        int64_t* r14_2 = *r14_1
        
        if (zx.d(r14_2[9].w) s< *(r13 + 0x30))
            void* rax_4 = sub_140d1fd20(arg3, r14_2[0xa])
            
            if (rax_4 != 0)
                uint32_t rax_5 = zx.d(*(rax_4 + 0xb4))
                int64_t* rsi_3 = zx.q(r14_2[9].w) * 0x30 + *(r13 + 0x28)
                
                if (rax_5 == 0)
                    (*(*arg3 + 0x210))(arg3, rax_4, 0)
                else if (rax_5 == 1)
                    bool* r8_10 = sx.q(rsi_3[3].d) + rdi_1
                    
                    if (((*(rsi_3 + 0x2c) u>> 3).b & 1) == 0)
                        if (*((zx.q(*(rsi_3 + 0x1c)) << 5) + *(r13 + 0x38) + 0x1c) == 3)
                            void* rdx_16 = *rsi_3
                            char rcx_30 = r8_10[zx.q(*(rdx_16 + 0x79))]
                            bool var_d8
                            r8_10 = &var_d8
                            var_d8 = (*(rdx_16 + 0x7b) & rcx_30) != 0
                        
                        (*(*arg3 + 0x210))(arg3, rax_4, r8_10)
                        
                        if (((*(rsi_3 + 0x2c) u>> 4).b & 1) == 0)
                            void* rdx_19 = sx.q(*(rsi_3 + 0x14)) + arg3
                            int64_t rcx_33 = sx.q(rsi_3[3].d) + rdi_1
                            
                            if (rcx_33 != rdx_19)
                                if (not(test_bit(zx.q(r14_2[8].d), 0x1e)))
                                    (*(*r14_2 + 0xb0))(r14_2, rcx_33, rdx_19, zx.q(r14_2[7].d))
                                else
                                    memcpy(rcx_33, rdx_19, *(r14_2 + 0x3c) * r14_2[7].d)
                    else
                        (*(*arg3 + 0x210))(arg3, rax_4, r8_10)
                else if (rax_5 == 2)
                    char arg_20 = 0
                    char* var_50_1 = &arg_20
                    void*** (* var_58)() = j_sub_140597fc0
                    int64_t* rax_8 = sub_140a756e0(&var_58, &data_143958018) + 0x10
                    void*** (* var_48)() = j_sub_140597fc0
                    int64_t* var_d0 = rax_8
                    int64_t rcx_4 = *rax_8
                    int64_t rcx_5 = rax_8[2]
                    char var_b8_1 = 0
                    int64_t rcx_6 = rax_8[3]
                    rax_8[3] = &var_d0
                    int64_t* rax_9 = var_d0
                    rax_9[4].d += 1
                    char* var_40_1 = &arg_20
                    arg_20 = 0
                    void* rax_10 = sub_140a756e0(&var_48, &data_143958018)
                    uint64_t count = zx.q(*(rax_4 + 0xb6))
                    int64_t rdx_1 = 8
                    
                    if (count.d u>= 0x10)
                        rdx_1 = 0x10
                    
                    int64_t* rcx_8 = rax_10 + 0x10
                    int64_t r8_1 = not.q(rdx_1 - 1)
                    int64_t r12_4 = (*rcx_8 - 1 + rdx_1) & r8_1
                    int64_t rax_11 = r12_4 + count
                    
                    if (rax_11 u> rcx_8[1])
                        int32_t rdx_2 = 8
                        
                        if (count.d u>= 0x10)
                            rdx_2 = 0x10
                        
                        sub_140b0e3d0(rcx_8, rdx_2 + count.d)
                        r12_4 = (*rcx_8 + rdx_1 - 1) & r8_1
                        rax_11 = r12_4 + count
                    
                    *rcx_8 = rax_11
                    memset(r12_4, 0, count)
                    int64_t* rax_12 = *(rax_4 + 0x50)
                    void* var_a0 = rax_4
                    int32_t var_90_1 = 0xffffffff
                    int16_t var_8c_1 = 0x101
                    char var_8a_1 = 0
                    sub_1406328d0(&var_a0)
                    int64_t rdx_7 = sx.q(rsi_3[3].d) + rdi_1
                    int64_t rcx_12 = sx.q(*(rax_12 + 0x4c)) + r12_4
                    
                    if (rcx_12 != rdx_7)
                        if (not(test_bit(zx.q(rax_12[8].d), 0x1e)))
                            (*(*rax_12 + 0xb0))(rax_12, rcx_12, rdx_7, zx.q(rax_12[7].d))
                        else
                            memcpy(rcx_12, rdx_7, *(rax_12 + 0x3c) * rax_12[7].d)
                    
                    int64_t* rax_17 = rax_12[4]
                    sub_1406328d0(&var_a0)
                    int32_t var_a8
                    sub_1405ba560(&arg2[0x10], &var_a8, r14_2)
                    int64_t rax_18 = sx.q(var_a8)
                    int64_t rcx_18
                    
                    if (rax_18.d == 0xffffffff)
                        rcx_18 = 0
                    else
                        rcx_18 = (rax_18 << 5) + arg2[0x10]
                    
                    int64_t rdx_10 = rcx_18 + 8
                    
                    if (rcx_18 == 0)
                        rdx_10 = 0
                    
                    int64_t r10_2 = sx.q(*(rax_17 + 0x4c)) + r12_4
                    
                    if (r10_2 != rdx_10)
                        if (not(test_bit(zx.q(rax_17[8].d), 0x1e)))
                            (*(*rax_17 + 0xb0))(rax_17, r10_2, rdx_10, zx.q(rax_17[7].d))
                        else
                            memcpy(r10_2, rdx_10, *(rax_17 + 0x3c) * rax_17[7].d)
                    
                    (*(*arg3 + 0x210))(arg3, rax_4, r12_4)
                    
                    if (var_b8_1 == 0)
                        int64_t* rax_24 = var_d0
                        char var_b8_2 = 1
                        rax_24[4].d -= 1
                        int64_t* rcx_22 = var_d0
                        
                        if (rcx_5 != rcx_22[2])
                            sub_140b16b40(rcx_22, rcx_5)
                            rcx_22 = var_d0
                        
                        *rcx_22 = rcx_4
                        var_d0[3] = rcx_6
                        int64_t var_c8_2 = 0
                        
                        if (var_b8_2 == 0)
                            int64_t* rax_27 = var_d0
                            char var_b8_3 = 1
                            rax_27[4].d -= 1
                            int64_t* rcx_24 = var_d0
                            
                            if (rcx_5 != rcx_24[2])
                                sub_140b16b40(rcx_24, rcx_5)
                                rcx_24 = var_d0
                            
                            *rcx_24 = var_c8_2
                            var_d0[3] = rcx_6
                    
                    r13 = arg1
        
        r14_1 = &var_88_1[1]
        var_88_1 = r14_1
    while (r14_1 != rax_2)
    
    rsi = arg2

bool cond:1_1 = *(rcx + 0xc) == 0
*(rcx + 8) = 0

if (not(cond:1_1))
    sub_1405c5570(rcx, 0)

sub_141837120(&rsi[0x10], 0)
