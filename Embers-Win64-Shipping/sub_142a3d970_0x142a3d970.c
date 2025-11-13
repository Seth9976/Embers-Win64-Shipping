// 函数: sub_142a3d970
// 地址: 0x142a3d970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8 = -2
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t r11 = arg4
int64_t rsi = arg2
int64_t* r10 = arg1
uint64_t result

if (*arg6 == 0)
    int64_t* r13_1 = **arg1
    int64_t r14_1 = arg2 + arg3
    int64_t var_110 = r14_1
    int64_t rdi_1 = 0
    int512_t zmm1
    zmm1.o = zx.o(0)
    int64_t var_b8
    __builtin_memset(&var_b8, 0, 0x59)
    zmm1.o = data_142d3f800
    int128_t zmm2 = zmm1.o
    int128_t var_100_1
    __builtin_memset(&var_100_1, 0xff, 0x20)
    int128_t var_120_1 = zmm1.o
    int64_t r8 = 1
    int64_t var_130_1 = 1
    int128_t var_f0_1
    int64_t var_90
    int128_t var_88
    int128_t var_78
    int32_t result_1
    int64_t rdi_2
    int64_t r12_1
    
    if (arg2 s>= r14_1)
        r12_1 = var_120_1:8.q
        rdi_2 = var_120_1.q
    else
        int64_t var_138_1 = var_120_1:8.q
        var_120_1.q = var_120_1.q
        
        while (true)
            int32_t var_108
            uint64_t rax_5 = sub_142a3e160(r13_1, rsi, &var_108, zmm1)
            
            if (rax_5 s< 0)
                goto label_142a3dde7_2
            
            int64_t rsi_1 = rsi + sx.q(var_108)
            
            if (r14_1 s>= 0 && rsi_1 s>= r14_1)
                goto label_142a3dde7_2
            
            int64_t rax_7 = sub_142a3e270(r13_1, rsi_1, &var_108, zmm1)
            
            if (rax_7 s< 0)
                goto label_142a3dde7_2
            
            int64_t rcx_2 = sx.q(var_108)
            
            if ((rcx_2 - 1).d u> 7)
                goto label_142a3dde7_2
            
            int64_t rsi_2 = rsi_1 + rcx_2
            
            if (rsi_2 u> 0x7fffffffffffffff)
                goto label_142a3dde7_2
            
            if (r14_1 s>= 0 && rsi_2 s> r14_1)
                goto label_142a3dde7_2
            
            if (rax_5 != 0xe0)
                if (rax_5 == 0xe1)
                    var_100_1.q = rsi_2
                    var_100_1:8.q = rax_7
                    goto label_142a3dd62
                
                if (rax_5 != 0x6d80)
                    int64_t* r9_1
                    
                    switch (rax_5)
                        case 0x83
                            int64_t rax_13 = sub_142a3ea30(r13_1, rsi_2, rax_7)
                            
                            if (rax_13 - 1 u> 0xfd)
                                goto label_142a3dde7_2
                            
                            var_b8.d = rax_13.d
                            goto label_142a3dd62
                        case 0x86
                            r9_1 = &var_88:8
                            goto label_142a3dc14
                        case 0xd7
                            int64_t rax_11 = sub_142a3ea30(r13_1, rsi_2, rax_7)
                            
                            if (rax_11 - 1 u> 0x7e)
                                goto label_142a3dde7_2
                            
                            var_b8:4.d = rax_11.d
                            goto label_142a3dd62
                        case 0x536e
                            r9_1 = &var_90
                        label_142a3dc14:
                            int32_t result_3
                            result_3, zmm1 = sub_142a3e960(r13_1, rsi_2, rax_7, r9_1)
                            result_1 = result_3
                            
                            if (result_3 != 0)
                                goto label_142a3df4c
                            
                            goto label_142a3dd62
                        case 0x73c5
                            if (rax_7 s> 8)
                                goto label_142a3dde7_2
                            
                            int64_t var_b0_1 = 0
                            int64_t r14_2 = rsi_2
                            int64_t r12_2 = rax_7 + rsi_2
                            
                            if (rsi_2 != r12_2)
                                do
                                    char var_128
                                    int32_t result_2 = (**r13_1)(r13_1, r14_2, 1, &var_128)
                                    result_1 = result_2
                                    
                                    if (result_2 != 0)
                                        goto label_142a3df4c
                                    
                                    rdi_1 = rdi_1 << 8 | zx.q(var_128)
                                    int64_t var_b0_2 = rdi_1
                                    r14_2 += 1
                                while (r14_2 != r12_2)
                            
                            r14_1 = var_110
                            goto label_142a3dd62
                        case 0x22b59c
                            r9_1 = &var_88
                            goto label_142a3dc14
                        case 0x23e383
                            int64_t rax_15 = sub_142a3ea30(r13_1, rsi_2, rax_7)
                            
                            if (rax_15 s< 0)
                                goto label_142a3dde7_2
                            
                            int64_t var_a8_1 = rax_15
                            goto label_142a3dd62
                    
                    if (rax_5 != 0x9c)
                        if (rax_5 != 0x63a2)
                            if (rax_5 == 0x258688)
                                r9_1 = &var_78
                                goto label_142a3dc14
                            
                            if (rax_5 == 0x56aa)
                                int64_t var_a0_1 = sub_142a3ea30(r13_1, rsi_2, rax_7)
                            else if (rax_5 == 0x56bb)
                                int64_t var_98_1 = sub_142a3ea30(r13_1, rsi_2, rax_7)
                            
                            goto label_142a3dd62
                        
                        zmm1 = j_sub_140a74f90(var_78:8.q)
                        var_78:8.q = 0
                        int64_t var_68_1 = 0
                        
                        if (rax_7 != 0)
                            int64_t rax_17
                            
                            if (rax_7 u<= 0x80000000)
                                rax_17 = j_sub_140a82f30(rax_7)
                            
                            if (rax_7 u> 0x80000000 || rax_17 == 0)
                                result_1 = -1
                                goto label_142a3df4c
                            
                            int32_t result_4 = (**r13_1)(r13_1, rsi_2, zx.q(rax_7.d), rax_17)
                            result_1 = result_4
                            
                            if (result_4 != 0)
                                j_sub_140a74f90(rax_17)
                                goto label_142a3df4c
                            
                            var_78:8.q = rax_17
                            int64_t var_68_2 = rax_7
                        
                        goto label_142a3dd62
                    
                    int64_t rax_16 = sub_142a3ea30(r13_1, rsi_2, rax_7)
                    r8 = rax_16
                    var_130_1 = rax_16
                    
                    if (rax_16 u> 1)
                        goto label_142a3dde7_2
                    
                    rdi_2 = var_120_1.q
                    r12_1 = var_138_1
                else
                    rdi_2 = rsi_2
                    var_120_1.q = rsi_2
                    r12_1 = rax_7
                    var_138_1 = rax_7
                    r8 = var_130_1
            else
                var_f0_1.q = rsi_2
                var_f0_1:8.q = rax_7
            label_142a3dd62:
                r12_1 = var_138_1
                rdi_2 = var_120_1.q
                r8 = var_130_1
            
            rsi = rsi_2 + rax_7
            
            if (rsi s> r14_1)
                goto label_142a3dde7_2
            
            if (rsi s>= r14_1)
                zmm1.o = var_f0_1
                zmm2 = var_100_1
                r10 = arg1
                r11 = arg4
                break
            
            rdi_1 = 0
    
    if (rsi != r14_1 || var_b8:4.d s<= 0)
    labelid_4:
        result_1 = -2
    else
        int64_t* i = r10[5]
        
        while (i != r10[6])
            void* rax_20 = *i
            i = &i[1]
            
            if (rax_20 != 0)
                if (var_b8:4.d == *(rax_20 + 0x24))
                    goto label_142a3dde7_2
        
        if (var_b8.d s<= 0)
        labelid_4:
            result_1 = -2
        else
            bool var_60_1 = r8 s> 0
            
            if (var_b8.d != 1)
                if (var_b8.d != 2)
                    if (var_100_1.q s>= 0 || var_f0_1.q s>= 0 || (var_b8.d == 0x21 && rdi_2 s>= 0))
                    label_142a3dde7:
                        result_1 = -2
                    else
                        int128_t var_58_3 = data_14321e0d0
                        var_110 = 0
                        int32_t result_7 = sub_142a36bb0(*r10, &var_b8, r11, arg5, &var_110)
                        result_1 = result_7
                        
                        if (result_7 == 0)
                            *arg6 = var_110
                            result_1 = 0
                else if (var_100_1.q s< 0 || var_f0_1.q s>= 0)
                label_142a3dde7_1:
                    result_1 = -2
                else
                    int128_t var_58_2 = zmm2
                    var_110 = 0
                    int32_t result_6 = sub_142a392e0(*r10, &var_b8, r11, arg5, zmm1, &var_110)
                    result_1 = result_6
                    
                    if (result_6 == 0)
                        int64_t rcx_20 = var_110
                        *arg6 = rcx_20
                        
                        if (rdi_2 s>= 0)
                            sub_142a3cad0(rcx_20, rdi_2, r12_1, zmm1)
                        
                        result_1 = 0
            else if (var_f0_1.q s< 0 || var_100_1.q s>= 0)
            label_142a3dde7_2:
                result_1 = -2
            else
                int128_t var_58_1 = zmm1.o
                var_110 = 0
                int32_t result_5
                int512_t zmm1_1
                result_5, zmm1_1 = sub_142a3bcc0(*r10, &var_b8, r11, arg5, zmm1, &var_110)
                result_1 = result_5
                
                if (result_5 == 0)
                    int64_t rcx_18 = var_110
                    *arg6 = rcx_18
                    
                    if (rdi_2 s>= 0)
                        sub_142a3cad0(rcx_18, rdi_2, r12_1, zmm1_1)
                    
                    result_1 = 0
    
label_142a3df4c:
    j_sub_140a74f90(var_90)
    j_sub_140a74f90(var_88.q)
    j_sub_140a74f90(var_88:8.q)
    j_sub_140a74f90(var_78:8.q)
    j_sub_140a74f90(var_78.q)
    result = zx.q(result_1)
else
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_168)
return result
