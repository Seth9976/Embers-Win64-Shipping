// 函数: sub_14271fba0
// 地址: 0x14271fba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg2 + 0xc))
void* rsi = nullptr
void* const rcx_2

if (*(arg1 + 0x88) == *(arg1 + 0xb4))
label_14271fc20:
    rcx_2 = nullptr
else
    void* rcx = *(arg1 + 0xc0)
    void* r8 = arg1 + 0xb8
    
    if (rcx != 0)
        r8 = rcx
    
    int32_t rax_1 = *(r8 + (((sx.q(*(arg1 + 0xc8)) - 1) & r9) << 2))
    
    if (rax_1 == 0xffffffff)
    label_14271fc20_1:
        rcx_2 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x80)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_1) * 5
            rcx_2 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == r9.d)
                break
            
            rax_1 = *(rcx_2 + 0x20)
            
            if (rax_1 == 0xffffffff)
                goto label_14271fc20_2
        
        if (rax_1 == 0xffffffff)
        label_14271fc20_2:
            rcx_2 = nullptr

void* rbx = rcx_2 + 8

if (rcx_2 == 0)
    rbx = nullptr

void* arg_10 = rbx
int32_t* rdx_5
int128_t* r8_2

if (rbx == 0)
label_14271fc7a:
    char rbx_2 = data_143b57fe0
    void var_c8
    sub_140d3a3a0(&var_c8, arg2)
    r8_2 = &var_c8
    int32_t var_b4 = *(arg2 + 0xc)
    rdx_5 = &var_b4
    int64_t var_c0_1 = 0
    char var_b8_1 = rbx_2
label_14271fca6:
    void* rax_5 = sub_142718fe0(arg1 + 0x80, rdx_5, r8_2)
    rbx = rax_5
    arg_10 = rax_5
    *(rbx + 8) = sub_140d21950(arg2, sub_14272b080())
else
    if (sub_140d3c6e0(rbx) != arg2)
        char rbx_1 = data_143b57fe0
        void var_e0
        sub_140d3a3a0(&var_e0, arg2)
        r8_2 = &var_e0
        int32_t var_cc = *(arg2 + 0xc)
        rdx_5 = &var_cc
        int64_t var_d8_1 = 0
        char var_d0_1 = rbx_1
        goto label_14271fca6
    
    if (rbx == 0)
        goto label_14271fc7a
int64_t r15
r15.b = 0
void arg_8
*(rbx + 0x10) = *sub_1426b3b80(&arg_8, arg2)
void* rax_9 = *(arg2 + 0x130)
void* rbx_4 = *(arg1 + 0x38) + 0x38
int64_t var_100
float var_f8

if (rax_9 == 0)
    var_100 = data_143dbb1f8.q
    var_f8 = data_143dbb200
else
    float zmm1[0x4] = *(rax_9 + 0x1d0)
    var_100.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_f8 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_100:4.d = temp0_1[0]

int32_t r10 = *(rbx_4 + 0x28)
void* r9_1 = rbx_4 + 0x10
int32_t rcx_10 = 0
int32_t r8_3 = 0
int32_t var_128 = 0
int32_t var_124 = 1
void* var_120 = r9_1
int32_t var_118 = 0xffffffff
int64_t var_114 = 0

if (r10 != 0)
    void* rax_12 = *(r9_1 + 0x10)
    
    if (rax_12 != 0)
        r9_1 = rax_12
    
    int32_t temp0_3
    int32_t temp1_1
    temp0_3:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_11 = *r9_1
    
    if (rdx_11 != 0)
    label_14271fdbe:
        int32_t rax_19 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
        uint64_t rflags_1
        int32_t temp0_4
        temp0_4, rflags_1 = _bit_scan_reverse(rax_19)
        int32_t var_124_1 = rax_19
        int32_t rax_20
        
        if (rax_19 == 0)
            rax_20 = 0x20
        else
            rax_20 = 0x1f - temp0_4
        
        var_114.d = r8_3 - rax_20 + 0x1f
        
        if (r8_3 - rax_20 + 0x1f s> r10)
            var_114.d = r10
    else
        while (true)
            int64_t rdx_12 = sx.q(rcx_10)
            r8_3 += 0x20
            rcx_10 += 1
            var_114:4.d = r8_3
            var_128 = rcx_10
            
            if (rdx_12.d s>= (temp1_1 + (temp0_3 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
            var_118 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_14271fdbe
        
        var_114.d = r10

int128_t var_98 = 0xffffffff
float var_a8[0x4] = var_128.o
var_128.o = rbx_4.o
int64_t var_108 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_118.o = var_a8

if (0 s>= r10)
    return 0

int32_t var_10c
int32_t rax_22 = var_10c
float zmm6[0x4]
float var_48_1[0x4] = zmm6
float zmm8[0x4] = var_f8
float zmm10[0x4] = var_100.d

while (true)
    int32_t* r12_1 = sx.q(rax_22) * 0x3c
    int32_t* rdi_3 = *var_128.q + 4 + r12_1
    void* rax_24 = sub_140d3c6e0(rdi_3)
    
    if (rax_24 != 0)
        void* rsi_1 = *(rax_24 + 0xa0)
        void* rax_26
        
        if (rsi_1 != 0)
            rax_26 = sub_140d21950(rsi_1, sub_14273ee10())
            rsi = rax_26
        
        if (rsi_1 == 0 || rax_26 == 0)
            void* rax_27 = sub_1426fb720(rax_24)
            
            if (rax_27 == 0)
                rsi = nullptr
            else
                rsi = sub_140d21950(rax_27, sub_14273ee10())
    
    if (test_bit(rdi_3[2], zx.d(*(arg1 + 0x44))))
        void* rax_33
        
        if (sub_140d3e110(rdi_3) == 0)
            rax_33 = nullptr
        else
            rax_33 = sub_1426fb720(sub_140d3c6e0(rdi_3))
        
        if (rax_33 != arg2)
            int32_t* rbx_9
            
            if (*(arg1 + 0xd8) == *(arg1 + 0x104))
            label_14271ff9d:
                rbx_9 = nullptr
            else
                void* r9_2 = arg1 + 0x108
                void* r8_5 = *(r9_2 + 8)
                int64_t rcx_21 = sx.q(rdi_3[0xb])
                
                if (r8_5 != 0)
                    r9_2 = r8_5
                
                int32_t rax_35 = *(r9_2 + (((sx.q(*(arg1 + 0x118)) - 1) & rcx_21) << 2))
                
                if (rax_35 == 0xffffffff)
                label_14271ff9d_1:
                    rbx_9 = nullptr
                else
                    while (true)
                        rbx_9 = (sx.q(rax_35) << 5) + *(arg1 + 0xd0)
                        
                        if (*rbx_9 == rcx_21.d)
                            break
                        
                        rax_35 = rbx_9[6]
                        
                        if (rax_35 == 0xffffffff)
                            goto label_14271ff9d_2
                    
                    if (rax_35 == 0xffffffff)
                    label_14271ff9d_2:
                        rbx_9 = nullptr
            
            char rdi_4 = rbx_9[5].b
            TEB* gsbase
            
            if (data_143f72524 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f72524)
                
                if (data_143f72524 == 0xffffffff)
                    data_143f72520 = 7
                    _Init_thread_footer(&data_143f72524)
            
            int32_t rdi_6
            
            if (rdi_4 != data_143f72520)
                uint32_t rdi_5 = zx.d(rdi_4)
                
                if (rsi != 0)
                    rdi_6 = rdi_5 & 1 << (*(*rsi + 0x20))(rsi, arg2)
                else
                    rdi_6 = rdi_5 & 2
            
            if (rdi_4 == data_143f72520 || rdi_6 != 0)
                int64_t* rdi_7 = var_128.q
                zmm6 = *(arg1 + 0x160)
                int64_t rax_42 = *rdi_7
                float zmm2 = var_100:4.d.d f- *(rax_42 + r12_1 + 0x14)
                zmm10[0] = zmm10[0] f- *(rax_42 + r12_1 + 0x10)
                zmm8[0] = zmm8[0] f- *(rax_42 + r12_1 + 0x18)
                zmm10[0] = zmm10[0] * zmm10[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm2 = zmm2 * zmm2 + zmm10[0] + zmm8[0]
                
                if (not(zmm2 f<= *(arg1 + 0x15c)))
                    float zmm0[0x4] = *(arg1 + 0x164)
                    zmm0[0] = zmm0[0] - zmm6[0]
                    zmm0[0] = zmm0[0] f/ rbx_9[2]
                    zmm0[0] = zmm0[0] * zmm2
                    zmm0[0] = zmm0[0] + zmm6[0]
                    
                    if (zmm0[0] >= 0f)
                        zmm6 = _mm_min_ss(zmm0[0], zmm6[0])
                    else
                        zmm6 = zx.o(0)
                
                rax_42.b = zmm6[0] > 0f
                
                if (rax_42.b == 0)
                    *(arg1 + 0x124) = 1
                
                int32_t* rax_45 = sub_14271bad0(arg1 + 0x128 + (zx.q(rax_42.b) << 4))
                *rax_45 = *(r12_1 + *rdi_7)
                int32_t rcx_27 = *(arg_10 + 0x14)
                rax_45[3] = zmm6[0]
                rax_45[1] = rcx_27
                
                if (*arg3 != 0)
                    void* rdx_21 = arg3[2]
                    void* rcx_28 = &arg3[4]
                    
                    if (rdx_21 != 0)
                        rcx_28 = rdx_21
                    
                    (*arg3)((*(*rcx_28 + 8))(rcx_28, rdx_21), rax_45)
                
                r15.b = 1
    
    var_114:4.d &= not.d(var_120:4.d)
    sub_14059bdd0(&var_120)
    rax_22 = var_10c
    
    if (rax_22 s>= *(var_118.q + 0x18))
        break
    
    rsi = nullptr

if (r15.b != 0)
    *(arg1 + 0x40) = 0

return zx.q(r15.b)
