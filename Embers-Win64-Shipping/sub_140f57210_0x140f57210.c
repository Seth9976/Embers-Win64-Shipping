// 函数: sub_140f57210
// 地址: 0x140f57210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_58 = zmm6
void var_368
int64_t rax_1 = __security_cookie ^ &var_368
char var_258 = data_1439ae51c
int128_t* var_2e8 = arg2
void* var_130 = nullptr
int32_t var_128 = 0
char var_120 = 0
int32_t var_124 = 4
sub_140de8410(arg1, arg3, &var_258)
int32_t r8_1 = var_128
void var_250
int32_t r13_1

if (r8_1 s<= 0)
    r13_1 = arg6
else
    void* rdx_1 = var_130
    void* r14_1 = &var_250
    
    if (rdx_1 != 0)
        r14_1 = rdx_1
    
    int64_t* rsi_1 = *(r14_1 + 0x38)
    int64_t r15_1 = *(*arg1[0x71] + 0x20)
    int128_t var_320
    int128_t var_300
    uint128_t zmm1
    
    if (rsi_1 != r15_1)
        r13_1 = arg6
    else
        zmm1 = arg2[1]
        var_320 = *arg2
        uint128_t var_310_1 = zmm1
        var_310_1:8.q = arg1
        var_300 = arg2[2]
        r8_1 = var_128
        r13_1 = sub_140e1f680(rsi_1, &var_320, r14_1, arg4, arg5, arg6 + 1, arg7, 
            sub_140e25600(arg1, arg8))
        rdx_1 = var_130
    
    if (arg1[0x68].b != 0 && arg1[0x58] != 0)
        void* rax_9 = arg1[0x59]
        
        if (rax_9 != 0 && *(rax_9 + 8) s> 0)
            void* r15_3
            
            if (rsi_1 != r15_1)
            label_140f573b9:
                
                if (r8_1 == 1)
                    r15_3 = &var_250
                    
                    if (rdx_1 != 0)
                        r15_3 = rdx_1
                    
                    goto label_140f573ce
            else if (r8_1 s> 1)
                void* r15_2 = &var_250
                
                if (rdx_1 != 0)
                    r15_2 = rdx_1
                
                r15_3 = r15_2 + 0x48
            label_140f573ce:
                
                if (r15_3 != 0)
                    int128_t var_2d0
                    int128_t var_298
                    int128_t zmm0_1
                    int32_t zmm3
                    int32_t zmm4_1
                    int32_t zmm5_1
                    
                    if (arg1[0x6c].b == 0)
                        int64_t* r14_2 = arg1[0x57]
                        
                        if (r14_2 != 0)
                            int32_t rax_17 = r14_2[1].d
                            
                            if (rax_17 == 0)
                                r14_2 = nullptr
                            else
                                r14_2[1].d = rax_17 + 1
                            
                            if (r14_2 != 0)
                                void* r12_1 = arg1[0x56]
                                
                                if (r12_1 != 0)
                                    int128_t* rax_19
                                    
                                    if (*(arg1 + 0x362) == 0)
                                        rax_19 = &var_320
                                        zmm3 = data_14399f5c0.d
                                        zmm4_1 = data_14399f5c0:4.d
                                        zmm5_1 = data_14399f5c0:8.d
                                        zmm6 = data_14399f5c0:0xc.d
                                        zmm1.d = 0.600000024f f* zmm3
                                        int128_t var_310_3 = data_14399f5c0
                                        var_320.d = zmm3
                                        var_300.d = zmm1.d
                                        zmm1.d = 0.600000024f f* zmm5_1
                                        zmm0_1.d = 0.600000024f f* zmm4_1
                                        var_300:8.d = zmm1.d
                                        var_320:4.d = zmm4_1
                                        var_320:8.d = zmm5_1
                                        var_320:0xc.d = zmm6.d
                                        var_300:4.d = zmm0_1.d
                                        var_300:0xc.d = 0.600000024f f* zmm6.d
                                    else
                                        rax_19 = &var_298
                                        zmm1 = arg7[1]
                                        var_298 = *arg7
                                        uint128_t var_288_2 = zmm1
                                        int128_t var_278_2 = arg7[2]
                                    
                                    int64_t* rsi_2 = *(r15_3 + 0x38)
                                    int128_t* rax_20 = var_2e8
                                    zmm1 = rax_20[1]
                                    var_2d0 = *rax_20
                                    uint128_t var_2c0_2 = zmm1
                                    var_2c0_2:8.q = arg1
                                    int128_t var_2b0_2 = rax_20[2]
                                    char rax_21 = sub_140e25600(arg1, arg8)
                                    sub_140e1f680(rsi_2, &var_2d0, r15_3, 
                                        sub_140e12970(r12_1, &var_2e8), arg5, r13_1 + 1, rax_19, 
                                        rax_21)
                                
                                if (r14_2 != 0)
                                    r14_2[1].d -= 1
                                    
                                    if (r14_2[1].d == 1)
                                        (**r14_2)(r14_2)
                                        int32_t temp4_1 = *(r14_2 + 0xc)
                                        *(r14_2 + 0xc) -= 1
                                        
                                        if (temp4_1 == 1)
                                            (*(*r14_2 + 8))(r14_2, 1)
                    else
                        int128_t* rcx_5
                        
                        if (*(arg1 + 0x362) == 0)
                            rcx_5 = &var_320
                            zmm3 = data_14399f5c0.d
                            zmm4_1 = data_14399f5c0:4.d
                            zmm5_1 = data_14399f5c0:8.d
                            zmm6 = data_14399f5c0:0xc.d
                            zmm1.d = 0.600000024f f* zmm3
                            int128_t var_310_2 = data_14399f5c0
                            var_320.d = zmm3
                            var_300.d = zmm1.d
                            zmm1.d = 0.600000024f f* zmm5_1
                            zmm0_1.d = 0.600000024f f* zmm4_1
                            var_300:8.d = zmm1.d
                            var_320:4.d = zmm4_1
                            var_320:8.d = zmm5_1
                            var_320:0xc.d = zmm6.d
                            var_300:4.d = zmm0_1.d
                            var_300:0xc.d = 0.600000024f f* zmm6.d
                        else
                            rcx_5 = &var_2d0
                            zmm1 = arg7[1]
                            var_2d0 = *arg7
                            uint128_t var_2c0_1 = zmm1
                            int128_t var_2b0_1 = arg7[2]
                        
                        var_2e8 = *(r15_3 + 0x38)
                        int64_t* rax_11 = *(r15_3 + 0x40)
                        
                        if (rax_11 != 0)
                            rax_11[1].d += 1
                        
                        zmm1 = *(r15_3 + 0x10)
                        int32_t var_340
                        var_340.b = arg8
                        var_298 = *r15_3
                        uint128_t var_288_1 = zmm1
                        int128_t var_278_1 = *(r15_3 + 0x20)
                        uint64_t var_268_1 = *(r15_3 + 0x30)
                        void var_118
                        sub_140db8a10(arg5, 
                            sub_140d91f10(&var_118, &var_2e8, arg2, &var_298, rcx_5, var_340.b))
                        int64_t* var_110
                        
                        if (var_110 != 0)
                            int32_t temp0_1 = *(var_110 + 0xc)
                            *(var_110 + 0xc) -= 1
                            
                            if (temp0_1 == 1)
                                (*(*var_110 + 8))(var_110, 1)
                        
                        if (rax_11 != 0)
                            rax_11[1].d -= 1
                            
                            if (rax_11[1].d == 1)
                                (**rax_11)(rax_11)
                                int32_t temp3_1 = *(rax_11 + 0xc)
                                *(rax_11 + 0xc) -= 1
                                
                                if (temp3_1 == 1)
                                    (*(*rax_11 + 8))(rax_11, 1)
            else if (rsi_1 != r15_1)
                goto label_140f573b9

sub_140d94d20(&var_250)
__security_check_cookie(rax_1 ^ &var_368)
return zx.q(r13_1)
