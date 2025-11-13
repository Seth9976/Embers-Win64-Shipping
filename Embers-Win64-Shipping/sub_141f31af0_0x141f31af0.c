// 函数: sub_141f31af0
// 地址: 0x141f31af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141eba500(arg1, arg2, arg3)

if (*(arg1 + 0x20) s> 0)
    sub_1405c6ac0(arg2, 0, 0)

int32_t var_c4 = 1
int32_t var_b8 = 0xffffffff
int32_t rbx_1 = *(arg1 + 0x80)
void* var_c0 = arg1 + 0x68
int32_t rcx_1 = 0
int32_t var_c8 = 0
int32_t r8 = 0
int64_t var_b4 = 0

if (rbx_1 != 0)
    void* rax_1 = *(arg1 + 0x78)
    void* r9_1 = arg1 + 0x68
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_1 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141f31bb8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_b4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rbx_1)
            var_b4.d = rbx_1
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_b4:4.d = r8
            var_c8 = rcx_1
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            var_b8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141f31bb8
        
        var_b4.d = rbx_1

int32_t rdx_4 = *(arg1 + 0x80)
double zmm2[0x2] = var_b8.o
double var_50[0x2] = zmm2
int32_t r14 = 0xffffffff << (rdx_4.b & 0x1f)
float var_60[0x4] = var_c8.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_88 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_b8_1 = r14
var_b4.d = rdx_4
float var_a8[0x4] = (arg1 + 0x58).o

if (rdx_4 != rbx_1)
    void* rax_11 = *(arg1 + 0x78)
    void* r10_1 = arg1 + 0x68
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_1 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_8 != 0)
    label_141f31c82:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_b4.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx_1)
            var_b4.d = rbx_1
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_6 << 2) + 4)
            var_b8_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141f31c82
        
        var_b4.d = rbx_1

while (true)
    float var_58[0x4]
    int64_t result = sx.q(var_58[3])
    int64_t rcx_8 = var_a8[0].q
    
    if (result.d == (var_b8_1.q u>> 0x20).d && var_58[0].q == arg1 + 0x68 && rcx_8 == arg1 + 0x58)
        return result
    
    int64_t** rbx_4 = result * 0x50 + *rcx_8
    int64_t* rdi_1 = *rbx_4
    
    if (rdi_1 != 0)
        void* rax_20 = rdi_1[0x18]
        void* const rax_25
        
        if (rax_20 != 0)
            int32_t rax_21 = *(rax_20 + 0xc)
            
            if (rax_21 s>= data_143e1d9b4)
                rax_25 = nullptr
            else
                uint32_t rdx_9 = zx.d(rax_21.w)
                
                if (rax_21 s< 0)
                    rax_21 += 0xffff
                    rdx_9 -= 0x10000
                
                rax_25 = *(data_143e1d9a0 + (sx.q(rax_21 s>> 0x10) << 3)) + sx.q(rdx_9) * 0x18
        
        if (rax_20 == 0 || ((*(rax_25 + 8) u>> 0x1d).b & 1) != 0)
            zmm2 = *(rbx_4 + 0x20)
            float var_78_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
            *(rdi_1 + 0x11c) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
            *(rdi_1 + 0x124) = var_78_1
            var_c8.o = *(rbx_4 + 0x10)
            void var_40
            int32_t* rax_29 = sub_140adf5d0(&var_c8, &var_40)
            int64_t arg_8 = 0
            rdi_1[0x25] = *rax_29
            rdi_1[0x26].d = rax_29[2]
            float zmm2_1[0x4] = *(rbx_4 + 0x30)
            int32_t var_6c_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d
            *(rdi_1 + 0x134) =
                (_mm_unpacklo_ps(zmm2_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)).q
            *(rdi_1 + 0x13c) = var_6c_1
            sub_141f32b40(rdi_1, arg2, &data_143f3f280, 0)
    
    var_58[2] &= not.d(var_a8[3])
    sub_14059bdd0(&var_a8[2])
