// 函数: sub_14212e730
// 地址: 0x14212e730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* arg_10 = arg2
int64_t* rbx_1 = arg3
int128_t zmm8 = arg4
int64_t* r13_1 = arg2

if (rbx_1 == 0)
    return 

int64_t* rax_2 = (*(*arg2 + 0x268))(arg2)
int64_t r8 = *rbx_1
int64_t* var_a8 = rax_2

if (rax_2 != (*(r8 + 0x268))(rbx_1, arg5, r8))
    return 

int64_t* var_98 = nullptr
int64_t var_90_1 = 0
sub_1421246f0(r13_1, &var_98)
sub_1421246f0(rbx_1, &var_98)
int64_t r15_1 = sx.q(var_90_1.d)
int64_t r14_1 = 0
int64_t* rdi_1 = var_98
int128_t var_88
int64_t var_78
char var_70
int32_t var_6c
void* const* rax
float zmm6[0x4]
float zmm7[0x4]

if (r15_1 s> 0)
    do
        int64_t rdx_2 = rdi_1[r14_1]
        int64_t var_b0 = rdx_2
        int32_t* rax_3 = sub_142124790(r13_1, rdx_2)
        rax, zmm6 = sub_142124790(rbx_1, var_b0)
        
        if (rax_3 != 0 || rax != 0)
            int32_t var_b8 = 0
            
            if (rax_3 == 0 || rax == 0)
                sub_140b4c620(&var_88, &var_b0)
                int32_t var_80_1 = 0xffffffff
                char var_7c_1 = 2
                (*(*rax_2 + 0x398))(rax_2, &var_88, &var_b8, 0)
            
            if (rax_3 != 0)
                rax_3[4]
            
            if (rax != 0)
                rax[2].d
            
            var_78 = var_b0
            var_70 = 2
            var_6c = 0xffffffff
            rax, zmm6, zmm7, zmm8 = sub_142131bb0(arg1, &var_78)
        
        rbx_1 = arg3
        r14_1 += 1
    while (r14_1 s< r15_1)

bool cond:0_1 = var_90_1:4.d == 0
int32_t rbx_3 = 0
var_90_1.d = 0

if (not(cond:0_1))
    sub_140638c50(&var_98, 0)
    rbx_3 = var_90_1.d
    rdi_1 = var_98

void* rax_7
void* rdx_9

do
    int64_t i_3 = sx.q(r13_1[0x1f].d)
    
    if (i_3 s> 0)
        void*** r14_2 = nullptr
        int64_t i
        
        do
            int64_t r15_2 = r13_1[0x1e]
            int64_t* rcx_10 = rdi_1
            void* rdx_7 = &rdi_1[sx.q(rbx_3)]
            
            if (rdi_1 != rdx_7)
                while (*rcx_10 != *(r14_2 + r15_2))
                    rcx_10 = &rcx_10[1]
                    
                    if (rcx_10 == rdx_7)
                        goto label_14212e93c
            
            if (rdi_1 == rdx_7 || ((rcx_10 - rdi_1) s>> 3).d == 0xffffffff)
            label_14212e93c:
                int64_t rsi_2 = sx.q(rbx_3)
                rbx_3 = (rsi_2 + 1).d
                var_90_1.d = rbx_3
                
                if (rbx_3 s> var_90_1:4.d)
                    sub_1405a4d70(&var_98)
                    rbx_3 = var_90_1.d
                    rdi_1 = var_98
                
                rdi_1[rsi_2] = *(r14_2 + r15_2)
            
            r14_2 = &r14_2[6]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    r13_1 = r13_1[0x1a]
    
    if (r13_1 == 0)
        break
    
    rax_7 = sub_142543020()
    rdx_9 = r13_1[2]
    rax = sx.q(*(rax_7 + 0x38))
    
    if (rax.d s> *(rdx_9 + 0x38))
        break
while ((*(rdx_9 + 0x30))[rax] == rax_7 + 0x30)
int64_t* r13_2 = arg3
void* rax_9
void* rdx_12

do
    int64_t i_4 = sx.q(r13_2[0x1f].d)
    
    if (i_4 s> 0)
        void*** r14_3 = nullptr
        int64_t i_1
        
        do
            int64_t r15_3 = r13_2[0x1e]
            int64_t* rcx_15 = rdi_1
            void* rdx_10 = &rdi_1[sx.q(rbx_3)]
            
            if (rdi_1 != rdx_10)
                while (*rcx_15 != *(r14_3 + r15_3))
                    rcx_15 = &rcx_15[1]
                    
                    if (rcx_15 == rdx_10)
                        goto label_14212e9fc
            
            if (rdi_1 == rdx_10 || ((rcx_15 - rdi_1) s>> 3).d == 0xffffffff)
            label_14212e9fc:
                int64_t rsi_3 = sx.q(rbx_3)
                rbx_3 = (rsi_3 + 1).d
                var_90_1.d = rbx_3
                
                if (rbx_3 s> var_90_1:4.d)
                    sub_1405a4d70(&var_98)
                    rbx_3 = var_90_1.d
                    rdi_1 = var_98
                
                rdi_1[rsi_3] = *(r14_3 + r15_3)
            
            r14_3 = &r14_3[6]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    r13_2 = r13_2[0x1a]
    
    if (r13_2 == 0)
        break
    
    rax_9 = sub_142543020()
    rdx_12 = r13_2[2]
    rax = sx.q(*(rax_9 + 0x38))
    
    if (rax.d s> *(rdx_12 + 0x38))
        break
while ((*(rdx_12 + 0x30))[rax] == rax_9 + 0x30)

if (rbx_3 s> 0)
    int64_t* r12_2 = var_a8
    int64_t i_2 = 0
    int64_t* r13_3 = arg_10
    float var_48_1[0x4] = zmm6
    float var_58_1[0x4] = zmm7
    
    do
        int64_t* rdx_13 = rdi_1[i_2]
        arg_10 = rdx_13
        int32_t* rax_10 = sub_1421248b0(r13_3, rdx_13)
        rax = sub_1421248b0(arg3, arg_10)
        
        if (rax_10 != 0 || rax != 0)
            var_88 = zx.o(0)
            
            if (rax_10 == 0 || rax == 0)
                sub_140b4c620(&var_78, &arg_10)
                var_70.d = 0xffffffff
                var_6c.b = 2
                (*(*r12_2 + 0x3a8))(r12_2, &var_78, &var_88, 0)
            
            void* rsi_5
            
            if (rax_10 == 0)
                rsi_5 = &var_88
            else
                rsi_5 = &rax_10[4]
            
            var_98.o = *rsi_5
            void* rbx_5
            
            if (rax == 0)
                rbx_5 = &var_88
            else
                rbx_5 = &rax[2]
            
            float zmm6_1[0x4] = *rbx_5
            int64_t* rax_12 = arg_10
            zmm7 = var_98.d
            float zmm5_1 = var_98:4.d
            float zmm4_1 = var_90_1.d
            float zmm2_2 = zmm6_1[0] - zmm7[0]
            arg4 = var_90_1:4.d
            float zmm1[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
            float zmm0_2[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)
            zmm1[0] = zmm1[0] - zmm5_1
            zmm0_2[0] = zmm0_2[0] - zmm4_1
            var_a8 = rax_12
            zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
            zmm6_1[0] = zmm6_1[0] f- arg4.d
            char var_a0_1 = 2
            zmm7[0] = zmm7[0] + zmm2_2 f* zmm8.d
            zmm1[0] = zmm1[0] f* zmm8.d
            int32_t var_9c_1 = 0xffffffff
            zmm0_2[0] = zmm0_2[0] f* zmm8.d
            zmm5_1 = zmm5_1 + zmm1[0]
            zmm6_1[0] = zmm6_1[0] f* zmm8.d
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
            zmm4_1 = zmm4_1 + zmm0_2[0]
            arg4.d = arg4.d f+ zmm6_1[0]
            zmm7[0] = zmm5_1
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc6)
            zmm7[0] = zmm4_1
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x27)
            zmm7[0] = arg4.d
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x39)
            var_98.o = zmm7
            var_98.o = zmm7
            rax, zmm8 = sub_142132210(arg1, &var_a8, &var_98)
        
        i_2 += 1
    while (i_2 s< sx.q(rbx_3))

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)
