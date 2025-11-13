// 函数: sub_141ad4ea0
// 地址: 0x141ad4ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* arg_10 = arg2
float (* r10)[0x4] = arg3

if (0f f>= *(arg1 + 0x2d4))
    return 

void* rbx_1 = *(arg1 + 0x258)
int64_t rbp_1 = 0
void* r12_1 = rbx_1 + sx.q(*(arg1 + 0x260)) * 0x24
void var_58
int64_t rax

while (rbx_1 != r12_1)
    int32_t zmm6_1 = sub_141ad65e0(&var_58, *(arg1 + 0x121), rbx_1, arg2, r10)
    int64_t rdi_1 = 0
    void** rsi_1 = *(arg1 + 0x218)
    uint64_t r15_2 = sx.q(*(arg1 + 0x220)) << 3 u>> 3
    
    if (rsi_1 u> &rsi_1[sx.q(*(arg1 + 0x220))])
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            void* r14_1 = *rsi_1
            int64_t r8_1
            uint32_t zmm0[0x4]
            zmm0, rax, r8_1 = sub_14224f430(r14_1)
            
            if (not(zmm0[0] f<= zmm6_1))
                char rcx_2 = *(rbx_1 + 0x18)
                *(rbx_1 + 0x10)
                
                if (rcx_2 == 0)
                    zmm0[0] = zmm0[0] f* *(arg1 + 0x2d4)
                    zmm0[0]
                
                int32_t rax_2
                
                if (*(rbx_1 + 0x1c) != 0)
                    rax_2.b = rcx_2 != 0
                else
                    rax_2.b = rcx_2 != 0
                    rax_2 += 2
                
                float (* var_68_1)[0x4]
                var_68_1.d = *(rbx_1 + 0x14)
                rax, zmm6_1 = sub_1422400d0(r14_1, &var_58, r8_1, *(rbx_1 + 0xc), var_68_1.d, rax_2)
            
            rsi_1 = &rsi_1[1]
            rdi_1 += 1
        while (rdi_1 != r15_2)
    
    r10 = arg3
    rbx_1 += 0x24
    arg2 = arg_10

if (not(_mm_and_ps(*(arg1 + 0xdc), 0x7fffffff)[0] f> 9.99999975e-05f))
    if (_mm_and_ps(*(arg1 + 0xe0), 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_141ad504a
    
    if (not(_mm_and_ps(*(arg1 + 0xe4), 0x7fffffff)[0] f<= 9.99999975e-05f))
        goto label_141ad504a
    
    return 

label_141ad504a:
int32_t zmm6_2 = sub_141ad6900(&var_58, *(arg1 + 0x121), arg1 + 0xdc, arg2, r10)
int64_t* rbx_2 = *(arg1 + 0x218)
uint64_t rsi_3 = sx.q(*(arg1 + 0x220)) << 3 u>> 3

if (rbx_2 u> &rbx_2[sx.q(*(arg1 + 0x220))])
    rsi_3 = 0

if (rsi_3 == 0)
    return 

do
    void* rdi_2 = *rbx_2
    int32_t zmm0_1
    zmm0_1, rax = sub_14224f430(rdi_2)
    
    if (not(zmm0_1 f<= zmm6_2))
        sub_142240000(rdi_2, &var_58)
    
    rbx_2 = &rbx_2[1]
    rbp_1 += 1
while (rbp_1 != rsi_3)
