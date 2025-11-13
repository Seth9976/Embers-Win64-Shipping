// 函数: sub_142741920
// 地址: 0x142741920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
sub_1405ba560(arg1 + 0x18, &result_1, arg2)
int64_t result = sx.q(result_1)
void* const rcx_3

if (result.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (result << 5) + *(arg1 + 0x18)

void* rbx_1 = *(rcx_3 + 8)
int64_t rdi = sx.q(*(rcx_3 + 0x10))
void* rbp_2 = (rdi << 7) + rbx_1

if (rbx_1 != rbp_2)
    int64_t* rdi_1 = rbx_1 + 0x5c
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    
    do
        int64_t* rax = sub_140d3c6e0(rdi_1 - 0x5c)
        
        if (rax != 0)
            int32_t zmm1 = *(rdi_1 - 0x44)
            int64_t zmm3 = rdi_1[-9].d
            float var_80_1 = (*(rdi_1 + 4))[0]
            int64_t var_68 = (_mm_unpacklo_ps(*(rdi_1 - 4), *rdi_1)).q
            float temp0_2[0x4] = _mm_unpacklo_ps(*(rdi_1 - 0x4c), zmm3)
            int64_t var_5c_1 = temp0_2.q
            float var_60_1 = var_80_1
            int32_t var_54_1 = zmm1
            zmm6 = sub_1405a9f90(&rax[0xce], &var_68)
            void* const rsi_1 = rax[0x14]
            void* rax_1
            int64_t rax_2
            void* rdx_2
            
            if (rsi_1 != 0)
                rax_1 = sub_1427491c0()
                rdx_2 = *(rsi_1 + 0x10)
                rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rsi_1 == 0 || rax_2.d s> *(rdx_2 + 0x38)
                    || *(*(rdx_2 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                rsi_1 = nullptr
            
            if (rsi_1 != 0)
                var_68 = zmm6.q
                float var_60_2 = var_80_1
                int64_t var_5c_2 = temp0_2.q
                int32_t var_54_2 = zmm1
                sub_1405a9f90(rsi_1 + 0x228, &var_68)
            
            (*(*rax + 0x978))(rax, rdi_1 - 0x54)
            char rax_5 = *(rax + 0x20a)
            
            if ((rax_5 & 8) != 0)
                *(rax + 0x20a) = rax_5 & 0xf7
                sub_141ee8490(rax)
        
        rdi_1 -= -0x80
        result = rdi_1 - 0x5c
    while (result != rbp_2)
    
    rdi = zx.q(*(rcx_3 + 0x10))
    rbx_1 = *(rcx_3 + 8)

if (rdi.d != 0)
    int64_t* rbx_3 = rbx_1 + 0x70
    int32_t i
    
    do
        int64_t rcx_10 = *rbx_3
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        rbx_3 -= -0x80
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)

bool cond:0 = *(rcx_3 + 0x14) == 0
*(rcx_3 + 0x10) = 0

if (cond:0)
    return result

return sub_140888ba0(rcx_3 + 8, 0)
