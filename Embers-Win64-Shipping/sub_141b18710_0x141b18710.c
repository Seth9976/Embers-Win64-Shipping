// 函数: sub_141b18710
// 地址: 0x141b18710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0x24)
int32_t arg_8
int32_t arg_c
int64_t rbx

if (rax == 0x80000000)
    int64_t* rbx_1 = 0x10
    
    if (*(arg2 + 0x20) != 0)
        rbx_1 = 4
    
    rbx = *(rbx_1 + arg2)
else
    arg_8 = rax
    arg_c = 0
    rbx = arg_8.q

int64_t* i = *(arg1 + 0x20)
uint64_t zmm6

for (void* r15_1 = sx.q(*(arg1 + 0x28)) * 0xa8 + i; i != r15_1; i = &i[0x15])
    arg_8 = 0
    char rax_2
    rax_2, zmm6 = sub_141a467f0(&i[1], rbx, &arg_8)
    
    if (rax_2 != 0)
        int64_t r14_1 = sx.q(*(arg3 + 0x20))
        int32_t rax_3 = (r14_1 + 1).d
        *(arg3 + 0x20) = rax_3
        
        if (rax_3 s> *(arg3 + 0x24))
            sub_141068880(arg3, r14_1.d)
        
        void* rax_4 = *(arg3 + 0x18)
        int64_t rcx_2 = r14_1 * 3
        void* rdx_2 = arg3
        
        if (rax_4 != 0)
            rdx_2 = rax_4
        
        int64_t rax_5 = *i
        *(rdx_2 + (rcx_2 << 2) + 8) = arg_8.d
        *(rdx_2 + (rcx_2 << 2)) = rax_5

int64_t* i_1 = *(arg1 + 0x30)

for (void* r12_1 = sx.q(*(arg1 + 0x38)) * 0x98 + i_1; i_1 != r12_1; i_1 = &i_1[0x13])
    arg_8.b = 0
    
    if (sub_141a46740(&i_1[1], rbx.d, &arg_8) != 0)
        int64_t r15_2 = sx.q(*(arg3 + 0x48))
        void* rdi = arg3 + 0x28
        int32_t rax_8 = (r15_2 + 1).d
        *(rdi + 0x20) = rax_8
        
        if (rax_8 s> *(rdi + 0x24))
            sub_141068880(rdi, r15_2.d)
        
        void* rax_9 = *(rdi + 0x18)
        int64_t rdx_5 = r15_2 * 3
        char rcx_5 = arg_8.b
        
        if (rax_9 != 0)
            rdi = rax_9
        
        *(rdi + (rdx_5 << 2)) = *i_1
        *(rdi + (rdx_5 << 2) + 8) = rcx_5

int64_t* i_2 = *(arg1 + 0x40)
uint128_t zmm0

for (void* r12_3 = sx.q(*(arg1 + 0x48)) * 0x148 + i_2; i_2 != r12_3; i_2 = &i_2[0x29])
    arg_8.q = 0
    char rax_12 = sub_141a467f0(&i_2[1], rbx, &arg_8)
    char rax_13
    rax_13, zmm6 = sub_141a467f0(&i_2[0x15], rbx, &arg_c)
    
    if ((rax_13 | rax_12) != 0)
        int64_t r15_3 = sx.q(*(arg3 + 0x78))
        void* rdi_2 = arg3 + 0x50
        int32_t rax_14 = (r15_3 + 1).d
        *(rdi_2 + 0x28) = rax_14
        
        if (rax_14 s> *(rdi_2 + 0x2c))
            sub_140dbcc80(rdi_2, r15_3.d)
        
        void* rax_15 = *(rdi_2 + 0x20)
        uint128_t zmm1_1 = zx.o(arg_8.q)
        
        if (rax_15 != 0)
            rdi_2 = rax_15
        
        zmm0 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        int64_t rax_16 = *i_2
        int64_t rcx_10 = r15_3 * 2
        *(rdi_2 + (rcx_10 << 3) + 8) = zmm1_1.d
        *(rdi_2 + (rcx_10 << 3) + 0xc) = zmm0.d
        *(rdi_2 + (rcx_10 << 3)) = rax_16

int64_t* i_3 = *(arg1 + 0x50)
uint64_t var_a8
int32_t var_a0

for (void* r12_5 = sx.q(*(arg1 + 0x58)) * 0x1e8 + i_3; i_3 != r12_5; i_3 = &i_3[0x3d])
    var_a8 = 0
    var_a0 = 0
    char rdi_3 = sub_141a467f0(&i_3[1], rbx, &var_a8) | sub_141a467f0(&i_3[0x15], rbx, &var_a8:4)
    char rax_20
    rax_20, zmm6 = sub_141a467f0(&i_3[0x29], rbx, &var_a0)
    
    if ((rax_20 | rdi_3) != 0)
        void* rdi_4 = arg3 + 0x80
        int64_t r15_4 = sx.q(*(rdi_4 + 0x30))
        int32_t rax_21 = (r15_4 + 1).d
        *(rdi_4 + 0x30) = rax_21
        
        if (rax_21 s> *(rdi_4 + 0x34))
            sub_141b307a0(rdi_4, r15_4.d)
        
        void* rax_22 = *(rdi_4 + 0x28)
        int64_t rdx_13 = r15_4 * 5
        int32_t rcx_15 = var_a0
        
        if (rax_22 != 0)
            rdi_4 = rax_22
        
        int64_t rax_23 = *i_3
        *(rdi_4 + (rdx_13 << 2) + 8) = var_a8
        *(rdi_4 + (rdx_13 << 2) + 0x10) = rcx_15
        *(rdi_4 + (rdx_13 << 2)) = rax_23

int64_t* i_4 = *(arg1 + 0x60)
uint128_t var_88

for (void* r12_7 = sx.q(*(arg1 + 0x68)) * 0x288 + i_4; i_4 != r12_7; i_4 = &i_4[0x51])
    var_88 = data_14399f5c0
    char rax_25 = sub_141a467f0(&i_4[1], rbx, &var_88)
    char rax_26 = sub_141a467f0(&i_4[0x15], rbx, &var_88:4)
    char rax_27 = sub_141a467f0(&i_4[0x29], rbx, &var_88:8)
    char rax_28
    rax_28, zmm6 = sub_141a467f0(&i_4[0x3d], rbx, &var_88:0xc)
    
    if ((rax_28 | rax_25 | rax_26 | rax_27) != 0)
        void* rdi_6 = arg3 + 0xb8
        int64_t r15_5 = sx.q(*(rdi_6 + 0x38))
        int32_t rax_29 = (r15_5 + 1).d
        *(rdi_6 + 0x38) = rax_29
        
        if (rax_29 s> *(rdi_6 + 0x3c))
            sub_141b30590(rdi_6, r15_5.d)
        
        void* rax_30 = *(rdi_6 + 0x30)
        int64_t rcx_21 = r15_5 * 3
        zmm0 = var_88
        
        if (rax_30 != 0)
            rdi_6 = rax_30
        
        *(rdi_6 + (rcx_21 << 3)) = *i_4
        *(rdi_6 + (rcx_21 << 3) + 8) = zmm0

int64_t* r14_2 = *(arg1 + 0x70)
int64_t result = sx.q(*(arg1 + 0x78))
void* r12_9 = result * 0x5a8 + r14_2

if (r14_2 != r12_9)
    uint64_t var_48_1 = zmm6
    
    do
        int32_t rax_32 = data_14399f670
        var_a8 = data_14399f668.q
        var_a0 = rax_32
        int64_t var_98
        int32_t var_90
        char rdi_7 = sub_141a467f0(&r14_2[1], rbx, &var_98)
            | sub_141a467f0(&r14_2[0x15], rbx, &var_98:4)
            | sub_141a467f0(&r14_2[0x29], rbx, &var_90)
            | sub_141a467f0(&r14_2[0x3d], rbx, &var_88:8)
        rdi_7 = rdi_7 | sub_141a467f0(&r14_2[0x51], rbx, &var_88)
            | sub_141a467f0(&r14_2[0x65], rbx, &var_88:4)
            | sub_141a467f0(&r14_2[0x79], rbx, &var_a8)
            | sub_141a467f0(&r14_2[0x8d], rbx, &var_a8:4)
        result.b = sub_141a467f0(&r14_2[0xa1], rbx, &var_a0).b | rdi_7
        
        if (result.b != 0)
            int32_t rax_41 = var_90
            int64_t result_1 = arg3 + 0xf8
            int64_t r15_6 = sx.q(*(result_1 + 0x60))
            uint64_t zmm6_1 = var_a8
            int32_t r13_1 = var_a0
            int32_t var_5c_1 = var_88:8.d
            int64_t rax_43 = *r14_2
            int32_t rax_44 = (r15_6 + 1).d
            uint64_t var_70_1 = var_98
            uint64_t var_64_1 = var_88.q
            *(result_1 + 0x60) = rax_44
            
            if (rax_44 s> *(result_1 + 0x64))
                sub_141b306a0(result_1, r15_6.d)
            
            result = *(result_1 + 0x58)
            
            if (result != 0)
                result_1 = result
            
            int64_t rcx_32 = r15_6 * 0x2c
            *(result_1 + rcx_32) = rax_43.o
            *(result_1 + rcx_32 + 0x10) = rax_41.o
            *(result_1 + rcx_32 + 0x20) = zmm6_1
            *(result_1 + rcx_32 + 0x28) = r13_1
        
        r14_2 = &r14_2[0xb5]
    while (r14_2 != r12_9)

return result
