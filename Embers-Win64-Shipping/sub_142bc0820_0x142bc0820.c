// 函数: sub_142bc0820
// 地址: 0x142bc0820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *arg1
int32_t r9 = arg1[2].d
int32_t result_1 = 0
int64_t r14 = rsi[6]

if (r9 == 0 || arg1[4] != 0)
    return 0

uint32_t rdi = zx.d(*(arg1 + 0x14))
int32_t rbp_1 = rdi * (r9 + 1)
int64_t rax = sub_142b99a90(r14, 4, 0, r9 + 1, 0, &result_1)
bool cond:0 = result_1 != 0
arg1[4] = rax
int32_t result

if (cond:0)
label_142bc09c9:
    sub_142b99980(r14, arg1[4])
    result = result_1
    arg1[4] = 0
else
    int32_t result_2 = sub_142b97060(rsi, *(arg1 + 0xc) + arg1[1].d, arg2)
    result_1 = result_2
    
    if (result_2 != 0)
        goto label_142bc09c9
    
    int32_t result_3 = sub_142b96500(rsi, rbp_1)
    result_1 = result_3
    
    if (result_3 != 0)
        goto label_142bc09c9
    
    char* rax_1 = rsi[7]
    void* r8_1 = arg1[4]
    void* r9_3 = &rax_1[zx.q(rbp_1)]
    
    if (rdi == 1)
        while (rax_1 u< r9_3)
            uint32_t rdx_16 = zx.d(*rax_1)
            rax_1 = &rax_1[1]
            *r8_1 = rdx_16
            r8_1 += 4
    else if (rdi == 2)
        while (rax_1 u< r9_3)
            uint32_t rcx_10 = zx.d(*rax_1)
            r8_1 += 4
            uint32_t rdx_14 = zx.d(rax_1[1])
            rax_1 = &rax_1[2]
            *(r8_1 - 4) = rdx_14 | rcx_10 << 8
    else if (rdi == 3)
        while (rax_1 u< r9_3)
            r8_1 += 4
            uint32_t rcx_9 = zx.d(rax_1[2])
            uint32_t rdx_12 = (zx.d(rax_1[1]) | zx.d(*rax_1) << 8) << 8
            rax_1 = &rax_1[3]
            *(r8_1 - 4) = rdx_12 | rcx_9
    else
        while (rax_1 u< r9_3)
            r8_1 += 4
            uint32_t rcx_6 = zx.d(rax_1[3])
            uint32_t rdx_8 = ((zx.d(rax_1[1]) | zx.d(*rax_1) << 8) << 8 | zx.d(rax_1[2])) << 8
            rax_1 = &rax_1[4]
            *(r8_1 - 4) = rdx_8 | rcx_6
    
    sub_142b96620(rsi)
    result = result_1
    
    if (result != 0)
        goto label_142bc09c9

return result
