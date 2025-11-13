// 函数: sub_140d999f0
// 地址: 0x140d999f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
char* rbx_1 = *arg2 + 0x1a8
char arg_10

if (*(rbx_1 + 0x10) != 0)
    int64_t* rcx = *(rbx_1 + 8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx).b != 0)
        int64_t* rcx_1
        
        if (*(rbx_1 + 0x10) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx_1 + 8)
        
        (*(*rcx_1 + 0x48))(rcx_1, &arg_10)
        *rbx_1 = arg_10

if ((*rbx_1 & 8) == 0)
    return 

int64_t rbx_2 = *arg2

if (*sub_140865c40(arg1, &arg_10, rbx_2) != 0xffffffff)
    sub_140dbb440(arg1, arg2)
    rbx_2 = *arg2

int128_t* rax_4 = sub_140e15850(rbx_2)
int32_t rdx_3 = 0
float zmm2[0x4] = rax_4[2]
int32_t r15_2 = arg1[0x13].d - 1
float zmm8[0x4] = *rax_4
int32_t r8_2 = *(arg1 + 0x9c) - 1
int32_t rbp_1 = r15_2
uint128_t zmm7 = zx.o(rax_4[3].q)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
zmm8[0] = zmm8[0] f* *(rax_4 + 0x1c)
int32_t rax_5 = 0
int32_t r12_1 = r8_2
temp0_2[0] = temp0_2[0] f- arg1[0x15].d
float temp0_3[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
zmm8[0] = zmm8[0] * zmm2[0]
temp0_3[0] = temp0_3[0] * temp0_1[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm8[0] = zmm8[0] + temp0_2[0]
temp0_3[0] = temp0_3[0] * temp0_4[0]
uint64_t var_88_1 = zmm7.q
zmm7.d = zmm7.d f- *(arg1 + 0xac)
temp0_3[0] = temp0_3[0] + temp0_2[0]
zmm8[0] = zmm8[0] + temp0_3[0]
temp0_3[0] = temp0_3[0] f+ zmm7.d
zmm8[0] = zmm8[0] f+ zmm7.d
float temp0_5[0x4] = _mm_min_ss(temp0_3[0], zmm8[0])
float temp0_6[0x4] = _mm_max_ss(temp0_3[0], zmm8[0])
float zmm5[0x4] = 0x3f800000
float temp0_7[0x4] = _mm_min_ss(temp0_3[0], zmm8[0])
float zmm1 = zmm8[0] + temp0_3[0]
float temp0_8[0x4] = _mm_min_ss(temp0_5[0], zmm8[0])
float temp0_9[0x4] = _mm_max_ss(temp0_3[0], zmm8[0])
float temp0_10[0x4] = _mm_max_ss(temp0_6[0], zmm8[0])
float temp0_11[0x4] = _mm_min_ss(temp0_7[0], zmm1)
float temp0_12[0x4] = _mm_min_ss(temp0_8[0], temp0_2[0])
float temp0_13[0x4] = _mm_max_ss(temp0_9[0], zmm1)
zmm1 = 1f f/ data_1439ae6a4
zmm5[0] = 1f f/ data_1439ae6a0
float temp0_14[0x4] = _mm_min_ss(temp0_11[0], zmm7.d)
temp0_12[0] = temp0_12[0] * zmm5[0]
float temp0_15[0x4] = _mm_max_ss(temp0_10[0], temp0_2[0])
float temp0_16[0x4] = _mm_max_ss(temp0_13[0], zmm7.d)
temp0_14[0] = temp0_14[0] * zmm1
temp0_12[0] = temp0_12[0] + temp0_12[0]
temp0_14[0] = temp0_14[0] + temp0_14[0]
temp0_12[0] = temp0_12[0] - 0.5f
temp0_14[0] = temp0_14[0] - 0.5f
int32_t rcx_6 = int.d(temp0_14[0]) s>> 1

if (rcx_6 s>= 0)
    rdx_3 = rcx_6

int32_t rcx_8 = int.d(temp0_12[0]) s>> 1

if (rcx_8 s>= 0)
    rax_5 = rcx_8

if (rax_5 s<= r15_2)
    rbp_1 = rax_5

if (rdx_3 s<= r8_2)
    r12_1 = rdx_3

int32_t var_d4_1 = r12_1
int32_t var_c4_1 = r12_1
temp0_16[0] = temp0_16[0] * zmm1
int32_t rcx_9 = 0
temp0_15[0] = temp0_15[0] * zmm5[0]
temp0_16[0] = temp0_16[0] + temp0_16[0]
temp0_15[0] = temp0_15[0] + temp0_15[0]
temp0_16[0] = temp0_16[0] - 0.5f
temp0_15[0] = temp0_15[0] - 0.5f
int32_t rax_7 = int.d(temp0_16[0]) s>> 1

if (rax_7 s>= 0)
    rcx_9 = rax_7

int32_t rax_9 = int.d(temp0_15[0]) s>> 1

if (rax_9 s>= 0)
    rdi = rax_9

int32_t* var_d0 = *arg2

if (rdi s<= r15_2)
    r15_2 = rdi

int32_t var_d8_1 = r15_2

if (rcx_9 s<= r8_2)
    r8_2 = rcx_9

arg_10.d = r8_2
int32_t var_bc_1 = r8_2
int32_t* rax_11 = sub_140d8bae0(arg1, &var_d0)
int64_t* rbx_3 = arg2[1]
int32_t* rdi_1 = rax_11
var_d0 = rax_11

if (rbx_3 != 0)
    rbx_3[1].d += 1

int32_t rcx_11 = arg1[0x17].d
int64_t var_b8 = *arg2

if (rbx_3 != 0)
    *(rbx_3 + 0xc) += 1

int64_t var_98_1 = rbp_1.q
int64_t var_90_1 = r15_2.q
int32_t var_80_1 = arg5
int128_t var_a8_1 = zx.o(0)
int64_t var_88_2 = sx.q(arg3) << 0x20 | sx.q(arg4)
int32_t var_7c_1 = rcx_11

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

*rdi_1 = sub_140d98130(&arg1[0xa], &var_b8).d

if (rbp_1 s<= r15_2)
    int32_t rdx_6 = arg_10.d
    
    do
        int32_t rbx_4 = r12_1
        
        if (r12_1 s<= rdx_6)
            do
                if (rbp_1 s>= 0)
                    uint64_t rax = zx.q(arg1[0x13].d)
                    
                    if (rbp_1 s< rax.d && rbx_4 s>= 0 && rbx_4 s< *(arg1 + 0x9c))
                        int64_t r12_2 = arg1[0x11]
                        int32_t r13_4 = *rdi_1
                        int64_t r15_3 = sx.q(rax.d * rbx_4 + rbp_1) * 3
                        int64_t rsi_1 = sx.q(*(r12_2 + (r15_3 << 3) + 0x10))
                        void* rdi_2 = r12_2 + (r15_3 << 3)
                        int32_t rax_21 = (rsi_1 + 1).d
                        *(rdi_2 + 0x10) = rax_21
                        
                        if (rax_21 s> *(rdi_2 + 0x14))
                            sub_1405a4cf0(rdi_2 + 8)
                            rdx_6 = arg_10.d
                        
                        rdi_1 = var_d0
                        *(*(rdi_2 + 8) + (rsi_1 << 2)) = r13_4
                        *(r12_2 + (r15_3 << 3)) = 1
                
                rbx_4 += 1
            while (rbx_4 s<= rdx_6)
            
            r15_2 = var_d8_1
            r12_1 = var_d4_1
        
        rbp_1 += 1
    while (rbp_1 s<= r15_2)

int64_t* rcx_16 = var_a8_1:8.q

if (rcx_16 != 0)
    int32_t temp2_1 = *(rcx_16 + 0xc)
    *(rcx_16 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*rcx_16 + 8))(rcx_16, 1)

if (rbx_3 == 0)
    return 

int32_t temp3_1 = *(rbx_3 + 0xc)
*(rbx_3 + 0xc) -= 1

if (temp3_1 == 1)
    (*(*rbx_3 + 8))(rbx_3, 1)
