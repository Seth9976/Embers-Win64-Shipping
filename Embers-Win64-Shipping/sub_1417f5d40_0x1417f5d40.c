// 函数: sub_1417f5d40
// 地址: 0x1417f5d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) == 0)
    return 

int64_t* rdi_1 = &data_143f13780

if (*(arg1 + 9) != 0)
    rdi_1 = &data_143f13790

int64_t* r10_1 = *rdi_1
uint64_t r8_1 = sx.q(rdi_1[1].d)
int64_t* rax_1 = r10_1
void* rdx_1 = &r10_1[r8_1]
int32_t rax_2

if (r10_1 == rdx_1)
label_1417f5d8f:
    rax_2 = -1
else
    while (*rax_1 != arg1)
        rax_1 = &rax_1[1]
        
        if (rax_1 == rdx_1)
            goto label_1417f5d8f
    
    rax_2 = ((rax_1 - r10_1) s>> 3).d

int32_t rdx_3 = r8_1.d - rax_2

if (rdx_3 != 1)
    memmove(&r10_1[sx.q(rax_2)], &r10_1[sx.q(rax_2 + 1)], (rdx_3 - 1) << 3)
    r8_1 = zx.q(rdi_1[1].d)

rdi_1[1].d = (r8_1 - 1).d
sub_1405c53d0(rdi_1)
*(arg1 + 8) = 0
