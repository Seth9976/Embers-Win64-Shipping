// 函数: sub_1426faa60
// 地址: 0x1426faa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg5
void* rsi = arg3
int32_t* r12 = nullptr
int64_t* r14 = arg4
int64_t r15 = arg1
int64_t var_b0 = 0
int32_t var_a8 = 0
uint128_t zmm6
uint128_t zmm7
int128_t zmm8
int128_t zmm9

if (sub_1426e2f00(arg1, rbx) == 0)
    if (rbx == 0)
        rbx = nullptr
    else
        void* rax_3 = sub_142736ba0()
        
        if (rax_3 == 0)
            rbx = nullptr
        else
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                rbx = nullptr
    
    zmm6, zmm7, zmm8, zmm9 = sub_1426e7790(rsi, rbx, &var_b0)
else
    int64_t rbx_1 = sx.q(var_a8)
    int32_t rax_1 = (rbx_1 + 1).d
    var_a8 = rax_1
    
    if (rax_1 s> 0)
        sub_140638a00(&var_b0)
    
    int64_t rcx_1 = var_b0
    int64_t rdx_2 = rbx_1 * 3
    *(rcx_1 + (rdx_2 << 2)) = *r14
    *(rcx_1 + (rdx_2 << 2) + 8) = r14[1].d

int64_t result = 0
int32_t r13 = 0

if (var_a8 s> 0)
    uint128_t var_48_1 = zmm6
    uint128_t var_58_1 = zmm7
    int128_t var_68_1 = zmm8
    int128_t var_78_1 = zmm9
    zmm9 = 0x322bcc77
    
    do
        int64_t var_c0 = 0
        int32_t var_b8_1 = 0
        
        if (sub_1426e2f00(r15, arg6) == 0)
            void* rdx_9
            
            if (arg6 == 0)
                rdx_9 = nullptr
            else
                void* rax_9 = sub_142736ba0()
                
                if (rax_9 == 0)
                    rdx_9 = nullptr
                else
                    int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                    
                    if (rax_10.d s> *(arg6 + 0x38)
                            || *(*(arg6 + 0x30) + (rax_10 << 3)) != rax_9 + 0x30)
                        rdx_9 = nullptr
                    else
                        rdx_9 = arg6
            
            zmm9 = sub_1426e7790(rsi, rdx_9, &var_c0)
        else
            int64_t rsi_1 = sx.q(var_b8_1)
            int32_t rax_7 = (rsi_1 + 1).d
            var_b8_1 = rax_7
            
            if (rax_7 s> 0)
                sub_140638a00(&var_c0)
            
            int64_t rcx_6 = var_c0
            int64_t rdx_7 = rsi_1 * 3
            *(rcx_6 + (rdx_7 << 2)) = *r14
            *(rcx_6 + (rdx_7 << 2) + 8) = r14[1].d
        
        int32_t r15_1 = 0
        
        if (var_b8_1 s> 0)
            int128_t* r14_1 = nullptr
            
            do
                int64_t rax_12 = var_c0
                int64_t rcx_9 = var_b0
                zmm6.d = (*(r14_1 + rax_12)).d f- *(r12 + rcx_9)
                zmm7.d = (*(r14_1 + rax_12 + 4)).d f- *(r12 + rcx_9 + 4)
                zmm8.d = (*(r14_1 + rax_12 + 8)).d f- *(r12 + rcx_9 + 8)
                uint128_t zmm0_2
                zmm0_2.d = zmm6.d f* zmm6.d
                uint128_t zmm2
                zmm2.d = zmm7.d f* zmm7.d
                zmm2.d = zmm2.d f+ zmm0_2.d
                zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
                
                if (zmm2.d f== 1f)
                    goto label_1426fad1c
                
                int32_t var_d0_1
                int32_t var_c8_1
                
                if (zmm2.d f>= zmm9.d)
                    uint128_t zmm4_1
                    zmm4_1.d = 0x3f000000
                    float zmm3 = zmm2.d
                    float temp0_1[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3)
                    zmm3 = zmm3 * 0.5f
                    zmm0_2.d = temp0_1.d f* temp0_1[0]
                    zmm2.d = zmm4_1.d f- zmm3 f* zmm0_2.d
                    zmm0_2.d = temp0_1.d f* zmm2.d
                    temp0_1[0] = temp0_1[0] f+ zmm0_2.d
                    zmm4_1.d = 0.5f - zmm3 * temp0_1[0] * temp0_1[0]
                    zmm0_2.d = temp0_1.d f* zmm4_1.d
                    temp0_1[0] = temp0_1[0] f+ zmm0_2.d
                    zmm6.d = zmm6.d f* temp0_1[0]
                    zmm7.d = zmm7.d f* temp0_1[0]
                    zmm8.d = zmm8.d f* temp0_1[0]
                label_1426fad1c:
                    var_c8_1 = zmm8.d
                    int32_t var_cc_2 = zmm7.d
                    var_d0_1 = zmm6.d
                else
                    var_d0_1 = data_143dbb1f8.d
                    var_c8_1 = data_143dbb200.d
                    float var_cc_1 = data_143dbb1fc
                
                int64_t rsi_2 = sx.q(arg2[1].d)
                int32_t rax_13 = (rsi_2 + 1).d
                arg2[1].d = rax_13
                
                if (rax_13 s> *(arg2 + 0xc))
                    sub_140638a00(arg2)
                
                int64_t rcx_11 = *arg2
                int64_t rdx_11 = rsi_2 * 3
                r15_1 += 1
                r14_1 += 0xc
                *(rcx_11 + (rdx_11 << 2)) = var_d0_1.q
                *(rcx_11 + (rdx_11 << 2) + 8) = var_c8_1
            while (r15_1 s< var_b8_1)
            
            r14 = arg4
        
        int64_t rcx_12 = var_c0
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        rsi = arg3
        r13 += 1
        r15 = arg1
        r12 = &r12[3]
        result = 0
    while (r13 s< var_a8)

int64_t rcx_13 = var_b0

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
