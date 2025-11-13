// 函数: sub_1421f5a80
// 地址: 0x1421f5a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
arg1[0x27] = arg4
*(arg1 + 0x16c) = arg6
*(arg1 + 0x169) = arg5
arg1[0x2f] = arg3
void* var_48 = nullptr
int32_t var_40 = 0
int32_t var_3c = 2
char var_88 = 0
void var_58
sub_1421b79f0(arg3, &var_58, *(*(*(arg3 + 0x10) + 0x40) + (sx.q(*(arg3 + 0x20)) << 3)), arg7)
int32_t rbx = var_40
int32_t r14 = 0

if (rbx s> 0)
    int64_t rsi_1 = 0
    
    do
        void* rbx_1 = var_48
        void* rax_4 = &var_58
        
        if (rbx_1 != 0)
            rax_4 = rbx_1
        
        int64_t* rcx_2 = *(rax_4 + rsi_1)
        
        if (rcx_2 == 0)
            goto label_1421f5b50
        
        if ((*(*rcx_2 + 0x2d8))(rcx_2, 3) == 0)
            rbx_1 = var_48
        label_1421f5b50:
            int64_t rax_7 = sub_14210f630(0)
            void* rcx_3 = &var_58
            
            if (rbx_1 != 0)
                rcx_3 = rbx_1
            
            *(rcx_3 + rsi_1) = rax_7
        
        rbx = var_40
        r14 += 1
        rsi_1 += 8
    while (r14 s< rbx)

int64_t r14_1 = sx.q(arg1[0x2b].d)
int32_t rax_8 = r14_1.d + rbx
arg1[0x2b].d = rax_8

if (rax_8 s> *(arg1 + 0x15c))
    sub_140bcefd0(&arg1[0x28], r14_1.d)

void* rax_9 = arg1[0x2a]
void* rcx_5 = &arg1[0x28]

if (rax_9 != 0)
    rcx_5 = rax_9

memset(rcx_5 + (r14_1 << 3), 0, sx.q(rbx) << 3)
int32_t r15 = 0

if (var_40 s> 0)
    int64_t r14_2 = 0
    
    do
        void* rcx_7 = &var_58
        void* rbx_2 = arg1[0x2a]
        
        if (var_48 != 0)
            rcx_7 = var_48
        
        int64_t* rcx_8 = *(rcx_7 + r14_2)
        int64_t rax_12 = (*(*rcx_8 + 0x280))(rcx_8)
        r14_2 += 8
        void* rcx_9 = &arg1[0x28]
        
        if (rbx_2 != 0)
            rcx_9 = rbx_2
        
        r15 += 1
        *(rcx_9 + r14_2 - 8) = rax_12
    while (r15 s< var_40)

int32_t rcx_11
rcx_11.b = *((*(*arg1 + 0x60))(arg1) + 0x94) s> 0
int32_t result = arg1[5].d & 0xfffffffe
arg1[5].d = rcx_11 | result
void* rbx_3 = *(arg3 + 0x1d0)

if (rbx_3 != 0)
    arg1[0x2c].d = *(arg3 + 0x30)
    float var_78
    float var_68
    sub_141fe3fa0(rbx_3 + 0x48, &var_68, &var_78)
    float zmm2_1 = var_68
    float zmm3_1[0x4] = zx.o(0)
    int32_t var_64
    float zmm0_1[0x4] = var_64
    int32_t var_60
    int64_t zmm1_1 = var_60
    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
    zmm1_1.d = zmm1_1.d f* zmm1_1.d
    
    if (zmm2_1 * zmm2_1 + zmm0_1[0] f+ zmm1_1.d != zmm3_1[0])
        *(arg1 + 0x164) |= 1
    else
        zmm2_1 = var_78
        int32_t var_74
        zmm0_1 = var_74
        int32_t var_70
        zmm1_1 = var_70
        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
        zmm1_1.d = zmm1_1.d f* zmm1_1.d
        
        if (zmm2_1 * zmm2_1 + zmm0_1[0] f+ zmm1_1.d != zmm3_1[0])
            *(arg1 + 0x164) |= 1
        else
            *(arg1 + 0x164) &= 0xfffffffe
    
    int32_t rdx_3 = *(arg1 + 0x164)
    int32_t rcx_18
    char r8_5
    
    if ((*(rbx_3 + 0x91) & 1) == 0)
        arg1[0x2d].b = 0
        rcx_18 = rdx_3 & 0xffffffe3
        r8_5 = 0
    else
        int32_t rdx_4 = rdx_3 | 4
        *(arg1 + 0x164) = rdx_4
        r8_5 = *(rbx_3 + 0x93)
        arg1[0x2d].b = r8_5
        int32_t rdx_5 = rdx_4 ^ ((zx.d(*(rbx_3 + 0x94)) << 3 ^ rdx_4) & 8)
        *(arg1 + 0x164) = rdx_5
        rcx_18 = ((zx.d(*(rbx_3 + 0x94)) << 3 ^ rdx_5) & 0x10) ^ rdx_5
    
    *(arg1 + 0x164) = rcx_18
    uint32_t rdx_6 = zx.d(*(rbx_3 + 0x90))
    result = rdx_6 - 1
    int32_t result_1
    
    if (result.b u<= 5)
        *(arg1 + 0x164) = rcx_18 | 2
        
        if (rdx_6.b == 3)
            result_1 = 0x3f800000
            zmm0_1 = _mm_unpacklo_ps(zmm3_1, (zx.o(0)).q)
        else if (rdx_6.b == 6)
            result_1 = 0xbf800000
            zmm0_1 = _mm_unpacklo_ps(zmm3_1, 0)
        else if (rdx_6.b == 2)
            result_1 = 0
            zmm0_1 = _mm_unpacklo_ps(zmm3_1, 0x3f800000)
        else if (rdx_6.b == 5)
            result_1 = 0
            zmm0_1 = _mm_unpacklo_ps(zmm3_1, 0xbf800000)
        else if (rdx_6.b != 1)
            if (rdx_6.b == 4)
                zmm3_1 = 0xbf800000
            
            result_1 = 0
            zmm0_1 = _mm_unpacklo_ps(zmm3_1, 0)
        else
            result_1 = 0
            zmm0_1 = _mm_unpacklo_ps(0x3f800000, 0)
        
        goto label_1421f5e01
    
    if (r8_5 - 5 u<= 3)
        *(arg1 + 0x164) = rcx_18 | 2
        zmm0_1 = _mm_unpacklo_ps(0x3f800000, zmm3_1[0].q)
        result_1 = 0
    label_1421f5e01:
        result = result_1
        arg1[0x24] = zmm0_1.q
        arg1[0x25].d = result

arg1[0x12] = 0

if (var_48 != 0)
    result = sub_140a74f90(var_48)

__security_check_cookie(rax_1 ^ &var_a8)
return result
