// 函数: sub_14037f5a0
// 地址: 0x14037f5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* var_c0 = arg4
int32_t rcx_1
int32_t temp4_1
int32_t temp5_1

if (arg6 u<= 1 && (arg6 != 0 || arg3 == 0 || arg2 == 0))
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = muls.dp.d(0x51eb851f, arg1[3])
    rcx_1 = temp2_1 s>> 7
    temp4_1:temp5_1 = sx.q(arg5)

uint32_t result

if (arg6 u> 1 || ((arg6 != 0 || arg3 == 0 || arg2 == 0)
        && mods.dp.d(temp4_1:temp5_1, rcx_1 + (rcx_1 u>> 0x1f)) != 0))
    result = -1
else if (arg3 == 0 || arg2 == 0)
    uint32_t result_3 = 0
    
    while (true)
        result = sub_14037e990(arg1, nullptr, 0, arg4 + (sx.q(arg1[2] * result_3) << 2), 
            arg5 - result_3, 0)
        
        if (result s< 0)
            break
        
        arg4 = var_c0
        result_3 += result
        
        if (result_3 s>= arg5)
            arg1[0x11] = result_3
            result = result_3
            break
else if (arg3 s>= 0)
    char rax_8 = *arg2
    int32_t var_d4_1
    
    if (rax_8 s>= 0)
        int32_t rcx_3
        rcx_3.b = (rax_8 & 0x60) == 0x60
        var_d4_1 = rcx_3 + 0x3e8
    else
        var_d4_1 = 0x3ea
    
    int32_t rax_9 = opus_packet_get_bandwidth(arg2)
    uint32_t rax_10 = opus_packet_get_samples_per_frame(arg2, arg1[3])
    int32_t rax_11
    rax_11.b = (*arg2 & 4) != 0
    int32_t var_100
    int16_t var_98[0x30]
    var_100.q = &var_98
    int32_t var_108
    var_108.q = 0
    char var_d0
    int32_t var_a4
    result = sub_140386c90(arg2, arg3, arg7, &var_d0, var_108, var_100, &var_a4, arg8)
    uint32_t result_1 = result
    
    if (result s>= 0)
        void* rdi_1 = &arg2[sx.q(var_a4)]
        char* var_b0_1 = rdi_1
        
        if (arg6 != 0)
            uint32_t rdx_6 = rax_10
            int32_t rax_15
            
            if (arg5 s>= rdx_6)
                rax_15 = var_d4_1
            
            int32_t* var_f8_1
            
            if (arg5 s< rdx_6 || rax_15 == 0x3ea || arg1[0xd] == 0x3ea)
                var_f8_1.d = 0
                result = sub_14037f5a0(arg1, 0, 0, var_c0, arg5, 0, var_f8_1, 0, arg9)
            else
                int32_t rcx_8 = arg1[0x11]
                uint32_t rcx_10 = arg5 - rdx_6
                
                if (arg5 == rdx_6)
                    goto label_14037f78a
                
                var_f8_1.d = 0
                result = sub_14037f5a0(arg1, 0, 0, var_c0, rcx_10, 0, var_f8_1, 0, arg9)
                
                if (result s>= 0)
                    rax_15 = var_d4_1
                    rdx_6 = rax_10
                label_14037f78a:
                    int32_t r8_1 = sx.d(var_98[0])
                    arg1[0xd] = rax_15
                    arg1[0xc] = rax_9
                    arg1[0xf] = rdx_6
                    arg1[0xb] = rax_11 + 1
                    result = sub_14037e990(arg1, rdi_1, r8_1, 
                        var_c0 + (sx.q(arg1[2] * rcx_10) << 2), rdx_6, 1)
                    
                    if (result s>= 0)
                        arg1[0x11] = arg5
                        result = arg5
                else
                    arg1[0x11] = rcx_8
        else if (result * rax_10 s<= arg5)
            arg1[0xf] = rax_10
            uint32_t result_2 = 0
            arg1[0xd] = var_d4_1
            int64_t i = 0
            arg1[0xc] = rax_9
            arg1[0xb] = rax_11 + 1
            
            if (result s> 0)
                do
                    result = sub_14037e990(arg1, var_b0_1, sx.d(var_98[i]), 
                        var_c0 + (sx.q(arg1[2] * result_2) << 2), arg5 - result_2, 0)
                    
                    if (result s< 0)
                        goto label_14037f7ee
                    
                    int64_t rcx_22 = sx.q(var_98[i])
                    i += 1
                    result_2 += result
                    var_b0_1 = &var_b0_1[rcx_22]
                while (i s< sx.q(result_1))
            
            arg1[0x11] = result_2
            
            if (arg9 == 0)
                *(arg1 + 0x48) = 0
            else
                opus_pcm_soft_clip(var_c0, result_2, arg1[2], &arg1[0x12])
            
            result = result_2
        else
            result = -2
else
    result = -1

label_14037f7ee:
__security_check_cookie(rax_1 ^ &var_128)
return result
