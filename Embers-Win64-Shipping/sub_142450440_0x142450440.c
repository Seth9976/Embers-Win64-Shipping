// 函数: sub_142450440
// 地址: 0x142450440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* const rsi = *(arg1 + 0x20)
int32_t i = 0
void* rax_2
int64_t rax_3
void* rdx_1

if (rsi != 0)
    rax_2 = sub_1425be5e0()
    rdx_1 = *(rsi + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (rsi == 0 || rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rsi = nullptr

int32_t rax_5

if (data_143de5426 == 0)
    rax_5 = sub_14243ac50(rsi)

uint64_t result

if (data_143de5426 != 0 || rax_5 == 1)
    result = sub_1424502c0(arg1, &data_143dbb1f8, 1)
else
    int128_t zmm7_1
    int128_t zmm8_1
    result, zmm7_1, zmm8_1 = sub_1423dde30(data_143f5b298, rsi)
    
    if (result.d != 0)
        int64_t r13
        r13.b = 0
        int128_t var_48_1 = zmm7_1
        data_143dbb200
        int128_t var_58_1 = zmm8_1
        data_143dbb1f8
        int128_t zmm9 = data_143dbb1fc
        int64_t* var_88_1 = nullptr
        int32_t result_1 = 0
        int32_t var_7c_1 = 0x10
        
        if (result.d s> 0)
            int64_t var_168
            void var_148
            int128_t zmm6_1
            
            do
                void* rax_6
                rax_6, zmm6_1, zmm7_1, zmm8_1 = sub_1423dd280(data_143f5b298, rsi, i)
                
                if (rax_6 != 0)
                    int64_t* rcx_4 = *(rax_6 + 0x30)
                    
                    if (rcx_4 != 0)
                        int64_t r9_1 = *rcx_4
                        void var_158
                        (*(r9_1 + 0x6f8))(rcx_4, &var_168, &var_158, r9_1)
                        int64_t result_4 = sx.q(result_1)
                        int32_t result_3 = (result_4 + 1).d
                        result_1 = result_3
                        
                        if (result_3 s> var_7c_1)
                            sub_141eca250(&var_148, result_4.d)
                        
                        int64_t rcx_6 = result_4 * 3
                        int64_t* rdx_6 = &var_148
                        
                        if (var_88_1 != 0)
                            rdx_6 = var_88_1
                        
                        *(rdx_6 + (rcx_6 << 2)) = var_168
                        int32_t var_160
                        *(rdx_6 + (rcx_6 << 2) + 8) = var_160
                        zmm8_1.d = zmm8_1.d f+ var_168.d
                        zmm9.d = zmm9.d f+ var_168:4.d
                        zmm7_1.d = zmm7_1.d f+ var_160
                        r13.b |= (*(*(rax_6 + 0x30) + 0x3d0) u>> 1).b & 1
                
                i += 1
            while (i s< result.d)
            
            result = zx.q(result_1)
            
            if (result.d != 0)
                float zmm1_1 = 1f f/ _mm_cvtepi32_ps(zx.o(result.d)).d
                zmm8_1.d = zmm8_1.d f* zmm1_1
                zmm9.d = zmm9.d f* zmm1_1
                zmm7_1.d = zmm7_1.d f* zmm1_1
                result = sub_142437e30(rsi, 0, 1)
                
                if (*(result + 0x22d) s< 0)
                    int128_t var_38_1 = zmm6_1
                    
                    if (0f f!= *(rsi + 0x550) || 0f f!= *(rsi + 0x554) || 0f f!= *(rsi + 0x558))
                        result.b = 0
                    else
                        result.b = 1
                    
                    if (result.b != 0)
                        void* const rdi = *(arg1 + 0x20)
                        
                        if (rdi == 0)
                            rdi = nullptr
                        else
                            void* rax_10 = sub_1425be5e0()
                            void* rdx_7 = *(rdi + 0x10)
                            result = sx.q(*(rax_10 + 0x38))
                            
                            if (result.d s> *(rdx_7 + 0x38))
                                rdi = nullptr
                            else
                                uint64_t result_2 = result
                                result = *(rdx_7 + 0x30)
                                
                                if (*(result + (result_2 << 3)) != rax_10 + 0x30)
                                    rdi = nullptr
                        
                        if (*(arg1 + 0x61) == 0)
                            zmm7_1 = zx.o(0)
                        
                        float zmm3_1 = *(arg1 + 0x64)
                        int64_t zmm0_2
                        zmm0_2.d = zmm9.q.d f* zmm9.d
                        
                        if (not(zmm8_1.d f* zmm8_1.d f+ zmm0_2.d + zmm7_1.d f* zmm7_1.d
                                <= zmm3_1 * zmm3_1))
                            int32_t rcx_10 = int.d(zmm8_1.d)
                            var_168:4.d = int.d(zmm9.d)
                            int32_t rax_12 = *(rdi + 0x53c)
                            var_168.d = rcx_10
                            int32_t rcx_11 = rcx_10 + *(rdi + 0x538)
                            int32_t rdx_9 = int.d(zmm7_1.d) + *(rdi + 0x540)
                            var_168 = var_168
                            var_168:4.d += rax_12
                            var_168.d = rcx_11
                            int32_t var_160_1 = rdx_9
                            var_168 = var_168
                            result = sub_142441d00(rdi, &var_168)
                
                if (r13.b == 0 || *(arg1 + 0x60) == 0)
                    int64_t* rdx_14 = &var_148
                    
                    if (var_88_1 != 0)
                        rdx_14 = var_88_1
                    
                    result = sub_1424502c0(arg1, rdx_14, result_1)
                else
                    int32_t r12_1
                    r12_1.b = 0
                    int32_t i_1 = 0
                    
                    if (*(arg1 + 0x40) s> 0)
                        int64_t r15_1 = 0
                        int64_t r14_2 = 0
                        void* rdx_13
                        
                        do
                            rdx_13 = *(arg1 + 0x38)
                            
                            if (i_1 != 0xffffffff && *(r14_2 + rdx_13 + 0x70) != 0)
                                result = *(arg1 + 0x48)
                                
                                if ((*(*(r15_1 + result) + 0xbb) & 2) == 0)
                                    *(r14_2 + rdx_13 + 0xa8) = 0
                                    void* const rsi_1 = *(arg1 + 0x20)
                                    void* rax_13
                                    int64_t rax_14
                                    void* rdx_11
                                    
                                    if (rsi_1 != 0)
                                        rax_13 = sub_1425be5e0()
                                        rdx_11 = *(rsi_1 + 0x10)
                                        rax_14 = sx.q(*(rax_13 + 0x38))
                                    
                                    if (rsi_1 == 0 || rax_14.d s> *(rdx_11 + 0x38)
                                            || *(*(rdx_11 + 0x30) + (rax_14 << 3))
                                            != rax_13 + 0x30)
                                        rsi_1 = nullptr
                                    
                                    result, rdx_13 =
                                        sub_14244d840(arg1, rsi_1, i_1, 1, 1, 1, 0xffffffff)
                                    r12_1.b |= result.b
                            
                            i_1 += 1
                            r14_2 += 0xb0
                            r15_1 += 8
                        while (i_1 s< *(arg1 + 0x40))
                        
                        if (r12_1.b != 0)
                            void* const rbx_1 = *(arg1 + 0x20)
                            void* rax_16
                            int64_t rax_17
                            
                            if (rbx_1 != 0)
                                rax_16 = sub_1425be5e0()
                                rdx_13 = *(rbx_1 + 0x10)
                                rax_17 = sx.q(*(rax_16 + 0x38))
                            
                            if (rbx_1 == 0 || rax_17.d s> *(rdx_13 + 0x38)
                                    || *(*(rdx_13 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
                                rbx_1 = nullptr
                            
                            rdx_13.b = 1
                            result = sub_142435600(rbx_1, rdx_13.b)
            
            if (var_88_1 != 0)
                result = sub_140a74f90(var_88_1)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
