// 函数: sub_1421bf320
// 地址: 0x1421bf320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t r15 = 8
void* r13 = **(*(arg1 + 0x10) + 0x40)
void* rbx = nullptr
void* var_58 = nullptr
int32_t rbp = 0
int32_t var_50 = 0
int32_t var_4c = 8
int64_t r12 = sx.q(*(*(arg1 + 0x28) + 0x98))
void var_78

if (r12 s> 0)
    int64_t rsi_1 = 0
    
    do
        int64_t r8_1 = *(*(r13 + 0x90) + (rsi_1 << 3))
        
        if (r8_1 != 0)
            int64_t* rdi_2 = *(arg1 + 0x10) + 0x60
            int32_t var_88
            sub_140865c40(rdi_2, &var_88, r8_1)
            int64_t rax_4 = sx.q(var_88)
            void* const rcx_1
            
            if (rax_4.d == 0xffffffff)
                rcx_1 = nullptr
            else
                rcx_1 = *rdi_2 + rax_4 * 0x18
            
            int32_t* rax_6 = rcx_1 + 8
            
            if (rcx_1 == 0)
                rax_6 = nullptr
            
            if (rax_6 != 0)
                int32_t rdi_3 = *rax_6
                var_50 = rbp + 1
                
                if (rbp + 1 s> r15)
                    sub_141ce8380(&var_78, rbp)
                    rbx = var_58
                
                void* rcx_3 = &var_78
                
                if (rbx != 0)
                    rcx_3 = rbx
                
                *(rcx_3 + (sx.q(rbp) << 2)) = rdi_3
                r15 = var_4c
                rbp = var_50
                rbx = var_58
        
        rsi_1 += 1
    while (rsi_1 s< r12)

int64_t result = *(arg1 + 0x10)
int32_t i = 0
char rdi_4 = not.b(*(result + 0x37)) & 1

if (*(arg1 + 0x118) s> 0)
    void* rbx_1 = nullptr
    
    do
        void* r8_3 = sx.q(zx.d(*(rbx_1 + *(arg1 + 0xf8))) * *(arg1 + 0x114)) + *(arg1 + 0xf0)
        uint128_t zmm0 = zx.o(*(r8_3 + 0x20))
        int32_t rax_10 = *(r8_3 + 0x28)
        uint32_t temp0_1[0x4] = _mm_and_ps(*(r8_3 + 0x40), 0x7fffffff)
        uint32_t zmm2[0x4] = *(r8_3 + 0x44)
        *(r8_3 + 0x30) = zmm0.q
        uint32_t temp0_2[0x4] = _mm_and_ps(zmm2, 0x7fffffff)
        zmm0 = *(r8_3 + 0x48)
        *(r8_3 + 0x38) = rax_10
        int32_t var_7c_1 = _mm_and_ps(zmm0, 0x7fffffff).d
        zmm0 = *(r8_3 + 0x70)
        *(r8_3 + 0x50) = (_mm_unpacklo_ps(temp0_1, temp0_2[0].q)).q
        *(r8_3 + 0x58) = var_7c_1
        *(r8_3 + 0x4c) = *(r8_3 + 0x3c)
        uint8_t rax_14 = (*(r8_3 + 0x5c) u>> 0x19).b
        *(r8_3 + 0x60) = zmm0
        
        if ((rax_14 & 1) == 0 || rdi_4 == 0)
            zmm0.d = arg2.d f* *(r8_3 + 0x1c)
        else
            zmm0 = zx.o(0)
        
        zmm0.d = zmm0.d f+ *(r8_3 + 0xc)
        *(r8_3 + 0xc) = zmm0.d
        result = sx.q(*(arg1 + 0x4c))
        
        if (result.d s> 0)
            int64_t result_1 = result
            result = zx.q(*(result + r8_3))
            *(result_1 + r8_3 + 4) = result.d
        
        int32_t r10_1 = 0
        
        if (var_50 s> 0)
            int64_t r9_1 = 0
            
            do
                void* rcx_6 = &var_78
                r9_1 += 4
                
                if (var_58 != 0)
                    rcx_6 = var_58
                
                r10_1 += 1
                void* rdx_5 = sx.q(*(rcx_6 + r9_1 - 4)) + r8_3
                int32_t rax_16 = *(rdx_5 + 0x14)
                *(rdx_5 + 0x3c) = *(rdx_5 + 0xc)
                *(rdx_5 + 0xc) = *rdx_5
                zmm0 = zx.o(*(rdx_5 + 0x24))
                *(rdx_5 + 0x44) = rax_16
                *(rdx_5 + 0x14) = *(rdx_5 + 8)
                result = zx.q(*(rdx_5 + 0x2c))
                *(rdx_5 + 0x30) = zmm0.q
                *(rdx_5 + 0x38) = result.d
            while (r10_1 s< var_50)
        
        i += 1
        rbx_1 += 2
    while (i s< *(arg1 + 0x118))
    
    rbx = var_58

if (rbx != 0)
    result = sub_140a74f90(rbx)

__security_check_cookie(rax_1 ^ &var_a8)
return result
