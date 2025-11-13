// 函数: sub_1428d8ba0
// 地址: 0x1428d8ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (*(arg1 + 0x34) != 0 || arg1[7].d != 0)
    return 0

int32_t r8 = arg1[3].d
int32_t r14 = *(arg1 + 0x3c)
int64_t* result

if (r8 != *(arg1 + 0x1c))
    if (r8 == 0)
        arg1[1] = *arg1
    else if ((r8.b & 0xf) == 0)
        arg1[1] = *(arg1[1] + 0x188)
    
    result = arg1[1] + (zx.q(r8) & 0xf) * 0x18
    arg1[3].d = r8 + 1
    goto label_1428d8cf2

int64_t* result_1 = sub_1428a6730(0x190)
result = result_1

if (result_1 != 0)
    int64_t i_1 = 0x10
    int128_t* result_2 = result
    int64_t i
    
    do
        sub_142890e40(result_2)
        
        if ((r14 & 8) != 0)
            sub_1428908d0(result_2, 8)
        
        result_2 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)
    int64_t rax_1 = arg1[2]
    result[0x31] = i_1
    result[0x30] = rax_1
    
    if (*arg1 != 0)
        *(arg1[2] + 0x188) = result
        arg1[2] = result
        arg1[1] = result
        *(arg1 + 0x1c) += 0x10
        arg1[3].d += 1
    else
        *arg1 = result
        arg1[2] = result
        arg1[1] = result
        *(arg1 + 0x1c) += 0x10
        arg1[3].d += 1
    
label_1428d8cf2:
    
    if (result != 0)
        sub_142890900(result, 0)
        arg1[6].d += 1
        return result
else
    sub_1428a5670((result_1 + 3).d, 0x93, (result_1 + 0x41).d, "crypto\bn\bn_ctx.c", 0x13b)

arg1[7].d = 1
sub_1428a5670(3, 0x74, 0x6d, "crypto\bn\bn_ctx.c", 0xe1)
return 0
