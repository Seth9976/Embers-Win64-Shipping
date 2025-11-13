// 函数: sub_1423ec2b0
// 地址: 0x1423ec2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_48 = arg5
int32_t rdi = 0
int32_t rsi = 0
void* r15 = *(data_143f5b298 + 0x50)
int64_t* var_68
sub_1424365b0(arg2, &var_68)
int32_t var_60
int32_t rax_1 = var_60
int128_t zmm6 = 0x3da3d70a
uint128_t zmm0

while (true)
    int64_t* rdx_1 = var_68
    int64_t* rcx
    
    if (rax_1 s< 0 || rax_1 s>= rdx_1[1].d)
        rcx.b = 0
    else
        rcx.b = 1
    
    if (rcx.b == 0)
        break
    
    void* rax_3
    rax_3, rcx = sub_140d3c6e0(*rdx_1 + (sx.q(rax_1) << 3))
    
    if (rax_3 != 0)
        void* rax_4
        rax_4, zmm0 = sub_14256a090()
        void* rcx_3 = *(rax_3 + 0x10)
        int64_t rdx_2 = sx.q(*(rax_4 + 0x38))
        
        if (rdx_2.d s> *(rcx_3 + 0x38) || (*(rcx_3 + 0x30))[rdx_2] != rax_4 + 0x30)
            rcx = *(rax_3 + 0x250)
            rdi += 1
            
            if (rcx != 0)
                char rax_6
                rax_6, rcx, zmm6 = sub_141ddd150(rcx, zmm6, zmm0.d)
                
                if (rax_6 != 0)
                    rsi += 1
    
    rax_1 = var_60 + 1
    var_60 = rax_1

int32_t rax_8 = data_14399f63c
arg5 = zx.o(0)
int32_t var_78 = rax_8
void var_70

if (rdi s> 0xc)
    zmm0.d = _mm_cvtepi32_ps(zx.o(rdi)).d f* 0.0500000007f
    
    if (zmm0.d f>= arg5.d)
        zmm0 = _mm_min_ss(zmm0.d, 0x3f800000)
    else
        zmm0 = zx.o(0)
    
    int128_t zmm1
    zmm1.d = 1f f- zmm0.d
    int32_t rcx_5 = *sub_140adc750(&var_70, zmm1.d)
    rax_8 = data_14399f63c
    var_78 = rcx_5

int32_t var_74 = rax_8

if (rsi s> 0xc)
    zmm0.d = _mm_cvtepi32_ps(zx.o(rsi)).d f* 0.0500000007f
    
    if (not(zmm0.d f< arg5.d))
        arg5 = _mm_min_ss(zmm0.d, 0x3f800000)
    
    zmm6.d = 1f f- arg5.d
    var_74 = *sub_140adc750(&var_70, zmm6.d)

int32_t r14 = int.d(sub_142005cc0(r15) * 1.10000002f)
void var_58
sub_140acc920(&var_58, &var_78)
sub_140a2e390(&var_68, u"%i AI", zx.q(rdi))
int16_t* const rdi_1 = &data_142d40450
int16_t* const r9 = &data_142d40450

if (var_60 != 0)
    r9 = var_68

int128_t zmm6_2 = sub_142409910(arg4, _mm_cvtepi32_ps(zx.o(arg6)), _mm_cvtepi32_ps(zx.o(arg7)), r9, 
    r15, &var_58, &data_14399f5e0)
int64_t* rcx_12 = var_68

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int32_t rbx_3 = arg7 + r14
sub_140acc920(&var_58, &var_74)
sub_140a2e390(&var_68, u"%i AI Rendered", zx.q(rsi))

if (var_60 != 0)
    rdi_1 = var_68

sub_142409910(arg4, zmm6_2, _mm_cvtepi32_ps(zx.o(rbx_3)), rdi_1, r15, &var_58, &data_14399f5e0)
int64_t* rcx_16 = var_68

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int512_t zmm7
zmm7.o = var_48
return zx.q(r14 + rbx_3)
