// 函数: sub_140ec5c40
// 地址: 0x140ec5c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t* r14 = arg2
*(arg1 + 0x304) = 0
int128_t zmm6
float zmm7
float zmm8
zmm6, zmm7, zmm8 = sub_140e1ca00(arg1, arg2, arg3, arg4)
int32_t r12 = *(arg3 + 0x130)
int32_t r13 = r12
int32_t rbx = r12 - 2
int128_t zmm1_1

if (rbx s>= 0)
    int64_t rdi_2 = sx.q(rbx) * 0x48
    int32_t temp0_1
    
    do
        void* rax_3 = *(arg3 + 0x128)
        void* rcx = &arg3[8]
        
        if (rax_3 != 0)
            rcx = rax_3
        
        zmm1_1.d = (*(rcx + rdi_2 + 4)).d f* *(rcx + rdi_2 + 0x24)
        zmm1_1.d = zmm1_1.d f+ *(rcx + rdi_2) f* *(rcx + rdi_2 + 0x1c)
        zmm1_1.d = zmm1_1.d f+ *(rcx + rdi_2 + 0x2c)
        int32_t rcx_1 = int.d(zmm1_1.d)
        zmm1_1.d = r14[2].d f* *r14
        zmm1_1.d = zmm1_1.d f+ r14[3]
        
        if (rcx_1 s> int.d(zmm1_1.d))
            *(arg1 + 0x304) += 1
            sub_140dbaf40(&arg3[8], rbx, 1, 1)
            r13 = rbx
        
        rdi_2 -= 0x48
        temp0_1 = rbx
        rbx -= 1
    while (temp0_1 - 1 s>= 0)

void* r10 = &arg3[8]
int32_t result

if (r13 != r12)
    void* rax_5 = *(r10 + 0x120)
    int128_t var_48_1 = zmm6
    zmm6 = r14[2]
    
    if (rax_5 != 0)
        r10 = rax_5
    
    float var_58_1 = zmm7
    float var_68_1 = zmm8
    int64_t rcx_4 = sx.q(*(arg3 + 0x130)) * 9
    int64_t var_a4_1 = 0
    zmm1_1 = *(r10 + (rcx_4 << 3) - 0x48)
    void* rbx_1 = r10 + (rcx_4 << 3)
    float zmm0 = *(rbx_1 - 0x44)
    zmm8 = *r14 f- zmm1_1.d
    zmm7 = r14[1] f- zmm0
    int32_t var_b0 = zmm1_1.d
    float var_ac_1 = zmm0
    float var_b8_1 = zmm8
    float var_b4_1 = zmm7
    int32_t var_a8_1 = 0x3f800000
    int128_t var_c8 = data_142d8c9b0
    int32_t var_94[0x6]
    float zmm7_1
    float zmm8_1
    zmm7_1, zmm8_1 = sub_1408b8950(&var_94, &var_c8, &r14[7])
    zmm1_1.d = zmm6.d f* zmm8_1
    int32_t var_a8_2 = zmm6.d
    float var_9c_1 = zmm8_1
    zmm1_1.d = zmm1_1.d f+ r14[3]
    char var_7c
    char var_7c_1 = var_7c ^ ((r14[0xd].b ^ var_7c) & 1)
    float var_98_1 = zmm7_1
    var_a4_1.d = zmm1_1.d
    var_a4_1:4.d = zmm6.d * zmm7_1 f+ r14[4]
    result = sub_140d96150(rbx_1 - 0x48, &var_b0)
    int32_t r14_1 = int.d(fconvert.t(*(rbx_1 - 0x3c)))
    int32_t rbx_2 = r13 - 1
    
    if (rbx_2 s>= 0)
        int64_t rdi_4 = sx.q(rbx_2) * 0x48
        int32_t temp1_1
        
        do
            void* rax_9 = *(arg3 + 0x128)
            void* rcx_8 = &arg3[8]
            
            if (rax_9 != 0)
                rcx_8 = rax_9
            
            result = int.d(*(rcx_8 + rdi_4 + 8) f* *(rcx_8 + rdi_4) f+ *(rcx_8 + rdi_4 + 0xc))
            
            if (result s> r14_1)
                *(arg1 + 0x304) += 1
                result = sub_140dbaf40(&arg3[8], rbx_2, 1, 1)
            
            rdi_4 -= 0x48
            temp1_1 = rbx_2
            rbx_2 -= 1
        while (temp1_1 - 1 s>= 0)
else
    result = sub_140dbaf40(r10, *(arg3 + 0x130) - 1, 1, 1)

__security_check_cookie(rax_1 ^ &var_e8)
return result
