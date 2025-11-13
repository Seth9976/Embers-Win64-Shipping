// 函数: sub_1422355c0
// 地址: 0x1422355c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg4[0] = arg4[0] f* arg1[5]
float temp0[0x4] = __maxss_xmmss_memss(arg4[0], 0x38d1b717)
int64_t zmm0 = fconvert.d(temp0[0])
zmm0 f- 0.10000000000000001
int64_t r15
r15.b = zmm0 f< 0.10000000000000001
int64_t rbp

if ((arg1[4].b & 1) == 0)
    rbp.b = 0
else
    zmm0.d = arg3.q.d f* *arg1
    
    if (zmm0.d f!= 0f)
        rbp.b = 0
    else
        zmm0.d = arg3.q.d f* arg1[1]
        
        if (zmm0.d f!= 0f)
            rbp.b = 0
        else
            rbp.b = 1

uint32_t rdi = zx.d(arg1[6].b)
uint32_t r14 = 2
uint64_t r8

if (rdi == 2 || (rdi == 1 && r15.b != 0))
    r8 = 2
else
    r8 = zx.q(rdi)

sub_142277fb0(arg2, 0, r8)

if (rbp.b != 0 && rdi == 1)
    sub_142277fb0(arg2, 0, 0)

uint32_t rdi_1 = zx.d(*(arg1 + 0x19))
uint64_t r8_1

if (rdi_1 == 2 || (rdi_1 == 1 && r15.b != 0))
    r8_1 = 2
else
    r8_1 = zx.q(rdi_1)

int64_t rdx
rdx.b = 1
sub_142277fb0(arg2, rdx, r8_1)

if (rbp.b != 0 && rdi_1 == 1)
    sub_142277fb0(arg2, zx.q(rdi_1.b), 0)

uint32_t rdi_2 = zx.d(*(arg1 + 0x1a))

if (rdi_2 != 2 && (rdi_2 != 1 || r15.b == 0))
    r14 = rdi_2

int64_t rdx_1
rdx_1.b = 2
int64_t result
int64_t rdx_3
result, rdx_3 = sub_142277fb0(arg2, rdx_1, zx.q(r14))

if (rbp.b != 0 && rdi_2 == 1)
    rdx_3.b = 2
    result = sub_142277fb0(arg2, rdx_3, 0)

if (arg1[6].b == 0 && *(arg1 + 0x19) == 0 && *(arg1 + 0x1a) == 0)
    return result

return sub_142280140(arg2, temp0, arg3, arg1)
