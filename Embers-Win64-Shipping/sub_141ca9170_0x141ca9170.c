// 函数: sub_141ca9170
// 地址: 0x141ca9170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg3

if (*(arg1 + 0xcc) s>= 0)
    void* const* rax_13
    rax_13.b = 0
    return rax_13

int16_t* var_a8
int512_t zmm1 = sub_140ba59c0(&var_a8, &arg1[0x12])
int64_t rdi
rdi.b = 0
int32_t i = 0

if (arg1[8].d s< 0x1e5)
    goto label_141ca9429

int16_t* var_60
int512_t zmm0_1 = sub_140baa480(&var_60, &var_a8)
uint64_t var_98 = 0
int64_t var_90_1 = 0
int64_t* rsi_1 = nullptr
int64_t* var_b8 = nullptr
int32_t rbx_1 = 0
int32_t r15_1 = 0
int32_t var_ac_1 = 0
int512_t zmm0_2
int512_t zmm1_1
zmm0_2, zmm1_1 = sub_141cb3d50(arg1, zmm1, zmm0_1)
sub_141cb37d0(arg1, &var_98, zmm0_2, zmm1_1)

if (arg1[0x20].d s> 0)
    (*(*arg1 + 0x178))(arg1, sx.q(*(arg1 + 0x104)))
    
    if (arg1[0x20].d s> 0)
        do
            rdi = sx.q(rbx_1)
            rbx_1 = (rdi + 1).d
            
            if (rbx_1 s> r15_1)
                sub_1408888d0(&var_b8)
                r15_1 = var_ac_1
                rsi_1 = var_b8
            
            void* const rax_1
            
            if (rdi << 7 == neg.q(rsi_1))
                rax_1 = nullptr
            else
                rax_1 = sub_140cd3ae0(&rsi_1[rdi * 0x10])
            
            sub_140cd49f0(arg1, rax_1, zmm1_1)
            i += 1
        while (i s< arg1[0x20].d)
        
        rdi.b = 0

int64_t* r15_2 = rsi_1
void* r14_2 = &rsi_1[sx.q(rbx_1) * 0x10]
void* var_88_1 = r14_2
int32_t var_a0

if (rsi_1 != r14_2)
    do
        if (r15_2[0xa].b != 0)
            int64_t rax_2 = sx.q(*(r15_2 + 0xc))
            rdi = 0
            int32_t temp0_1 = rax_2.d
            int64_t rbx_2
            int64_t arg_8
            
            if (temp0_1 == 0)
                rbx_2 = *(sub_140bdf2e0() + 0x18)
                arg_8 = rbx_2
            else if (temp0_1 s> 0)
                rbx_2 = rsi_1[rax_2 * 0x10 - 0x10]
                arg_8 = rbx_2
            else if (rax_2.d s>= 0)
                rbx_2 = 0
            else
                rbx_2 = *(sx.q(not.d(rax_2.d)) * 0x38 + var_98)
                arg_8 = rbx_2
            int64_t* rax_6 = j_sub_140a82f30(0x50)
            
            if (rax_6 != 0)
                int16_t* const rdx_6 = &data_142d40450
                int32_t r14_3 = *(arg1 + 0xcc)
                int32_t var_58
                
                if (var_58 != 0)
                    rdx_6 = var_60
                
                int64_t var_80
                __builtin_memset(&var_80, 0, 0x20)
                int16_t* const rdi_1 = &data_142d40450
                
                if (var_a0 != 0)
                    rdi_1 = var_a8
                
                void var_50
                int64_t* rax_7 = sub_140b58260(&var_50, rdx_6, 1)
                int64_t var_70
                void var_48
                int64_t rax_9 = sub_141c91700(rax_6, *sub_140b58260(&var_48, rdi_1, 1), *rax_7, 
                    *r15_2, rbx_2, &var_70, &var_80, r14_3)
                rsi_1 = var_b8
                rdi = rax_9
                r14_2 = var_88_1
            
            int64_t rbx_6 = sx.q(arg2[1].d)
            int32_t rax_10 = (rbx_6 + 1).d
            arg2[1].d = rax_10
            
            if (rax_10 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rbx_6 << 3)) = rdi
            rdi.b = 1
        
        r15_2 -= -0x80
    while (r15_2 != r14_2)

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

uint64_t rax_12 = var_98

if (rax_12 != 0)
    sub_140a74f90(rax_12)

int16_t* rcx_17 = var_60

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

if (rdi.b == 0)
    rsi = arg3
label_141ca9429:
    int64_t rbx_7 = sx.q(rsi[1].d)
    rax_12 = zx.q((rbx_7 + 1).d)
    rsi[1].d = rax_12.d
    
    if (rax_12.d s> *(rsi + 0xc))
        sub_1405a4f90(rsi)
    
    int64_t* rbx_9 = (rbx_7 << 4) + *rsi
    *rbx_9 = 0
    int16_t* rsi_3 = var_a8
    rbx_9[1].d = var_a0
    
    if (var_a0 != 0)
        sub_1405a4c70(rbx_9, var_a0, 0)
        memcpy(*rbx_9, rsi_3, var_a0 * 2)
    else
        *(rbx_9 + 0xc) = 0

int16_t* rcx_21 = var_a8

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

rax_12.b = 1
return rax_12
