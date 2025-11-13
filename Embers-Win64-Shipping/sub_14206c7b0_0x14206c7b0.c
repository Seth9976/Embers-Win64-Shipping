// 函数: sub_14206c7b0
// 地址: 0x14206c7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
char rbx = arg_10.b
int32_t rsi = arg2
float zmm6[0x4]
float var_58[0x4] = zmm6
float zmm7[0x4]
float var_68[0x4] = zmm7
uint128_t zmm8
uint128_t var_78 = zmm8
uint128_t zmm9
uint128_t var_88 = zmm9
int64_t rax = sx.q(arg3)
float zmm10[0x4]
float var_98[0x4] = zmm10
int64_t r13 = rax
float zmm11[0x4]
float var_a8[0x4] = zmm11
int32_t rbp_3

while (true)
    zmm8 = data_143dbb1f8
    zmm6 = data_143dbb1fc
    zmm7 = data_143dbb200
    rbp_3 = rax.d - rsi + 1
    char r10 = 0
    int64_t r12_1 = sx.q(rsi)
    zmm9 = zmm8
    zmm10 = zmm6
    zmm11 = zmm7
    float zmm2[0x4]
    
    if (r12_1 s<= r13)
        int64_t rdx = *(arg1 + 0x58)
        int64_t i_1 = r13 - r12_1 + 1
        int32_t* r8 = *(arg1 + 0x48) + (r12_1 << 2)
        int64_t i
        
        do
            int64_t rcx = sx.q(*r8) * 3
            uint128_t zmm0
            
            if (r10 == 0)
                zmm0 = zx.o(*(rdx + (rcx << 2)))
                r10 = 1
                zmm8 = zmm0
                zmm9 = zmm8
                zmm6 = zmm0.q:4.d
                zmm10 = zmm6
                zmm7 = *(rdx + (rcx << 2) + 8)
                zmm11 = zmm7
            else
                zmm0 = *(rdx + (rcx << 2))
                
                if (not(zmm9.d f<= zmm0.d))
                    zmm9 = zmm0
                
                zmm2 = *(rdx + (rcx << 2) + 4)
                
                if (not(zmm10[0] <= zmm2[0]))
                    zmm10 = zmm2
                
                float zmm1[0x4] = *(rdx + (rcx << 2) + 8)
                
                if (not(zmm11[0] <= zmm1[0]))
                    zmm11 = zmm1
                
                if (not(zmm8.d f>= zmm0.d))
                    zmm8 = zmm0
                
                if (not(zmm6[0] >= zmm2[0]))
                    zmm6 = zmm2
                
                if (not(zmm7[0] >= zmm1[0]))
                    zmm7 = zmm1
            r8 = &r8[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (rbp_3 s<= *(arg1 + 0x24))
        break
    
    *(arg1 + 0xa8) = 0
    
    if (*(arg1 + 0xac) s<= 0xffffffff)
        sub_1405c5570(arg1 + 0xa0, 0)
    
    zmm8.d = zmm8.d f- zmm9.d
    zmm6[0] = zmm6[0] - zmm10[0]
    zmm7[0] = zmm7[0] - zmm11[0]
    bool cond:0_1 = zmm6[0] f> zmm8.d
    float temp0_1[0x4] = _mm_max_ss(zmm6[0], zmm8.d)
    int64_t r14_1
    r14_1.b = cond:0_1
    
    if (zmm7[0] > temp0_1[0])
        r14_1 = 2
    
    if (r12_1 s<= r13)
        int64_t rsi_1 = r12_1
        
        do
            int64_t rbp_4 = sx.q(*(arg1 + 0xa8))
            int64_t rcx_2 = sx.q(*(*(arg1 + 0x48) + (rsi_1 << 2)))
            int32_t var_d4_1 = rcx_2.d
            int32_t rax_6 = (rbp_4 + 1).d
            int32_t var_d8_1 = (*(*(arg1 + 0x58) + ((rcx_2 * 3 + r14_1) << 2))).d
            *(arg1 + 0xa8) = rax_6
            
            if (rax_6 s> *(arg1 + 0xac))
                sub_1405a4d70(arg1 + 0xa0)
            
            rsi_1 += 1
            *(*(arg1 + 0xa0) + (rbp_4 << 3)) = var_d8_1.q
        while (rsi_1 s<= r13)
        
        rsi = arg_10
    
    sub_142046340(*(arg1 + 0xa0), *(arg1 + 0xa8), rbx)
    
    if (r12_1 s<= r13)
        int64_t r8_2 = r12_1
        
        do
            *(*(arg1 + 0x48) + (r8_2 << 2)) = *(*(arg1 + 0xa0) + ((r8_2 - r12_1) << 3) + 4)
            r8_2 += 1
        while (r8_2 s<= r13)
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rbp_3)
    int32_t rax_13 = (temp2_1 - temp1_1) s>> 1
    int32_t rdx_9 = arg3 - rax_13
    int32_t r9_3 = rax_13 + rsi
    uint64_t r8_3 = zx.q(r9_3 - 1)
    rsi = rdx_9 + 1
    
    if ((rbp_3.b & 1) != 0)
        int64_t rcx_7 = sx.q(rax_13)
        int64_t rax_14 = *(arg1 + 0xa0)
        zmm2 = *(rax_14 + (rcx_7 << 3))
        float zmm0_1 = *(rax_14 + (rcx_7 << 3) + 8)
        zmm2[0] = zmm2[0] f- *(rax_14 + (rcx_7 << 3) - 8)
        
        if (zmm2[0] >= zmm0_1 - zmm2[0])
            rsi = rdx_9
        else
            r8_3 = zx.q(r9_3)
    
    sub_14206c7b0(arg1, zx.q(arg_10), r8_3)
    rax = zx.q(arg3)
    arg_10 = rsi

int64_t rdi_2 = sx.q(*(arg1 + 0x98))
int32_t arg_c = rbp_3
int32_t rax_15 = (rdi_2 + 1).d
*(arg1 + 0x98) = rax_15

if (rax_15 s> *(arg1 + 0x9c))
    sub_1405a4d70(arg1 + 0x90)

int64_t result = rsi.q
*(*(arg1 + 0x90) + (rdi_2 << 3)) = result
return result
