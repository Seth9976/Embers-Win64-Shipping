// 函数: sub_14231a570
// 地址: 0x14231a570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
sub_1413f5fe0(arg1 + 0xe8)
void* rax_2 = *(arg1 + 0x60)
int32_t i_1 = 0
int32_t rcx_1

if (rax_2 == 0)
    rcx_1 = 0
else
    rcx_1 = *(rax_2 + 0x198)

int32_t rbx_1 = *(arg1 + 0x358) + rcx_1

if (rbx_1 s> *(arg1 + 0xf0) - *(arg1 + 0x11c))
    sub_141d0e6a0(arg1 + 0xe8, rbx_1)
    int32_t rax_7
    
    if (rbx_1 u< 4)
        rax_7 = 1
    else
        uint32_t rbx_2 = rbx_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_2 + 8)
        int32_t rcx_3
        
        if (rbx_2 == 0xfffffff8)
            rcx_3 = 0x20
        else
            rcx_3 = 0x1f - temp0_2
        
        int32_t rcx_5 = rcx_3 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_2 + 7)
        
        if (rcx_5 == 0)
            rax_7 = 1
        else
            rax_7 = 1 << ((not.d(rcx_5)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_8 = *(arg1 + 0x130)
    
    if (rcx_8 == 0 || rcx_8 s< rax_7)
        *(arg1 + 0x130) = rax_7
        sub_141ce06e0(arg1 + 0xe8)

int32_t i = 0
void var_a8
void* var_a0
float var_88[0x4]
float var_78[0x4]

if (*(arg1 + 0x358) s> 0)
    int64_t* r15_1 = nullptr
    int128_t* var_98_1 = &var_78
    
    do
        void* rbx_4 = *(r15_1 + *(arg1 + 0x350))
        sub_140ade170(rbx_4 + 0x44, &var_88)
        float zmm0_1[0x4] = var_88
        float zmm3_1[0x4] = _mm_unpacklo_ps(*(rbx_4 + 0x38), *(rbx_4 + 0x40))
        var_78 = zmm0_1
        zmm0_1 = _mm_unpacklo_ps(*(rbx_4 + 0x3c), 0)
        float zmm2_1[0x4] = *(rbx_4 + 0x54)
        float var_68_1[0x4] = _mm_unpacklo_ps(zmm3_1, zmm0_1[0].q)
        float var_58_1[0x4] = _mm_unpacklo_ps(
            _mm_unpacklo_ps(*(rbx_4 + 0x50), (*(rbx_4 + 0x58))[0].q), 
            _mm_unpacklo_ps(zmm2_1, 0)[0].q)
        void* var_48_1 = rbx_4
        int32_t i_2 = i
        int32_t var_3c_1 = sub_14078ee20(arg1 + 0x188, rbx_4 + 0x30)
        var_a0 = rbx_4 + 0x28
        sub_142305650(arg1 + 0xe8, &var_a8, &var_a0, nullptr)
        i += 1
        r15_1 = &r15_1[1]
    while (i s< *(arg1 + 0x358))

void* result = *(arg1 + 0x60)

if (result != 0 && *(result + 0x198) s> 0)
    void** r15_2 = nullptr
    
    do
        void* r14 = *(r15_2 + *(result + 0x190))
        
        if (*sub_14230f130(arg1 + 0xe8, &var_a8, *(r14 + 0x28)) == 0xffffffff)
            int32_t rbx_5 = *(arg1 + 0x358)
            sub_140ade170(r14 + 0x44, &var_88)
            float zmm0_2[0x4] = var_88
            float zmm3_2[0x4] = _mm_unpacklo_ps(*(r14 + 0x38), *(r14 + 0x40))
            var_78 = zmm0_2
            zmm0_2 = _mm_unpacklo_ps(*(r14 + 0x3c), 0)
            float zmm2_2[0x4] = *(r14 + 0x54)
            float var_68_2[0x4] = _mm_unpacklo_ps(zmm3_2, zmm0_2[0].q)
            float var_58_2[0x4] = _mm_unpacklo_ps(
                _mm_unpacklo_ps(*(r14 + 0x50), (*(r14 + 0x58))[0].q), 
                _mm_unpacklo_ps(zmm2_2, 0)[0].q)
            void* var_48_2 = r14
            int32_t var_40_1 = rbx_5 + i_1
            int32_t var_3c_2 = sub_14078ee20(arg1 + 0x188, r14 + 0x30)
            var_a0 = r14 + 0x28
            float (* var_98_2)[0x4] = &var_78
            void var_90
            sub_142305650(arg1 + 0xe8, &var_90, &var_a0, nullptr)
        
        result = *(arg1 + 0x60)
        i_1 += 1
        r15_2 = &r15_2[1]
    while (i_1 s< *(result + 0x198))

__security_check_cookie(rax_1 ^ &var_c8)
return result
