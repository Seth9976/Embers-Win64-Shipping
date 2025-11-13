// 函数: sub_140ffa940
// 地址: 0x140ffa940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg2 + 0x88)
int64_t* r14 = nullptr
int32_t rcx_1 = *(arg2 + 0x34) * arg3
int64_t var_58 = *(arg2 + 0xa8)
int32_t rcx_2 = rcx_1 + arg4
EnterCriticalSection(rdi + 0x2658)
int32_t arg_18
sub_140fe7200(rdi + 0x2608, &arg_18, &var_58)
int64_t rdx_1 = sx.q(arg_18)
int64_t rbp
int64_t* rdi_1
int32_t r12
uint64_t r15

if (rdx_1.d != 0xffffffff)
    rdi_1 = nullptr
    int64_t** r8_2 = *(rdi + 0x2608) + rdx_1 * 0x38 + 0x10
    
    if (&var_58 != r8_2)
        r14 = *r8_2
        *r8_2 = nullptr
        rdi_1 = r14
    
    r12 = r8_2[1].d
    rbp = r8_2[2]
    r15 = zx.q(*(r8_2 + 0x19))
    sub_140ffc2f0(rdi + 0x2608, rdx_1.d)
else
    int64_t var_48
    rbp = var_48
    r15.b = 0
    r12 = rcx_2
    rdi_1 = nullptr

if (rdi != -0x2658)
    LeaveCriticalSection(rdi + 0x2658)

int64_t* rcx_9
int64_t* rdx_2

if (r15.b != 0 || (*(arg2 + 0xf8) & 0x20) == 0)
    rcx_9 = *(*(arg2 + 0x88) + 0x150)
    
    if (rdi_1 == 0)
        (*(*rcx_9 + 0x180))(rcx_9, *(arg2 + 0xa8), zx.q(rcx_2), 0, rbp, r12, rdi_1.d)
        return sub_140a74f90(rbp) __tailcall
    
    rdx_2 = r14
else
    rdx_2 = *(arg2 + 0xa8)
    rcx_9 = *(*(arg2 + 0x88) + 0x150)

int64_t result = (*(*rcx_9 + 0x78))(rcx_9, rdx_2, 0)

if (rdi_1 == 0)
    return result

return (*(*rdi_1 + 0x10))(rdi_1)
