// 函数: sub_140323110
// 地址: 0x140323110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

int64_t rax
int64_t r9_1
int32_t zmm0[0x4]

if (arg2 == 1)
    r9_1 = 0
label_140323173:
    rax = r9_1 * 0x30
    zmm0 = data_142d3f660
    *(arg1 + rax) = zmm0
    int32_t temp0_2[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(zmm0, zmm0)
    *(arg1 + rax + 0x20) = temp0_2
    *(arg1 + rax + 0x10) = temp0_2
    return 

int32_t r8_2 = arg2 & 1
rax = &arg1[4]
r9_1 = 0
zmm0 = data_142d3f660
int32_t temp0_1[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(arg3, arg3)

do
    *(rax - 0x40) = zmm0
    *(rax - 0x20) = temp0_1
    *(rax - 0x30) = temp0_1
    *(rax - 0x10) = zmm0
    r9_1 += 2
    *(rax + 0x10) = temp0_1
    *rax = temp0_1
    rax += 0x60
while (arg2 - r8_2 != r9_1.d)

if (r8_2 != 0)
    goto label_140323173
