// 函数: sub_1405b4060
// 地址: 0x1405b4060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm2 = arg1[0xe].d
void* rdi = arg2
float zmm1[0x4] = (&arg1[7]).o
int64_t* rdx = arg1[0xd]
int32_t var_48 = 0
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
temp0[0] = zmm2
int96_t var_30 = _mm_shuffle_ps(temp0, temp0, 0xc9)[0].12
int128_t var_40 = zx.o(0)

if (sub_1405b37a0(&arg1[0x11], rdx) != 0)
    sub_1405c9200(arg1, sub_1405bd3f0(&arg1[0x11]))
    uint64_t rdi_2 = zx.q((var_48.q).d) & 1
    void* rbx_1 = *(&var_40 + (rdi_2 << 3))
    int32_t arg_c
    
    if (rbx_1 == 0)
        int64_t* rcx_3 = var_30.q
        int64_t rdx_2 = *(rcx_3 + 0x1c)
        int32_t r8 = *(rcx_3 + 0x24)
        uint128_t zmm0_1
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(rdx_2.d)).d f* var_30:8.d
        int32_t rax_3 = int.d(zmm0_1.d)
        zmm0_1.d = _mm_cvtepi32_ps(zx.o((rdx_2 u>> 0x20).d)).d f* var_30:8.d
        arg_c = int.d(zmm0_1.d)
        void* rax_5 = sub_1405c4300(rcx_3, rax_3.q, r8)
        rbx_1 = rax_5
        *(&var_40 + (rdi_2 << 3)) = rax_5
    
    void* rax_6 = sub_1405bd3f0(&arg1[0x11])
    
    if (rax_6 == 0)
        uint64_t r8_1 = arg1[0x25]
        
        if (r8_1 != 0)
            sub_1420bacc0(arg1, rbx_1, r8_1)
    else
        sub_1420bacc0(arg1, rbx_1, rax_6)
    
    uint64_t rbx_3 = zx.q((var_48.q).d) & 1
    rdi = *(&var_40 + (rbx_3 << 3))
    
    if (rdi == 0)
        int64_t* rcx_6 = var_30.q
        int64_t rdx_6 = *(rcx_6 + 0x1c)
        int32_t r8_2 = *(rcx_6 + 0x24)
        uint128_t zmm0_2
        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rdx_6.d)).d f* var_30:8.d
        int32_t rax_7 = int.d(zmm0_2.d)
        zmm0_2.d = _mm_cvtepi32_ps(zx.o((rdx_6 u>> 0x20).d)).d f* var_30:8.d
        arg_c = int.d(zmm0_2.d)
        void* rax_9 = sub_1405c4300(rcx_6, rax_7.q, r8_2)
        rdi = rax_9
        *(&var_40 + (rbx_3 << 3)) = rax_9
    
    int32_t rax_12 = (var_48 + 1) & 0x80000001
    
    if (rax_12 s< 0)
        rax_12 = ((rax_12 - 1) | 0xfffffffe) + 1
    
    var_48 = rax_12

sub_1405c3fc0(arg1, rdi, arg3, &var_48)
int32_t rax_17 = (var_48 + 1) & 0x80000001

if (rax_17 s< 0)
    rax_17 = ((rax_17 - 1) | 0xfffffffe) + 1

int64_t rax_20 = sx.q(rax_17)
void* rbx_4 = *(&var_40 + (rax_20 << 3))
*(&var_40 + (rax_20 << 3)) = 0
void* rdx_10 = *(&var_40 + (sx.q(var_48) << 3))

if (rdx_10 != 0)
    sub_1405c2980(var_30.q, rdx_10)
    *(&var_40 + (sx.q(var_48) << 3)) = 0

if (rbx_4 == 0)
    return rdi

return rbx_4
