// 函数: sub_1413e9700
// 地址: 0x1413e9700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = arg4
int32_t arg_10
sub_140865c40(arg2 + 0x1078, &arg_10, arg3)
int64_t rax = sx.q(arg_10)
int32_t rbp = 0
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg2 + 0x1078) + rax * 0x18

int32_t* result = rcx_1 + 8

if (rcx_1 == 0)
    result = nullptr

if (result != 0)
    int32_t rax_2 = *result
    void* rax_3 = *(arg2 + 0x1070)
    int32_t i_3 = *(*(rax_3 + 0x10) + 0x34)
    int32_t r12_1 = i_3 - 1
    int32_t var_a8_1 = r12_1
    int32_t rbx_1 = 0
    int32_t rax_5 = int.d(powf(2f, _mm_cvtepi32_ps(zx.o(r12_1)).d))
    
    if (i_3 s> 0)
        int32_t rcx_2 = r12_1
        uint64_t i_2 = zx.q(i_3)
        uint64_t i
        
        do
            uint64_t rax_7 = zx.q(1 << rcx_2.b << rcx_2.b)
            rcx_2 -= 1
            rbx_1 += (rax_7 * 3).d << 4
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t rdi_1 = 0
    r14[6] = 0
    
    if (r14[7] != rbx_1)
        sub_1405c5510(&r14[4], rbx_1)
        rdi_1 = r14[6]
    
    int32_t rax_10 = rdi_1 + rbx_1
    r14[6] = rax_10
    
    if (rax_10 s> r14[7])
        sub_1405daba0(&r14[4])
    
    memset(sx.q(rdi_1) + *(r14 + 0x10), 0, sx.q(rbx_1))
    arg_10 = 0
    int32_t r13_1 = 0
    
    if (i_3 s> 0)
        int128_t zmm6
        int128_t var_48_1 = zmm6
        int64_t var_78_1 = 0
        
        do
            int64_t rdi_2 = sx.q(r13_1)
            int32_t i_1 = 0
            int32_t rax_11 = 1 << r12_1.b
            int32_t var_70_1 = rax_11
            int32_t var_6c_1 = rax_11
            int32_t r14_3 = (rax_11 * rax_11) << 3
            int64_t rsi_1 = sx.q(r14_3)
            
            do
                int64_t* rcx_8 = data_143f0f180
                int64_t r8_1 = *(rax_3 + 0x10)
                int64_t var_90 = 0
                int64_t var_88_1 = 0
                int64_t rax_12 = *rcx_8
                int128_t var_58 = var_78_1.o
                (*(rax_12 + 0x650))(rcx_8, arg1, r8_1, &var_58, &var_90, i_1, rax_2, rbp, var_a8_1, 
                    r14_3, rax_5, var_90, var_88_1)
                memcpy(*(r14 + 0x10) + rdi_2, var_90, rsi_1.d)
                int64_t rcx_11 = var_90
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                i_1 += 1
                rdi_2 += rsi_1
            while (i_1 s< 6)
            
            rbp += 1
            r12_1 = var_a8_1 - 1
            var_a8_1 = r12_1
            r13_1 = arg_10 + r14_3 * 6
            arg_10 = r13_1
        while (rbp s< i_3)
        
        r14 = arg4
    
    *r14 = rax_5
    result = zx.q(result[1])
    r14[1] = result.d

return result
