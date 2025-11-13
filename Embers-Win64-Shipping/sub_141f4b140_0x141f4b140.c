// 函数: sub_141f4b140
// 地址: 0x141f4b140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t result = __security_cookie ^ &var_f8
int64_t result_1 = result
void* rbp = *(arg1 + 0x430)

if (rbp == 0)
    arg2[6].b = 0
else
    int64_t r14_1 = sx.q(*(arg1 + 0x494))
    arg2[4] = *(rbp + 0x18)
    void* r14_4 = ((r14_1 + 0x45) << 4) + arg1
    int64_t rbx_1 = sx.q(*(r14_4 + 8))
    arg2[1].d = 0
    int32_t temp0_1 = *(arg2 + 0xc)
    int32_t rdx = 0
    
    if (rbx_1.d s> temp0_1 && rbx_1.d != temp0_1)
        sub_1405a5220(arg2, rbx_1.d)
        rdx = arg2[1].d
    
    int32_t rax_2 = rdx + rbx_1.d
    arg2[1].d = rax_2
    
    if (rax_2 s> *(arg2 + 0xc))
        sub_140638970(arg2)
    
    arg2[3].d = 0
    
    if (rbx_1.d s> *(arg2 + 0x1c))
        sub_140638c50(&arg2[2], rbx_1.d)
    
    int32_t rax_3 = arg2[3].d + rbx_1.d
    arg2[3].d = rax_3
    
    if (rax_3 s> *(arg2 + 0x1c))
        sub_1405a4d70(&arg2[2])
    
    int128_t* rax_4 = *r14_4
    int32_t r12_1 = 1
    int128_t* rcx_4 = *arg2
    int32_t r9_1 = 1
    int32_t var_d8_1 = 1
    int64_t var_b8_1 = rbx_1
    *rcx_4 = *rax_4
    rcx_4[1] = rax_4[1]
    rcx_4[2] = rax_4[2]
    result = **(rbp + 0x1a8)
    *arg2[2] = result
    
    if (rbx_1 s> 1)
        int64_t rdx_4 = 1
        float (* r10_1)[0x4] = 0x30
        int64_t var_d0_1 = 1
        float (* var_c8_1)[0x4] = 0x30
        int64_t result_2 = 1
        int64_t r13_1 = 0xc
        
        do
            *(arg2[2] + (rdx_4 << 3)) = *(*(rbp + 0x1a8) + r13_1)
            
            if (result_2 s< 0 || r12_1 s>= *(arg1 + 0x7f8)
                    || r9_1 != zx.d(*(*(arg1 + 0x7f0) + (result_2 << 1))))
                rbx_1.b = 0
            else
                rbx_1.b = 1
            
            int64_t rdx_5 = *r14_4
            float (* rcx_12)[0x4]
            
            if (rbx_1.b == 0)
                int64_t rax_13 = *(rbp + 0x1b8)
                float var_a8[0x4]
                rcx_12 = &var_a8
                int128_t zmm1 = *(r10_1 + rax_13 + 0x10)
                var_a8 = *(r10_1 + rax_13)
                float var_88_1[0x4] = *(r10_1 + rax_13 + 0x20)
                int128_t var_98_1 = zmm1
            else
                int64_t rax_11 = sx.q(r9_1)
                r9_1 = var_d8_1
                float var_78[0x3][0x4]
                rcx_12 = sub_140ad7d70(rax_11 * 0x30 + rdx_5, &var_78, 
                    sx.q(*(*(rbp + 0x1a8) + r13_1 + 8)) * 0x30 + rdx_5)
                r10_1 = var_c8_1
            
            int64_t rax_14 = *arg2
            r9_1 += 1
            r13_1 += 0xc
            rdx_4 = var_d0_1 + 1
            var_d8_1 = r9_1
            *(r10_1 + rax_14) = *rcx_12
            *(r10_1 + rax_14 + 0x10) = rcx_12[1]
            *(r10_1 + rax_14 + 0x20) = rcx_12[2]
            r10_1 = &r10_1[3]
            char temp1_1 = rbx_1.b
            var_d0_1 = rdx_4
            int32_t rax_15 = r12_1 + 1
            var_c8_1 = r10_1
            
            if (temp1_1 == 0)
                rax_15 = r12_1
            
            r12_1 = rax_15
            result = result_2 + 1
            
            if (temp1_1 == 0)
                result = result_2
            
            result_2 = result
        while (rdx_4 s< var_b8_1)
    
    arg2[6].b = 1

__security_check_cookie(result_1 ^ &var_f8)
return result
