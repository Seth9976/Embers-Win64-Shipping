// 函数: sub_141e464f0
// 地址: 0x141e464f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t r13 = 0
void* rbx = arg2
int64_t* r12 = arg1
int32_t var_148
int64_t* var_140
int32_t var_138

if (arg3 != 0)
    sub_141a85d50(&r12[8], 0)
    int64_t* rax_2 = arg1
    int32_t rsi_1 = 0
    int32_t r15_1 = rax_2[1].d
    
    if (r15_1 s> 0)
        int64_t r14_1 = 0
        
        do
            int32_t* rbx_1 = *rax_2
            int32_t rcx_1
            rcx_1.b = sub_140b5b8a0(*(rbx_1 + r14_1), 0) == 0
            
            if ((*(rbx_1 + r14_1 + 4) != 0 | rcx_1.b) != 0)
                sub_140b33170(&r12[8], &var_148)
                int64_t rax_4 = *(rbx_1 + r14_1)
                *var_140 = rax_4
                var_140[1].d = rsi_1
                *(var_140 + 0xc) = 0xffffffff
                sub_140a6fff0(&r12[8], &var_138, (rax_4 u>> 0x20).d + sub_140b5ead0(rax_4.d), 
                    var_140, var_148, nullptr)
            
            rax_2 = arg1
            rsi_1 += 1
            r14_1 += 0xc
        while (rsi_1 s< r15_1)
        
        rbx = arg2
    
    r12 = rax_2

int32_t result_1

if (rbx == 0)
    result_1 = 0
else
    result_1 = *(rbx + 0x188)

int32_t i_2 = r12[1].d
int64_t rsi_2 = 0
void* r14_2 = *r12
int64_t var_128 = 0
int32_t i_3 = i_2
int32_t rbx_4

if (i_2 != 0 || result_1 != 0)
    sub_1407c3650(&var_128, i_2 + result_1, 0)
    rsi_2 = var_128
    
    if (i_2 != 0)
        void* rcx_6 = r14_2 + 8
        void* rdx_4 = rsi_2 - r14_2
        int32_t i
        
        do
            *(rdx_4 + rcx_6 - 8) = *(rcx_6 - 8)
            *(rcx_6 + rdx_4) = *rcx_6
            rcx_6 += 0xc
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t var_11c
    rbx_4 = var_11c
else
    rbx_4 = 0

void* r14_3 = &r12[4]

if (r14_3 != &var_128)
    int64_t rcx_7 = *r14_3
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    *r14_3 = rsi_2
    *(r14_3 + 8) = i_3
    *(r14_3 + 0xc) = rbx_4
else if (rsi_2 != 0)
    sub_140a74f90(rsi_2)

uint64_t rsi_3 = sx.q(r12[3].d)
int64_t rbx_5 = 0
int64_t r14_4 = r12[2]
var_148.q = 0
var_140.d = rsi_3.d
int32_t r14_5

if (rsi_3.d != 0 || result_1 != 0)
    sub_1405a4b40(&var_148, rsi_3.d + result_1, 0)
    rbx_5 = var_148.q
    memcpy(rbx_5, r14_4, (rsi_3 * 0x30).d)
    r14_5 = var_140:4.d
    rsi_3 = zx.q(var_140.d)
else
    r14_5 = 0

if (&r12[6] != &var_148)
    int64_t rcx_11 = r12[6]
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    r12[6] = rbx_5
    r12[7].d = rsi_3.d
    *(r12 + 0x3c) = r14_5
else if (rbx_5 != 0)
    sub_140a74f90(rbx_5)

void* r14_6 = &r12[0x12]
int64_t* result = sub_1405cd980(r14_6, &r12[8])
r12[0x1d].d = 0

if (result_1 s> *(r12 + 0xec))
    result = sub_1405947f0(&r12[0x1c], result_1)

r12[0x1f].d = 0

if (result_1 s> *(r12 + 0xfc))
    result = sub_14083ad30(&r12[0x1e], result_1)

if (result_1 s> 0)
    int64_t count = sx.q(r12[3].d)
    int64_t rcx_16 = 0
    var_148.q = 0
    var_140:4.d = 0
    var_140.d = count.d
    
    if (count.d s> 0)
        sub_1405daba0(&var_148)
        rcx_16 = var_148.q
    
    memset(rcx_16, 0, count)
    int64_t rcx_18 = 0
    *var_148.q = 1
    int64_t rbx_6 = sx.q(r12[3].d)
    int64_t rsi_4 = r12[2]
    int64_t var_118 = 0
    int32_t var_110_1 = rbx_6.d
    
    if (rbx_6.d != 0)
        sub_1405a4b40(&var_118, rbx_6.d, 0)
        memcpy(var_118, rsi_4, (rbx_6 * 0x30).d)
        rcx_18 = var_118
    else
        int32_t var_10c_1 = 0
    
    result = sx.q(result_1)
    int64_t* var_f0_1 = result
    
    if (result_1 s> 0)
        int64_t* i_1
        
        do
            void* rax_11 = *(arg2 + 0x180)
            int64_t* rdi_2 = rax_11 + r13
            void* rcx_23 = rax_11 + sx.q(*(arg2 + 0x188)) * 0x18
            int64_t* rdx_15
            
            if (rax_11 == rcx_23)
            label_141e46853:
                rdx_15 = rdi_2
            else
                while (*(rax_11 + 0x10) != *rdi_2)
                    rax_11 += 0x18
                    
                    if (rax_11 == rcx_23)
                        goto label_141e46853
                
                rdx_15 = rax_11 + 8
            
            int32_t rax_12 = sub_14078ee20(r12, rdx_15)
            int32_t rcx_25 = *rdi_2
            var_138 = rax_12
            int32_t r12_2 = -1
            bool rdx_16 = sub_140b5b8a0(rcx_25, 0) == 0
            rcx_25.b = *(rdi_2 + 4) != 0
            rcx_25.b |= rdx_16
            
            if (rcx_25.b != 0)
                int64_t rbx_7 = *rdi_2
                
                if (*(r14_6 + 8) != *(r14_6 + 0x34))
                    int32_t rax_16 = sub_140b5ead0(rbx_7.d) + rbx_7:4.d
                    void* r8_6 = r14_6 + 0x38
                    void* rcx_27 = *(r8_6 + 8)
                    
                    if (rcx_27 != 0)
                        r8_6 = rcx_27
                    
                    int32_t j = *(r8_6 + (((sx.q(*(r14_6 + 0x48)) - 1) & sx.q(rax_16)) << 2))
                    
                    if (j != 0xffffffff)
                        int64_t r8_7 = *r14_6
                        
                        do
                            int64_t j_1 = sx.q(j)
                            int64_t rcx_28 = j_1 * 5
                            
                            if (*(r8_7 + (rcx_28 << 2)) == rbx_7)
                                if (j != 0xffffffff)
                                    void* rax_19 = r8_7 + j_1 * 0x14
                                    
                                    if (rax_19 != 0 && rax_19 != -8)
                                        r12_2 = *(rax_19 + 8)
                                
                                break
                            
                            j = *(r8_7 + (rcx_28 << 2) + 0xc)
                        while (j != 0xffffffff)
            
            int32_t r15_3 = -1
            int32_t rcx_29
            rcx_29.b = sub_140b5b8a0(rdi_2[1].d, 0).b == 0
            result.b = *(rdi_2 + 0xc) != 0
            result.b |= rcx_29.b
            
            if (result.b != 0)
                int64_t rbx_8 = rdi_2[1]
                result = zx.q(*(r14_6 + 8))
                
                if (result.d != *(r14_6 + 0x34))
                    int32_t rax_22 = sub_140b5ead0(rbx_8.d) + rbx_8:4.d
                    void* r8_8 = r14_6 + 0x38
                    void* rcx_31 = *(r8_8 + 8)
                    
                    if (rcx_31 != 0)
                        r8_8 = rcx_31
                    
                    result = zx.q(*(r8_8 + (((sx.q(*(r14_6 + 0x48)) - 1) & sx.q(rax_22)) << 2)))
                    
                    if (result.d != 0xffffffff)
                        int64_t r8_9 = *r14_6
                        
                        do
                            int64_t rdx_23 = sx.q(result.d)
                            int64_t rcx_32 = rdx_23 * 5
                            
                            if (*(r8_9 + (rcx_32 << 2)) == rbx_8)
                                if (result.d != 0xffffffff)
                                    result = r8_9 + rdx_23 * 0x14
                                    
                                    if (result != 0)
                                        int64_t* result_2 = result
                                        result = &result[1]
                                        
                                        if (result_2 != -8)
                                            r15_3 = *result
                                
                                break
                            
                            result = zx.q(*(r8_9 + (rcx_32 << 2) + 0xc))
                        while (result.d != 0xffffffff)
            
            if (r12_2 == 0xffffffff || r15_3 == 0xffffffff)
                r12 = arg1
            else
                int64_t var_e8
                sub_140b63b70(&rdi_2[2], &var_e8)
                int64_t rbx_9 = rdi_2[2]
                int64_t rdi_3 = sx.q(*(r14_3 + 8))
                int32_t rax_25 = (rdi_3 + 1).d
                *(r14_3 + 8) = rax_25
                
                if (rax_25 s> *(r14_3 + 0xc))
                    sub_14083a7e0(r14_3)
                
                int64_t rcx_35 = rdi_3 * 3
                int64_t rax_27 = *r14_3
                *(rax_27 + (rcx_35 << 2)) = rbx_9
                *(rax_27 + (rcx_35 << 2) + 8) = r12_2
                int64_t rcx_36 = var_e8
                
                if (rcx_36 != 0)
                    sub_140a74f90(rcx_36)
                
                r12 = arg1
                float var_78[0x3][0x4]
                sub_141e40760(&var_78, &var_148, &var_118, r12, r15_3)
                void var_a8
                sub_141e40760(&var_a8, &var_148, &var_118, r12, var_138)
                float var_d8[0x4]
                sub_140ad7d70(&var_78, &var_d8, &var_a8)
                int64_t rbx_10 = sx.q(r12[7].d)
                int32_t rax_29 = (rbx_10 + 1).d
                r12[7].d = rax_29
                
                if (rax_29 s> *(r12 + 0x3c))
                    sub_140638970(&r12[6])
                
                int64_t rax_30 = r12[6]
                int64_t rcx_42 = rbx_10 * 6
                *(rax_30 + (rcx_42 << 3)) = var_d8
                int128_t var_c8
                *(rax_30 + (rcx_42 << 3) + 0x10) = var_c8
                float var_b8[0x4]
                *(rax_30 + (rcx_42 << 3) + 0x20) = var_b8
                *sub_141a84af0(r14_6, &rdi_2[2]) = rbx_10.d
                int64_t rdi_4 = sx.q(r12[0x1d].d)
                int32_t rax_32 = (rdi_4 + 1).d
                r12[0x1d].d = rax_32
                
                if (rax_32 s> *(r12 + 0xec))
                    sub_140594770(&r12[0x1c])
                
                var_128.d = rbx_10.d
                *(r12[0x1c] + (rdi_4 << 1)) = rbx_10.w
                int64_t rbx_11 = sx.q(r12[0x1f].d)
                var_128:4.d = var_138
                int32_t rax_35 = (rbx_11 + 1).d
                r12[0x1f].d = rax_35
                
                if (rax_35 s> *(r12 + 0xfc))
                    sub_14083a7e0(&r12[0x1e])
                
                result = r12[0x1e]
                int64_t rcx_46 = rbx_11 * 3
                *(result + (rcx_46 << 2)) = var_128
                *(result + (rcx_46 << 2) + 8) = r15_3
            
            r13 += 0x18
            i_1 = var_f0_1
            var_f0_1 -= 1
        while (i_1 != 1)
        rcx_18 = var_118
    
    if (rcx_18 != 0)
        result = sub_140a74f90(rcx_18)
    
    int64_t rcx_47 = var_148.q
    
    if (rcx_47 != 0)
        result = sub_140a74f90(rcx_47)

__security_check_cookie(rax_1 ^ &var_178)
return result
