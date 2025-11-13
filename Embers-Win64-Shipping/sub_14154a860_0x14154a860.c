// 函数: sub_14154a860
// 地址: 0x14154a860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t i_5 = 0
void* const rcx_4

if (arg4[1].d == *(arg4 + 0x34))
label_14154a900:
    rcx_4 = nullptr
else
    void* r8 = &arg4[7]
    void* rdx = *(r8 + 8)
    int64_t r10_1 = sx.q(**arg3)
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_5 = *(r8 + (((sx.q(arg4[9].d) - 1) & r10_1) << 2))
    
    if (rax_5 == 0xffffffff)
    label_14154a900_1:
        rcx_4 = nullptr
    else
        int64_t r8_1 = *arg4
        
        while (true)
            int64_t rdx_1 = sx.q(rax_5) * 9
            rcx_4 = r8_1 + (rdx_1 << 2)
            
            if (*(r8_1 + (rdx_1 << 2)) == r10_1.d)
                break
            
            rax_5 = *(rcx_4 + 0x1c)
            
            if (rax_5 == 0xffffffff)
                goto label_14154a900_2
        
        if (rax_5 == 0xffffffff)
        label_14154a900_2:
            rcx_4 = nullptr

*arg1 = *(rcx_4 + 4)
arg1[1].d = *(rcx_4 + 0xc)
*(arg1 + 0xc) = *(rcx_4 + 0x10)
*(arg1 + 0x14) = *(rcx_4 + 0x18)
float zmm3[0x4] = *(arg1 + 0xc)
zmm3[0] = zmm3[0] f- *arg1
float zmm4 = arg1[2].d f- *(arg1 + 4)
uint128_t zmm0
zmm0.d = (*(arg1 + 0x14)).d f- arg1[1].d
zmm3[0] = zmm3[0] * 0.5f
int32_t i_2 = 1
zmm3[0] = zmm3[0] f+ *arg1
zmm0.d = zmm0.d f* 0.5f
zmm4 = zmm4 * 0.5f f+ *(arg1 + 4)
zmm0.d = zmm0.d f+ arg1[1].d
zmm3[0] - 0f
int32_t rdi
rdi.b = zmm3[0] <= 0f
int32_t r15
r15.b = zmm3[0] > 0f
zmm4 - 0f
int32_t var_b0 = rdi
int32_t var_ac = r15
int32_t r12
r12.b = zmm4 <= 0f
int32_t r13
r13.b = zmm4 > 0f
zmm0.d f- 0f
int32_t var_a8 = r12
int32_t var_a4 = r13
int32_t rax_8
rax_8.b = zmm0.d f<= 0f
var_f8 = rax_8
int32_t var_a0 = rax_8
int32_t rax_9
rax_9.b = zmm0.d f> 0f
int32_t var_f4 = rax_9
int32_t var_9c = rax_9

if (arg3[1].d s> 1)
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    void* rbx_1 = 4
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    int32_t i
    
    do
        void* const rcx_9
        
        if (arg4[1].d == *(arg4 + 0x34))
        label_14154aa50:
            rcx_9 = nullptr
        else
            void* r8_2 = &arg4[7]
            void* rdx_2 = *(r8_2 + 8)
            int64_t r10_2 = sx.q(*(rbx_1 + *arg3))
            
            if (rdx_2 != 0)
                r8_2 = rdx_2
            
            int32_t rax_12 = *(r8_2 + (((sx.q(arg4[9].d) - 1) & r10_2) << 2))
            
            if (rax_12 == 0xffffffff)
            label_14154aa50_1:
                rcx_9 = nullptr
            else
                int64_t r8_3 = *arg4
                
                while (true)
                    int64_t rdx_3 = sx.q(rax_12) * 9
                    rcx_9 = r8_3 + (rdx_3 << 2)
                    
                    if (*(r8_3 + (rdx_3 << 2)) == r10_2.d)
                        break
                    
                    rax_12 = *(rcx_9 + 0x1c)
                    
                    if (rax_12 == 0xffffffff)
                        goto label_14154aa50_2
                
                if (rax_12 == 0xffffffff)
                label_14154aa50_2:
                    rcx_9 = nullptr
        
        uint128_t zmm5 = zx.o(*(rcx_9 + 4))
        zmm8 = zx.o(*(rcx_9 + 0x10))
        float rax_13 = *(rcx_9 + 0xc)
        float temp0_1[0x4] = __minss_xmmss_memss(zmm5[0], *arg1)
        int32_t rcx_10 = var_f8
        zmm7 = *(rcx_9 + 0x18)
        zmm6 = zmm8.q:4.d
        int32_t var_c0_1 = _mm_min_ss(arg1[1].d.d, rax_13).d
        zmm3 = zmm5.q:4.d
        zmm6[0] = zmm6[0] - zmm3[0]
        float temp0_3[0x4] = __minss_xmmss_memss(zmm3[0], *(arg1 + 4))
        zmm6[0] = zmm6[0] * 0.5f
        float zmm1[0x4] = zmm8
        *arg1 = (_mm_unpacklo_ps(temp0_1, temp0_3[0].q)).q
        zmm8.d = zmm8.d f- zmm5.d
        arg1[1].d = var_c0_1
        zmm6[0] = zmm6[0] + zmm3[0]
        float temp0_5[0x4] = __maxss_xmmss_memss(zmm1[0], *(arg1 + 0xc))
        float temp0_6[0x4] = __maxss_xmmss_memss(zmm6[0], arg1[2].d)
        zmm0 = zmm7
        zmm7.d = zmm7.d f- rax_13
        zmm0 = __maxss_xmmss_memss(zmm0.d, *(arg1 + 0x14))
        zmm8.d = zmm8.d f* 0.5f
        *(arg1 + 0xc) = (_mm_unpacklo_ps(temp0_5, temp0_6[0].q)).q
        zmm8.d = zmm8.d f+ zmm5.d
        *(arg1 + 0x14) = zmm0.d
        zmm7.d = zmm7.d f* 0.5f
        zmm7.d = zmm7.d f+ rax_13
        int32_t rax_17
        rax_17.b = zmm8.d f<= 0f
        rdi += rax_17
        int32_t rax_18
        rax_18.b = zmm8.d f> 0f
        r15 += rax_18
        int32_t rax_19
        rax_19.b = zmm6[0] <= 0f
        r12 += rax_19
        int32_t rax_20
        rax_20.b = zmm6[0] > 0f
        r13 += rax_20
        int32_t rax_21
        rax_21.b = zmm7.d f<= 0f
        int32_t rcx_11 = rcx_10 + rax_21
        var_f8 = rcx_11
        int32_t var_a0_1 = rcx_11
        int32_t rax_22
        rax_22.b = zmm7.d f> 0f
        rbx_1 += 4
        int32_t rcx_13 = var_f4 + rax_22
        var_f4 = rcx_13
        int32_t var_9c_1 = rcx_13
        i = i_2 + 1
        i_2 = i
    while (i s< arg3[1].d)
    var_b0 = rdi
    int32_t var_ac_1 = r15
    int32_t var_a8_1 = r12
    int32_t var_a4_1 = r13

int32_t* rbx_2 = &var_b0
int32_t r11_1 = 0
int32_t i_6

for (int32_t i_1 = 0; i_1 s< 3; )
    int32_t rcx_15 = rbx_2[1]
    int32_t i_4 = i_1 + 1
    int32_t i_3 = i_1
    
    if (*rbx_2 s<= rcx_15)
        rcx_15 = *rbx_2
    
    int32_t r9 = rcx_15
    int32_t rcx_16 = rbx_2[3]
    
    if (rcx_15 s<= r11_1)
        r9 = r11_1
    
    if (rcx_15 s<= r11_1)
        i_3 = i_5
    
    r11_1 = rbx_2[5]
    
    if (rbx_2[2] s<= rcx_16)
        rcx_16 = rbx_2[2]
    
    int32_t r10_3 = rcx_16
    i_6 = i_1 + 2
    
    if (rcx_16 s<= r9)
        r10_3 = r9
    
    if (rcx_16 s<= r9)
        i_4 = i_3
    
    if (rbx_2[4] s<= r11_1)
        r11_1 = rbx_2[4]
    
    rbx_2 = &rbx_2[6]
    
    if (r11_1 s<= r10_3)
        i_6 = i_4
    
    i_1 += 3
    i_5 = i_6
    
    if (r11_1 s<= r10_3)
        r11_1 = r10_3

*arg5 = i_6
__security_check_cookie(rax_1 ^ &var_f8)
return arg1
