// 函数: sub_1407526b0
// 地址: 0x1407526b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x238)
int32_t rsi = 0
int32_t var_e4 = 1
int32_t var_e8 = 0
int32_t r11 = *(arg1 + 0xf0)
void* var_e0 = arg1 + 0xd8
int32_t rcx_1 = 0
int32_t var_d8 = 0xffffffff
int32_t r8 = 0
int32_t var_d4 = 0
int32_t var_d0 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0xe8)
    void* r9_1 = arg1 + 0xd8
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    int32_t var_d4_2
    
    if (rdx_3 != 0)
    label_140752779:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_e4_1 = rax_8
        int32_t arg_10 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        int32_t var_d4_1 = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r11)
            var_d4_2 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            int32_t var_d0_1 = rcx_1
            var_e8 = r8
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_d8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140752779
        
        var_d4_2 = r11

int32_t rdx_6 = *(arg1 + 0xf0)
int32_t r9_2 = 0xffffffff << (rdx_6.b & 0x1f)
int32_t r8_2 = rdx_6 s>> 5
int128_t var_b0 = 0xffffffff
void* var_c8
var_c8.d = r8_2
uint128_t var_c0
var_c0:8.d = r9_2
int32_t r9_4 = rdx_6 & 0xffffffe0
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_c0:0xc.d = rdx_6
var_b0.d = r9_4
uint128_t var_88 = (arg1 + 0xc8).o
uint128_t var_78 = var_e8.o

if (rdx_6 != r11)
    void* rax_11 = *(arg1 + 0xe8)
    void* r10_1 = arg1 + 0xd8
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & r9_2
    
    if (rdx_10 != 0)
    label_14075285a:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t arg_18 = temp0_3
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_3
        
        var_c0:0xc.d = r9_4 - rdi_1 + 0x1f
        
        if (r9_4 - rdi_1 + 0x1f s> r11)
            var_c0:0xc.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_4 += 0x20
            r8_2 += 1
            var_b0.d = r9_4
            var_c8.d = r8_2
            
            if (rcx_6.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
            var_c0:8.d = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_14075285a
        
        var_c0:0xc.d = r11

uint128_t zmm6
uint128_t var_48 = zmm6

while (true)
    int64_t rax_20 = sx.q(var_78:0xc.d)
    int64_t* rdx_11 = var_88.q
    
    if (rax_20.d == (var_c0:8.q u>> 0x20).d && var_78.q == arg1 + 0xd8 && rdx_11 == arg1 + 0xc8)
        break
    
    int64_t rdx_12 = *rdx_11
    int64_t r8_3 = rax_20 * 3
    int32_t rax_21 = 0
    void* rcx_8 = *(rdx_12 + (r8_3 << 3) + 8)
    
    if (0 == *(rcx_8 + 8))
        *(rcx_8 + 8) = 0
    else
        rax_21 = *(rcx_8 + 8)
    
    void* rcx_9 = *(rdx_12 + (r8_3 << 3) + 8)
    int32_t r13_1 = rax_21
    int32_t rax_22 = 0
    
    if (0 == *(rcx_9 + 0xc))
        *(rcx_9 + 0xc) = 0
    else
        rax_22 = *(rcx_9 + 0xc)
    
    zmm6 = _mm_cvtepi32_ps(zx.o(rax_22))
    
    if (r13_1 != 0)
        if (not(__andps_xmmxud_memxud(zmm6, data_142d3f770).d f<= 9.99999994e-09f))
            *(arg1 + 0x210)
            *(arg1 + 0x210) = r13_1
            uint128_t zmm1
            zmm1.d = (*(arg1 + 0x1d0)).d f* 0.00100000005f
            zmm1.d = zmm1.d f* zmm6.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            int32_t r12_4 = ((int.d(zmm1.d) s>> 1) + 3) & 0xfffffffc
            int32_t r15_2 = r13_1 * r12_4
            
            if (*(arg1 + 0x1e0) != r15_2)
                int32_t rax_27 = *(arg1 + 0x1e4)
                *(arg1 + 0x1e0) = 0
                
                if (rax_27 s< 0 && rax_27 != 0)
                    sub_140775b10(arg1 + 0x1d8, 0)
                
                int64_t r13_2 = sx.q(*(arg1 + 0x1e0))
                int32_t rax_28 = r15_2 + r13_2.d
                *(arg1 + 0x1e0) = rax_28
                
                if (rax_28 s> *(arg1 + 0x1e4))
                    sub_140775270(arg1 + 0x1d8)
                
                memset(&(**(arg1 + 0x1d8))[r13_2], 0, sx.q(r15_2) << 2)
                r13_1 = rax_21
            
            if (sub_141c3c800(arg1 + 0x118) s>= r15_2)
                sub_141c3efd0(arg1 + 0x118, *(arg1 + 0x1d8), r15_2, 1)
            
            zmm1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1cc)))
            char var_a0 = 4
            int32_t var_9c_1 = r13_1
            uint32_t (** var_90_1)[0x4] = arg1 + 0x1d8
            int32_t var_98_1 = zmm6.d
            zmm1.d = zmm1.d f/ _mm_cvtepi32_ps(zx.o(r12_4)).d
            zmm1.d = zmm1.d f* zmm6.d
            int32_t var_94_1 = zmm1.d
            int64_t r12_5 = sx.q(sub_141c4a2d0(&var_a0))
            int32_t rcx_17 = *(arg1 + 0x1f4)
            *(arg1 + 0x1f0) = 0
            
            if (rcx_17 s< 0 && rcx_17 != 0)
                sub_140775b10(arg1 + 0x1e8, 0)
            
            int64_t r15_3 = sx.q(*(arg1 + 0x1f0))
            int32_t rax_32 = (r15_3 + r12_5).d
            *(arg1 + 0x1f0) = rax_32
            
            if (rax_32 s> *(arg1 + 0x1f4))
                sub_140775270(arg1 + 0x1e8)
            
            memset(*(arg1 + 0x1e8) + (r15_3 << 2), 0, r12_5 << 2)
            int64_t var_54_1 = 0
            int32_t var_58_1 = 0
            void* var_60_1 = arg1 + 0x1e8
            int64_t rsi_1 = sx.q(*(arg1 + 0x1f0))
            int32_t rax_35 = *(arg1 + 0x1cc) * r13_1
            
            if (rax_35 s> rsi_1.d)
                *(arg1 + 0x1f0) = rax_35
                
                if (rax_35 s> *(arg1 + 0x1f4))
                    sub_140775270(arg1 + 0x1e8)
                
                memset(*(arg1 + 0x1e8) + (rsi_1 << 2), 0, sx.q(rax_35 - rsi_1.d) << 2)
            else if (rax_35 s< rsi_1.d && rax_35 != rsi_1.d)
                *(arg1 + 0x1f0) = rax_35
                sub_1407758e0(arg1 + 0x1e8)
            
            memcpy(*(arg1 + 0x218), *(arg1 + 0x1e8), *(arg1 + 0x1f0))
            rsi = *(arg1 + 0x1cc)
        
        break
    
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)

if (arg1 != -0x238)
    LeaveCriticalSection(arg1 + 0x238)

return zx.q(rsi)
