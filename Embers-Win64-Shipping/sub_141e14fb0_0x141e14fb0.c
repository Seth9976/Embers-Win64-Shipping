// 函数: sub_141e14fb0
// 地址: 0x141e14fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
rbx.b = arg3.d f> 0f
float zmm6_1 = sub_141e348d0(arg1, &arg2[2], rbx.b, arg4, arg5, arg6, arg7)
char result
int32_t* rbp_2

if (rbx.b != 0)
    int32_t rcx = *arg7
    int32_t rbx_1 = 0
    int64_t* rsi = nullptr
    
    while (true)
        if (rcx == 0xffffffff)
            rbp_2 = arg5
            *rbp_2 = __minss_xmmss_memss(zmm6_1 f+ *rbp_2, *(arg1 + 0x90))
            break
        
        if (rbx_1 s< arg2[1].d)
            *arg6 = rcx
            int64_t rbp_1 = *arg2
            sub_141e14f20(arg7, *(rsi + rbp_1), arg4, arg1 + 0x178)
            rcx = *arg7
            
            if (rcx == 0xffffffff)
                zmm6_1 = *(rsi + rbp_1 + 8)
            
            rbx_1 += 1
            rsi += 0xc
            
            if (rbx_1 s< arg2[1].d)
                continue
        
        rbp_2 = arg5
        break
    
    int32_t rbx_2 = arg2[6].d
    result = sub_140b5b8a0(*(arg2 + 0x2c), 0)
    int32_t rcx_2
    rcx_2.b = rbx_2 == 0
    
    if ((rcx_2.b & result) != 0)
        *arg7 = 0xffffffff
    else if (*arg7 != 0xffffffff && arg2[1].d s> 0)
        result = sub_141e14f20(arg7, *(arg2 + 0x2c), arg4, arg1 + 0x178)
    
    goto label_141e1509d

int32_t rax_3 = *arg6
int32_t rbx_3 = 0
int64_t* rsi_1 = nullptr
int32_t rdx_5

while (true)
    if (rax_3 == 0xffffffff)
        rbp_2 = arg5
        *rbp_2 = _mm_max_ss(zmm6_1 f+ *rbp_2, 0)
        rdx_5 = *arg6
        break
    
    int32_t rcx_5 = arg2[1].d
    
    if (rbx_3 s< rcx_5)
        *arg7 = rax_3
        int64_t rbp_3 = *arg2
        sub_141e14e60(arg6, *(rsi_1 + rbp_3), arg4, arg1 + 0x178)
        rax_3 = *arg6
        
        if (rax_3 == 0xffffffff)
            zmm6_1 = *(rsi_1 + rbp_3 + 8)
        
        rcx_5 = arg2[1].d
        rbx_3 += 1
        rsi_1 += 0xc
    
    rdx_5 = rax_3
    
    if (rbx_3 s>= rcx_5)
        rbp_2 = arg5
        break

if (rdx_5 != 0xffffffff && arg2[1].d s> 0)
    sub_141e14e60(arg6, *(arg2 + 0x24), arg4, arg1 + 0x178)

int32_t rbx_4 = arg2[5].d
result = sub_140b5b8a0(*(arg2 + 0x24), 0)
int32_t rcx_8
rcx_8.b = rbx_4 == 0

if ((rcx_8.b & result) == 0)
label_141e1509d:
    
    if (*arg6 != 0xffffffff && *arg7 != 0xffffffff)
        int32_t zmm0_1
        result, zmm0_1 = sub_141e22c80(arg1, arg6, arg7, *(arg2 + 0x34))
        *rbp_2 = zmm0_1
else
    *arg6 = 0xffffffff

return result
