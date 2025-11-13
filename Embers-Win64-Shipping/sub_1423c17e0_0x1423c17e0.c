// 函数: sub_1423c17e0
// 地址: 0x1423c17e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x18)
uint32_t rbx = 0
uint32_t r15 = zx.d(*(rdi + 0x5f))
int32_t rdi_1

if (rdi[0x1a] == 0)
    rdi_1 = 0
else
    char rax_2 = (*(*rdi + 0x318))(rdi)
    void* rcx_1 = rdi[0x1a]
    
    if (rax_2 == 0)
        rdi_1 = *(rcx_1 + 0x20)
    else
        rdi_1 = *(*(rcx_1 + 0x28) + 4)

void* r9 = *(arg1 + 0x18)
int32_t* rax_4 = *(r9 + 0xd0)
int32_t rbp_1

if (rax_4 == 0)
    rbp_1 = 0
else
    void* rcx_2 = *(rax_4 + 0x28)
    
    if (rcx_2 == 0)
        rbx = rax_4[3]
        rbp_1 = rax_4[1]
        *rax_4
    else
        rbx = zx.d(*(rcx_2 + 0x20))
        rbp_1 = rax_4[1]
        *rax_4

int64_t var_28
int64_t* rax_5 = sub_140d21e10(r9, &var_28, 0)
int16_t* const r8

if (rax_5[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_5

uint32_t var_30 = r15
int32_t var_38 = rdi_1
int64_t var_40 = (&data_1439c85e0)[sx.q(rbx) * 5]
int32_t var_48 = rbp_1
sub_140a2e390(arg2, u"%s (%ux%u %s, %u mips, LODGroup=%u)", r8)
int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg2
