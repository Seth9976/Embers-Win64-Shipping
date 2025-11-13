// 函数: sub_1426f65c0
// 地址: 0x1426f65c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
void* rax = sub_14260f680(*(arg1 + 0xd8), rdi.d)
uint64_t rbx = *(*(arg1 + 0xd8) + 0x18)
int32_t var_28[0x4]
sub_142690d00(&var_28, rax + 0x250)
int32_t rcx_2 = *(rax + 0x304)
int64_t rdi_2 = (rdi << 6) + rbx
void* rdx_2

if (*(rdi_2 + 0x38) == 0)
    void* const rdx_3 = 0x2b0
    
    if (rcx_2 == 0)
        rdx_3 = 0x22c
    
    rdx_2 = rdx_3 + rax
else
    rdx_2 = rdi_2 + 0x18

if (rcx_2 != 1 || (*(rax + 0x300) & 4) != 0)
    rbx.b = 0
else
    rbx = zx.q(rcx_2.b)

int32_t var_38[0x4]
sub_142690d00(&var_38, rdx_2)
void* r9
r9.b = *(rdi_2 + 0x38) != 0
int64_t result = (*(*arg2 + 0x540))(arg2, &var_28, &var_38, r9, rbx.b)

if ((*(arg1 + 0x70) & 0x10) == 0)
    return result

int32_t var_18[0x4]
sub_142690d00(&var_18, rax + 0x22c)
return (*(*arg2 + 0x548))(arg2, &var_18)
