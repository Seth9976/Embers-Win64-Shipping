// 函数: sub_142a2b9f0
// 地址: 0x142a2b9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r12 = *(arg2 + 0x1b8)
char* r13 = *(arg2 + 0x1b0)
char* rbx_1 = **(arg2 + 0x1a8)
char r14 = *rbx_1
char rax = sub_142a2bdc0(arg1, *(arg1 + 0x364) * arg3 + arg4, arg6, arg7, arg5)
rbx_1[4] = rax
rbx_1[3] = sub_142a2ca10(arg1, arg2, sx.d(rax), arg5)
int64_t r9_2 = sx.q(*(arg1 + 0x36c))
uint64_t r8_2 = zx.q(***(arg2 + 0x1a8))
char rdx_4 = *(r8_2 + 0x1436046d0)
char rcx_3

if (r9_2.d != 4 || r8_2.b u< 3)
    rcx_3 = *(r9_2 + 0x1436046e0)
    
    if (rdx_4 u< rcx_3)
        rcx_3 = rdx_4
else
    rcx_3 = sub_142a2c730(arg1, arg2, rdx_4, arg5)

rbx_1[2] = rcx_3
*(rbx_1 + 8) = 0xff00
uint32_t rcx_4 = zx.d(r14)

if (r14 == 0)
    int32_t i = 0
    void* r14_1 = &rbx_1[0x14]
    
    do
        uint64_t rdi_6 = zx.q(sub_142a25180(rbx_1, r12, i))
        uint64_t rcx_27 = zx.q(sub_142a251d0(rbx_1, r13, i)) + rdi_6 * 0xa
        i += 1
        *r14_1 = sub_142a2bcf0(arg5, rcx_27 * 9 + &data_143602ea0)
        r14_1 += 0xc
    while (i s< 4)
    
    rbx_1[1] = rbx_1[0x38]
else if (rcx_4 == 1)
    uint64_t rdi_4 = zx.q(sub_142a25180(rbx_1, r12, 0))
    char rax_20 = sub_142a2bcf0(arg5, 
        (zx.q(sub_142a251d0(rbx_1, r13, 0)) + rdi_4 * 0xa) * 9 + &data_143602ea0)
    rbx_1[0x2c] = rax_20
    rbx_1[0x14] = rax_20
    uint64_t rdi_5 = zx.q(sub_142a25180(rbx_1, r12, 1))
    char rax_24 = sub_142a2bcf0(arg5, 
        (zx.q(sub_142a251d0(rbx_1, r13, 1)) + rdi_5 * 0xa) * 9 + &data_143602ea0)
    rbx_1[1] = rax_24
    rbx_1[0x38] = rax_24
    rbx_1[0x20] = rax_24
else if (rcx_4 == 2)
    uint64_t rdi_2 = zx.q(sub_142a25180(rbx_1, r12, 0))
    char rax_12 = sub_142a2bcf0(arg5, 
        (zx.q(sub_142a251d0(rbx_1, r13, 0)) + rdi_2 * 0xa) * 9 + &data_143602ea0)
    rbx_1[0x20] = rax_12
    rbx_1[0x14] = rax_12
    uint64_t rdi_3 = zx.q(sub_142a25180(rbx_1, r12, 2))
    char rax_16 = sub_142a2bcf0(arg5, 
        (zx.q(sub_142a251d0(rbx_1, r13, 2)) + rdi_3 * 0xa) * 9 + &data_143602ea0)
    rbx_1[1] = rax_16
    rbx_1[0x38] = rax_16
    rbx_1[0x2c] = rax_16
else
    uint64_t rdi_1 = zx.q(sub_142a25180(rbx_1, r12, 0))
    rbx_1[1] = sub_142a2bcf0(arg5, 
        (zx.q(sub_142a251d0(rbx_1, r13, 0)) + rdi_1 * 0xa) * 9 + &data_143602ea0)

char result = sub_142a2bcf0(arg5, zx.q(rbx_1[1]) * 9 + &data_143602e40)
rbx_1[6] = result
return result
