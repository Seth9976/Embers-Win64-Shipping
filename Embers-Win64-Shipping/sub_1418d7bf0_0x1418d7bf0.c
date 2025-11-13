// 函数: sub_1418d7bf0
// 地址: 0x1418d7bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = arg1[1]
void* var_48 = nullptr
void* rdi = nullptr
int32_t r13 = rax[1].d
int64_t rbx = *rax

if (r13 != 0)
    sub_140874c00(&var_48, r13, 0)
    rdi = var_48
    memcpy(rdi, rbx, r13 * 0x38)

int64_t* rax_1 = *arg1
void* rbx_1 = nullptr
var_48 = nullptr
int64_t r12 = sx.q(rax_1[1].d)
int64_t r14_1 = *rax_1
int32_t var_40_1 = r12.d

if (r12.d != 0)
    sub_140809010(&var_48, r12.d, 0)
    rbx_1 = var_48
    memcpy(rbx_1, r14_1, (r12 * 0x48).d)
    r12 = zx.q(var_40_1)

void* i = sx.q(r13) * 0x38 + rdi

if (rdi != i)
    int32_t* rax_3 = rdi + 0x18
    
    do
        rax_3[-1] = 0
        *rax_3 = arg2
        rax_3[1] = arg3
        rax_3 = &rax_3[0xe]
    while (&rax_3[-6] != i)

void* i_1 = rbx_1 + sx.q(r12.d) * 0x48

if (rbx_1 != i_1)
    int32_t* rcx_6 = rbx_1 + 0x20
    
    do
        rcx_6[-3] = 0
        *rcx_6 = arg2
        rcx_6[1] = arg3
        rcx_6 = &rcx_6[0x12]
    while (&rcx_6[-8] != i_1)

data_143efba60(*(arg4 + 0x40), zx.q(arg6), 1, 0, 0, 0, r13, rdi, r12.d, rbx_1)

if (rdi != i)
    void* r8_3 = nullptr
    
    do
        *(rdi + r8_3 + 0x10) = 0
        *(rdi + r8_3 + 0x14) = *(sx.q((r8_3 s/ 0x38).d) * 0x38 + *arg1[1] + 0x14)
        r8_3 += 0x38
    while (r8_3 + rdi != i)

if (rbx_1 != i_1)
    void* r8_4 = nullptr
    
    do
        *(rbx_1 + r8_4 + 0x10) = 0
        *(rbx_1 + r8_4 + 0x14) = *(rbx_1 + sx.q((r8_4 s/ 0x48).d) * 0x48 + 0x14)
        r8_4 += 0x48
    while (r8_4 + rbx_1 != i_1)

int64_t result = data_143efba60(*(arg5 + 0x40), 1, zx.q(arg7), 0, 0, 0, r13, rdi, r12.d, rbx_1)

if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

if (rdi == 0)
    return result

return sub_140a74f90(rdi)
