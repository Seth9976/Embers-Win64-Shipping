// 函数: sub_141ad4c50
// 地址: 0x141ad4c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* arg_10 = arg2

if (0f f>= *(arg1 + 0x2dc))
    return 

void* i = *(arg1 + 0x260)
int64_t rbp_1 = 0
void var_48

for (void* r12_1 = i + sx.q(*(arg1 + 0x268)) * 0x24; i != r12_1; i += 0x24)
    int32_t zmm6_1 = sub_141ad65e0(&var_48, *(arg1 + 0x1b9), i, arg2, arg3)
    int64_t rdi_1 = 0
    void** rsi_1 = *(arg1 + 0x220)
    uint64_t r14_2 = sx.q(*(arg1 + 0x228)) << 3 u>> 3
    
    if (rsi_1 u> &rsi_1[sx.q(*(arg1 + 0x228))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            void* rax_2 = *rsi_1
            int64_t rdx_1 = sx.q(*(rax_2 + 0x38))
            void* r9_3 = *(rax_2 + 0x30)
            uint32_t zmm0[0x4] = *(rdx_1 * 0x60 + *(r9_3 + 0x50) + 0xc)
            
            if (not(zmm0[0] f<= zmm6_1))
                char rcx_3 = *(i + 0x18)
                int128_t zmm3_1 = *(i + 0x10)
                
                if (rcx_3 == 0)
                    zmm0[0] = zmm0[0] f* *(arg1 + 0x2dc)
                    zmm3_1.d = zmm3_1.d f/ zmm0[0]
                
                int32_t rax_3
                
                if (*(i + 0x1c) != 0)
                    rax_3.b = rcx_3 != 0
                else
                    rax_3.b = rcx_3 != 0
                    rax_3 += 2
                
                float (* var_68_1)[0x4]
                var_68_1.d = (*(i + 0xc))[0]
                int64_t rax
                rax, zmm6_1 =
                    sub_142240350(r9_3, rdx_1.d, &var_48, zmm3_1, var_68_1.d, *(i + 0x14), rax_3)
            
            rsi_1 = &rsi_1[1]
            rdi_1 += 1
        while (rdi_1 != r14_2)
    
    arg2 = arg_10

if (not(_mm_and_ps(*(arg1 + 0x174), 0x7fffffff)[0] f> 9.99999975e-05f))
    if (_mm_and_ps(*(arg1 + 0x178), 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_141ad4e11
    
    if (not(_mm_and_ps(*(arg1 + 0x17c), 0x7fffffff)[0] f<= 9.99999975e-05f))
        goto label_141ad4e11
    
    return 

label_141ad4e11:
int32_t zmm6_2 = sub_141ad6900(&var_48, *(arg1 + 0x1b9), arg1 + 0x174, arg2, arg3)
int64_t* rbx_1 = *(arg1 + 0x220)
uint64_t rdi_3 = sx.q(*(arg1 + 0x228)) << 3 u>> 3

if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x228))])
    rdi_3 = 0

if (rdi_3 == 0)
    return 

do
    void* rax_6 = *rbx_1
    int64_t rdx_3 = sx.q(*(rax_6 + 0x38))
    void* rcx_6 = *(rax_6 + 0x30)
    
    if (not(zmm6_2 f>= *(rdx_3 * 0x60 + *(rcx_6 + 0x50) + 0xc)))
        sub_142240060(rcx_6, rdx_3.d, &var_48)
    
    rbx_1 = &rbx_1[1]
    rbp_1 += 1
while (rbp_1 != rdi_3)
