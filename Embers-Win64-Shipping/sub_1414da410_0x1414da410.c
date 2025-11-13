// 函数: sub_1414da410
// 地址: 0x1414da410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x10c8)
void var_10e8
int64_t rax_1 = __security_cookie ^ &var_10e8
int64_t r13 = sx.q(arg3)
int64_t r8

if (r13.d == 3 || arg3 == 0)
    void* i = *(arg1 + 0xa0)
    r8 = r13
    
    for (void* rdx_1 = sx.q(*(arg1 + 0xa8)) * 0x5240 + i; i != rdx_1; i += 0x5240)
        if ((*(i + 0x497c) & 4) != 0)
            goto label_1414da53a
        
        if (*(i + 0x1de8) != 0)
            goto label_1414da53a
        
        if (*(i + 0x1df8) != 0)
            goto label_1414da53a
        
        if (*(i + 0x1e38) != 0)
            goto label_1414da53a
        
        if (*(i + 0x1f10) != 0)
            goto label_1414da53a
        
        if (*(i + 0x1e28) != 0)
            goto label_1414da53a
        
        if (*(i + 0x1e08) s> 0)
            goto label_1414da53a
else
    r8 = r13

int64_t result

if (data_143e8150c == 0 || r13.d != 1)
    int64_t rcx = *(arg1 + 0xa0)
    result = sx.q(*(arg1 + 0xa8))
    int64_t rdx_3 = result * 0x5240 + rcx
    
    if (rcx != rdx_3)
        while (*(rcx + (r8 << 2) + 0x1890) s<= 0)
            rcx += 0x5240
            
            if (rcx == rdx_3)
                goto label_1414dabef
        
        goto label_1414da53a
else
label_1414da53a:
    char var_10b8_1
    void* rax_3
    int128_t zmm6
    
    if (sub_140b011d0().b == 0)
        var_10b8_1 = 0
        rax_3.b = 0
    else if (data_1439c7a0e != 0)
        if (*(data_143ee7e88 + 4) != 0)
            goto label_1414da565
        
        var_10b8_1 = 0
        rax_3.b = 0
    else if (data_143f01c92 != 0 || *(data_143ee7e88 + 4) == 0)
        var_10b8_1 = 0
        rax_3.b = 0
    else
    label_1414da565:
        var_10b8_1 = 1
        zmm6 = sub_141391270(&data_143ec4c60, arg2)
        
        if (*(data_143ee7d78 + 4) s> 0 || *(data_143f02a68 + 4) s> 0)
            rax_3.b = 1
        else
            rax_3.b = 0
    
    int32_t i_1 = 0
    uint64_t var_1048 = arg2
    int32_t r14_1 = 0
    char var_1040_1 = rax_3.b
    int32_t i_2 = 0
    int32_t var_10b0_1 = 0
    
    if (*(arg1 + 0xa8) s> 0)
        char rbx_1 = arg5
        int64_t rsi_1 = 0
        int128_t var_58_1 = zmm6
        int128_t zmm7 = zx.o(0)
        int64_t var_10a0_1 = 0
        
        do
            int64_t* rsi_2 = rsi_1 + *(arg1 + 0xa0)
            
            if ((*(rsi_2 + 0x497c) & 2) == 0)
                if (*(rsi_2 + 0xd7a) != 0)
                    if (sub_142391c90(zx.q(rsi_2[0x15a].d)) == 0)
                    label_1414da66f:
                        float temp0_1 = *(*(arg1 + 0xa0) + var_10a0_1 + 0xd80)
                        zmm7.d f- temp0_1
                        int64_t rax_7
                        rax_7.b = zmm7.d f< temp0_1
                        
                        if (rax_7.b == rbx_1)
                            int32_t rbx_2 = *(arg2 + 0x8c)
                            int32_t rax_8 = rsi_2[0x15b].d
                            
                            if (rbx_2 != rax_8)
                                bool cond:2_1 = *(arg2 + 0x14) u> 0
                                *(arg2 + 0x8c) = rax_8
                                
                                if (cond:2_1)
                                    void*** rdx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_9 = &rdx_7[3]
                                    
                                    if (rax_9 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                                        rdx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_9 = &rdx_7[3]
                                    
                                    r14_1 = var_10b0_1
                                    *(arg2 + 0x30) = rax_9
                                    int64_t* rax_10 = *(arg2 + 8)
                                    *(arg2 + 0x14) += 1
                                    *rax_10 = rdx_7
                                    int32_t rax_11 = *(arg2 + 0x8c)
                                    *(arg2 + 8) = &rdx_7[1]
                                    rdx_7[1] = 0
                                    *rdx_7 = &data_142f11588
                                    rdx_7[2].d = rax_11
                                else
                                    *(arg2 + 0x90) = rax_8
                            
                            sub_141405870(*(arg1 + 8) + 0x20, rsi_2, 1)
                            uint64_t var_10a8 = 0
                            uint128_t zmm6_1 = sub_1414c97a0(arg2, rsi_2, arg4, 0xf, &var_10a8, i_2)
                            int128_t var_1088 = zx.o(0)
                            int32_t var_1078_1 = 0x11
                            int64_t var_1070_1 = rsi_2[2]
                            uint64_t var_1058_1 = var_10a8
                            int128_t var_1068_1 = zx.o(0)
                            int32_t var_1050_1 = 0
                            uint64_t rax_14
                            
                            if (arg5 == 0 && (r13 - 1).d u> 1)
                                if (*(r13 + rsi_2 + 0x18a4) == 0)
                                    rax_14.b = data_143ee71ac s>= 0
                                else
                                    rax_14.b = data_143ee71ac s> 0
                            
                            int64_t* var_10c8_1
                            
                            if (arg5 != 0 || ((r13 - 1).d u> 1
                                    && (rax_14.d == 0 || zmm6_1.d f<= data_143ec4ffc)))
                                if (r14_1 == 0 || *(*rsi_2 + 0x44) != 0)
                                    rax_14.b = 1
                                else
                                    rax_14 = 0
                                
                                var_10c8_1.b = rax_14.b
                                sub_141395b30(&data_143ec4c60, arg2, rsi_2, arg1, var_10c8_1.b)
                                var_1088:8.q = data_1439b53d0
                                int32_t var_1050_3 = 0
                                
                                if (var_10b8_1 == 0)
                                    zmm7 = sub_1414db970(arg2, rsi_2, &var_1088, r13.d, nullptr)
                                    sub_141096650(arg2)
                                else
                                    sub_141096650(arg2)
                                    var_10c8_1.d = r13.d
                                    zmm7 = sub_1414dbee0(arg1, arg2, rsi_2, &var_1088, var_10c8_1.b)
                            else
                                if (not(zmm6_1.d f<= data_143ec4ffc))
                                    void var_1038
                                    sub_1422db070(&var_1038)
                                    zmm6_1 = sub_1414df560(arg1, arg2, rsi_2, &var_1038)
                                    sub_141405ab0(*(arg1 + 8) + 0x20, &var_1038)
                                    int64_t var_1070_2 = *(*(arg1 + 8) + 0x20)
                                    rax_14 = sub_1422eb5d0(rsi_2)
                                    
                                    if ((rax_14.b != 0 || *(rsi_2 + 0xd7c) != rax_14.b)
                                            && *(*rsi_2 + 8) s> 0)
                                        char rax_16
                                        int32_t rdx_14
                                        rax_16, rdx_14 = sub_142391f10(rsi_2)
                                        zmm6_1 = sub_1414df560(arg1, arg2, 
                                            sub_1422e5d90(*rsi_2, 
                                                sbb.d(rdx_14, rdx_14, rax_16 != 0) & 2), 
                                            &var_1038)
                                        int64_t* rcx_20 = data_143f0f180
                                        (*(*rcx_20 + 0x100))(rcx_20, *(*(arg1 + 8) + 0x28), 
                                            &var_1038)
                                        var_1068_1.q = *(*(arg1 + 8) + 0x28)
                                
                                if (r13.d == 1)
                                    void* rcx_22 = rsi_2[0x2b5]
                                    
                                    if (rcx_22 != 0 && data_143f0f1b7 != 0
                                            && *(data_143ee7718 + 4) != 0)
                                        rax_14, zmm6_1 = sub_1413d1860(rcx_22 + 0x1068, arg2)
                                    
                                    goto label_1414da8cc
                                
                                if (r13.d != 2)
                                label_1414da8cc:
                                    
                                    if (r14_1 == 0 || *(*rsi_2 + 0x44) != 0)
                                        rax_14.b = 1
                                    else
                                        rax_14 = 0
                                    
                                    var_10c8_1.b = rax_14.b
                                    sub_141394df0(&data_143ec4c60, arg2, rsi_2, arg1, zmm6_1, 
                                        var_10c8_1.b)
                                else
                                    void* rcx_24 = rsi_2[0x2b5]
                                    
                                    if (rcx_24 != 0 && data_143f0f1b7 != 0
                                            && *(data_143ee7718 + 4) != 0)
                                        rax_14, zmm6_1 = sub_1413d1860(rcx_24 + 0x1138, arg2)
                                    
                                    if (r14_1 == 0 || *(*rsi_2 + 0x44) != 0)
                                        rax_14.b = 1
                                    else
                                        rax_14 = 0
                                    
                                    var_10c8_1.b = rax_14.b
                                    sub_141395490(&data_143ec4c60, arg2, rsi_2, arg1, zmm6_1, 
                                        var_10c8_1.b)
                                
                                var_1088:8.q = data_1439b53d0
                                int32_t var_1050_2 = 0
                                int128_t zmm3_1
                                
                                if (var_10b8_1 == 0)
                                    zmm3_1, zmm7 =
                                        sub_1414db970(arg2, rsi_2, &var_1088, r13.d, nullptr)
                                    sub_141096650(arg2)
                                else
                                    sub_141096650(arg2)
                                    var_10c8_1.d = r13.d
                                    zmm3_1, zmm7 =
                                        sub_1414dbee0(arg1, arg2, rsi_2, &var_1088, var_10c8_1.b)
                                
                                if (r13.d == 1)
                                    int128_t zmm2_1 = sub_1413a95e0(&data_143ec4c60, arg2, rsi_2)
                                    void* rcx_29 = rsi_2[0x2b5]
                                    
                                    if (rcx_29 != 0 && data_143f0f1b7 != 0
                                            && *(data_143ee7718 + 4) != 0)
                                        sub_1413e1ef0(rcx_29 + 0x1068, arg2, zmm2_1, zmm3_1)
                                else if (r13.d != 2)
                                    sub_1413a95e0(&data_143ec4c60, arg2, rsi_2)
                                    zmm7 = sub_1414e81c0(arg2, rsi_2, 0)
                                else
                                    int128_t zmm2_2 = sub_1413a9990(&data_143ec4c60, arg2, rsi_2)
                                    void* rcx_31 = rsi_2[0x2b5]
                                    
                                    if (rcx_31 != 0 && data_143f0f1b7 != 0
                                            && *(data_143ee7718 + 4) != 0)
                                        sub_1413e1ef0(rcx_31 + 0x1138, arg2, zmm2_2, zmm3_1)
                            r14_1 += 1
                            var_10b0_1 = r14_1
                            sub_1405d1550(&var_10a8)
                            
                            if (*(arg2 + 0x8c) != rbx_2)
                                bool cond:3_1 = *(arg2 + 0x14) u> 0
                                *(arg2 + 0x8c) = rbx_2
                                
                                if (cond:3_1)
                                    void*** rdx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_23 = &rdx_35[3]
                                    
                                    if (rax_23 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                                        rdx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_23 = &rdx_35[3]
                                    
                                    *(arg2 + 0x30) = rax_23
                                    int64_t* rax_24 = *(arg2 + 8)
                                    *(arg2 + 0x14) += 1
                                    *rax_24 = rdx_35
                                    int32_t rax_25 = *(arg2 + 0x8c)
                                    *(arg2 + 8) = &rdx_35[1]
                                    rdx_35[1] = 0
                                    *rdx_35 = &data_142f11588
                                    rdx_35[2].d = rax_25
                                else
                                    *(arg2 + 0x90) = rbx_2
                            
                            rbx_1 = arg5
                        
                        i_1 = i_2
                    else
                        i_1 = i_2
                        
                        if (*(rsi_2 + 0xd7c) != 0)
                            goto label_1414da640
                else
                    if (*(rsi_2 + 0xd7c) == 0)
                        goto label_1414da66f
                    
                label_1414da640:
                    
                    if (sub_142391c90(zx.q(rsi_2[0x15a].d)) != 0)
                        i_1 = i_2
                    else
                        void* rax_6 = *rsi_2
                        
                        if (rax_6 != 0 && *(rax_6 + 8) s> 1)
                            goto label_1414da66f
                        
                        i_1 = i_2
            
            i_1 += 1
            rsi_1 = var_10a0_1 + 0x5240
            i_2 = i_1
            var_10a0_1 = rsi_1
        while (i_1 s< *(arg1 + 0xa8))
    
    result = sub_141962ac0(&var_1048)

label_1414dabef:
__security_check_cookie(rax_1 ^ &var_10e8)
return result
