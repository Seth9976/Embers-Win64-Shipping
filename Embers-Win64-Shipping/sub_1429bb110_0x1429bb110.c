// 函数: sub_1429bb110
// 地址: 0x1429bb110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t rdi = sx.q(arg3)
char* r8 = arg2
char* r9 = *(arg1 + 8)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q((rdi + 1).d)
void* rdx_1 = &r8[rdi]
void* rcx_1 = &r9[sx.q((temp1 - temp0) s>> 1)]

while (r8 u< rdx_1)
    *r9 = *r8
    r9 = &r9[1]
    
    if (&r8[1] u>= rdx_1)
        break
    
    char rax_7 = r8[1]
    r8 = &r8[2]
    *rcx_1 = rax_7
    rcx_1 += 1

char* rbx = *(arg1 + 8)
void* r10_1 = &rbx[rdi]
char r8_2 = *rbx
void* rdx_2 = &rbx[1]

if (rdx_2 u< r10_1)
    do
        char rax_8 = *rdx_2
        char rcx_3 = rax_8 - r8_2
        r8_2 = rax_8
        *rdx_2 = rcx_3 - 0x80
        rdx_2 += 1
    while (rdx_2 u< r10_1)
    
    rbx = *(arg1 + 8)

int32_t result_1 = int.d(ceil(_mm_cvtepi32_pd(zx.q(rdi.d)).q f* 1.01)) + 0x64

if (sub_140374220(arg4, &result_1, rbx) != 0)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_142c99e10(&exceptionObject, "Data compression (zlib) failed.")
    _CxxThrowException(&exceptionObject, &data_143946868)
    noreturn

uint64_t result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_b8)
return result
