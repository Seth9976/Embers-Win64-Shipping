// 函数: sub_140e428e0
// 地址: 0x140e428e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1430)
void var_1448
int64_t rax_1 = __security_cookie ^ &var_1448
int32_t* result_2 = arg3
uint64_t i_6 = zx.q(arg1)
int32_t* result = arg2
int32_t var_1028[0x400]
memset(&var_1028, 0, 0x1000)

if (i_6.d != 0)
    int32_t* result_3 = result
    uint64_t i_4 = zx.q(i_6.d)
    uint64_t i
    
    do
        int32_t rdx = *result_3
        result_3 = &result_3[2]
        uint64_t rcx_1 = zx.q(rdx.b)
        var_1028[rcx_1] += 1
        uint64_t rcx_3 = zx.q(zx.d((rdx u>> 8).b) + 0x100)
        uint64_t rdx_2 = zx.q((rdx u>> 0x18) + 0x300)
        var_1028[rcx_3] += 1
        uint64_t rcx_5 = zx.q(zx.d((rdx u>> 0x10).b) + 0x200)
        var_1028[rcx_5] += 1
        var_1028[rdx_2] += 1
        i = i_4
        i_4 -= 1
    while (i != 1)

int32_t r9_1 = 4
int32_t rdx_3
bool cond:0_1

while (true)
    rdx_3 = r9_1
    r9_1 -= 1
    int32_t rcx_6 = var_1028[zx.q(r9_1 << 8)]
    cond:0_1 = i_6.d != rcx_6
    
    if (i_6.d != rcx_6)
        break
    
    if (r9_1 u<= 1)
        cond:0_1 = i_6.d != rcx_6
        break

if (cond:0_1)
    r9_1 = rdx_3

int32_t r14 = 0
int32_t rsi = 0

if (r9_1 != 0)
    do
        int32_t rcx_7 = 0
        int32_t var_1428[0x100]
        int64_t r8_1 = &var_1028[zx.q(rsi << 8)] - &var_1428
        int32_t (* rax_10)[0x100] = &var_1428
        int64_t i_3 = 0x80
        int64_t i_1
        
        do
            *rax_10 = rcx_7
            int32_t rcx_8 = rcx_7 + *(r8_1 + rax_10)
            (*rax_10)[1] = rcx_8
            rcx_7 = rcx_8 + *(r8_1 + rax_10 + 4)
            rax_10 = &(*rax_10)[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        
        if (i_6.d != 0)
            char r10_1 = r14.b
            int32_t* result_4 = result
            uint64_t i_5 = i_6
            uint64_t i_2
            
            do
                int64_t rdx_4 = *result_4
                result_4 = &result_4[2]
                *(result_2 + (zx.q(var_1428[zx.q((zx.q(rdx_4.d) u>> r10_1).b)]) << 3)) = rdx_4
                uint64_t rax_16 = zx.q((zx.q(result_4[-2]) u>> r10_1).b)
                var_1428[rax_16] += 1
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        int32_t* result_1 = result
        rsi += 1
        r14 += 8
        result = result_2
        result_2 = result_1
    while (rsi u< r9_1)

__security_check_cookie(rax_1 ^ &var_1448)
return result
