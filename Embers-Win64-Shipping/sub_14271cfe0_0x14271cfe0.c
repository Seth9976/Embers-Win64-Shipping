// 函数: sub_14271cfe0
// 地址: 0x14271cfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
void* rax = sub_14271dc50(arg2)
void* arg_8

if (sub_140d3e110(arg2) == 0)
    arg_8 = nullptr
else
    arg_8 = sub_1426fb720(sub_140d3c6e0(arg2))

int32_t var_f4 = 1
int32_t r10 = *(arg1 + 0xa8)
void* r9 = arg1 + 0x90
void* var_f0 = r9
int32_t rcx_4 = 0
int32_t var_f8 = 0
int32_t r8 = 0
int32_t var_e8 = 0xffffffff
int64_t var_e4 = 0

if (r10 != 0)
    void* rax_4 = *(r9 + 0x10)
    
    if (rax_4 != 0)
        r9 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_14271d0cc:
        int32_t rax_11 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_f4_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_e4.d = r8 - rax_12 + 0x1f
        
        if (r8 - rax_12 + 0x1f s> r10)
            var_e4.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_4)
            r8 += 0x20
            rcx_4 += 1
            var_e4:4.d = r8
            var_f8 = rcx_4
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_e8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14271d0cc
        
        var_e4.d = r10

int128_t var_70 = 0xffffffff
double var_80[0x2] = var_f8.o
var_f8.o = (arg1 + 0x80).o
void* result = nullptr
int64_t var_d8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_e8.o = var_80

if (0 s< r10)
    int32_t i_1
    int32_t i = i_1
    double zmm6[0x2]
    double var_48_1[0x2] = zmm6
    
    do
        int64_t* rsi_1 = var_f8.q
        int64_t r14_1 = sx.q(i) * 5
        int64_t rax_15 = sub_140d3c6e0(*rsi_1 + (r14_1 << 3) + 8)
        
        if (rax_15 != 0 && rax_15 != arg_8)
            char rbx_2 = *(arg3 + 0x10)
            TEB* gsbase
            
            if (data_143f72524 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f72524)
                
                if (data_143f72524 == 0xffffffff)
                    data_143f72520 = 7
                    _Init_thread_footer(&data_143f72524)
            
            int32_t rbx_4
            
            if (rbx_2 != data_143f72520)
                uint32_t rbx_3 = zx.d(rbx_2)
                
                if (rax != 0)
                    rbx_4 = rbx_3 & 1 << (*(*rax + 0x20))(rax, rax_15)
                else
                    rbx_4 = rbx_3 & 2
            
            if (rbx_2 == data_143f72520 || rbx_4 != 0)
                void* rax_21 = sub_140d3c6e0(*rsi_1 + 8 + (r14_1 << 3))
                int64_t* rax_25
                double zmm0[0x2]
                double zmm1[0x2]
                
                if (rax_21 == 0)
                    int32_t var_98_1 = data_143dbb200
                    int64_t var_a0
                    rax_25 = &var_a0
                    var_a0 = data_143dbb1f8.q
                else
                    void* rcx_17 = *(rax_21 + 0x130)
                    int32_t* rax_22
                    
                    if (rcx_17 == 0)
                        int32_t var_b0_1 = data_143dbb200
                        int64_t var_b8
                        rax_22 = &var_b8
                        var_b8 = data_143dbb1f8.q
                    else
                        zmm1 = *(rcx_17 + 0x1d0)
                        int32_t var_d0
                        rax_22 = &var_d0
                        var_d0 = zmm1[0].d
                        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        int32_t var_c8_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0].d
                        int32_t var_cc_1 = zmm0[0].d
                    
                    int32_t var_a4_1 = rax_22[2]
                    int64_t var_ac
                    rax_25 = &var_ac
                    var_ac = *rax_22
                
                zmm0 = zx.o(*rax_25)
                uint64_t rax_27 = zx.q(rax_25[1].d)
                float zmm2 = zmm0[0].d
                zmm6 = *(arg1 + 0x160)
                zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                zmm2 = zmm2 f- arg2[3]
                zmm1[0].d = zmm1[0].d f- arg2[4]
                zmm0 = rax_27.d
                zmm0[0].d = zmm0[0].d f- arg2[5]
                zmm1[0].d = zmm1[0].d f* zmm1[0].d
                zmm0[0].d = zmm0[0].d f* zmm0[0].d
                zmm2 = zmm2 * zmm2 f+ zmm1[0].d f+ zmm0[0].d
                
                if (not(zmm2 f<= *(arg1 + 0x15c)))
                    zmm0 = *(arg1 + 0x164)
                    zmm0[0].d = zmm0[0].d f- zmm6[0].d
                    zmm0[0].d = zmm0[0].d f/ *(arg3 + 4)
                    zmm0[0].d = zmm0[0].d f* zmm2
                    zmm0[0].d = zmm0[0].d f+ zmm6[0].d
                    
                    if (zmm0[0].d f>= 0f)
                        zmm6 = _mm_min_ss(zmm0[0].d, zmm6[0].d)
                    else
                        zmm6 = zx.o(0)
                
                rax_27.b = zmm6[0].d f> 0f
                
                if (rax_27.b == 0)
                    *(arg1 + 0x124) = 1
                
                int32_t* rax_30 = sub_14271bad0(arg1 + 0x128 + (zx.q(rax_27.b) << 4))
                *rax_30 = arg2[0xb]
                int32_t rdx_5 = *(*rsi_1 + (r14_1 << 3))
                rax_30[3] = zmm6[0].d
                rax_30[1] = rdx_5
                
                if (*arg4 != 0)
                    void* rdx_6 = arg4[2]
                    void* rcx_22 = &arg4[4]
                    
                    if (rdx_6 != 0)
                        rcx_22 = rdx_6
                    
                    (*arg4)((*(*rcx_22 + 8))(rcx_22, rdx_6), rax_30)
                
                r12.b = 1
        
        var_e4:4.d &= not.d(var_f0:4.d)
        sub_14059bdd0(&var_f0)
        result = var_e8.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (r12.b != 0)
        *(arg1 + 0x40) = 0

return result
