// 函数: sub_142a2be90
// 地址: 0x142a2be90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10e8) != 0)
    int64_t rax_1 = sx.q(arg3)
    
    if ((*(arg1 + (rax_1 << 2) + 0x1138) & 4) != 0)
        int32_t rbx
        rbx.b = *(arg1 + (rax_1 << 3) + 0x10fc) != 0
        return zx.q(rbx)

void* rax_3 = *(arg2 + 0x1b8)
int32_t rbx_1 = 0
void* rcx = *(arg2 + 0x1b0)
int32_t rax_4

if (rax_3 != 0)
    if (rcx == 0)
        goto label_142a2bf33
    
    char rdx = *(rax_3 + 8)
    
    if (*(rcx + 8) s> 0)
        if (rdx s<= 0)
            rax_4 = 1
        else
            rax_4 = 0
    else if (rdx s> 0)
        rax_4 = 1
    else
        rax_4 = 3
else if (rcx != 0)
label_142a2bf33:
    
    if (rax_3 != 0)
        rcx = rax_3
    
    rax_4 = 0
    
    if (*(rcx + 8) s<= 0)
        rax_4 = 2
else
    rax_4 = 0

uint64_t r14 = zx.q(rax_4)
uint32_t rdi_3 = (zx.d(*(*(arg1 + 0x1168) + r14 + 0x78b)) * (arg4[1].d - 1) + 0x100) u>> 8

if (*(arg4 + 0xc) s< 0)
    sub_142a23140(arg4)

int64_t r8 = *arg4
uint64_t rcx_3 = zx.q(rdi_3) << 0x38

if (r8 u>= rcx_3)
    rbx_1 = 1
    rdi_3 = arg4[1].d - rdi_3
    r8 -= rcx_3

uint32_t rdx_1 = zx.d(*(zx.q(rdi_3) + &data_143603f00))
*(arg4 + 0xc) -= rdx_1
arg4[1].d = rdi_3 << rdx_1.b
*arg4 = r8 << rdx_1.b
int64_t rax_11 = *(arg2 + 0x188)

if (rax_11 != 0)
    uint64_t rdx_2 = zx.q(rbx_1) + (r14 << 1)
    *(rax_11 + (rdx_2 << 2) + 0x30d0) += 1

return zx.q(rbx_1)
