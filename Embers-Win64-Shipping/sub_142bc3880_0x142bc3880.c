// 函数: sub_142bc3880
// 地址: 0x142bc3880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg1 + 0x98)
void var_d8
memset(&var_d8, 0, 0xc8)
int32_t rax = sub_142bc43d0(&var_d8, *(arg1 + 0xa0), rsi, *(arg1 + 0xe0), arg3)
int32_t arg_8 = rax
char* var_40

if (rax == 0)
    int32_t var_38
    int32_t rax_1 = sub_142bc4230(arg1, &var_d8, var_40, var_38)
    arg_8 = rax_1
    
    if (rax_1 == 0 && arg2 s>= 0)
        uint128_t* rax_2 = sub_142b99860(rsi, rax_1 + 0x48, &arg_8)
        bool cond:0_1 = arg_8 != 0
        *(arg1 + 0x1e8) = rax_2
        
        if (not(cond:0_1))
            int32_t var_30
            int32_t rdx_3 = var_30
            int32_t i = 0
            uint128_t* rax_3 = *(arg1 + 0xa0)
            int32_t var_34
            
            if (rdx_3 == 0)
                *rax_2 = *rax_3
                arg3.o = rax_3[1]
                rax_2[1] = arg3.o
                rax_2[2] = rax_3[2]
                arg3.o = rax_3[3]
                rax_2[3] = arg3.o
                rax_2[4].q = rax_3[4].q
                *(arg1 + 0x1c0) = var_34
            label_142bc39d8:
                int32_t rcx_7 = *(arg1 + 0x1a4)
                
                if (rcx_7 s< 0)
                label_142bc3aef:
                    arg_8 = 3
                else
                    int32_t rdx_6 = *(arg1 + 0x1a8)
                    
                    if (rdx_6 s< 1 || rcx_7 s> 4 || rdx_6 s> 4)
                    label_142bc3aef_1:
                        arg_8 = 3
                    else
                        int32_t r11_1 = rdx_6 + rcx_7
                        int32_t r10_2 = *(*(arg1 + 0x1e8) + 8) - *(arg1 + 0x1c0)
                        
                        if (*(arg1 + 0x1b0) s> 0)
                            int64_t r9_3 = 0
                            
                            do
                                int64_t rax_8 = *(arg1 + 0x1b8)
                                
                                if (*(r9_3 + rax_8 + 0x70) u> 0x3e8)
                                    *(r9_3 + rax_8 + 0x70) = 7
                                
                                if (*(r9_3 + rax_8 + 0x74) u> 0x3e8)
                                    *(r9_3 + rax_8 + 0x74) = 1
                                
                                int32_t rcx_8 = *(r9_3 + rax_8 + 0xf8)
                                
                                if (rcx_8 s< 0)
                                    goto label_142bc3aef_2
                                
                                int32_t r8_9 = *(r9_3 + rax_8 + 0xf0)
                                
                                if (r8_9 != 0 && rcx_8 s< 1)
                                    goto label_142bc3aef_2
                                
                                if (rcx_8 s> 4)
                                    goto label_142bc3aef_2
                                
                                int32_t rdx_7 = *(r9_3 + rax_8 + 0xf4)
                                
                                if (rdx_7 u> r10_2)
                                    goto label_142bc3aef_2
                                
                                if (r8_9 s< 0)
                                    goto label_142bc3aef_2
                                
                                if (rcx_8 != 0 && r8_9 u> divu.dp.d(0:(r10_2 - rdx_7), rcx_8))
                                    goto label_142bc3aef_2
                                
                                i += 1
                                r9_3 += 0xfc
                            while (i s< *(arg1 + 0x1b0))
                        
                        int32_t rax_12 = *(arg1 + 0x1a0)
                        
                        if (rax_12 u> r10_2 ||
                            (r11_1 != 0 && *(arg1 + 0x1ac) u> divu.dp.d(0:(r10_2 - rax_12), r11_1)))
                        label_142bc3aef_2:
                            arg_8 = 3
                        else
                            arg_8 = sub_142bc4790(arg1, arg3)
            else
                int32_t r8_5 = *(rax_3 + 8) - var_34
                
                if (rdx_3 u> r8_5)
                    rdx_3 = r8_5
                
                char* rax_4
                int512_t zmm0_2
                rax_4, zmm0_2 = sub_142b99860(rsi, rdx_3, &arg_8)
                *(arg1 + 0x1e0) = rax_4
                
                if (arg_8 == 0)
                    int32_t rax_5 = sub_142bc3b30(rax_4, rdx_3, var_34, arg1, zmm0_2, arg3)
                    arg_8 = rax_5
                    
                    if (rax_5 == 0)
                        sub_142b96970(*(arg1 + 0x1e8), *(arg1 + 0x1e0), rdx_3)
                        *(arg1 + 0x1c0) = 0
                        goto label_142bc39d8

void* var_48

if (var_40 != 0)
    sub_142b97020(var_48, &var_40)
int64_t var_a8
var_a8(&var_d8, arg3)
return zx.q(arg_8)
