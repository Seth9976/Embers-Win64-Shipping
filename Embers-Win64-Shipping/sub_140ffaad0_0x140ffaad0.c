// 函数: sub_140ffaad0
// 地址: 0x140ffaad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx

if (arg3 == 1)
    rcx = 1
else if (arg3 == 2)
    rcx = 2
else if (arg3 == 3)
    rcx = 3
else if (arg3 == 4)
    rcx = 4
else if (arg3 == 5)
    rcx = 5
else
    rcx = 0

void* rdi = *(arg2 + 0x88)
int32_t rcx_2 = (rcx + ((arg4 * 3).d << 1)) * *(arg2 + 0x34)
int64_t* r14 = nullptr
int64_t var_48 = *(arg2 + 0xa8)
int32_t arg_28
int32_t rcx_3 = rcx_2 + arg_28
EnterCriticalSection(rdi + 0x2658)
sub_140fe7200(rdi + 0x2608, &arg_28, &var_48)
int64_t rdx_1 = sx.q(arg_28)
int64_t rbp
int64_t* rdi_1
int32_t r12
uint64_t r15

if (rdx_1.d != 0xffffffff)
    rdi_1 = nullptr
    int64_t** r8_6 = *(rdi + 0x2608) + rdx_1 * 0x38 + 0x10
    
    if (&var_48 != r8_6)
        r14 = *r8_6
        *r8_6 = nullptr
        rdi_1 = r14
    
    r12 = r8_6[1].d
    rbp = r8_6[2]
    r15 = zx.q(*(r8_6 + 0x19))
    sub_140ffc2f0(rdi + 0x2608, rdx_1.d)
else
    int64_t var_38
    rbp = var_38
    r15.b = 0
    r12 = rcx_3
    rdi_1 = nullptr

if (rdi != -0x2658)
    LeaveCriticalSection(rdi + 0x2658)

int64_t* rcx_10
int64_t* rdx_2

if (r15.b != 0 || (*(arg2 + 0xf8) & 0x20) == 0)
    rcx_10 = *(*(arg2 + 0x88) + 0x150)
    
    if (rdi_1 == 0)
        (*(*rcx_10 + 0x180))(rcx_10, *(arg2 + 0xa8), zx.q(rcx_3), 0, rbp, r12, rdi_1.d)
        return sub_140a74f90(rbp)
    
    rdx_2 = r14
else
    rdx_2 = *(arg2 + 0xa8)
    rcx_10 = *(*(arg2 + 0x88) + 0x150)

int64_t result = (*(*rcx_10 + 0x78))(rcx_10, rdx_2, 0)

if (rdi_1 == 0)
    return result

return (*(*rdi_1 + 0x10))(rdi_1)
