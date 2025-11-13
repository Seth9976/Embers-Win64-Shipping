// 函数: sub_1425f1d20
// 地址: 0x1425f1d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(performanceCount)
int64_t zmm1 = (zx.o(0)).q
zmm0[0] = zmm0[0] f* data_143d796f8
zmm0[0] = zmm0[0] + 16777216.0
zmm0[0] = zmm0[0] * 10000000.0
zmm0[0] = zmm0[0] + 0.5
int64_t rdx = int.q(zmm0[0])

if (rdx != -0x8000000000000000)
    zmm1 = float.d(rdx)
    
    if (not(zmm1 f== zmm0[0]))
        uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
        zmm0 = zx.o(0)
        zmm0[0] = float.d(rdx - (zx.q(temp0_2) & 1))

int64_t* rdx_2 = *(arg2 + 8)
int64_t* rcx_1 = nullptr
int64_t* arg_10 = nullptr
*(arg2 + 0x50) = int.q(zmm0[0])
void* rax_4

if (rdx_2 != 0)
    rax_4 = (*(*rdx_2 + 0x48))(rdx_2, zmm1)
    rcx_1 = arg_10
else
    rax_4 = nullptr

int64_t rdi = *(rax_4 + 0x38)
int64_t* rbx = *(arg1 + 0x58)

if (rcx_1 != 0)
    (*(*rcx_1 + 8))(rcx_1)

int32_t rax_8 = (*(*rbx + 0x188))(rbx, rdi, &arg_10, 0)
int32_t rax_11

if ((rax_8 == 0 || rax_8 == 0xc) && *(arg2 + 0x20) != 0)
    int64_t* r14_1 = arg_10
    int32_t var_e8 = 0
    int32_t rbx_1
    int64_t* pv
    
    if (sub_1425ec4c0(&var_e8) != 0)
        int64_t* pv_1
        pv = pv_1
        rbx_1 = var_e8
    else
        rbx_1 = 2
        var_e8 = 2
        pv = 2
        int64_t var_e0 = 2
    
    int64_t rax_10 = *r14_1
    int64_t var_d8
    zmm1 = var_d8
    double var_b8[0x2] = var_e8.o
    int64_t var_a8_1 = zmm1
    rax_11 = (*(rax_10 + 0x18))(r14_1, u"ForcePictureType", &var_b8)
    rbx = zx.q(rbx_1 - 0xa)
    int32_t temp2_1
    
    if (rbx_1 != 0xa)
        temp2_1 = rbx.d
    
    if (rbx_1 == 0xa || temp2_1 == 1)
        CoTaskMemFree(pv)
    else if (rbx.d == 2 && pv != 0)
        (*(*pv + 8))(pv)
        int64_t var_e0_1 = 0
    
    var_e8 = 0

if ((rax_8 == 0 || rax_8 == 0xc) && (*(arg2 + 0x20) == 0 || rax_11 == 0 || rax_11 == 0xc))
    int32_t arg_18 = 0x2000dc
    int32_t arg_1c = 0x2000fc
    uint64_t var_d0 = 0
    int32_t var_c8_1 = 2
    sub_1405c4a90(&var_d0, 2, 0)
    rbx = var_d0
    int64_t* arg_8 = nullptr
    *rbx = arg_18.q
    int64_t* rcx_9 = data_143f0f180
    int64_t* var_f8 = nullptr
    bool var_f0_1 = false
    int64_t* rax_14 = (*(*rcx_9 + 0x458))(rcx_9, zmm1)
    int64_t* rcx_10 = arg_8
    
    if (rcx_10 != 0)
        int64_t rdx_4 = *rcx_10
        (*(rdx_4 + 0x10))(rcx_10, rdx_4)
    
    int64_t r9_1 = *rax_14
    int32_t rax_15 = (*r9_1)(rax_14, &data_142ef42b0, &arg_8, r9_1)
    
    if (rax_15 != 0x80004002 && rax_15 s>= 0)
        int64_t* rcx_12 = var_f8
        int64_t* rdi_2 = arg_8
        
        if (rcx_12 != 0)
            (*(*rcx_12 + 0x10))(rcx_12)
        
        if ((**rdi_2)(rdi_2, &data_143449f58, &var_f8) s>= 0)
            void var_98
            memset(&var_98, 0, 0x60)
            int64_t* rcx_15 = var_f8
            int32_t var_48_1 = var_c8_1
            int64_t* var_40_1 = rbx
            var_f0_1 = (*(*rcx_15 + 0x88))(rcx_15, &var_98) s>= 0
    
    int64_t* rcx_16 = arg_8
    
    if (rcx_16 != 0)
        (*(*rcx_16 + 0x10))(rcx_16)
    
    if (rbx != 0)
        sub_140a74f90(rbx)
    
    int64_t* rcx_18 = *(arg1 + 0x60)
    int32_t rax_24
    int32_t rcx_19
    rax_24, rcx_19 = (*(*rcx_18 + 0xb0))(rcx_18, arg_10)
    *(arg2 + 4) = sbb.d(rcx_19, rcx_19, rax_24 != 0) + 4
    int64_t* rax_26 = j_sub_140a82f30(0x10)
    
    if (rax_26 != 0)
        *rax_26 = 0
        rax_26[1] = arg2
        void** rcx_22 = *(arg1 + 0x1c0)
        *(arg1 + 0x1c0) = rax_26
        *rcx_22 = rax_26
    
    if (var_f0_1 != 0)
        int64_t* rcx_23 = var_f8
        (*(*rcx_23 + 0x90))(rcx_23)
    
    int64_t* rcx_24 = var_f8
    
    if (rcx_24 != 0)
        (*(*rcx_24 + 0x10))(rcx_24)
    
    rbx.b = 1
else
    rbx.b = 0

int64_t* rcx_25 = arg_10

if (rcx_25 != 0)
    int64_t rdx_7 = *rcx_25
    (*(rdx_7 + 8))(rcx_25, rdx_7)

return zx.q(rbx.b)
