// 函数: sub_1426870c0
// 地址: 0x1426870c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_9c8
int64_t rax_1 = __security_cookie ^ &var_9c8
char r10 = 0
int64_t* rsi = arg1
int32_t var_984 = 0
uint64_t result

if (*(arg1[0x95] + 8) != 0)
    int64_t* rdi_1 = arg4[1]
    uint64_t r12
    r12.b = 0
    void* r15_1 = *arg4
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t* var_938
    int64_t* rcx_2
    
    if (r15_1 != 0)
        rcx_2 = var_938
    else
        r10 = (r15_1 + 1).b
        r15_1 = arg1[0x67]
        rcx_2 = arg1[0x68]
        var_938 = rcx_2
        
        if (rcx_2 != 0)
            rcx_2[1].d += 1
            rcx_2 = var_938
    
    if ((r10 & 1) != 0 && rcx_2 != 0)
        rcx_2[1].d -= 1
        
        if (rcx_2[1].d == 1)
            (**var_938)(var_938)
            int32_t rax_7 = *(var_938 + 0xc)
            *(var_938 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*var_938 + 8))(var_938, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_11 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_11 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    void* rax_14 = (*(*rsi + 0x150))(rsi)
    void* const rbx_3
    
    if (rax_14 == 0)
        rbx_3 = nullptr
    else
        rbx_3 = *(rax_14 + 0x120)
        
        if (rbx_3 == 0)
            rbx_3 = nullptr
        else
            void* rax_15 = sub_14269bba0()
            void* rdx_1 = *(rbx_3 + 0x10)
            int64_t rax_16 = sx.q(*(rax_15 + 0x38))
            
            if (rax_16.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
                rbx_3 = nullptr
    
    void* const var_910_1 = rbx_3
    void** const var_918 = &data_143459760
    void var_908
    sub_140d3a3a0(&var_908, arg5)
    int64_t var_900_1 = 0
    void var_8f8
    sub_1426022c0(&var_8f8)
    uint32_t rax_18
    
    if (data_143de5480 != 0)
        rax_18.b = GetCurrentThreadId() == data_143de5470
    
    void* rdx_3
    void* rbx_4
    
    if (data_143de5480 == 0 || rax_18.b != 0)
        rdx_3 = rsi[0x95]
        rbx_4 = rdx_3 + 0x60
    else
        rdx_3 = rsi[0x95]
        rbx_4 = &var_8f8
    
    sub_142611af0(rbx_4, *(rdx_3 + 8), *(r15_1 + 0x20), &var_918)
    void* rax_19 = *(r15_1 + 0x10)
    
    if (rax_19 != 0 && rax_19 != -8)
        float zmm3 = arg2[5]
        uint32_t zmm6[0x4] = arg2[3]
        float zmm0_1 = zmm3 - arg2[2]
        zmm3 = zmm3 + arg2[2]
        uint32_t zmm8[0x4] = arg2[4]
        uint32_t zmm4_1[0x4] = _mm_max_ss(rsi[0x90].d[0], 0)
        int32_t var_998_1 = 0x100
        int32_t i = 0
        zmm4_1[0] = zmm4_1[0] f+ zmm0_1 * 0.5f
        zmm0_1 = zmm6[0] + *arg2
        zmm6[0] = zmm6[0] f- *arg2
        float var_94c_1 = zmm3 * 0.5f
        zmm6[0] = zmm6[0] f* -0.5f
        float var_950 = zmm0_1 * -0.5f
        zmm0_1 = zmm8[0] + arg2[1]
        zmm8[0] = zmm8[0] f- arg2[1]
        int32_t* var_9a0_1 = &i
        void var_878
        void* var_9a8_1 = &var_878
        zmm8[0] = zmm8[0] f* -0.5f
        float var_948_1 = zmm0_1 * -0.5f
        zmm6 = _mm_and_ps(zmm6, 0x7fffffff)
        zmm4_1 = _mm_and_ps(zmm4_1, 0x7fffffff)
        zmm8 = _mm_and_ps(zmm8, 0x7fffffff)
        uint32_t var_960 = zmm6[0]
        uint32_t var_95c_1 = zmm4_1[0]
        uint32_t var_958_1 = zmm8[0]
        int32_t rax_21
        uint128_t zmm9_1
        rax_21, zmm9_1 =
            sub_142613e80(rbx_4, &var_950, &var_960, rax_19 + 8, var_9a8_1, var_9a0_1, var_998_1)
        
        if (((rax_21 u>> 0x1e).b & 1) != 0)
            int64_t rbx_5 = sx.q(arg3[1].d)
            sub_142674100(arg3, i)
            r12 = 0
            int32_t var_984_1 = 0
            
            if (i s> 0)
                void* r15_2 = &var_878
                int64_t rdi_3 = rbx_5 * 0x18
                
                do
                    int32_t* var_978
                    void* var_930
                    
                    if (((sub_142610d20(*(rsi[0x95] + 8), *r15_2, &var_978, &var_930) u>> 0x1e).b
                            & 1) != 0)
                        void* r13_1 = var_930
                        int64_t rsi_1 = 0
                        uint128_t zmm2_1 = zmm9_1
                        int64_t zmm3_1 = zmm9_1.q
                        float zmm4_2 = zmm9_1.d
                        uint64_t rbx_6 = zx.q(*(r13_1 + 0x1e))
                        
                        if (rbx_6 u>= 4)
                            void* r12_1 = r13_1 + 6
                            int64_t j_3 = ((rbx_6 - 4) u>> 2) + 1
                            int64_t r11_2 = *(var_978 + 0x18)
                            rsi_1 = j_3 << 2
                            int64_t j
                            
                            do
                                uint64_t rdx_8 = zx.q(*(r12_1 - 2)) * 3
                                zmm2_1.d = zmm2_1.d f- *(r11_2 + (rdx_8 << 2))
                                zmm3_1.d = zmm3_1.d f- *(r11_2 + (rdx_8 << 2) + 8)
                                uint64_t r9_3 = zx.q(*r12_1) * 3
                                zmm2_1.d = zmm2_1.d f- *(r11_2 + (r9_3 << 2))
                                zmm3_1.d = zmm3_1.d f- *(r11_2 + (r9_3 << 2) + 8)
                                uint64_t r8_4 = zx.q(*(r12_1 + 2)) * 3
                                uint64_t rax_30 = zx.q(*(r12_1 + 4))
                                r12_1 += 8
                                zmm2_1.d = zmm2_1.d f- *(r11_2 + (r8_4 << 2))
                                zmm3_1.d = zmm3_1.d f- *(r11_2 + (r8_4 << 2) + 8)
                                uint64_t rcx_15 = rax_30 * 3
                                zmm2_1.d = zmm2_1.d f- *(r11_2 + (rcx_15 << 2))
                                zmm3_1.d = zmm3_1.d f- *(r11_2 + (rcx_15 << 2) + 8)
                                zmm4_2 = zmm4_2 f+ *(r11_2 + (rdx_8 << 2) + 4) f+
                                    *(r11_2 + (r9_3 << 2) + 4) f+ *(r11_2 + (r8_4 << 2) + 4) f+
                                    *(r11_2 + (rcx_15 << 2) + 4)
                                j = j_3
                                j_3 -= 1
                            while (j != 1)
                            r12 = zx.q(var_984_1)
                        
                        if (rsi_1 s< rbx_6)
                            void* r8_6 = r13_1 + 4 + (rsi_1 << 1)
                            int64_t j_2 = rbx_6 - rsi_1
                            int64_t rdx_9 = *(var_978 + 0x18)
                            int64_t j_1
                            
                            do
                                uint64_t rax_32 = zx.q(*r8_6)
                                r8_6 += 2
                                uint64_t rcx_16 = rax_32 * 3
                                zmm2_1.d = zmm2_1.d f- *(rdx_9 + (rcx_16 << 2))
                                zmm3_1.d = zmm3_1.d f- *(rdx_9 + (rcx_16 << 2) + 8)
                                zmm4_2 = zmm4_2 f+ *(rdx_9 + (rcx_16 << 2) + 4)
                                j_1 = j_2
                                j_2 -= 1
                            while (j_1 != 1)
                        
                        int64_t rax_33 = *r15_2
                        int64_t rcx_17 = *arg3
                        rsi = arg1
                        uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(rbx_6.d))
                        *(rdi_3 + rcx_17) = rax_33
                        float zmm1_1 = 1f f/ zmm0_2.d
                        zmm2_1.d = zmm2_1.d f* zmm1_1
                        zmm3_1.d = zmm3_1.d f* zmm1_1
                        *(rdi_3 + rcx_17 + 8) = (_mm_unpacklo_ps(zmm2_1, zmm3_1)).q
                        *(rdi_3 + rcx_17 + 0x10) = zmm4_2 * zmm1_1
                    
                    r12 = zx.q(r12.d + 1)
                    rdi_3 += 0x18
                    r15_2 += 8
                    var_984_1 = r12.d
                while (r12.d s< i)
            
            r12.b = 1
    
    sub_142602500(&var_8f8)
    var_918 = &data_143459748
    int64_t* rbx_8 = arg4[1]
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            int64_t rdx_10 = *rbx_8
            (*rdx_10)(rbx_8, rdx_10)
            int32_t r14_3 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (r14_3 == 1)
                int64_t r8_7 = *rbx_8
                (*(r8_7 + 8))(rbx_8, zx.q(r14_3), r8_7)
    
    result = zx.q(r12.b)
else
    int64_t* rbx_1 = arg4[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t r14_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (r14_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(r14_1))
    
    result.b = 0

__security_check_cookie(rax_1 ^ &var_9c8)
return result
