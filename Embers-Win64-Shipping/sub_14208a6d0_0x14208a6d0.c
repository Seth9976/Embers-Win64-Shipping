// 函数: sub_14208a6d0
// 地址: 0x14208a6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_478
int64_t rax_1 = __security_cookie ^ &var_478
void* rax_2 = sub_140cbe180(arg1)
int64_t* rcx

if (rax_2 == 0)
    rcx = nullptr
else
    rcx = rax_2 + 0x48

void var_430
int32_t* rax_4 = (*(*rcx + 0x18))(rcx, &var_430)
int32_t r14 = rax_4[1]
char rax_5 = *(arg1 + 0xe0)
int32_t var_458 = *rax_4
int32_t var_454 = r14
uint32_t rsi

if (rax_5 != 0)
    rsi = zx.d(rax_5)
else
    rsi = sub_1405d9520(zx.d(*(arg1 + 0xdb)))

uint32_t var_450 = rsi
int128_t var_448
__builtin_memset(&var_448, 0, 0x18)
char result

if (sub_142094d60(arg1, &var_448, zx.o(0)) == 0)
    int64_t rcx_8 = var_448.q
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    result = 0
else
    char var_428[0xff]
    sscanf_s(&var_428, "#?RADIANCE\nFORMAT=32-bit_rle_rgbe\n\n-Y %d +X %d\n", zx.q(r14))
    char var_329_1 = 0
    int64_t rcx_4 = -1
    
    do
        rcx_4 += 1
    while (var_428[rcx_4] != 0)
    
    int64_t r9_2 = *arg2
    int32_t rax_7 = 0x100
    
    if (rcx_4.d s<= 0x100)
        rax_7 = rcx_4.d
    
    (*(r9_2 + 0x150))(arg2, &var_428, sx.q(rax_7), r9_2)
    int16_t* rbx_1 = var_448.q
    int32_t* rcx_6 = &var_458
    
    if (rsi != 0xa)
        sub_142075520(rcx_6, arg2, rbx_1)
    else
        sub_142075c40(rcx_6, arg2, rbx_1)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    result = 1

__security_check_cookie(rax_1 ^ &var_478)
return result
