// 函数: sub_140efe160
// 地址: 0x140efe160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t r11 = sx.q(arg2)
int64_t* var_f0 = arg4
uint128_t zmm8 = zx.o(0)
int128_t zmm9 = arg3
int64_t result = 0
int32_t var_154 = r11.d
int64_t* rsi_1 = r11 * 0x70 + *(arg1 + 0x18)
int64_t* r12 = arg4
void* r15 = arg1
int64_t* var_108 = rsi_1
uint64_t r13 = 0
int32_t var_158 = 0
int64_t r14 = 0
int32_t var_14c = 0

if (rsi_1[0xa].d s<= 0)
    result = 0xffffffff

int32_t var_150 = 0
bool cond:1 = 0f f>= *(arg1 + 0x90)
int32_t var_140 = result.d
int32_t rcx

if (not(cond:1))
    rcx = rsi_1[8].d

void var_b0

if (cond:1 || rcx == 0)
    char var_ac_1 = 0
    sub_140ef9bc0(r15, r11.d, 0xffffffff, zx.o(0), &var_b0, &var_158, &var_140, &var_150, r12)
    result = sub_140e86360(r12, 0)
else
    int32_t rdi_1 = 0
    uint128_t zmm7 = zx.o(0)
    int32_t var_148_1 = 0
    
    if (rcx s> 0)
        result = 0
        uint128_t zmm6
        uint128_t var_48_1 = zmm6
        uint128_t zmm10
        uint128_t var_88_1 = zmm10
        int64_t result_1 = 0
        
        do
            int64_t r8_1 = rsi_1[7]
            void* r10_1 = r8_1 + result * 0x28
            void* var_110_1 = r10_1
            uint64_t rax_2
            char rdx
            
            if (zmm7.d f!= zmm8.d)
                rdx = 0
                rax_2.b = 0
            else
                rax_2 = zx.q(*(r10_1 + 0x24))
                rdx = 1
            
            uint128_t zmm3 = *(r10_1 + 0x18)
            uint128_t zmm1
            zmm1.d = zmm7.d f+ *(r10_1 + 0x10)
            zmm10 = _mm_cvtepi32_ps(zx.o(sx.d(rax_2.b)))
            arg4.b = zmm9.d f>= zmm10.d f+ zmm1.d
            int32_t rax_3
            rax_3.b = zmm9.d f>= zmm3.d f+ zmm7.d f+ zmm10.d
            int32_t* var_178
            int32_t* var_170
            int64_t* var_168
            
            if (*(r15 + 0x94) == 1 && rax_3.b == 0 && rdx != 0)
                int64_t* rbx_2 = rsi_1[3]
                int64_t rcx_1 = rsi_1[2]
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
                
                char var_d8 = *(r15 + 0x89)
                char var_d7_1 = rsi_1[4].b
                int64_t var_d0_1 = rcx_1
                
                if (rbx_2 != 0)
                    int32_t rax_6 = rbx_2[1].d
                    rbx_2[1].d = rax_6
                    
                    if (rax_6 == 0)
                        (**rbx_2)(rbx_2)
                        int32_t temp1_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                        
                        r10_1 = var_110_1
                
                int64_t* rax_9 = *rsi_1
                int64_t rdx_1 = sx.q(r14.d)
                int32_t var_13c_1 = rdx_1.d
                int16_t* const rcx_4
                
                if (rax_9[1].d == 0)
                    rcx_4 = &data_142d40450
                else
                    rcx_4 = *rax_9
                
                int16_t* rdi_2 = &rcx_4[rdx_1]
                int32_t rbx_4 = *(r10_1 + 0xc) - rdx_1.d
                int64_t var_130 = 0
                int32_t rdx_2 = 0
                int64_t var_128_1 = 0
                int32_t rcx_5 = 0
                
                if (rdi_2 != 0 && *rdi_2 != 0 && rbx_4 s> 0)
                    if (rbx_4 + 1 s> 0)
                        sub_1405947f0(&var_130, rbx_4 + 1)
                        rcx_5 = var_128_1:4.d
                        rdx_2 = var_128_1.d
                    
                    int32_t rax_12 = rdx_2 + 1 + rbx_4
                    var_128_1.d = rax_12
                    
                    if (rax_12 s> rcx_5)
                        sub_140594770(&var_130)
                    
                    UnDecorator::getReferenceType(var_130, rdi_2, rbx_4 * 2)
                    *(var_130 + (sx.q(var_128_1.d) << 1) - 2) = 0
                
                int64_t* rcx_10 = *(r15 + 0xe0)
                (*(*rcx_10 + 0x20))(rcx_10, &var_130)
                int64_t* rcx_11 = *(r15 + 0xe0)
                zmm7 = zmm8
                int32_t i_5 = 0
                int32_t i_2 = (*(*rcx_11 + 0x50))(rcx_11)
                int32_t i_1 = i_2
                int32_t i = i_2
                
                if (i_2 != 0xffffffff)
                    do
                        int64_t rdi_3 = sx.q(r13.d)
                        zmm6 = zmm8
                        
                        if (rdi_3.d s< rsi_1[6].d)
                            r14 = rdi_3 * 0x30
                            
                            do
                                int64_t rbx_5 = var_108[5]
                                int64_t* rcx_12 = *(r14 + rbx_5)
                                int32_t var_f8
                                (*(*rcx_12 + 8))(rcx_12, &var_f8)
                                int32_t i_7 = i_5
                                int32_t i_4 = i
                                int64_t* rcx_13 = *(r14 + rbx_5)
                                int32_t i_8 = var_f8 - var_13c_1
                                int64_t* rbx_6 = *(r14 + rbx_5 + 8)
                                
                                if (i_8 s>= i_5)
                                    i_7 = i_8
                                
                                int32_t var_f4
                                int32_t i_6 = var_f4 - var_13c_1
                                
                                if (i_6 s<= i)
                                    i_4 = i_6
                                
                                if (i_7 s>= i_4)
                                    i_4 = i_7
                                
                                if (rbx_6 != 0)
                                    rbx_6[1].d += 1
                                
                                uint64_t* var_188
                                var_188.d = *(arg1 + 0x8c)
                                void var_c0
                                zmm6.d = zmm6.d f+ *(*(*rcx_13 + 0x28))(rcx_13, &var_c0, 
                                    zx.q(var_13c_1 + i_7), zx.q(i_4 + var_13c_1), var_188, &var_d8, 
                                    var_178, var_170, var_168)
                                
                                if (rbx_6 != 0)
                                    rbx_6[1].d -= 1
                                    
                                    if (rbx_6[1].d == 1)
                                        (**rbx_6)(rbx_6)
                                        int32_t temp5_1 = *(rbx_6 + 0xc)
                                        *(rbx_6 + 0xc) -= 1
                                        
                                        if (temp5_1 == 1)
                                            (*(*rbx_6 + 8))(rbx_6, 1)
                                
                                if (i_4 == i)
                                    break
                                
                                rdi_3 = zx.q(rdi_3.d + 1)
                            while (rdi_3.d s< var_108[6].d)
                            
                            r12 = var_f0
                            r13 = zx.q(var_158)
                            rsi_1 = var_108
                        
                        int32_t rdx_9 = var_128_1.d
                        i.b = 1
                        int32_t rdx_10
                        
                        if (rdx_9 == 0)
                            rdx_10 = 0
                        else
                            rdx_10 = rdx_9 - 1
                        
                        r14.b = i_1 == rdx_10
                        char r8_4
                        
                        if (zmm7.d f!= zmm8.d)
                            r8_4 = 0
                        else
                            r8_4 = 1
                        
                        zmm6.d = zmm6.d f+ zmm7.d
                        bool r9 = zmm9.d f>= zmm6.d
                        
                        if (r9 == 0)
                        label_140efe54c:
                            int32_t rbx_8
                            
                            if (i_1 == rdx_10)
                                if (r9 == 0 && r8_4 == 0)
                                    goto label_140efe571
                                
                                r14.b = 0
                                rbx_8 = *(var_110_1 + 4)
                            else if (r8_4 != 0)
                                rbx_8 = i_1 + var_13c_1
                            else
                            label_140efe571:
                                i.b = 0
                                rbx_8 = i_5 + var_13c_1
                            
                            var_168 = r12
                            var_170 = &var_150
                            var_178 = &var_140
                            var_14c = rbx_8
                            char var_a4_1 = 0
                            void var_a8
                            zmm8, zmm9, zmm10 = sub_140ef9bc0(arg1, var_154, rbx_8, zmm7, &var_a8, 
                                &var_158, var_178, var_170, var_168)
                            r13 = sx.q(var_158)
                            char var_a4_2 = 0
                            
                            if (r13.d s< rsi_1[6].d)
                                int64_t* rcx_21 = *(rsi_1[5] + r13 * 0x30)
                                void var_e8
                                (*(*rcx_21 + 8))(rcx_21, &var_e8)
                                int32_t var_e4
                                
                                if (rbx_8 == var_e4)
                                    r13 = zx.q(r13.d + 1)
                                    var_158 = r13.d
                            
                            int32_t rax_33 = *(r12 + 0xc)
                            zmm7 = zmm8
                            void* rsi_2 = *r12
                            int32_t j_4 = r12[1].d
                            var_150 = rbx_8
                            
                            if (rax_33 s< 0)
                                if (j_4 != 0)
                                    void* rsi_4 = rsi_2 + 8
                                    int32_t j
                                    
                                    do
                                        int64_t* rbx_10 = *rsi_4
                                        
                                        if (rbx_10 != 0)
                                            rbx_10[1].d -= 1
                                            
                                            if (rbx_10[1].d == 1)
                                                (**rbx_10)(rbx_10)
                                                int32_t temp10_1 = *(rbx_10 + 0xc)
                                                *(rbx_10 + 0xc) -= 1
                                                
                                                if (temp10_1 == 1)
                                                    (*(*rbx_10 + 8))(rbx_10, 1)
                                        
                                        rsi_4 += 0x10
                                        j = j_4
                                        j_4 -= 1
                                    while (j != 1)
                                    rax_33 = *(r12 + 0xc)
                                
                                r12[1].d = 0
                                
                                if (rax_33 != 0)
                                    sub_1405a5410(r12, 0)
                            else
                                if (j_4 != 0)
                                    int64_t* rsi_3 = rsi_2 + 8
                                    int32_t j_1
                                    
                                    do
                                        int64_t* rbx_9 = *rsi_3
                                        
                                        if (rbx_9 != 0)
                                            rbx_9[1].d -= 1
                                            
                                            if (rbx_9[1].d == 1)
                                                (**rbx_9)(rbx_9)
                                                int32_t temp11_1 = *(rbx_9 + 0xc)
                                                *(rbx_9 + 0xc) -= 1
                                                
                                                if (temp11_1 == 1)
                                                    (*(*rbx_9 + 8))(rbx_9, 1)
                                        
                                        rsi_3 = &rsi_3[2]
                                        j_1 = j_4
                                        j_4 -= 1
                                    while (j_1 != 1)
                                
                                r12[1].d = 0
                            
                            if (r14.b != 0)
                                var_168 = r12
                                int32_t rbx_11 = *(var_110_1 + 4)
                                var_170 = &var_150
                                var_14c = rbx_11
                                var_178 = &var_140
                                char var_9c_1 = 0
                                void var_a0
                                zmm8, zmm9, zmm10 = sub_140ef9bc0(arg1, var_154, rbx_11, zmm8, 
                                    &var_a0, &var_158, var_178, var_170, var_168)
                                r13 = sx.q(var_158)
                                char var_9c_2 = 0
                                
                                if (r13.d s< var_108[6].d)
                                    int64_t* rcx_31 = *(var_108[5] + r13 * 0x30)
                                    void var_e0
                                    (*(*rcx_31 + 8))(rcx_31, &var_e0)
                                    int32_t var_dc
                                    
                                    if (rbx_11 == var_dc)
                                        r13 = zx.q(r13.d + 1)
                                        var_158 = r13.d
                                
                                int32_t rax_41 = *(r12 + 0xc)
                                zmm7 = zmm8
                                void* rsi_5 = *r12
                                int32_t j_5 = r12[1].d
                                var_150 = rbx_11
                                
                                if (rax_41 s< 0)
                                    if (j_5 != 0)
                                        void* rsi_7 = rsi_5 + 8
                                        int32_t j_2
                                        
                                        do
                                            int64_t* rbx_13 = *rsi_7
                                            
                                            if (rbx_13 != 0)
                                                rbx_13[1].d -= 1
                                                
                                                if (rbx_13[1].d == 1)
                                                    (**rbx_13)(rbx_13)
                                                    int32_t temp16_1 = *(rbx_13 + 0xc)
                                                    *(rbx_13 + 0xc) -= 1
                                                    
                                                    if (temp16_1 == 1)
                                                        (*(*rbx_13 + 8))(rbx_13, 1)
                                            
                                            rsi_7 += 0x10
                                            j_2 = j_5
                                            j_5 -= 1
                                        while (j_2 != 1)
                                        rax_41 = *(r12 + 0xc)
                                    
                                    r12[1].d = 0
                                    
                                    if (rax_41 != 0)
                                        sub_1405a5410(r12, 0)
                                else
                                    if (j_5 != 0)
                                        int64_t* rsi_6 = rsi_5 + 8
                                        int32_t j_3
                                        
                                        do
                                            int64_t* rbx_12 = *rsi_6
                                            
                                            if (rbx_12 != 0)
                                                rbx_12[1].d -= 1
                                                
                                                if (rbx_12[1].d == 1)
                                                    (**rbx_12)(rbx_12)
                                                    int32_t temp17_1 = *(rbx_12 + 0xc)
                                                    *(rbx_12 + 0xc) -= 1
                                                    
                                                    if (temp17_1 == 1)
                                                        (*(*rbx_12 + 8))(rbx_12, 1)
                                            
                                            rsi_6 = &rsi_6[2]
                                            j_3 = j_5
                                            j_5 -= 1
                                        while (j_3 != 1)
                                    
                                    r12[1].d = 0
                                
                                goto label_140efe814
                            
                            if (i.b != 0)
                                goto label_140efe814
                            
                            i = i_1
                        else
                            if (i_1 == rdx_10)
                                if (rdi_1 + 1 s< rsi_1[8].d)
                                    zmm6.d = zmm6.d f+ *(rsi_1[7] + result_1 * 0x28 + 0x40)
                                    zmm6.d = zmm6.d f+ zmm10.d
                                    
                                    if (zmm6.d f<= zmm9.d)
                                        break
                                
                                goto label_140efe54c
                            
                            zmm7 = zmm6
                        label_140efe814:
                            i_5 = i_1
                            int64_t* rcx_37 = *(arg1 + 0xe0)
                            int32_t i_3 = (*(*rcx_37 + 0x50))(rcx_37)
                            i = i_3
                            i_1 = i_3
                        
                        rsi_1 = var_108
                    while (i != 0xffffffff)
                    
                    r14 = zx.q(var_14c)
                
                r15 = arg1
                int64_t* rcx_38 = *(r15 + 0xe0)
                (*(*rcx_38 + 0x28))(rcx_38)
                int64_t rcx_39 = var_130
                
                if (rcx_39 != 0)
                    sub_140a74f90(rcx_39)
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp3_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rdi_1 = var_148_1
                r11 = zx.q(var_154)
            else if (arg4.b == 0 || rdi_1 + 1 == rcx)
                void* rbx_16
                
                if (rdi_1 == 0 || rdx != 0 || rax_3.b != 0)
                    rbx_16 = r10_1
                    
                    if (rax_3.b == 0)
                        zmm3.d = zmm7.d f+ *(rbx_16 + 0x10)
                        zmm3 = _mm_min_ss(zmm3.d, zmm9.d)
                    else
                        zmm3.d = zmm3.d f+ *(r10_1 + 0x1c)
                        zmm3.d = zmm3.d f+ zmm7.d
                else
                    rdi_1 -= 1
                    result_1 -= 1
                    rbx_16 = r8_1 + sx.q(rdi_1) * 0x28
                    zmm3.d = zmm7.d f+ *(rbx_16 + 0x10)
                    zmm3 = _mm_min_ss(zmm3.d, zmm9.d)
                
                char var_b4_1 = 0
                int32_t var_b8
                
                if (rbx_16 != r8_1 + sx.q(rsi_1[8].d - 1) * 0x28)
                    float zmm0
                    
                    if (rbx_16 != r10_1)
                        zmm0 = *(rbx_16 + 0x10)
                    else
                        zmm0 = zmm8.d
                    
                    zmm7.d = zmm7.d f- zmm0
                    char var_b4_2 = 1
                    zmm7.d = zmm7.d f+ *(rbx_16 + 0x18)
                    var_b8 = zmm7.d
                
                var_168 = r12
                var_170 = &var_150
                var_178 = &var_140
                zmm8, zmm9 = sub_140ef9bc0(r15, r11.d, *(rbx_16 + 4), zmm3, &var_b8, &var_158, 
                    var_178, var_170, var_168)
                r13 = sx.q(var_158)
                
                if (r13.d s< rsi_1[6].d)
                    int64_t* rcx_50 = *(rsi_1[5] + r13 * 0x30)
                    (*(*rcx_50 + 8))(rcx_50, &var_b0)
                    char var_ac
                    
                    if (*(rbx_16 + 4) == var_ac.d)
                        r13 = zx.q(r13.d + 1)
                        var_158 = r13.d
                
                r14 = zx.q(*(rbx_16 + 4))
                var_14c = r14.d
                var_150 = r14.d
                zmm7 = zmm8
                sub_140e86360(r12, 0)
                char var_b4_3 = 0
                r11 = zx.q(var_154)
            else
                zmm7 = zmm1
            rdi_1 += 1
            rcx = rsi_1[8].d
            result = result_1 + 1
            var_148_1 = rdi_1
            result_1 = result
        while (rdi_1 s< rcx)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
