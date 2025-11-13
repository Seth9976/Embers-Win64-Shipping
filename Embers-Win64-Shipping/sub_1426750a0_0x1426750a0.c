// 函数: sub_1426750a0
// 地址: 0x1426750a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
void** const result = __security_cookie ^ &var_1f8
void** const result_1 = result
char rdx = 0
int32_t var_1b8 = 0

if (arg2[1].d != 0)
    result = arg1[0x95]

int64_t* rbx_5

if (arg2[1].d == 0 || result == 0 || result[1] == 0)
    rbx_5 = arg4[1]
    
    if (rbx_5 != 0)
    label_1426754ec:
        result = zx.q(rbx_5[1].d)
        rbx_5[1].d -= 1
        
        if (result.d == 1)
            result = (**rbx_5)(rbx_5)
            int32_t rdi_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (rdi_1 == 1)
                result = (*(*rbx_5 + 8))(rbx_5, zx.q(rdi_1))
else
    int64_t* rsi_1 = arg4[1]
    void* r13_1 = *arg4
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    int64_t* var_178
    int64_t* rcx
    
    if (r13_1 != 0)
        rcx = var_178
    else
        rdx = (r13_1 + 1).b
        r13_1 = arg1[0x67]
        rcx = arg1[0x68]
        var_178 = rcx
        
        if (rcx != 0)
            rcx[1].d += 1
            rcx = var_178
    
    if ((rdx & 1) != 0 && rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1)
            (**var_178)(var_178)
            int32_t rax_3 = *(var_178 + 0xc)
            *(var_178 + 0xc) -= 1
            
            if (rax_3 == 1)
                (*(*var_178 + 8))(var_178, 1)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t rax_7 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
    
    void* rax_10 = (*(*arg1 + 0x150))(arg1)
    void* const rbx_2
    
    if (rax_10 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = *(rax_10 + 0x120)
        
        if (rbx_2 == 0)
            rbx_2 = nullptr
        else
            void* rax_11 = sub_14269bba0()
            void* rdx_1 = *(rbx_2 + 0x10)
            int64_t rax_12 = sx.q(*(rax_11 + 0x38))
            
            if (rax_12.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
                rbx_2 = nullptr
    
    void* const var_140_1 = rbx_2
    void** const var_148 = &data_143459760
    void var_138
    sub_140d3a3a0(&var_138, arg5)
    int64_t var_130_1 = 0
    void var_128
    sub_1426022c0(&var_128)
    uint32_t rax_14
    
    if (data_143de5480 != 0)
        rax_14.b = GetCurrentThreadId() == data_143de5470
    
    void* rdx_3
    void* r12_1
    
    if (data_143de5480 == 0 || rax_14.b != 0)
        rdx_3 = arg1[0x95]
        r12_1 = rdx_3 + 0x60
    else
        rdx_3 = arg1[0x95]
        r12_1 = &var_128
    
    sub_142611af0(r12_1, *(rdx_3 + 8), *(r13_1 + 0x20), &var_148)
    void* r13_2 = *(r13_1 + 0x10)
    
    if (r13_2 != 0 && r13_2 != -8)
        int32_t i = 0
        int128_t zmm8 = zx.o(0)
        uint32_t zmm7[0x4] = _mm_max_ss(arg1[0x90].d[0], 0)
        uint32_t zmm0_1[0x4] = _mm_and_ps(*arg3, 0x7fffffff)
        uint32_t zmm10[0x4] = *(arg3 + 4)
        uint32_t var_1b0 = zmm0_1[0]
        uint32_t zmm1_1[0x4] = _mm_and_ps(zmm10, 0x7fffffff)
        zmm7[0] = zmm7[0] f+ *(arg3 + 8)
        uint32_t var_1a8_1 = zmm1_1[0]
        uint32_t var_1ac_1 = _mm_and_ps(zmm7, 0x7fffffff)[0]
        
        if (arg2[1].d s> 0)
            uint32_t (* rbx_3)[0x4] = nullptr
            int128_t zmm6 = 0x80000000
            
            do
                int64_t rax_16 = *arg2
                int128_t* r8_2 = &var_1b0
                uint32_t var_1a0
                int128_t* rdx_5 = &var_1a0
                int128_t zmm2 = *(rbx_3 + rax_16 + 4) ^ zmm6
                zmm1_1 = *(rbx_3 + rax_16 + 8)
                var_1a0 = (*(rbx_3 + rax_16) ^ zmm6)[0]
                int32_t var_198_1 = zmm2.d
                uint32_t var_19c_1 = zmm1_1[0]
                int32_t var_a8
                uint32_t zmm7_1[0x4]
                uint32_t zmm9_1[0x4]
                int128_t zmm10_1
                
                if ((*(rbx_3 + rax_16 + 0x40) & 1) == 0)
                    zmm6, zmm7_1, zmm8, zmm9_1, zmm10_1 =
                        sub_14260acd0(r12_1, rdx_5, r8_2, r13_2 + 8, &var_1b8, &var_a8, nullptr)
                else
                    zmm6, zmm7_1, zmm8, zmm9_1, zmm10_1 = sub_14260a910(r12_1, rdx_5, r8_2, 
                        r13_2 + 8, &var_1b8, &var_a8, nullptr, zmm8.d)
                
                int64_t rcx_12 = var_1b8.q
                
                if (rcx_12 != 0)
                    int64_t rdx_6 = *arg2
                    int32_t var_a4
                    zmm0_1 = var_a4
                    zmm2 = var_a8 ^ zmm6
                    int32_t var_a0
                    zmm1_1 = var_a0 ^ zmm6
                    float zmm3_1 = *(rbx_3 + rdx_6) f- zmm2.d
                    int32_t var_190_1 = zmm2.d
                    float zmm4_1 = *(rbx_3 + rdx_6 + 4) f- zmm1_1[0]
                    zmm2.d = (*(rbx_3 + rdx_6 + 8)).d f- zmm0_1[0]
                    uint32_t var_188_1 = zmm0_1[0]
                    uint32_t var_18c_1 = zmm1_1[0]
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm9_1[0] = zmm9_1[0] f* zmm9_1[0]
                    zmm7_1[0] = zmm7_1[0] f* zmm7_1[0]
                    zmm4_1 = zmm4_1 * zmm4_1 + zmm3_1 * zmm3_1 f+ zmm2.d
                    zmm2.d = zmm10_1.d f* zmm10_1.d
                    zmm2.d = zmm2.d f+ zmm9_1[0]
                    zmm2.d = zmm2.d f+ zmm7_1[0]
                    
                    if (not(zmm4_1 f> zmm2.d))
                        uint32_t var_158_1 = var_188_1
                        uint32_t var_160[0x4]
                        var_160[0].q = var_190_1.q
                        *(rbx_3 + rdx_6 + 0x28) = var_160
                        *(rbx_3 + rdx_6 + 0x38) = rcx_12
                        int64_t rax_18 = *arg2
                        *(rbx_3 + rax_18 + 0x40) |= 2
                
                i += 1
                rbx_3 = &(*rbx_3)[0x12]
            while (i s< arg2[1].d)
    
    sub_142602500(&var_128)
    result = &data_143459748
    var_148 = &data_143459748
    rbx_5 = arg4[1]
    
    if (rbx_5 != 0)
        goto label_1426754ec
__security_check_cookie(result_1 ^ &var_1f8)
return result
