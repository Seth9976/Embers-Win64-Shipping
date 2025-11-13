// 函数: sub_141f6bc60
// 地址: 0x141f6bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rdx = *(arg2 + 0x440)

if (rdx == 0)
    return 

int64_t* r10_1 = *(rdx + 0x50)
int64_t r8 = sx.q(arg3)
void* r9 = *(*r10_1 + (r8 << 3))

if (*(r9 + 0xec) == 0)
    return 

void* var_40_1 = r9
int64_t var_48 = r8 * 0x430 + r10_1[2]
bool var_30_1 = arg4 != 0
int32_t var_2c_1 = *(*(arg1 + 0x108) + 8)

if (sub_140a80f40() != 0)
    sub_141f524e0(&var_48)
    return 

if (data_143f138f4 == 0)
    uint32_t rax_6
    
    if (data_143de5480 != 0)
        rax_6.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_6.b != 0)
        int128_t var_28 = var_48.o
        int128_t var_18 = rdx.o
        sub_141f524e0(&var_28)
        return 

void var_60
int64_t* rax_8 = sub_141f5aa40(&var_60, nullptr, 0xff)
void* rcx_4 = *rax_8
*(rcx_4 + 0x10) = var_48.o
*(rcx_4 + 0x20) = rdx.o
void* rcx_5 = *rax_8
int32_t r8_1 = rax_8[2].d
int64_t* rdx_3 = rax_8[1]
int64_t* rbx_1 = *(rcx_5 + 0x38)
int64_t* var_68_1 = rbx_1
int32_t* rdi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_1 += 1
    rbx_1 = var_68_1

sub_1407c96b0(rcx_5, rdx_3, r8_1, 1)

if (rbx_1 == 0)
    return 

uint64_t rax = zx.q(*rdi_1)
*rdi_1 -= 1

if (rax.d == 1)
    sub_140a2f6e0(var_68_1)
