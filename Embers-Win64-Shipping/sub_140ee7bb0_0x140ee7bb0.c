// 函数: sub_140ee7bb0
// 地址: 0x140ee7bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *arg2
void* r12_2 = (sx.q(arg2[1].d) << 5) + r13
void* arg_8 = r12_2

if (r13 != r12_2)
    int64_t* rsi_1 = arg1 + 0x18
    
    do
        void var_e8
        sub_140ee1d80(&var_e8, r13)
        int64_t* rdi_1 = *(r13 + 0x10)
        void* r15_3 = &rdi_1[sx.q(*(r13 + 0x18)) * 2]
        int64_t var_c0
        
        if (rdi_1 != r15_3)
            do
                int64_t* rbx_1 = rdi_1[1]
                int64_t r12_3 = *rdi_1
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                int32_t var_b8
                int64_t rsi_2 = sx.q(var_b8)
                int32_t rax_1 = (rsi_2 + 1).d
                var_b8 = rax_1
                int32_t var_b4
                
                if (rax_1 s> var_b4)
                    sub_1405c4f50(&var_c0)
                
                int64_t* rcx_4 = rsi_2 * 0x30 + var_c0
                *rcx_4 = r12_3
                rcx_4[1] = rbx_1
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                __builtin_memset(&rcx_4[2], 0, 0x20)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp6_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                rdi_1 = &rdi_1[2]
            while (rdi_1 != r15_3)
            
            r12_2 = arg_8
            rsi_1 = arg1 + 0x18
        
        int64_t rbx_2 = sx.q(rsi_1[1].d)
        int32_t rax_4 = (rbx_2 + 1).d
        rsi_1[1].d = rax_4
        
        if (rax_4 s> *(rsi_1 + 0xc))
            sub_1405fdd60(rsi_1)
        
        sub_140ee1bd0(rbx_2 * 0x70 + *rsi_1, &var_e8)
        void var_90
        sub_140d948f0(&var_90)
        void var_a0
        sub_140d948f0(&var_a0)
        int64_t var_b0
        
        if (var_b0 != 0)
            sub_140a74f90(var_b0)
        
        sub_140ee3c10(&var_c0)
        int64_t* var_d0
        
        if (var_d0 != 0)
            var_d0[1].d -= 1
            
            if (var_d0[1].d == 1)
                (**var_d0)(var_d0)
                int32_t temp3_1 = *(var_d0 + 0xc)
                *(var_d0 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_d0 + 8))(var_d0, 1)
        
        int64_t* var_e0
        
        if (var_e0 != 0)
            var_e0[1].d -= 1
            
            if (var_e0[1].d == 1)
                (**var_e0)(var_e0)
                int32_t temp4_1 = *(var_e0 + 0xc)
                *(var_e0 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_e0 + 8))(var_e0, 1)
        
        r13 += 0x20
    while (r13 != r12_2)

if ((*(arg1 + 0x88) & 1) != 0)
    return 

int32_t rax_9 = *(arg1 + 0x20)
int32_t i_2 = rax_9 - arg2[1].d
int64_t* arg_10
arg_10.d = i_2
int32_t i_3 = i_2

if (i_2 s< rax_9)
    int64_t rsi_3 = sx.q(i_2) * 0x70
    
    do
        int64_t rax_11 = *(arg1 + 0x18)
        int64_t* i = *(rsi_3 + rax_11 + 0x28)
        
        for (void* rdi_4 = &i[sx.q(*(rsi_3 + rax_11 + 0x30)) * 6]; i != rdi_4; i = &i[6])
            int64_t* rcx_18 = *i
            (*(*rcx_18 + 0x50))(rcx_18)
        
        rax_9 = *(arg1 + 0x20)
        i_3 += 1
        rsi_3 += 0x70
    while (i_3 s< rax_9)

int32_t i_1 = i_2

if (i_2 s< rax_9)
    int64_t rcx_19 = sx.q(i_2) * 0x70
    int64_t arg_18 = rcx_19
    
    do
        int64_t* rbx_6 = *(arg1 + 0x18) + rcx_19
        char rcx_20 = rbx_6[0xd].b
        
        if ((rcx_20 & 2) != 0)
            uint32_t rdx_4 = zx.d(*(arg1 + 0x8a))
            
            if (rdx_4 == 0)
                char rax_15
                
                if (*(arg1 + 0x89) != 1)
                    rax_15 = sub_140a6c7c0(*rbx_6)
                    rcx_20 = rbx_6[0xd].b
                else
                    rax_15 = 0
                
                rbx_6[4].b = rax_15
            else if (rdx_4 == 1)
                rbx_6[4].b = 0
            else if (rdx_4 == 2)
                rbx_6[4].b = (rdx_4 - 1).b
            
            rcx_20 &= 0xfd
            rbx_6[0xd].b = rcx_20
        
        if ((rcx_20 & 4) != 0)
            sub_140f14f70(rbx_6[2] + 0x10)
            rbx_6[0xd].b &= 0xfb
        
        int32_t zmm8_1 = sub_140efab30(arg1, rbx_6)
        float zmm0_1 = *(arg1 + 0xa0) f+ *(arg1 + 0x98)
        int128_t zmm2_1 = *(arg1 + 0x90)
        int32_t rbx_7 = *(arg1 + 0x30)
        int64_t* var_f8 = nullptr
        int32_t j = rbx_7 + 1
        int32_t var_f0_1 = 0
        zmm2_1.d = zmm2_1.d f- zmm0_1
        zmm2_1.d = zmm2_1.d f* *(arg1 + 0x8c)
        sub_140efe160(arg1, i_1, _mm_max_ss(zmm2_1.d, zmm8_1), &var_f8)
        float zmm6_1 = *(arg1 + 0x8c)
        float zmm7_1 = zmm6_1
        zmm6_1 = zmm6_1 f* *(arg1 + 0x9c)
        zmm7_1 = zmm7_1 f* *(arg1 + 0x98)
        
        if (j s< *(arg1 + 0x30))
            int64_t rcx_26 = sx.q(j) * 0x58
            
            do
                int64_t rax_17 = *(arg1 + 0x28)
                
                if (*(rcx_26 + rax_17 + 0x54) == i_1)
                    float zmm1_1 = zmm6_1 f+ *(rcx_26 + rax_17 + 0x34)
                    *(rcx_26 + rax_17 + 0x30) = zmm7_1 f+ *(rcx_26 + rax_17 + 0x30)
                    *(rcx_26 + rax_17 + 0x34) = zmm1_1
                
                j += 1
                rcx_26 += 0x58
            while (j s< *(arg1 + 0x30))
        
        int64_t* r13_2 = var_f8
        int64_t rsi_4 = sx.q(var_f0_1)
        int64_t* r15_4 = r13_2
        void* rdi_7 = &r13_2[rsi_4 * 2]
        
        if (r13_2 != rdi_7)
            do
                int64_t* rbx_8 = *r15_4
                void arg_20
                float* rax_19 = (*(*rbx_8 + 0x38))(rbx_8, &arg_20)
                arg_8:4.d = zmm6_1 + rax_19[1]
                arg_8.d = zmm7_1 + *rax_19
                (*(*rbx_8 + 0x30))(rbx_8, &arg_8)
                r15_4 = &r15_4[2]
            while (r15_4 != rdi_7)
        
        if (rsi_4.d != 0)
            void* rdi_8 = &r13_2[1]
            int32_t j_1
            
            do
                int64_t* rbx_9 = *rdi_8
                
                if (rbx_9 != 0)
                    rbx_9[1].d -= 1
                    
                    if (rbx_9[1].d == 1)
                        (**rbx_9)(rbx_9)
                        int32_t temp9_1 = *(rbx_9 + 0xc)
                        *(rbx_9 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rbx_9 + 8))(rbx_9, 1)
                
                rdi_8 += 0x10
                j_1 = rsi_4.d
                rsi_4 = zx.q(rsi_4.d - 1)
            while (j_1 != 1)
        
        if (r13_2 != 0)
            sub_140a74f90(r13_2)
        
        i_1 += 1
        rcx_19 = arg_18 + 0x70
        arg_18 = rcx_19
    while (i_1 s< *(arg1 + 0x20))
    
    i_2 = arg_10.d

sub_140f07eb0(arg1)

if (i_2 s>= *(arg1 + 0x20))
    return 

int64_t rsi_5 = sx.q(i_2) * 0x70

do
    int64_t rax_24 = *(arg1 + 0x18)
    int64_t* j_2 = *(rsi_5 + rax_24 + 0x28)
    
    for (void* rdi_11 = &j_2[sx.q(*(rsi_5 + rax_24 + 0x30)) * 6]; j_2 != rdi_11; j_2 = &j_2[6])
        int64_t* rcx_34 = *j_2
        (*(*rcx_34 + 0x58))(rcx_34)
    
    i_2 += 1
    rsi_5 += 0x70
while (i_2 s< *(arg1 + 0x20))
