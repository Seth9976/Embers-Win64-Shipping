// 函数: sub_142167d60
// 地址: 0x142167d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x6f0)
int32_t r9 = 0
int32_t r11 = *(rbx + 0x28)
void* r10 = rbx + 0x10
int32_t var_78 = 0
int32_t var_74 = 1
void* var_70 = r10
int32_t r8 = 0
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_142167e0a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r9)
            r8 += 0x20
            r9 += 1
            var_64:4.d = r8
            var_78 = r9
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10 + (rcx_1 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rcx != 0)
                goto label_142167e0a
        
        var_64.d = r11

int128_t var_38 = 0xffffffff
double var_48[0x2] = var_78.o
var_78.o = rbx.o
void* result = nullptr
int64_t var_58 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_68.o = var_48

if (0 s< r11)
    int32_t i_1
    int32_t i = i_1
    
    do
        void* rbx_1 = *(*var_78.q + sx.q(i) * 0x18)
        
        if (rbx_1 != 0)
            int64_t rax_13 = sub_140d3c6e0(rbx_1 + 8)
            
            if (rax_13 != 0)
                int64_t rcx_5 = *(arg3 + 8)
                int64_t arg_8 = rax_13
                
                if ((*arg3)(rcx_5, &arg_8) != 0)
                    double zmm0[0x2] = zx.o(rand())
                    void* rax_16 = *(arg1 + 0x140)
                    zmm0 = _mm_cvtepi32_ps(zmm0)
                    zmm0[0].d = zmm0[0].d f* 3.05185094e-05f
                    zmm0[0].d = zmm0[0].d f* arg2[0].d
                    zmm0[0].d = zmm0[0].d f+ *(rax_16 + 0x520)
                    *(rbx_1 + 0x10) =
                        (__minsd_xmmsd_memsd(_mm_cvtps_pd(zmm0[0])[0], *(rbx_1 + 0x10))).q
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        result = var_68.q
        i = i_1
    while (i s< *(result + 0x18))

return result
