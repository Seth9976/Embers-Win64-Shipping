// 函数: sub_1426fafa0
// 地址: 0x1426fafa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1
void* r12 = arg2
int64_t rax = sub_140d3c6e0(arg2 + 0x34)
*(r12 + 0x30)
sub_1426cce30(&r15[0x10], rax)
*(r12 + 0x30)
sub_1426cce30(&r15[0x17], rax)
int128_t zmm0 = sub_1426e2610(&r15[0x10])
int128_t zmm0_1 = sub_1426e2610(&r15[0x17])
bool cond:0 = r15[0x1e] == 0
int128_t zmm6
zmm6.d = zmm0.d f* 2f
int64_t var_88 = 0
int32_t var_80 = 0
zmm6.d = zmm6.d f/ zmm0_1.d
zmm6.d = zmm6.d f+ 1f
int32_t r14 = int.d(zmm6.d)
void* rdx_2

if (cond:0)
    rdx_2 = nullptr
else
    void* rax_1 = sub_142736ba0()
    
    if (rax_1 == 0)
        rdx_2 = nullptr
    else
        rdx_2 = r15[0x1e]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rdx_2 = nullptr

int32_t zmm7_1 = sub_1426e7790(r12, rdx_2, &var_88)
int32_t rax_4 = var_80
int64_t var_98 = 0
int64_t var_90 = 0
int32_t rdx_5 = rax_4 * r14 * r14

if (rdx_5 s> 0)
    sub_1405a5130(&var_98, rdx_5)
    rax_4 = var_80

int32_t r13 = 0

if (rax_4 s> 0)
    int128_t* rsi_1 = nullptr
    
    do
        int32_t r15_1 = 0
        
        if (r14 s> 0)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r14)
            int32_t rax_9 = neg.d((temp1_1 - temp0_1) s>> 1)
            
            do
                int32_t rbx_1 = 0
                uint128_t zmm6_1
                zmm6_1.d = _mm_cvtepi32_ps(zx.o(rax_9 + r15_1)).d f* zmm7_1
                
                do
                    int64_t rcx_9 = var_88
                    int64_t rdi_1 = sx.q(var_90.d)
                    uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(rax_9 + rbx_1))
                    int64_t var_68_1 = 0
                    float zmm1_1[0x4] = *(rsi_1 + rcx_9)
                    int64_t zmm2_1 = *(rsi_1 + rcx_9 + 4)
                    zmm1_1[0] = zmm1_1[0] f- zmm6_1.d
                    zmm0_2.d = zmm0_2.d f* zmm7_1
                    zmm2_1.d = zmm2_1.d f- zmm0_2.d
                    int32_t var_70_1 = (*(rsi_1 + rcx_9 + 8)).d
                    int32_t rax_12 = (rdi_1 + 1).d
                    var_90.d = rax_12
                    int64_t var_78_1 = (_mm_unpacklo_ps(zmm1_1, zmm2_1)).q
                    
                    if (rax_12 s> var_90:4.d)
                        sub_1405a4df0(&var_98)
                    
                    int64_t rax_13 = var_98
                    int64_t rcx_11 = rdi_1 * 3
                    rbx_1 += 1
                    *(rax_13 + (rcx_11 << 3)) = var_78_1.o
                    *(rax_13 + (rcx_11 << 3) + 0x10) = var_68_1
                while (rbx_1 s< r14)
                
                r15_1 += 1
            while (r15_1 s< r14)
            
            rax_4 = var_80
        
        r13 += 1
        rsi_1 += 0xc
    while (r13 s< rax_4)
    
    r15 = arg1
    r12 = arg2

(*(*r15 + 0x280))(r15, &var_98, r12)
int64_t result = (*(*r15 + 0x288))(r15, &var_98, r12)
int64_t rcx_14 = var_98

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = var_88

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
