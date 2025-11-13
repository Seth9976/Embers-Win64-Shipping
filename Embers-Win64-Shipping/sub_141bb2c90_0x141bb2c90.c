// 函数: sub_141bb2c90
// 地址: 0x141bb2c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
(*(*arg1 + 0x60))(arg1, &arg_8)
void* rax_2 = (*(*arg1 + 0x68))(arg1, arg3, arg_8, arg4)
int64_t* rbx_1 = *(rax_2 + 0x10)
void* rax_3 = rbx_1[0x23]

if (rax_3 == 0)
    int64_t rdx_2 = *rbx_1
    (*(rdx_2 + 0x390))(rbx_1, rdx_2)
    rax_3 = rbx_1[0x23]

float zmm6[0x4] = *(rax_3 + 0x168)
void var_88
int32_t* rax_5 = (*(*arg1 + 0x70))(arg1, &var_88, arg3)
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
zmm6[0] = zmm6[0] f+ *rax_5
temp0[0] = temp0[0] f+ rax_5[1]
temp0_1[0] = temp0_1[0] f+ rax_5[2]
float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
temp0_2[0] = temp0_2[0] f+ rax_5[3]
float temp0_3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
temp0_3[0] = temp0[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = temp0_1[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0_2[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
*(rax_2 + 0x168) = temp0_6
int64_t* rbx_2 = *(rax_2 + 0xf0)
float var_98[0x4] = temp0_6

if (rbx_2 != 0)
    int32_t rax_6 = rbx_2[1].d
    
    if (rax_6 == 0)
        rbx_2 = nullptr
    else
        rbx_2[1].d = rax_6 + 1
    
    if (rbx_2 != 0)
        void* r14_1 = *(rax_2 + 0xe8)
        
        if (r14_1 != 0)
            float zmm0[0x4] = *(rax_2 + 0x168)
            char var_40_1 = 1
            int64_t var_38 = 0
            float var_50_1[0x4] = zmm0
            int32_t var_30_1 = 0
            char var_68_1 = 1
            int64_t var_60 = 0
            int32_t var_58_1 = 0
            sub_140692f90(&var_60, &var_38)
            *(r14_1 + 0x2f0) = var_68_1
            *(r14_1 + 0x2e0) = zmm0
            sub_140692f90(r14_1 + 0x2f8, &var_60)
            sub_140745b20(&var_60)
            sub_140745b20(&var_38)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)

sub_141bab3c0(rax_2, &var_98)
void* rsi_1 = var_98[0].q
*(rsi_1 + 0x2e) |= 4

if (sub_140db3510(rsi_1 + 0x18) != 0)
    sub_140dc03a0(rsi_1 + 0x18, *(rsi_1 + 0x2e))

int64_t* rbx_3 = var_98[2].q

if (rbx_3 != 0)
    rbx_3[1].d += 1

void* rax_12 = rsi_1 + 0x3a8

if (rsi_1 == 0)
    rax_12 = nullptr

*arg2 = rax_12
arg2[1] = rbx_3

if (rbx_3 != 0)
    int32_t rax_13 = rbx_3[1].d
    rbx_3[1].d = rax_13
    
    if (rax_13 == 0)
        (**rbx_3)(rbx_3)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)
    
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

return arg2
