// 函数: sub_1426e7790
// 地址: 0x1426e7790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t result
    result.b = 0
    return result

int32_t rbx = 0
int64_t* var_48 = nullptr
int32_t var_40 = 0
int64_t var_38 = 0
int64_t var_30 = 0
char rax
int128_t zmm6
rax, zmm6 = sub_1426e7220(arg1, arg2, &var_48)

if (rax != 0 && var_48 != 0)
    void* rax_1 = sub_14273b6f0()
    
    if (rax_1 != 0)
        int64_t* rdx = var_48
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= rdx[7].d && *(rdx[6] + (rax_2 << 3)) == rax_1 + 0x30 && rdx != 0)
            void* rax_4 = sub_14273b020()
            int64_t* rdx_1 = var_48
            void* const rax_8
            
            if (rdx_1 == 0)
                rax_8 = nullptr
            else
                void* rax_5 = sub_14273b6f0()
                rdx_1 = var_48
                
                if (rax_5 == 0)
                    rax_8 = nullptr
                else
                    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                    
                    if (rax_6.d s> rdx_1[7].d)
                        rax_8 = nullptr
                    else
                        rax_8 = rdx_1
                        
                        if (*(rdx_1[6] + (rax_6 << 3)) != rax_5 + 0x30)
                            rax_8 = nullptr
            
            if (rax_4 != 0)
                int64_t rcx_2 = sx.q(*(rax_4 + 0x38))
                
                if (rcx_2.d s<= *(rax_8 + 0x38)
                        && *(*(rax_8 + 0x30) + (rcx_2 << 3)) == rax_4 + 0x30)
                    int64_t* rsi_3
                    
                    if (rdx_1 == 0)
                        rsi_3 = nullptr
                    else
                        void* rax_10 = sub_14273b6f0()
                        
                        if (rax_10 == 0)
                            rsi_3 = nullptr
                        else
                            rsi_3 = var_48
                            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                            
                            if (rax_11.d s> rsi_3[7].d
                                    || *(rsi_3[6] + (rax_11 << 3)) != rax_10 + 0x30)
                                rsi_3 = nullptr
                    
                    int64_t* r14_1 = rsi_3[0x23]
                    
                    if (r14_1 == 0)
                        (*(*rsi_3 + 0x390))(rsi_3)
                        r14_1 = rsi_3[0x23]
                    
                    int32_t rax_14 = var_40
                    int16_t rsi_4 = r14_1[5].w
                    int64_t rbp_1 = var_38
                    
                    if (rax_14 s> *(arg3 + 0xc))
                        sub_140638cc0(arg3, rax_14)
                        rax_14 = var_40
                    
                    if (rax_14 s> 0)
                        int128_t var_28_1 = zmm6
                        
                        do
                            int32_t var_58
                            (*(*r14_1 + 0x278))(r14_1, &var_58, rbp_1)
                            uint128_t zmm1_1 = data_143b58058
                            int32_t zmm2_1 = var_58
                            
                            if (not((zmm1_1 ^ 0x80000000).d f>= zmm2_1) && not(zmm2_1 f>= zmm1_1.d))
                                zmm1_1 = data_143b5805c
                                int32_t var_54
                                
                                if (not((zmm1_1 ^ 0x80000000).d f>= var_54)
                                        && not(var_54 f>= zmm1_1.d))
                                    zmm1_1 = data_143b58060
                                    int32_t var_50
                                    
                                    if (not((zmm1_1 ^ 0x80000000).d f>= var_50)
                                            && not(var_50 f>= zmm1_1.d))
                                        int64_t rsi_5 = sx.q(arg3[1].d)
                                        int32_t rax_16 = (rsi_5 + 1).d
                                        arg3[1].d = rax_16
                                        
                                        if (rax_16 s> *(arg3 + 0xc))
                                            sub_140638a00(arg3)
                                        
                                        int64_t rcx_8 = *arg3
                                        int64_t rdx_6 = rsi_5 * 3
                                        *(rcx_8 + (rdx_6 << 2)) = var_58.q
                                        *(rcx_8 + (rdx_6 << 2) + 8) = var_50
                            
                            rbp_1 += zx.q(rsi_4)
                            rbx += 1
                        while (rbx s< var_40)

rbx.b = arg3[1].d s> 0

if (var_38 != 0)
    sub_140a74f90(var_38)

return zx.q(rbx.b)
