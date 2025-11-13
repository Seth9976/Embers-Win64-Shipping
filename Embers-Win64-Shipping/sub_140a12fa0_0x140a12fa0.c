// 函数: sub_140a12fa0
// 地址: 0x140a12fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0 || arg2 == 0xffffffff || arg2 s>= *(arg1 + 0x50))
    int64_t rax
    rax.b = 0
    return rax

int64_t rdi = *(arg1 + 0x48)
int64_t rsi = sx.q(arg2)
int32_t rax_1 = sub_140bc8890(*(rdi + (rsi << 3)))
*arg4 = Concurrency::details::_CancellationTokenRegistration::_GetToken(*(rdi + (rsi << 3)))
arg4[1] = rax_1
float zmm1[0x4] = zx.o(0)
zmm1[0] = fconvert.s(sub_142a38320(*(*(arg1 + 0x48) + (rsi << 3))))
arg4[2] = zmm1[0]
char* rax_3 = sub_1410626c0(*(*(arg1 + 0x48) + (rsi << 3)))
int64_t rdi_1 = 0
int64_t var_28 = 0
int32_t rsi_1 = 0
int64_t var_20 = 0
int32_t r15 = 0

if (rax_3 != 0 && *rax_3 != 0)
    char* rbx_1 = -ffffffffffffffff
    
    do
        rbx_1 = &rbx_1[1]
    while (*(rbx_1 + rax_3) != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        r15 = var_20:4.d
        rsi_1 = var_20.d
        rdi_1 = var_28
    
    rsi_1 += rbx_1.d + 1
    var_20.d = rsi_1
    
    if (rsi_1 s> r15)
        sub_140594770(&var_28)
        r15 = var_20:4.d
        rsi_1 = var_20.d
        rdi_1 = var_28
    
    sub_1405a7220(rdi_1, rbx_1.d + 1, rax_3, rbx_1.d + 1, 0x3f)

if (&arg4[8] != &var_28)
    int64_t rcx_9 = *(arg4 + 0x20)
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    *(arg4 + 0x20) = rdi_1
    arg4[0xa] = rsi_1
    arg4[0xb] = r15
else if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

int64_t zmm0 = arg4[2]
int64_t* rax_4
rax_4.b = 1
var_28.b = 1
var_20.b = 0
zmm1 = var_28.o
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
temp0[0] = zmm0.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0x87)
temp0_1[0] = zmm0.d
*(arg4 + 0xc) = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
return rax_4
