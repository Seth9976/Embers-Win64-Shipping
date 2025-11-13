// 函数: sub_1413aa0a0
// 地址: 0x1413aa0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
void* rcx = *(arg1 + 0xf80)
int64_t var_1d8 = 0
int32_t var_1d0 = 0
int32_t var_1c8

if (rcx != 0 && (*(rcx + 0x20) & 0x40) != 0)
    float (* rax_1)[0x4] = sub_141f624b0(rcx, &var_1c8)
    var_1d8.d = (*rax_1).d
    var_1d8:4.d = (*rax_1)[1].d
    var_1d0 = (*rax_1)[2].d

*(arg3 + 0x5010) = 0
int32_t r8 = 0
arg3[0x1406] = var_1d0
arg3[4] = 0
*arg3 += 1
int32_t r11 = *(arg1 + 0xf10)
int32_t var_1c4 = 1
void* var_1c0 = arg1 + 0xef8
int32_t rcx_1 = *(data_143ec5988 + 4)
int32_t rax_4 = 0x100
int32_t var_1b8 = 0xffffffff
int64_t var_1b4 = 0

if (rcx_1 s<= 0x100)
    rax_4 = rcx_1

int32_t rcx_2 = 0
var_1c8 = 0

if (r11 != 0)
    void* rax_5 = *(arg1 + 0xf08)
    void* r9_1 = arg1 + 0xef8
    
    if (rax_5 != 0)
        r9_1 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_1413aa20b:
        int32_t rax_12 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_1c4_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        var_1b4.d = r8 - rax_13 + 0x1f
        
        if (r8 - rax_13 + 0x1f s> r11)
            var_1b4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_1b4:4.d = r8
            var_1c8 = rcx_2
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_1b8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1413aa20b
        
        var_1b4.d = r11

int32_t rdx_5 = *(arg1 + 0xf10)
int32_t r8_3 = rdx_5 s>> 5
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r9_3 = rdx_5 & 0xffffffe0
int32_t var_1b8_1 = r12
void* r10 = arg1 + 0xee8
var_1b4.d = rdx_5
uint128_t var_140 = var_1c8.o
int64_t var_130 = var_1b8.o.q

if (rdx_5 != r11)
    void* rax_15 = *(arg1 + 0xf08)
    void* r11_1 = arg1 + 0xef8
    
    if (rax_15 != 0)
        r11_1 = rax_15
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r11_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_9 != 0)
    label_1413aa2d3:
        int32_t rax_22 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_22)
        int32_t rdi_1
        
        if (rax_22 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_3
        
        var_1b4.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r11)
            var_1b4.d = r11
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r11_1 + (rcx_7 << 2) + 4)
            var_1b8_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_1413aa2d3
        
        var_1b4.d = r11

uint128_t zmm6
uint128_t var_38 = zmm6
uint128_t zmm7
uint128_t var_48 = zmm7

while (true)
    int64_t result = sx.q(var_130:4.d)
    
    if (result.d == (var_1b8_1.q u>> 0x20).d && var_140:8.q == arg1 + 0xef8 && r10 == arg1 + 0xee8)
        return result
    
    int64_t rcx_9 = result * 3
    result = *r10
    void* var_b8_1 = (*(result + rcx_9 * 0x10 + 0x20)).q
    
    if (*arg3 u>= rax_4)
        return result
    
    if ((*(*(var_b8_1 + 0x20) + 0x138) & 4) == 0)
    label_1413aa3a5:
        int64_t* rcx_12 = *(var_b8_1 + 0x20)
        
        if ((*(rcx_12 + 0x139) & 0x40) != 0)
            int64_t var_150_1 = 0
            int64_t var_1a8
            (*(*rcx_12 + 0x68))(rcx_12, &var_1a8)
            void* rcx_16 = &arg3[(zx.q(*arg3) + 1) * 4]
            uint32_t rdx_11 = zx.d(*(*(var_b8_1 + 0x20) + 0x13c))
            int64_t rax_43
            uint128_t zmm0
            int32_t var_19c
            int64_t var_198
            int32_t var_190
            int64_t var_188
            int32_t var_180
            int32_t rax_30
            int64_t rcx_25
            
            if (rdx_11 == 0)
                *rcx_16 = 2
                int64_t rcx_57 = (zx.q(*arg3) + 0x201) * 2
                *(arg3 + (rcx_57 << 3)) = var_188
                arg3[rcx_57 * 2 + 2] = var_180
                rcx_25 = (zx.q(*arg3) + 0x501) * 2
                *(arg3 + (rcx_25 << 3)) = var_198
                rax_30 = var_190
            label_1413aa719:
                arg3[rcx_25 * 2 + 2] = rax_30
                zmm0.d = 1f f/ var_19c
                rax_43 = zx.q(*arg3) + 0x701
            else
                int32_t var_1a0
                int128_t zmm1
                uint128_t zmm2
                
                if (rdx_11 == 2)
                    *rcx_16 = 4
                    int64_t rcx_46 = (zx.q(*arg3) + 0x101) * 2
                    var_1c0.d = 0
                    *(arg3 + (rcx_46 << 3)) = var_1a8
                    arg3[rcx_46 * 2 + 2] = var_1a0
                    int32_t var_e8_1 = (var_180 ^ 0x80000000).d
                    int64_t rcx_49 = (zx.q(*arg3) + 0x201) * 2
                    *(arg3 + (rcx_49 << 3)) =
                        (_mm_unpacklo_ps(var_188.d ^ 0x80000000, (var_188:4.d ^ 0x80000000).q)).q
                    arg3[rcx_49 * 2 + 2] = var_e8_1
                    zmm0.d = var_190.d f* 12.566371f
                    int64_t rcx_52 = (zx.q(*arg3) + 0x501) * 2
                    zmm1.d = var_198:4.d.d f* 12.566371f
                    int32_t var_dc_1 = zmm0.d
                    zmm2.d = var_198.d.d f* 12.566371f
                    *(arg3 + (rcx_52 << 3)) = (_mm_unpacklo_ps(zmm2, zmm1.q)).q
                    arg3[rcx_52 * 2 + 2] = var_dc_1
                    rax_30 = 0
                    rcx_25 = (zx.q(*arg3) + 0x601) * 2
                    int32_t var_168
                    int32_t var_164
                    *(arg3 + (rcx_25 << 3)) = (_mm_unpacklo_ps(var_168, var_164.q)).q
                    goto label_1413aa719
                
                if (rdx_11 != 3)
                    *rcx_16 = 1
                    int64_t rcx_19 = (zx.q(*arg3) + 0x101) * 2
                    int32_t var_118_1 = 0
                    *(arg3 + (rcx_19 << 3)) = var_1a8
                    arg3[rcx_19 * 2 + 2] = var_1a0
                    zmm0.d = var_190.d f* 0.0795774683f
                    int64_t rcx_22 = (zx.q(*arg3) + 0x501) * 2
                    zmm2.d = var_198.d.d f* 0.0795774683f
                    zmm1.d = var_198:4.d.d f* 0.0795774683f
                    *(arg3 + (rcx_22 << 3)) = (_mm_unpacklo_ps(zmm2, zmm1.q)).q
                    arg3[rcx_22 * 2 + 2] = zmm0.d
                    rax_30 = 0
                    rcx_25 = (zx.q(*arg3) + 0x601) * 2
                    *(arg3 + (rcx_25 << 3)) = (_mm_unpacklo_ps(zx.o(0), 0)).q
                    goto label_1413aa719
                
                *rcx_16 = 3
                int64_t rcx_28 = (zx.q(*arg3) + 0x101) * 2
                int32_t var_f4_1 = 0
                *(arg3 + (rcx_28 << 3)) = var_1a8
                arg3[rcx_28 * 2 + 2] = var_1a0
                int32_t var_10c_1 = (var_180 ^ 0x80000000).d
                int64_t rcx_31 = (zx.q(*arg3) + 0x201) * 2
                *(arg3 + (rcx_31 << 3)) =
                    (_mm_unpacklo_ps(var_188.d ^ 0x80000000, (var_188:4.d ^ 0x80000000).q)).q
                arg3[rcx_31 * 2 + 2] = var_10c_1
                int32_t var_170
                uint128_t zmm3 = var_170
                int32_t var_174
                zmm6 = var_174
                int32_t var_178
                zmm2 = var_178
                zmm0.d = zmm6.d f* var_180
                zmm7.d = zmm3.d f* var_188:4.d
                int64_t rcx_34 = (zx.q(*arg3) + 0x301) * 2
                int64_t zmm5_1
                zmm5_1.d = zmm2.q.d f* var_180
                zmm3.d = zmm3.d f* var_188.d
                zmm7.d = zmm7.d f- zmm0.d
                zmm6.d = zmm6.d f* var_188.d
                zmm2.d = zmm2.d f* var_188:4.d
                zmm5_1.d = zmm5_1.d f- zmm3.d
                zmm6.d = zmm6.d f- zmm2.d
                *(arg3 + (rcx_34 << 3)) = (_mm_unpacklo_ps(zmm7, zmm5_1)).q
                arg3[rcx_34 * 2 + 2] = zmm6.d
                int64_t rcx_37 = (zx.q(*arg3) + 0x401) * 2
                *(arg3 + (rcx_37 << 3)) = var_178.q
                arg3[rcx_37 * 2 + 2] = var_170
                int64_t rcx_40 = (zx.q(*arg3) + 0x501) * 2
                *(arg3 + (rcx_40 << 3)) = var_198
                arg3[rcx_40 * 2 + 2] = var_190
                int32_t var_16c
                zmm0.d = var_16c.d f* 2f
                int64_t rcx_43 = (zx.q(*arg3) + 0x601) * 2
                int32_t var_15c
                zmm1.d = var_15c.d f* 2f
                *(arg3 + (rcx_43 << 3)) = (_mm_unpacklo_ps(zmm0, zmm1.q)).q
                arg3[rcx_43 * 2 + 2] = 0
                zmm0.d = 1f f/ var_19c
                arg3[(zx.q(*arg3) + 0x701) * 4] = zmm0.d
                int32_t var_158
                arg3[(zx.q(*arg3) + 0x801) * 4] = var_158.d
                int32_t var_154
                zmm0 = var_154
                rax_43 = zx.q(*arg3) + 0x901
            arg3[rax_43 * 4] = zmm0.d
            *arg3 += 1
    else if (sub_14122cc00(var_b8_1) == 0)
        goto label_1413aa3a5
    
    var_130.d &= not.d(var_140:4.d)
    sub_14059bdd0(&var_140)
    r10 = arg1 + 0xee8
