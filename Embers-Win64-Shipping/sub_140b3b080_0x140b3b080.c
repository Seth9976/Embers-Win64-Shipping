// 函数: sub_140b3b080
// 地址: 0x140b3b080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x34) == 0)
    return 

uint32_t rcx = zx.d(*(arg1 + 4))
int32_t rbx_1 = 0
int32_t arg_8

if (rcx == 0)
    int64_t rbx_2 = *(arg1 + 0x20)
    double zmm0 = sub_140a48b40()
    int64_t zmm1 = float.d(rbx_2)
    
    if (rbx_2 s< 0)
        zmm1 = zmm1 f+ 1.8446744073709552e+19
    
    zmm0.d = fconvert.s(zmm0 f* zmm1 * 1000.0)
    arg_8 = zmm0.d
    rbx_1 = arg_8
else if (rcx == 1)
    rbx_1 = *(arg1 + 0x20)
else if (rcx == 2)
    arg_8 = (*(arg1 + 0x20)).d
    rbx_1 = arg_8

uint64_t rcx_2 = zx.q(*(arg1 + 0x18))
int64_t* rdi_1 = *(arg1 + 0x28)
arg_8.q = rcx_2
uint64_t rax_1 = rdi_1[0x12]

if (rcx_2 s>= rax_1)
    rax_1 = rcx_2

rdi_1[0x12] = rax_1
void* rax_4 = sub_140b2d010(rdi_1, (zx.q(rcx_2.d) u>> 0x20).d * 0x17 + rcx_2.d, &arg_8)
int64_t rbp_1 = sx.q(*(rax_4 + 8))
int32_t rax_5 = rdi_1[0x16].d

if (rbp_1.d s< rax_5)
    *(rax_4 + 8) = rax_5
    
    if (rax_5 s> *(rax_4 + 0xc))
        sub_1405a4cf0(rax_4)
    
    memset(*rax_4 + (rbp_1 << 2), 0, sx.q(rax_5 - rbp_1.d) << 2)

*(*rax_4 + (sx.q(*(arg1 + 0x30)) << 2)) = rbx_1
*(arg1 + 0x20) = 0
*(arg1 + 0x34) = 0
