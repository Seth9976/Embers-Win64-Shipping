// 函数: sub_1408e5c90
// 地址: 0x1408e5c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
uint64_t r8 = zx.q(*(arg2 + 0x1c))
int32_t rcx = arg2[3].d
int64_t rbp = *arg2
int32_t i = 0
uint64_t r10_2 = zx.q(((0x3f - rcx) u>> 3) + r8.d)
int64_t r9_2 = *(r8 + rbp) << rcx.b | arg2[2]
int32_t rcx_2 = (rcx | 0x38) - 9
*(arg2 + 0x1c) = r10_2.d
int32_t rax_3 = r9_2.d & 0x1ff
uint64_t r9_3 = r9_2 u>> 9
uint64_t rsi = zx.q(rax_3)
arg2[2] = r9_3
arg2[3].d = rcx_2
char var_328[0x100]

if (rax_3 != 0)
    int64_t r8_1 = 0
    
    do
        int64_t rdx_2 = *(r10_2 + rbp) << rcx_2.b | r9_3
        int64_t r9_4 = rdx_2
        rdx_2.b &= 0xf
        r9_3 = r9_4 u>> 4
        r10_2 = zx.q(r10_2.d + ((0x3f - rcx_2) u>> 3))
        var_328[r8_1] = rdx_2.b
        rcx_2 = (rcx_2 | 0x38) - 4
        *(arg2 + 0x1c) = r10_2.d
        r8_1 += 1
        arg2[2] = r9_3
        arg2[3].d = rcx_2
    while (r8_1 s< rsi)

void var_228
int16_t result = sub_1408e3f40(&var_228, &var_328, rsi.d, 0xb)

if (rsi.d != 0)
    char (* r9_5)[0x100] = &var_328
    void* r10_3 = &var_228
    
    do
        uint32_t rcx_5 = zx.d(*r9_5)
        
        if (rcx_5 != 0)
            uint64_t rdx_4 = zx.q(*r10_3)
            char var_337_1 = i.b
            result = rcx_5.b.w
            
            do
                *(arg1 + (rdx_4 << 1)) = result
                rdx_4 = zx.q(rdx_4.d + (1 << rcx_5.b))
            while (rdx_4.d u< 0x800)
        
        i += 1
        r9_5 = &(*r9_5)[1]
        r10_3 += 2
    while (i s< rsi.d)

__security_check_cookie(rax_1 ^ &var_358)
return result
