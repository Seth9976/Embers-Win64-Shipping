// 函数: sub_142145180
// 地址: 0x142145180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)
int64_t rdi = 0
int32_t rdx_2 = arg2 s/ 0x3e8
uint64_t result = zx.q(rdx_2 * 0x3e8)
int32_t r13_1 = arg2 - result.d

if (rdx_2 s> rsi.d)
    arg1[1].d = rdx_2
    int32_t i_2 = rdx_2 - rsi.d
    
    if (rdx_2 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    result = (rsi << 4) + *arg1
    
    if (i_2 != 0)
        int32_t i
        
        do
            *result = 0
            *(result + 8) = 0
            result += 0x10
            i = i_2
            i_2 -= 1
        while (i != 1)
else if (rdx_2 s< rsi.d)
    result = sub_140838580(arg1, rdx_2, rsi.d - rdx_2, 1)

void* i_1 = *arg1
uint128_t zmm0

for (void* r12_2 = (sx.q(arg1[1].d) << 4) + i_1; i_1 != r12_2; i_1 += 0x10)
    *(i_1 + 8) = 0
    
    if (*(i_1 + 0xc) s< 0x3e8)
        sub_1405c5510(i_1, 0x3e8)
    
    int32_t rax_4 = *(i_1 + 8) + 0x3e8
    *(i_1 + 8) = rax_4
    
    if (rax_4 s> *(i_1 + 0xc))
        sub_1405daba0(i_1)
        rax_4 = *(i_1 + 8)
    
    void* rsi_2 = *i_1
    int64_t rbp_1 = 0
    int64_t r14_1 = sx.q(rax_4)
    result = r14_1 + rsi_2
    
    if (rsi_2 u> result)
        r14_1 = 0
    
    if (r14_1 != 0)
        do
            char rdx_5 = -2
            rsi_2 += 1
            zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 0.00778221991f
            int32_t rcx_2 = int.d(zmm0.d)
            result = zx.q(rcx_2.b)
            
            if (rcx_2 s<= 0xfe)
                rdx_5 = result.b
            
            rbp_1 += 1
            *(rsi_2 - 1) = rdx_5
        while (rbp_1 != r14_1)

if (r13_1 s> 0)
    int64_t rbx_2 = sx.q(arg1[1].d)
    int32_t rax_6 = (rbx_2 + 1).d
    arg1[1].d = rax_6
    
    if (rax_6 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    int64_t* rbx_4 = (rbx_2 << 4) + *arg1
    *rbx_4 = 0
    *(rbx_4 + 0xc) = 0
    rbx_4[1].d = r13_1
    
    if (r13_1 s> 0)
        sub_1405daba0(rbx_4)
        r13_1 = rbx_4[1].d
    
    void* rbx_5 = *rbx_4
    int64_t rsi_3 = sx.q(r13_1)
    result = rsi_3 + rbx_5
    
    if (rbx_5 u> result)
        rsi_3 = 0
    
    if (rsi_3 != 0)
        do
            char rdx_8 = -2
            rbx_5 += 1
            zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 0.00778221991f
            int32_t rcx_5 = int.d(zmm0.d)
            result = zx.q(rcx_5.b)
            
            if (rcx_5 s<= 0xfe)
                rdx_8 = result.b
            
            rdi += 1
            *(rbx_5 - 1) = rdx_8
        while (rdi != rsi_3)

return result
