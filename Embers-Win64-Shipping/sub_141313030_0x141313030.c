// 函数: sub_141313030
// 地址: 0x141313030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg2
void* rbx = &arg2[0x1bc]
int32_t* r12 = arg4
int32_t i = 0

if (arg5 u>= 4)
    void* rdx = arg3 + 8
    arg4 = &arg4[2]
    int64_t* r8_1 = arg1 - arg3
    int32_t rbx_1 = 2
    void* r11_1 = arg1 + 0x60
    
    do
        if (i != 0)
            *(r8_1 + rdx - 8) = *(*(rdx - 8) + 0x10)
            *(r8_1 + rdx + 0x20) = data_14395f4d0
        
        *(r11_1 - 0x10) = arg4[-2]
        
        if (rbx_1 != 1)
            *(r8_1 + rdx) = *(*rdx + 0x10)
            *(r8_1 + rdx + 0x28) = data_14395f4d0
        
        *r11_1 = arg4[-1]
        
        if (rbx_1 != 0)
            *(r8_1 + rdx + 8) = *(*(rdx + 8) + 0x10)
            *(r8_1 + rdx + 0x30) = data_14395f4d0
        
        *(r11_1 + 0x10) = *arg4
        
        if (rbx_1 != 0xffffffff)
            *(r8_1 + rdx + 0x10) = *(*(rdx + 0x10) + 0x10)
            *(r8_1 + rdx + 0x38) = data_14395f4d0
        
        rdx += 0x20
        *(r11_1 + 0x20) = arg4[1]
        arg4 = &arg4[4]
        r11_1 += 0x40
        i += 4
        rbx_1 += 4
    while (i u< arg5 - 3)
    
    rbx = &arg2[0x1bc]

if (i u< arg5)
    uint64_t i_1 = zx.q(i)
    arg4 = &r12[i_1]
    int32_t* r8_4 = ((i_1 + 5) << 4) + arg1
    int64_t* rdx_1 = arg3 + (i_1 << 3)
    void* r11_3 = arg1 - arg3
    
    do
        if (i != 0)
            *(rdx_1 + r11_3) = *(*rdx_1 + 0x10)
            *(rdx_1 + r11_3 + 0x28) = data_14395f4d0
        
        rdx_1 = &rdx_1[1]
        *r8_4 = *arg4
        arg4 = &arg4[1]
        r8_4 = &r8_4[4]
        i += 1
    while (i u< arg5)

float var_c0 = arg2[0x159].d[0]
float zmm1[0x4] = 0xc1200000
*(arg1 + 0xb0) = (_mm_unpacklo_ps(arg2[0x158].d, (*(arg2 + 0xac4))[0].q)).q
*(arg1 + 0xb8) = var_c0
float zmm0[0x4] = *(arg2 + 0xab0)
*(arg1 + 0xa0) = zmm0
void* rax_19 = data_143eb3b18
float var_c8[0x4] = zmm0
float zmm3[0x4] = *(rax_19 + 4)

if (zmm3[0] >= -10f)
    zmm3 = _mm_min_ss(zmm3[0], 0x41200000)
else
    zmm3 = 0xc1200000

int64_t zmm2 = *(data_143eb3b30 + 4)

if (zmm2.d f>= -10f)
    zmm2 = _mm_min_ss(zmm2.d, 0x41200000)
else
    zmm2 = 0xc1200000

float zmm4[0x4] = *(data_143eb3b48 + 4)

if (not(zmm4[0] < -10f))
    zmm1 = _mm_min_ss(zmm4[0], 0x41200000)

zmm2.d = zmm2.d f* 4f
zmm3[0] = zmm3[0] * 3f
zmm2.d = zmm2.d f- zmm3[0]
float var_c0_2 = zmm3[0]
zmm0 = var_c8
zmm2.d = zmm2.d f- zmm1[0]
zmm1[0] = zmm1[0] - zmm3[0]
zmm1[0] = zmm1[0] f- zmm2.d
zmm0[0].q = (_mm_unpacklo_ps(zmm1, zmm2)).q
*(arg1 + 0x230) = zmm0
*(arg1 + 0x200) = *(rbx + 0x24)
*(arg1 + 0x204) = *(rbx + 0x28)
var_c8 = zmm0
*(arg1 + 0xc0) = *(rbx + 0x30)
*(arg1 + 0xd0) = *(rbx + 0x40)
*(arg1 + 0xe0) = *(rbx + 0x50)
*(arg1 + 0xf0) = *(rbx + 0x60)
*(arg1 + 0x100) = *(rbx + 0x70)
*(arg1 + 0x110) = *(rbx + 0x80)
*(arg1 + 0x120) = *(rbx + 0x90)
*(arg1 + 0x130) = *(rbx + 0xa0)
*(arg1 + 0x140) = *(rbx + 0xb0)
*(arg1 + 0x150) = *(rbx + 0xc0)
*(arg1 + 0x160) = *(rbx + 0xd0)
*(arg1 + 0x170) = *(rbx + 0xe0)
*(arg1 + 0x180) = *(rbx + 0xf0)
*(arg1 + 0x190) = *(rbx + 0x100)
*(arg1 + 0x1a0) = *(rbx + 0x110)
*(arg1 + 0x1b0) = *(rbx + 0x120)
*(arg1 + 0x1c0) = *(rbx + 0x130)
*(arg1 + 0x1d0) = *(rbx + 0x140)
*(arg1 + 0x1e0) = *(rbx + 0x150)
*(arg1 + 0x1f0) = *(rbx + 0x160)
*(arg1 + 0x208) = *(rbx + 0x174)
*(arg1 + 0x20c) = *(rbx + 0x170)
*(arg1 + 0x210) = *(rbx + 0x178)
*(arg1 + 0x214) = *(rbx + 0x17c)
*(arg1 + 0x218) = *(rbx + 0x180)
*(arg1 + 0x21c) = *(rbx + 0x184)
*(arg1 + 0x220) = *(rbx + 0x188)
*(arg1 + 0x224) = *(rbx + 0x18c)
*(arg1 + 0x228) = *(rbx + 0x190)
int32_t rcx_5
rcx_5.b = *(data_143eb3b70 + 4) == 0
arg4.b = 1
*(arg1 + 0x22c) = rcx_5
void var_a8
int128_t* rax_35 = sub_141356ee0(&var_a8, rbx, 1, arg4.b, 1)
*(arg1 + 0x260) = *rax_35
*(arg1 + 0x270) = rax_35[1]
*(arg1 + 0x280) = rax_35[2]
*(arg1 + 0x290) = rax_35[3]
*(arg1 + 0x2a0) = rax_35[4]
*(arg1 + 0x2b0) = rax_35[5]
*(arg1 + 0x2c0) = rax_35[6]
*(arg1 + 0x2d0) = rax_35[7]
int32_t r13
r13.b = *(data_143eb3b70 + 4) == 0
*(arg1 + 0x22c) = r13
int64_t* rax_37 = sub_14135ba90(&var_c8, r15)
*(arg1 + 0x240) = *rax_37
*(arg1 + 0x250) = *(rax_37 + 0x10)
int128_t* result = sub_141356ee0(&var_a8, rbx, 1, 1, 1)
*(arg1 + 0x260) = *result
*(arg1 + 0x270) = result[1]
*(arg1 + 0x280) = result[2]
*(arg1 + 0x290) = result[3]
*(arg1 + 0x2a0) = result[4]
*(arg1 + 0x2b0) = result[5]
*(arg1 + 0x2c0) = result[6]
*(arg1 + 0x2d0) = result[7]
return result
