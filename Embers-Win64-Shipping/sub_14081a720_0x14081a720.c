// 函数: sub_14081a720
// 地址: 0x14081a720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg3
sub_14081a5d0(arg1, arg2, arg3, arg4)
*arg1 = &data_142dd7058
void* rdi = &arg1[0x42]
arg1[0x3f] = 0
arg1[0x40].d = 0
*(arg1 + 0x204) = 2
*rdi = 0
*(rdi + 8) = 0
arg1[0x48] = 0
arg1[0x41] = *(rsi[0xa] + 0x50)
*(arg1 + 0x221) = *(rsi + 0x7c)
*(arg1 + 0x224) ^= (rsi[0x10].d << 2 ^ *(arg1 + 0x224)) & 4
int32_t rcx_1 = *(arg1 + 0x224)
arg1[0x46] = *(rsi + 0x84)
arg1[0x47].d = *(rsi + 0x8c)
*(arg1 + 0x23c) = rsi[0x12].b
arg1[0x44].b = rsi[0xb].b
int32_t rax_12 = ((rcx_1 ^ *(rsi + 0x5c)) & 2) ^ rcx_1
*(arg1 + 0x224) = rax_12
int32_t rcx_5 = ((rax_12 ^ *(rsi + 0x5c)) & 1) ^ rax_12
*(arg1 + 0x224) = rcx_5
arg1[0x45] = rsi[0xe]
*(arg1 + 0x224) = ((rsi[0xf].d << 3 ^ rcx_5) & 8) ^ rcx_5
uint128_t zmm6 = *(arg1 + 0x234)
uint128_t zmm8 = arg1[0x46].d
int128_t zmm7 = arg1[0x47].d
uint128_t zmm2
zmm2.d = zmm8.d f* zmm8.d
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm7.d f* zmm7.d

if (zmm2.d f<= 9.99999994e-09f)
    zmm7 = 0x3f800000
    zmm6 = zx.o(0)
    zmm8 = zx.o(0)
else
    float zmm3 = zmm2.d
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3)
    zmm3 = zmm3 * 0.5f
    zmm0.d = temp0_1.d f* temp0_1[0]
    zmm2.d = 0.5f - zmm3 f* zmm0.d
    zmm0.d = temp0_1.d f* zmm2.d
    temp0_1[0] = temp0_1[0] f+ zmm0.d
    zmm0.d = temp0_1.d f* (0.5f - zmm3 * temp0_1[0] * temp0_1[0])
    temp0_1[0] = temp0_1[0] f+ zmm0.d
    zmm7.d = zmm7.d f* temp0_1[0]
    zmm6.d = zmm6.d f* temp0_1[0]
    zmm8.d = zmm8.d f* temp0_1[0]

arg1[0x46].d = zmm8.d
*(arg1 + 0x234) = zmm6.d
arg1[0x47].d = zmm7.d
int64_t* rbx_1 = *(arg4 + 0x778)
arg1[0x48].d = 0
arg1[0x38].d = 0
sub_14083cd00(&arg1[0x16], 0xe, 1)
sub_14083d560(arg1, rbx_1, &rsi[0x18], 0)
sub_14083d560(arg1, rbx_1, &rsi[0x36], 1)
sub_14083d560(arg1, rbx_1, &rsi[0x27], 2)
sub_14083d560(arg1, rbx_1, &rsi[0x54], 3)
sub_14083d560(arg1, rbx_1, &rsi[0x45], 4)
sub_14083d560(arg1, rbx_1, &rsi[0xae], 5)
sub_14083d560(arg1, rbx_1, &rsi[0xcc], 6)
sub_14083d560(arg1, rbx_1, &rsi[0xbd], 7)
sub_14083d560(arg1, rbx_1, &rsi[0x63], 8)
sub_14083d560(arg1, rbx_1, &rsi[0xdb], 0xd)
int32_t rcx_18
rcx_18.b = sub_14083d560(arg1, rbx_1, &rsi[0x72], 9) != 0
arg1[0x48].d |= rcx_18
char rax_19
int32_t rcx_20
rax_19, rcx_20 = sub_14083d560(arg1, rbx_1, &rsi[0x81], 0xa)
arg1[0x48].d |= sbb.d(rcx_20, rcx_20, rax_19 != 0) & 2
char rax_20
int32_t rcx_24
rax_20, rcx_24 = sub_14083d560(arg1, rbx_1, &rsi[0x90], 0xb)
arg1[0x48].d |= sbb.d(rcx_24, rcx_24, rax_20 != 0) & 4
char rax_21
int32_t rcx_28
rax_21, rcx_28 = sub_14083d560(arg1, rbx_1, &rsi[0x9f], 0xc)
arg1[0x48].d |= sbb.d(rcx_28, rcx_28, rax_21 != 0) & 8
void* rax_23 = arg1[0x41]
*(arg1 + 0x244) = *(rsi[0xa] + 0x60)
int64_t rbp = sx.q(*(rdi + 8))
int64_t rbx_2 = sx.q(*(rax_23 + 8))

if (rbx_2.d s> rbp.d)
    *(rdi + 8) = rbx_2.d
    
    if (rbx_2.d s> *(rdi + 0xc))
        sub_1405a4f90(rdi)
    
    memset((rbp << 4) + *rdi, 0, sx.q(rbx_2.d - rbp.d) << 4)
else if (rbx_2.d s< rbp.d)
    sub_140838580(rdi, rbx_2.d, rbp.d - rbx_2.d, 1)

int64_t r9_1 = 0
int32_t r12 = 0

if (rbx_2.d s> 0)
    int64_t r14_3 = 0
    int64_t r13_1 = 0
    
    do
        void* rax_24 = rsi[0xa]
        int64_t* rbx_4 = *rdi + r13_1
        
        if (rax_24 != 0 && r14_3 s>= 0)
            int64_t* rax_25 = *(rax_24 + 0x50)
            
            if (r12 s< rax_25[1].d)
                int64_t rsi_1 = sx.q(rbx_4[1].d)
                void* rax_27 = *(*rax_25 + (r14_3 << 3))
                int64_t rbp_2 = sx.q(*(rax_27 + 0x30))
                
                if (rbp_2.d s> rsi_1.d)
                    rbx_4[1].d = rbp_2.d
                    int32_t i_1 = rbp_2.d - rsi_1.d
                    
                    if (rbp_2.d s> *(rbx_4 + 0xc))
                        sub_1405a4d70(rbx_4)
                        r9_1 = 0
                    
                    int64_t* rdx_17 = *rbx_4 + (rsi_1 << 3)
                    
                    if (i_1 != 0)
                        int32_t i
                        
                        do
                            *rdx_17 = 0
                            rdx_17 = &rdx_17[1]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    rdi = &arg1[0x42]
                else if (rbp_2.d s< rsi_1.d && rbp_2.d != rsi_1.d)
                    rbx_4[1].d = rbp_2.d
                    sub_1405c53d0(rbx_4)
                    r9_1 = 0
                
                int64_t r8_18 = 0
                
                if (rbp_2.d s> 0)
                    do
                        void* rcx_38 = *(rax_27 + 0x28)
                        r9_1 += 0x18
                        void* rax_29 = rax_27 + 0x10
                        void* rdx_18 = rax_27 + 0x10
                        
                        if (rcx_38 != 0)
                            rax_29 = rcx_38
                        
                        *(*rbx_4 + (r8_18 << 3)) = *(rax_29 + r9_1 - 0x10) * 3
                        void* rax_32 = *(rax_27 + 0x28)
                        
                        if (rax_32 != 0)
                            rdx_18 = rax_32
                        
                        *(*rbx_4 + (r8_18 << 3) + 4) = *(rdx_18 + r9_1 - 0x14)
                        r8_18 += 1
                    while (r8_18 s< rbp_2)
                    
                    r9_1 = 0
                
                rsi = arg3
        
        r12 += 1
        r14_3 += 1
        r13_1 += 0x10
    while (r14_3 s< rbx_2)

return arg1
