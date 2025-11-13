// 函数: sub_1406b3d80
// 地址: 0x1406b3d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r15 = result.d
int128_t var_428
int128_t var_328
int128_t var_228
int128_t var_128
int128_t zmm1

if (result.d s>= 0)
    int32_t r13_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r14_1 = r15
        
        if (r13_1 s< arg2)
            do
                int32_t rsi_1 = r14_1 * 2
                uint64_t rdi_1 = zx.q(rsi_1 + 1)
                
                if ((rdi_1 + 1).d s< arg2)
                    int128_t* rax_5 = arg1[sx.q(rdi_1.d)]
                    zmm1 = rax_5[1]
                    var_428 = *rax_5
                    int128_t var_418_1 = zmm1
                    int128_t var_408_1 = rax_5[2]
                    int128_t var_3f8_1 = rax_5[3]
                    int128_t var_3e8_1 = rax_5[4]
                    int128_t var_3d8_1 = rax_5[5]
                    int128_t var_3c8_1 = rax_5[6]
                    int128_t var_3b8_1 = rax_5[7]
                    int128_t var_3a8_1 = *(rax_5 + 0x80)
                    int128_t var_398_1 = rax_5[9]
                    int128_t var_388_1 = rax_5[0xa]
                    int128_t var_378_1 = rax_5[0xb]
                    int128_t var_368_1 = rax_5[0xc]
                    int128_t var_358_1 = rax_5[0xd]
                    int128_t var_348_1 = rax_5[0xe]
                    int64_t var_338_1 = rax_5[0xf].q
                    int128_t* rax_9 = arg1[sx.q(rsi_1) + 2]
                    zmm1 = rax_9[1]
                    var_328 = *rax_9
                    int128_t var_318_1 = zmm1
                    int128_t var_308_1 = rax_9[2]
                    int128_t var_2f8_1 = rax_9[3]
                    int128_t var_2e8_1 = rax_9[4]
                    int128_t var_2d8_1 = rax_9[5]
                    int128_t var_2c8_1 = rax_9[6]
                    int128_t var_2b8_1 = rax_9[7]
                    int128_t var_2a8_1 = *(rax_9 + 0x80)
                    int128_t var_298_1 = rax_9[9]
                    int128_t var_288_1 = rax_9[0xa]
                    int128_t var_278_1 = rax_9[0xb]
                    int128_t var_268_1 = rax_9[0xc]
                    int128_t var_258_1 = rax_9[0xd]
                    int128_t var_248_1 = rax_9[0xe]
                    int64_t var_238_1 = rax_9[0xf].q
                    
                    if (sub_1406b7160(arg4, &var_328, &var_428) != 0)
                        rdi_1 = zx.q(rsi_1)
                    
                    rdi_1 = zx.q(rdi_1.d + 1)
                
                int64_t rax_13 = sx.q(rdi_1.d)
                void* rsi_2 = &arg1[rax_13]
                int128_t* rax_14 = arg1[rax_13]
                zmm1 = rax_14[1]
                var_228 = *rax_14
                int128_t var_218_1 = zmm1
                int128_t var_208_1 = rax_14[2]
                int128_t var_1f8_1 = rax_14[3]
                int128_t var_1e8_1 = rax_14[4]
                int128_t var_1d8_1 = rax_14[5]
                int128_t var_1c8_1 = rax_14[6]
                int128_t var_1b8_1 = rax_14[7]
                int128_t var_1a8_1 = *(rax_14 + 0x80)
                int128_t var_198_1 = rax_14[9]
                int128_t var_188_1 = rax_14[0xa]
                int128_t var_178_1 = rax_14[0xb]
                int128_t var_168_1 = rax_14[0xc]
                int128_t var_158_1 = rax_14[0xd]
                int128_t var_148_1 = rax_14[0xe]
                int64_t var_138_1 = rax_14[0xf].q
                int64_t rax_17 = sx.q(r14_1)
                void* r14_2 = &arg1[rax_17]
                int128_t* rax_18 = arg1[rax_17]
                zmm1 = rax_18[1]
                var_128 = *rax_18
                int128_t var_118_1 = zmm1
                int128_t var_108_1 = rax_18[2]
                int128_t var_f8_1 = rax_18[3]
                int128_t var_e8_1 = rax_18[4]
                int128_t var_d8_1 = rax_18[5]
                int128_t var_c8_1 = rax_18[6]
                int128_t var_b8_1 = rax_18[7]
                int128_t var_a8_1 = *(rax_18 + 0x80)
                int128_t var_98_1 = rax_18[9]
                int128_t var_88_1 = rax_18[0xa]
                int128_t var_78_1 = rax_18[0xb]
                int128_t var_68_1 = rax_18[0xc]
                int128_t var_58_1 = rax_18[0xd]
                int128_t var_48_1 = rax_18[0xe]
                int64_t var_38_1 = rax_18[0xf].q
                result = sub_1406b7160(arg4, &var_128, &var_228)
                
                if (result.b == 0)
                    break
                
                int64_t rcx_2 = *r14_2
                *r14_2 = *rsi_2
                result = zx.q(((rdi_1 << 1) + 1).d)
                *rsi_2 = rcx_2
                r14_1 = rdi_1.d
            while (result.d s< arg2)
        
        r13_1 -= 2
        temp2_1 = r15
        r15 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        result = arg1[i]
        int32_t r15_1 = 0
        uint64_t rcx_3 = *arg1
        *arg1 = result
        arg1[i] = rcx_3
        
        if (j s> 1)
            uint64_t rdi_2
            
            do
                int32_t rbp_1 = r15_1 * 2
                rdi_2 = zx.q(rbp_1 + 1)
                
                if ((rdi_2 + 1).d s< j)
                    int128_t* rax_24 = arg1[sx.q(rdi_2.d)]
                    zmm1 = rax_24[1]
                    var_128 = *rax_24
                    int128_t var_118_2 = zmm1
                    int128_t var_108_2 = rax_24[2]
                    int128_t var_f8_2 = rax_24[3]
                    int128_t var_e8_2 = rax_24[4]
                    int128_t var_d8_2 = rax_24[5]
                    int128_t var_c8_2 = rax_24[6]
                    int128_t var_b8_2 = rax_24[7]
                    int128_t var_a8_2 = *(rax_24 + 0x80)
                    int128_t var_98_2 = rax_24[9]
                    int128_t var_88_2 = rax_24[0xa]
                    int128_t var_78_2 = rax_24[0xb]
                    int128_t var_68_2 = rax_24[0xc]
                    int128_t var_58_2 = rax_24[0xd]
                    int128_t var_48_2 = rax_24[0xe]
                    int64_t var_38_2 = rax_24[0xf].q
                    int128_t* rax_28 = arg1[sx.q(rbp_1) + 2]
                    zmm1 = rax_28[1]
                    var_228 = *rax_28
                    int128_t var_218_2 = zmm1
                    int128_t var_208_2 = rax_28[2]
                    int128_t var_1f8_2 = rax_28[3]
                    int128_t var_1e8_2 = rax_28[4]
                    int128_t var_1d8_2 = rax_28[5]
                    int128_t var_1c8_2 = rax_28[6]
                    int128_t var_1b8_2 = rax_28[7]
                    int128_t var_1a8_2 = *(rax_28 + 0x80)
                    int128_t var_198_2 = rax_28[9]
                    int128_t var_188_2 = rax_28[0xa]
                    int128_t var_178_2 = rax_28[0xb]
                    int128_t var_168_2 = rax_28[0xc]
                    int128_t var_158_2 = rax_28[0xd]
                    int128_t var_148_2 = rax_28[0xe]
                    int64_t var_138_2 = rax_28[0xf].q
                    
                    if (sub_1406b7160(arg4, &var_228, &var_128) != 0)
                        rdi_2 = zx.q(rbp_1)
                    
                    rdi_2 = zx.q(rdi_2.d + 1)
                
                int64_t rax_32 = sx.q(rdi_2.d)
                uint64_t* r14_3 = &arg1[rax_32]
                int128_t* rax_33 = arg1[rax_32]
                zmm1 = rax_33[1]
                var_328 = *rax_33
                int128_t var_318_2 = zmm1
                int128_t var_308_2 = rax_33[2]
                int128_t var_2f8_2 = rax_33[3]
                int128_t var_2e8_2 = rax_33[4]
                int128_t var_2d8_2 = rax_33[5]
                int128_t var_2c8_2 = rax_33[6]
                int128_t var_2b8_2 = rax_33[7]
                int128_t var_2a8_2 = *(rax_33 + 0x80)
                int128_t var_298_2 = rax_33[9]
                int128_t var_288_2 = rax_33[0xa]
                int128_t var_278_2 = rax_33[0xb]
                int128_t var_268_2 = rax_33[0xc]
                int128_t var_258_2 = rax_33[0xd]
                int128_t var_248_2 = rax_33[0xe]
                int64_t var_238_2 = rax_33[0xf].q
                int64_t rax_36 = sx.q(r15_1)
                uint64_t* r15_2 = &arg1[rax_36]
                int128_t* rax_37 = arg1[rax_36]
                zmm1 = rax_37[1]
                var_428 = *rax_37
                int128_t var_418_2 = zmm1
                int128_t var_408_2 = rax_37[2]
                int128_t var_3f8_2 = rax_37[3]
                int128_t var_3e8_2 = rax_37[4]
                int128_t var_3d8_2 = rax_37[5]
                int128_t var_3c8_2 = rax_37[6]
                int128_t var_3b8_2 = rax_37[7]
                int128_t var_3a8_2 = *(rax_37 + 0x80)
                int128_t var_398_2 = rax_37[9]
                int128_t var_388_2 = rax_37[0xa]
                int128_t var_378_2 = rax_37[0xb]
                int128_t var_368_2 = rax_37[0xc]
                int128_t var_358_2 = rax_37[0xd]
                int128_t var_348_2 = rax_37[0xe]
                int64_t var_338_2 = rax_37[0xf].q
                result = sub_1406b7160(arg4, &var_428, &var_328)
                
                if (result.b == 0)
                    break
                
                uint64_t rcx_6 = *r15_2
                result = *r14_3
                *r15_2 = result
                r15_1 = rdi_2.d
                *r14_3 = rcx_6
            while (((rdi_2 << 1) + 1).d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
