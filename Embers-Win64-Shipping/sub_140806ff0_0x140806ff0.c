// 函数: sub_140806ff0
// 地址: 0x140806ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x30)
uint64_t rax = 0
int64_t r9 = *(arg1 + 0x28)
int64_t var_68 = 0
int32_t var_60 = 0

if (rdx != 0)
    int32_t* rcx = *(rdx + 0xb8)
    int32_t r8_1
    
    if (rcx == 0)
        r8_1 = 0
    else
        r8_1 = *rcx
    
    var_68.d = _mm_cvtepi32_ps(zx.o(r8_1)).d
    int32_t r8_2
    
    if (rcx == 0)
        r8_2 = 0
    else
        r8_2 = rcx[1]
    
    var_68:4.d = _mm_cvtepi32_ps(zx.o(r8_2)).d
    
    if (rcx != 0)
        rax = zx.q(rcx[2]) & 0x3fffffff
    
    uint128_t zmm0 = zx.o(rax.d)
    rax = *(rdx + 0x78)
    var_60 = _mm_cvtepi32_ps(zmm0).d

uint64_t var_48 = rax
uint64_t var_40 = var_68
int32_t var_38 = var_60
int64_t var_50 = r9

if (sub_140a80f40() != 0)
    return sub_1407e5730(&var_50)

if (data_143f138f4 == 0)
    uint32_t rax_5
    
    if (data_143de5480 != 0)
        rax_5.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_5.b != 0)
        uint128_t var_30 = var_50.o
        int128_t var_20 = var_40.o
        return sub_1407e5730(&var_30)

int64_t* rax_7 = sub_1407eb4f0(&var_68, nullptr, 0xff)
void* rcx_4 = *rax_7
*(rcx_4 + 0x10) = var_50.o
*(rcx_4 + 0x20) = var_40.o
void* rcx_5 = *rax_7
int32_t r8_3 = rax_7[2].d
int64_t* rdx_3 = rax_7[1]
int64_t* rbx = *(rcx_5 + 0x38)
int64_t* arg_10 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_10

int32_t result = sub_1407c96b0(rcx_5, rdx_3, r8_3, 1)

if (rbx != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
