// 函数: sub_140fbd820
// 地址: 0x140fbd820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* rdi = data_143e1e018
int64_t r14 = data_143e1e008
void* var_1a8 = arg3
int64_t var_188 = r14

if (rdi != 0)
    rdi[1].d += 1

int64_t* r12 = *(arg4 + 0x30)
int32_t rbx_1

if (r12[1].d != *(r12 + 0x34))
    int32_t rax_3 = sub_140b5ead0(r14.d)
    void* r9 = &r12[7]
    void* rcx_2 = *(r9 + 8)
    
    if (rcx_2 != 0)
        r9 = rcx_2
    
    rbx_1 = *(r9 + (((sx.q(r12[9].d) - 1) & sx.q(var_188:4.d + rax_3)) << 2))

if (r12[1].d == *(r12 + 0x34) || rbx_1 == 0xffffffff)
label_140fbd8d6:
    rbx_1 = -1
else
    int64_t rcx_3 = *r12
    
    while (true)
        int64_t rax_8 = sx.q(rbx_1) << 5
        
        if (*(rax_8 + rcx_3) == r14)
            break
        
        rbx_1 = *(rax_8 + rcx_3 + 0x18)
        
        if (rbx_1 == 0xffffffff)
            goto label_140fbd8d6

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

void* rax_11

if (rbx_1 != 0xffffffff && *(arg1 + 0x3b0) != 0)
    rax_11 = *(arg1 + 0x3b8)

if (rbx_1 == 0xffffffff || *(arg1 + 0x3b0) == 0 || rax_11 == 0 || *(rax_11 + 8) s<= 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rbx_2 = *(arg1 + 0x398)
    int128_t* rcx_6 = nullptr
    
    if (rbx_2 != 0)
        int32_t rax_12 = rbx_2[1].d
        
        if (rax_12 != 0)
            rbx_2[1].d = rax_12 + 1
            rax_12.b = 1
        
        if (rax_12.b == 0)
            rbx_2 = nullptr
        
        if (rbx_2 != 0)
            rcx_6 = *(arg1 + 0x390)
    
    int128_t zmm10 = *rcx_6
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* rbx_3 = *(arg1 + 0x398)
    int64_t rdx = 0
    
    if (rbx_3 != 0)
        int32_t rax_15 = rbx_3[1].d
        
        if (rax_15 == 0)
            rbx_3 = nullptr
        else
            rbx_3[1].d = rax_15 + 1
            
            if (rbx_3 != 0)
                rdx = *(arg1 + 0x390)
    
    int64_t* r14_1 = *(arg1 + 0x3b8)
    
    if (r14_1 != 0)
        int32_t rax_17 = r14_1[1].d
        
        if (rax_17 == 0)
            r14_1 = nullptr
        else
            r14_1[1].d = rax_17 + 1
    
    void* rcx_9 = nullptr
    
    if (r14_1 != 0)
        rcx_9 = *(arg1 + 0x3b0)
    
    int64_t var_198 = rdx
    int64_t* var_190_1 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    int32_t rax_20 = sub_140fc2480(*sub_140fb2490(rcx_9 + 0x310), &var_198)
    sub_140fc26e0()
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            int64_t rdx_2 = *rbx_3
            (*rdx_2)(rbx_3, rdx_2)
            int32_t temp6_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp7_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*r14_1 + 8))(r14_1, 1)
    
    void* rax_24 = var_1a8
    void* rcx_16 = nullptr
    float zmm7_1 = *(arg4 + 0x18)
    float zmm5_1 = *(arg4 + 0x1c)
    float zmm6_1 = *(rax_24 + 0x20)
    int128_t zmm9 = *(rax_24 + 0x1c)
    float zmm8_1 = *(rax_24 + 0x28)
    float zmm3_1 = *(rax_24 + 0x24)
    int64_t* rbx_4 = *(arg1 + 0x3b8)
    float zmm4_1 = 1f / (zmm9.d * zmm8_1 - zmm6_1 * zmm3_1)
    zmm9.d = zmm9.d f* zmm4_1
    zmm9.d = zmm9.d f* (zmm5_1 f- *(rax_24 + 0x30))
    zmm9.d = zmm9.d f- zmm6_1 * zmm4_1 * (zmm7_1 f- *(rax_24 + 0x2c))
    
    if (rbx_4 != 0)
        int32_t rax_25 = rbx_4[1].d
        
        if (rax_25 != 0)
            rbx_4[1].d = rax_25 + 1
            rax_25.b = 1
        
        if (rax_25.b == 0)
            rbx_4 = nullptr
        
        if (rbx_4 != 0)
            rcx_16 = *(arg1 + 0x3b0)
    
    *(rcx_16 + 0x2f4) = zmm8_1 * zmm4_1 * (zmm7_1 f- *(rax_24 + 0x2c))
        - zmm3_1 * zmm4_1 * (zmm5_1 f- *(rax_24 + 0x30))
    *(rcx_16 + 0x2f8) = zmm9.d
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp9_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    void* rcx_19 = *(arg1 + 0x3b8)
    int128_t var_168 = zmm10
    var_1a8 = nullptr
    void* var_1a0_1 = rcx_19
    
    if (rcx_19 != 0)
        int32_t rax_28 = *(rcx_19 + 8)
        
        if (rax_28 == 0)
            int64_t var_1a0_2 = 0
        else
            *(rcx_19 + 8) = rax_28 + 1
            
            if (rcx_19 != 0)
                var_1a8 = *(arg1 + 0x3b0)
    
    var_188 = 0
    int32_t var_180_1 = 0
    sub_1407473e0(&var_188, arg1 + 0x3e0)
    var_198 = 0
    var_190_1.d = 0
    sub_1407473e0(&var_198, arg1 + 0x3d0)
    char rbx_5 = *sub_140eff7d0(arg1 + 0x408)
    uint128_t var_178
    sub_140fbc360(&var_178, &var_168, *sub_140eff7d0(arg1 + 0x3f0), rbx_5, &var_198, &var_188, 
        &var_1a8, rax_20)
    uint128_t zmm0_2 = var_178
    var_178 = zmm0_2
    int64_t* rbx_6 = _mm_bsrli_si128(zmm0_2, 8).q
    
    if (rbx_6 != 0)
        rbx_6[1].d += 1
    
    int32_t var_a4
    int32_t var_a4_1 = var_a4 & 0xffffff00
    char var_158 = 1
    int512_t zmm1_2
    zmm1_2.o = zx.o(0)
    int64_t var_150_1 = 0
    int64_t var_148_1 = 0
    char var_138_1 = 0
    int64_t var_130
    __builtin_memset(&var_130, 0, 0x88)
    int32_t var_a8_1 = 0x20702
    sub_140596b00(arg2, sub_140f9fe40(&var_158, &var_178))
    sub_140597700(&var_158)
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            int64_t r8_4 = *rbx_6
            (*r8_4)(rbx_6, zmm1_2, r8_4)
            int32_t temp11_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp11_1 == 1)
                int64_t r8_5 = *rbx_6
                (*(r8_5 + 8))(rbx_6, 1, r8_5)

__security_check_cookie(rax_1 ^ &var_1e8)
return arg2
