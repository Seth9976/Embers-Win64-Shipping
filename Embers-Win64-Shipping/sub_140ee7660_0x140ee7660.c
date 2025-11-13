// 函数: sub_140ee7660
// 地址: 0x140ee7660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
sub_140ee1d80(&var_c8, arg2)
int64_t* i = arg2[2]
int64_t var_a0

for (void* r14_2 = &i[sx.q(arg2[3].d) * 2]; i != r14_2; i = &i[2])
    int64_t* rbx_1 = i[1]
    int64_t r15_1 = *i
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int32_t var_98
    int64_t rsi_1 = sx.q(var_98)
    int32_t rax_1 = (rsi_1 + 1).d
    var_98 = rax_1
    int32_t var_94
    
    if (rax_1 s> var_94)
        sub_1405c4f50(&var_a0)
    
    int64_t* rcx_4 = rsi_1 * 0x30 + var_a0
    *rcx_4 = r15_1
    rcx_4[1] = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    __builtin_memset(&rcx_4[2], 0, 0x20)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rbx_2 = sx.q(*(arg1 + 0x20))
int32_t rax_4 = (rbx_2 + 1).d
*(arg1 + 0x20) = rax_4

if (rax_4 s> *(arg1 + 0x24))
    sub_1405fdd60(arg1 + 0x18)

sub_140ee1bd0(rbx_2 * 0x70 + *(arg1 + 0x18), &var_c8)
void var_70
sub_140d948f0(&var_70)
void var_80
sub_140d948f0(&var_80)
int64_t var_90

if (var_90 != 0)
    sub_140a74f90(var_90)

int64_t result = sub_140ee3c10(&var_a0)
int64_t* var_b0

if (var_b0 != 0)
    var_b0[1].d -= 1
    
    if (var_b0[1].d == 1)
        result = (**var_b0)(var_b0)
        int32_t temp2_1 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_b0 + 8))(var_b0, 1)

int64_t* var_c0

if (var_c0 != 0)
    var_c0[1].d -= 1
    
    if (var_c0[1].d == 1)
        result = (**var_c0)(var_c0)
        int32_t temp3_1 = *(var_c0 + 0xc)
        *(var_c0 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*var_c0 + 8))(var_c0, 1)

if ((*(arg1 + 0x88) & 1) == 0)
    int64_t rax_9 = sx.q(*(arg1 + 0x20))
    int32_t rsi_2 = (rax_9 - 1).d
    void* r14_4 = rax_9 * 0x70 + *(arg1 + 0x18)
    sub_140eec2b0(arg1, r14_4 - 0x70)
    
    if ((*(r14_4 - 8) & 4) != 0)
        sub_140f14f70(*(r14_4 - 0x60) + 0x10)
        *(r14_4 - 8) &= 0xfb
    
    sub_140efab30(arg1, r14_4 - 0x70)
    int64_t* i_1 = *(r14_4 - 0x48)
    
    for (void* rdi_2 = &i_1[sx.q(*(r14_4 - 0x40)) * 6]; i_1 != rdi_2; i_1 = &i_1[6])
        int64_t* rcx_22 = *i_1
        (*(*rcx_22 + 0x50))(rcx_22)
    
    float zmm0_1 = *(arg1 + 0xa0) f+ *(arg1 + 0x98)
    int128_t zmm2_1 = *(arg1 + 0x90)
    int32_t i_2 = *(arg1 + 0x30) + 1
    int64_t* var_d8 = nullptr
    int32_t var_d0_1 = 0
    zmm2_1.d = zmm2_1.d f- zmm0_1
    zmm2_1.d = zmm2_1.d f* *(arg1 + 0x8c)
    sub_140efe160(arg1, rsi_2, __maxss_xmmss_memss(zmm2_1.d, 0x3c23d70a), &var_d8)
    float zmm6_1 = *(arg1 + 0x8c)
    float zmm7_1 = zmm6_1
    zmm6_1 = zmm6_1 f* *(arg1 + 0x9c)
    zmm7_1 = zmm7_1 f* *(arg1 + 0x98)
    
    if (i_2 s< *(arg1 + 0x30))
        int64_t rcx_24 = sx.q(i_2) * 0x58
        
        do
            int64_t rax_13 = *(arg1 + 0x28)
            
            if (*(rcx_24 + rax_13 + 0x54) == rsi_2)
                float zmm1_1 = zmm6_1 f+ *(rcx_24 + rax_13 + 0x34)
                *(rcx_24 + rax_13 + 0x30) = zmm7_1 f+ *(rcx_24 + rax_13 + 0x30)
                *(rcx_24 + rax_13 + 0x34) = zmm1_1
            
            i_2 += 1
            rcx_24 += 0x58
        while (i_2 s< *(arg1 + 0x30))
    
    int64_t* r13_1 = var_d8
    int64_t rsi_3 = sx.q(var_d0_1)
    int64_t* rdi_3 = r13_1
    void* r15_4 = &r13_1[rsi_3 * 2]
    
    if (r13_1 != r15_4)
        do
            int64_t* rbx_6 = *rdi_3
            void arg_10
            float* rax_15 = (*(*rbx_6 + 0x38))(rbx_6, &arg_10)
            float arg_c = zmm6_1 + rax_15[1]
            float arg_8 = zmm7_1 + *rax_15
            (*(*rbx_6 + 0x30))(rbx_6, &arg_8)
            rdi_3 = &rdi_3[2]
        while (rdi_3 != r15_4)
    
    sub_140f07eb0(arg1)
    int64_t* i_3 = *(r14_4 - 0x48)
    result = sx.q(*(r14_4 - 0x40))
    
    for (void* rdi_6 = &i_3[result * 6]; i_3 != rdi_6; i_3 = &i_3[6])
        int64_t* rcx_28 = *i_3
        result = (*(*rcx_28 + 0x58))(rcx_28)
    
    if (rsi_3.d != 0)
        void* rdi_7 = &r13_1[1]
        int32_t i_4
        
        do
            int64_t* rbx_7 = *rdi_7
            
            if (rbx_7 != 0)
                rbx_7[1].d -= 1
                
                if (rbx_7[1].d == 1)
                    result = (**rbx_7)(rbx_7)
                    int32_t temp8_1 = *(rbx_7 + 0xc)
                    *(rbx_7 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        result = (*(*rbx_7 + 8))(rbx_7, 1)
            
            rdi_7 += 0x10
            i_4 = rsi_3.d
            rsi_3 = zx.q(rsi_3.d - 1)
        while (i_4 != 1)
    
    if (r13_1 != 0)
        return sub_140a74f90(r13_1)

return result
