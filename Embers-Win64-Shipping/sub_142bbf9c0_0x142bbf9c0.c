// 函数: sub_142bbf9c0
// 地址: 0x142bbf9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg2[6]
int64_t arg_20 = rsi
memset(arg4, 0, 0x1140)
void* var_a0
__builtin_memset(&var_a0, 0, 0x14)
int64_t var_88
__builtin_memset(&var_88, 0, 0x18)
int32_t rax = sub_1408e52d0(arg2)
*(arg4 + 0x2c) = arg8
*arg4 = arg1
arg4[1] = arg2
arg4[2] = rsi
arg4[3].d = rax
int32_t rax_1
int512_t zmm0
rax_1, zmm0 = sub_142b96aa0(arg2, &data_143685dd8, arg4)
int32_t arg_8 = rax_1
int32_t rcx_3 = rax_1

if (rax_1 == 0)
    if (arg8 == 0)
        char rax_4 = sub_142b96a20(arg2, &arg_8, zmm0)
        rcx_3 = arg_8
        
        if (rcx_3 == 0)
            if (*(arg4 + 0x24) != 1 || *(arg4 + 0x26) u< 4 || rax_4 u> 4)
                rcx_3 = 2
                arg_8 = rcx_3
            else
            label_142bbfad3:
                int32_t rax_5 = sub_142b97060(arg2, zx.d(*(arg4 + 0x26)) + rax, arg5)
                arg_8 = rax_5
                rcx_3 = rax_5
                
                if (rax_5 != 0)
                label_142bc005e:
                    
                    if (arg7 != 0)
                        rcx_3 = 2
                        arg_8 = rcx_3
                else
                    void* rbx_1
                    void* r15_1
                    
                    if (arg8 == 0)
                        int32_t rax_10
                        int512_t zmm0_1
                        rax_10, zmm0_1 = sub_142bc0670(&arg4[6], arg2, 0, 0, zmm0)
                        arg_8 = rax_10
                        rcx_3 = rax_10
                        
                        if (rax_10 != 0)
                            goto label_142bc005e
                        
                        int32_t rax_11 = arg4[8].d
                        
                        if (rax_11 u<= 1 || *(arg4 + 0x4c) u>= rax_11)
                            rbx_1 = &arg4[0xa4]
                            int32_t rax_13
                            int512_t zmm0_2
                            rax_13, zmm0_2 = sub_142bc0670(rbx_1, arg2, 0, 0, zmm0_1)
                            arg_8 = rax_13
                            rcx_3 = rax_13
                            
                            if (rax_13 == 0)
                                int32_t rax_14
                                int512_t zmm0_3
                                rax_14, zmm0_3 = sub_142bc0670(&var_a0, arg2, 1, 0, zmm0_2)
                                arg_8 = rax_14
                                rcx_3 = rax_14
                                
                                if (rax_14 == 0)
                                    r15_1 = &arg4[0x12]
                                    int32_t rax_15 = sub_142bc0670(r15_1, arg2, 1, 0, zmm0_3)
                                    arg_8 = rax_15
                                    rcx_3 = rax_15
                                    
                                    if (rax_15 == 0)
                                        int32_t rax_16 = sub_142bc0470(&var_a0, &arg4[0xb9], 
                                            &arg4[0xba], &arg4[0xbb], arg5)
                                        arg_8 = rax_16
                                        rcx_3 = rax_16
                                        
                                        if (rax_16 == 0)
                                            if (arg4[8].d u<= arg4[0xa6].d)
                                                goto label_142bbfb63
                                            
                                            rcx_3 = 3
                                            arg_8 = rcx_3
                        else
                            rcx_3 = sbb.d(rcx_3, rcx_3, arg7 != 0) + 3
                            arg_8 = rcx_3
                    else
                        rbx_1 = &arg4[0xa4]
                        __builtin_memset(rbx_1, 0, 0x30)
                        int32_t rax_6 = sub_1408e52d0(arg2)
                        int32_t rdx_4 = arg4[5].d
                        *(arg4 + 0x53c) = rdx_4
                        arg4[0xa7].d = rax_6
                        int32_t rax_7 = sub_142b970b0(arg2, rdx_4)
                        arg_8 = rax_7
                        rcx_3 = rax_7
                        
                        if (rax_7 == 0)
                            r15_1 = &arg4[0x12]
                            int32_t rax_8 = sub_142bc0670(r15_1, arg2, 1, arg8, zmm0)
                            arg_8 = rax_8
                            rcx_3 = rax_8
                            
                            if (rax_8 == 0)
                            label_142bbfb63:
                                int32_t rsi_1 = 0
                                int32_t var_90
                                arg4[0xb8].d = var_90
                                uint32_t var_a8_1
                                uint32_t rdx_6
                                
                                if (arg7 == 0)
                                    rdx_6 = 0
                                    var_a8_1 = 0
                                    
                                    if (arg4[8].d u<= 1)
                                        goto label_142bbfc85
                                    
                                    rcx_3 = 3
                                    arg_8 = rcx_3
                                else
                                    rdx_6 = zx.d(arg3.w)
                                    var_a8_1 = rdx_6
                                    
                                    if (arg3 s<= 0 || rdx_6 u< arg4[8].d)
                                        *(arg4 + 0x1c) = arg4[8].d
                                    label_142bbfc85:
                                        
                                        if (arg3 s>= 0)
                                            int32_t r12_1 = 0x1000
                                            int32_t rax_19 = 0x1000
                                            
                                            if (arg8 != 0)
                                                rax_19 = 0x3000
                                            
                                            int32_t rax_21
                                            int512_t zmm0_4
                                            rax_21, zmm0_4 = sub_142bc2010(&arg4[0xbc], rbx_1, 
                                                rdx_6, arg2, arg5, rax, rax_19, arg4, arg6)
                                            arg_8 = rax_21
                                            rcx_3 = rax_21
                                            
                                            if (rax_21 == 0)
                                                int32_t rax_22 =
                                                    sub_142b97060(arg2, rax + arg4[0xca].d, arg5)
                                                arg_8 = rax_22
                                                rcx_3 = rax_22
                                                
                                                if (rax_22 == 0)
                                                    int32_t rax_23
                                                    int512_t zmm0_5
                                                    rax_23, zmm0_5 = sub_142bc0670(&arg4[0x9e], 
                                                        arg2, 0, arg8, zmm0_4)
                                                    arg_8 = rax_23
                                                    rcx_3 = rax_23
                                                    
                                                    if (rax_23 == 0)
                                                        int32_t var_c0_1
                                                        
                                                        if (*(arg4 + 0x664) != 0xffff || arg8 != 0)
                                                            int32_t rax_24
                                                            int512_t zmm0_6
                                                            rax_24, zmm0_6 = sub_142bc2510(
                                                                &arg4[0x223], arg2, rax, 
                                                                *(arg4 + 0x694), arg5)
                                                            arg_8 = rax_24
                                                            rcx_3 = rax_24
                                                            
                                                            if (rax_24 == 0)
                                                                int32_t rax_25 = sub_142b97060(arg2, 
                                                                    rax + *(arg4 + 0x684), arg5)
                                                                arg_8 = rax_25
                                                                rcx_3 = rax_25
                                                                
                                                                if (rax_25 == 0)
                                                                    void* var_70
                                                                    int32_t rax_26
                                                                    rax_26, zmm0_5 = sub_142bc0670(&var_70, 
                                                                        arg2, 0, arg8, zmm0_6)
                                                                    arg_8 = rax_26
                                                                    rcx_3 = rax_26
                                                                    
                                                                    if (rax_26 == 0)
                                                                        int32_t i_5
                                                                        
                                                                        if (i_5 u<= 0x100)
                                                                            var_c0_1.q = &arg_8
                                                                            arg4[0x116].d = i_5
                                                                            int64_t rax_27
                                                                            rax_27, zmm0_5 = sub_142b99a90(arg_20, 
                                                                                0x2d0, 0, i_5, 0, var_c0_1)
                                                                            rcx_3 = arg_8
                                                                            
                                                                            if (rcx_3 == 0)
                                                                                int32_t i_4 = i_5
                                                                                
                                                                                if (i_4 != 0)
                                                                                    void* r8_7 = &arg4[0x117]
                                                                                    uint64_t i_3 = zx.q(i_4)
                                                                                    uint64_t i
                                                                                    
                                                                                    do
                                                                                        *r8_7 = rax_27
                                                                                        r8_7 += 8
                                                                                        rax_27 += 0x2d0
                                                                                        i = i_3
                                                                                        i_3 -= 1
                                                                                    while (i != 1)
                                                                                
                                                                                int32_t rbx_4 = 0
                                                                                
                                                                                if (i_4 != 0)
                                                                                    if (arg8 != 0)
                                                                                        r12_1 = 0x4000
                                                                                    
                                                                                    do
                                                                                        int32_t rax_29
                                                                                        rax_29, zmm0_5 = sub_142bc2010(
                                                                                            arg4[zx.q(rbx_4) + 0x117], &var_70, 
                                                                                            rbx_4, arg2, arg5, rax, r12_1, arg4, 
                                                                                            arg6)
                                                                                        arg_8 = rax_29
                                                                                        rcx_3 = rax_29
                                                                                        
                                                                                        if (rax_29 != 0)
                                                                                            goto label_142bbfeb1
                                                                                        
                                                                                        i_4 = i_5
                                                                                        rbx_4 += 1
                                                                                    while (rbx_4 u< i_4)
                                                                                
                                                                                if (arg8 == 0 || i_4 u> 1)
                                                                                    int32_t rax_30 = sub_142bbea20(
                                                                                        &arg4[0x217], arg4[0xa0].d, arg2, 
                                                                                        rax + arg4[0xd1].d, zmm0_5, arg5)
                                                                                    rcx_3 = rax_30
                                                                                    arg_8 = rax_30
                                                                        
                                                                    label_142bbfeb1:
                                                                        void* rax_31 = var_70
                                                                        
                                                                        if (rax_31 != 0)
                                                                            int64_t rbx_5 = *(rax_31 + 0x30)
                                                                            int64_t var_48
                                                                            
                                                                            if (var_48 != 0)
                                                                                sub_142b97020(rax_31, &var_48)
                                                                            
                                                                            int64_t var_50
                                                                            zmm0_5 = sub_142b99980(rbx_5, var_50)
                                                                            rcx_3 = arg_8
                                                                        
                                                                        if (rcx_3 == 0)
                                                                            goto label_142bbfee7
                                                        else
                                                            arg4[0x116].d = 0
                                                        label_142bbfee7:
                                                            
                                                            if (arg4[0xca].d != 0)
                                                                rcx_3 = 0
                                                                arg4[4].d = arg4[0xa0].d
                                                                arg_20.d = 0
                                                                int64_t rbx_6 = (*r15_1)[6]
                                                                arg4[0xb7] = 0
                                                                int64_t* rax_33
                                                                
                                                                if (*(r15_1 + 0x20) == 0)
                                                                    rax_33, zmm0_5 =
                                                                        sub_142bc0820(r15_1, arg5)
                                                                    arg_20.d = rax_33.d
                                                                    rcx_3 = rax_33.d
                                                                
                                                                if (*(r15_1 + 0x20) != 0
                                                                        || rax_33.d == 0)
                                                                    int32_t r9_10 = *(r15_1 + 0x10)
                                                                    
                                                                    if (r9_10 != 0)
                                                                        var_c0_1.q = &arg_20
                                                                        rax_33, zmm0_5 = sub_142b99a90(rbx_6, 
                                                                            8, 0, r9_10 + 1, 0, var_c0_1)
                                                                        rcx_3 = arg_20.d
                                                                        
                                                                        if (rcx_3 == 0)
                                                                            int64_t r10_1 = *(r15_1 + 0x28)
                                                                            int32_t i_1 = 1
                                                                            *rax_33 = r10_1
                                                                            
                                                                            if (*(r15_1 + 0x10) u>= 1)
                                                                                do
                                                                                    uint64_t i_2 = zx.q(i_1)
                                                                                    int32_t rcx_31 =
                                                                                        *(*(r15_1 + 0x20) + (i_2 << 2)) - 1
                                                                                    
                                                                                    if (rcx_31 u>= rsi_1)
                                                                                        if (rcx_31 u> *(r15_1 + 0x1c))
                                                                                            rcx_31 = *(r15_1 + 0x1c)
                                                                                        
                                                                                        rsi_1 = rcx_31
                                                                                    
                                                                                    i_1 += 1
                                                                                    rax_33[i_2] = zx.q(rsi_1) + r10_1
                                                                                while (i_1 u<= *(r15_1 + 0x10))
                                                                            
                                                                            rcx_3 = arg_20.d
                                                                            arg4[0xb7] = rax_33
                                                                
                                                                arg_8 = rcx_3
                                                                
                                                                if (rcx_3 == 0)
                                                                    if (arg8 != rcx_3.b)
                                                                    label_142bc004d:
                                                                        void* rax_40 = sub_142bc03c0(arg4, 
                                                                            var_a8_1, zmm0_5, arg5)
                                                                        rcx_3 = arg_8
                                                                        arg4[0xb6] = rax_40
                                                                    else
                                                                        int32_t rdx_24 = arg4[4].d
                                                                        
                                                                        if (rdx_24 == 0)
                                                                            goto label_142bc004d
                                                                        
                                                                        if (*(arg4 + 0x664) == 0xffff
                                                                                || arg7 == rcx_3.b)
                                                                            rax_33 = nullptr
                                                                        else
                                                                            rax_33.b = 1
                                                                        
                                                                        var_c0_1.b = rax_33.b
                                                                        int32_t rax_37
                                                                        rax_37, zmm0_5, arg5 = sub_142bbef80(
                                                                            &arg4[0x9a], rdx_24, arg2, rax, zmm0_5, 
                                                                            arg5, arg4[0xc9].d, var_c0_1.b)
                                                                        arg_8 = rax_37
                                                                        rcx_3 = rax_37
                                                                        
                                                                        if (rax_37 == 0)
                                                                            if (*(arg4 + 0x664) != 0xffff)
                                                                                goto label_142bc004d
                                                                            
                                                                            int32_t rax_39
                                                                            rax_39, zmm0_5, arg5 = sub_142bbf280(
                                                                                &arg4[0x18], &arg4[0x9a], arg4[4].d, 
                                                                                arg2, zmm0_5, arg5, rax, 
                                                                                *(arg4 + 0x64c))
                                                                            arg_8 = rax_39
                                                                            rcx_3 = rax_39
                                                                            
                                                                            if (rax_39 == 0)
                                                                                goto label_142bc004d
                                                            else
                                                                rcx_3 = 3
                                                                arg_8 = rcx_3
                                    else
                                        rcx_3 = 6
                                        arg_8 = rcx_3
    else if (*(arg4 + 0x24) != 2 || *(arg4 + 0x26) u< 5)
        rcx_3 = 2
        arg_8 = rcx_3
    else
        int16_t rax_2 = sub_142b96f00(arg2, &arg_8)
        rcx_3 = arg_8
        arg4[5].d = zx.d(rax_2)
        
        if (rcx_3 == 0)
            goto label_142bbfad3

void* rax_41 = var_a0

if (rax_41 == 0)
    return zx.q(rcx_3)

int64_t rbx_7 = *(rax_41 + 0x30)
int64_t var_78

if (var_78 != 0)
    sub_142b97020(rax_41, &var_78)

int64_t var_80
sub_142b99980(rbx_7, var_80)
return zx.q(arg_8)
