// 函数: sub_14181aa20
// 地址: 0x14181aa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
int32_t i = arg2
int128_t zmm7
int128_t var_58 = zmm7
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
char r9
char var_b8 = r9
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t result_1 = result.d
uint64_t var_98
uint64_t var_88
uint64_t var_78
uint64_t var_68
int128_t zmm2
int128_t zmm3
int128_t zmm4
int128_t zmm5

if (result.d s>= 0)
    int32_t rcx = ((result << 1) + 1).d
    int32_t var_c8_1 = rcx
    
    do
        int32_t var_c0_1 = result.d
        int32_t r12_1 = result.d
        
        if (rcx s< i)
            uint64_t rbx_1
            
            do
                int32_t r12_2 = r12_1 * 2
                rbx_1 = zx.q(r12_2 + 1)
                
                if ((rbx_1 + 1).d s< i)
                    int16_t* rdi_1 = nullptr
                    var_98 = 0
                    int32_t r14_1 = *(&arg1[(sx.q(r12_2) + 2) * 6] + 8)
                    int64_t rsi_1 = arg1[(sx.q(r12_2) + 2) * 6].q
                    
                    if (r14_1 != 0)
                        sub_1405a4c70(&var_98, r14_1, 0)
                        rdi_1 = var_98
                        memcpy(rdi_1, rsi_1, r14_1 * 2)
                    else
                        int32_t var_8c_1 = 0
                    
                    int16_t* rsi_2 = nullptr
                    var_88 = 0
                    int32_t r15_1 = *(&arg1[sx.q(rbx_1.d) * 6] + 8)
                    int64_t rax_7 = arg1[sx.q(rbx_1.d) * 6].q
                    
                    if (r15_1 != 0)
                        sub_1405a4c70(&var_88, r15_1, 0)
                        rsi_2 = var_88
                        memcpy(rsi_2, rax_7, r15_1 * 2)
                    else
                        int32_t var_7c_1 = 0
                    
                    int16_t* const rdx_5 = &data_142d40450
                    int16_t* const rcx_9 = &data_142d40450
                    
                    if (r15_1 != 0)
                        rdx_5 = rsi_2
                    
                    if (r14_1 != 0)
                        rcx_9 = rdi_1
                    
                    if (sub_140a54510(rcx_9, rdx_5) s< 0)
                        rbx_1 = zx.q(r12_2)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                    
                    if (rsi_2 != 0)
                        sub_140a74f90(rsi_2)
                    
                    if (rdi_1 != 0)
                        sub_140a74f90(rdi_1)
                
                int16_t* rdi_2 = nullptr
                var_78 = 0
                int64_t* r12_5 = &arg1[sx.q(var_c0_1) * 6]
                int32_t rsi_3 = r12_5[1].d
                int64_t r14_2 = *r12_5
                
                if (rsi_3 != 0)
                    sub_1405a4c70(&var_78, rsi_3, 0)
                    rdi_2 = var_78
                    memcpy(rdi_2, r14_2, rsi_3 * 2)
                else
                    int32_t var_6c_1 = 0
                
                int16_t* r14_3 = nullptr
                var_68 = 0
                int32_t r15_2 = *(&arg1[sx.q(rbx_1.d) * 6] + 8)
                var_c0_1.q = &arg1[sx.q(rbx_1.d) * 6]
                int64_t rax_12 = arg1[sx.q(rbx_1.d) * 6].q
                
                if (r15_2 != 0)
                    sub_1405a4c70(&var_68, r15_2, 0)
                    r14_3 = var_68
                    memcpy(r14_3, rax_12, r15_2 * 2)
                else
                    int32_t var_5c_1 = 0
                
                int16_t* const rdx_10 = &data_142d40450
                int16_t* const rcx_18 = &data_142d40450
                
                if (r15_2 != 0)
                    rdx_10 = r14_3
                
                if (rsi_3 != 0)
                    rcx_18 = rdi_2
                
                rsi_3.b = sub_140a54510(rcx_18, rdx_10) s>= 0
                
                if (r14_3 != 0)
                    sub_140a74f90(r14_3)
                
                if (rdi_2 != 0)
                    sub_140a74f90(rdi_2)
                
                if (rsi_3.b != 0)
                    i = arg2
                    break
                
                int128_t* rax_14 = var_c0_1.q
                
                if (r12_5 != rax_14)
                    zmm2 = *r12_5
                    zmm3 = *(r12_5 + 0x10)
                    zmm4 = *(r12_5 + 0x20)
                    zmm5 = *(r12_5 + 0x30)
                    zmm6 = *(r12_5 + 0x40)
                    zmm7 = *(r12_5 + 0x50)
                    *r12_5 = *rax_14
                    *(r12_5 + 0x10) = rax_14[1]
                    *(r12_5 + 0x20) = rax_14[2]
                    *(r12_5 + 0x30) = rax_14[3]
                    *(r12_5 + 0x40) = rax_14[4]
                    *(r12_5 + 0x50) = rax_14[5]
                    *rax_14 = zmm2
                    rax_14[1] = zmm3
                    rax_14[2] = zmm4
                    rax_14[3] = zmm5
                    rax_14[4] = zmm6
                    rax_14[5] = zmm7
                
                i = arg2
                var_c0_1 = rbx_1.d
                r12_1 = rbx_1.d
            while (((rbx_1 << 1) + 1).d s< i)
            result = zx.q(result_1)
            rcx = var_c8_1
        
        result = zx.q(result.d - 1)
        rcx -= 2
        result_1 = result.d
        var_c8_1 = rcx
    while (result.d s>= 0)

int32_t i_1 = i - 1
int32_t i_2 = i_1

if (i_1 s> 0)
    result = &arg1[sx.q(i_1) * 6]
    result_1.q = result
    
    do
        if (arg1 != result)
            zmm2 = *arg1
            zmm3 = arg1[1]
            zmm4 = arg1[2]
            zmm5 = arg1[3]
            zmm6 = arg1[4]
            zmm7 = arg1[5]
            *arg1 = *result
            arg1[1] = *(result + 0x10)
            arg1[2] = *(result + 0x20)
            arg1[3] = *(result + 0x30)
            arg1[4] = *(result + 0x40)
            arg1[5] = *(result + 0x50)
            *result = zmm2
            *(result + 0x10) = zmm3
            *(result + 0x20) = zmm4
            *(result + 0x30) = zmm5
            *(result + 0x40) = zmm6
            *(result + 0x50) = zmm7
        
        int32_t rax_19 = 0
        int32_t var_c8_2 = 0
        
        if (i_1 s> 1)
            uint64_t rbx_2
            
            do
                int32_t r12_6 = rax_19 * 2
                rbx_2 = zx.q(r12_6 + 1)
                
                if ((rbx_2 + 1).d s< i_1)
                    int16_t* rdi_3 = nullptr
                    var_68 = 0
                    int64_t* rcx_22 = (sx.q(r12_6) + 2) * 0x60
                    int32_t r14_4 = *(rcx_22 + arg1 + 8)
                    int64_t rsi_4 = *(rcx_22 + arg1)
                    
                    if (r14_4 != 0)
                        sub_1405a4c70(&var_68, r14_4, 0)
                        rdi_3 = var_68
                        memcpy(rdi_3, rsi_4, r14_4 * 2)
                    else
                        int32_t var_5c_2 = 0
                    
                    int16_t* rsi_5 = nullptr
                    var_78 = 0
                    int64_t* rcx_26 = sx.q(rbx_2.d) * 0x60
                    int32_t r15_3 = *(rcx_26 + arg1 + 8)
                    int64_t rax_24 = *(rcx_26 + arg1)
                    
                    if (r15_3 != 0)
                        sub_1405a4c70(&var_78, r15_3, 0)
                        rsi_5 = var_78
                        memcpy(rsi_5, rax_24, r15_3 * 2)
                    else
                        int32_t var_6c_2 = 0
                    
                    int16_t* const rdx_15 = &data_142d40450
                    int16_t* const rcx_29 = &data_142d40450
                    
                    if (r15_3 != 0)
                        rdx_15 = rsi_5
                    
                    if (r14_4 != 0)
                        rcx_29 = rdi_3
                    
                    if (sub_140a54510(rcx_29, rdx_15) s< 0)
                        rbx_2 = zx.q(r12_6)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                    
                    if (rsi_5 != 0)
                        sub_140a74f90(rsi_5)
                    
                    if (rdi_3 != 0)
                        sub_140a74f90(rdi_3)
                
                int16_t* rdi_4 = nullptr
                var_88 = 0
                void* r15_6 = &arg1[sx.q(var_c8_2) * 6]
                int32_t rsi_6 = *(r15_6 + 8)
                int64_t r14_5 = *r15_6
                
                if (rsi_6 != 0)
                    sub_1405a4c70(&var_88, rsi_6, 0)
                    rdi_4 = var_88
                    memcpy(rdi_4, r14_5, rsi_6 * 2)
                else
                    int32_t var_7c_2 = 0
                
                int16_t* r14_6 = nullptr
                var_98 = 0
                void* r12_9 = &arg1[sx.q(rbx_2.d) * 6]
                int32_t rax_28 = *(r12_9 + 8)
                int64_t rcx_34 = *r12_9
                
                if (rax_28 != 0)
                    sub_1405a4c70(&var_98, rax_28, 0)
                    r14_6 = var_98
                    memcpy(r14_6, rcx_34, rax_28 * 2)
                else
                    int32_t var_8c_2 = 0
                
                int16_t* const rdx_20 = &data_142d40450
                int16_t* const rcx_37 = &data_142d40450
                
                if (rax_28 != 0)
                    rdx_20 = r14_6
                
                if (rsi_6 != 0)
                    rcx_37 = rdi_4
                
                rsi_6.b = sub_140a54510(rcx_37, rdx_20) s>= 0
                
                if (r14_6 != 0)
                    sub_140a74f90(r14_6)
                
                if (rdi_4 != 0)
                    sub_140a74f90(rdi_4)
                
                if (rsi_6.b != 0)
                    i_1 = i_2
                    break
                
                if (r15_6 != r12_9)
                    zmm2 = *r15_6
                    zmm3 = *(r15_6 + 0x10)
                    zmm4 = *(r15_6 + 0x20)
                    zmm5 = *(r15_6 + 0x30)
                    zmm6 = *(r15_6 + 0x40)
                    zmm7 = *(r15_6 + 0x50)
                    *r15_6 = *r12_9
                    *(r15_6 + 0x10) = *(r12_9 + 0x10)
                    *(r15_6 + 0x20) = *(r12_9 + 0x20)
                    *(r15_6 + 0x30) = *(r12_9 + 0x30)
                    *(r15_6 + 0x40) = *(r12_9 + 0x40)
                    *(r15_6 + 0x50) = *(r12_9 + 0x50)
                    *r12_9 = zmm2
                    *(r12_9 + 0x10) = zmm3
                    *(r12_9 + 0x20) = zmm4
                    *(r12_9 + 0x30) = zmm5
                    *(r12_9 + 0x40) = zmm6
                    *(r12_9 + 0x50) = zmm7
                
                i_1 = i_2
                rax_19 = rbx_2.d
                var_c8_2 = rbx_2.d
            while (((rbx_2 << 1) + 1).d s< i_1)
        
        i_1 -= 1
        result = result_1.q - 0x60
        i_2 = i_1
        result_1.q = result
    while (i_1 s> 0)

return result
