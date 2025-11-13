// 函数: sub_142872ab0
// 地址: 0x142872ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
void* rcx = *(arg1 + 0xa8)
int32_t r14 = 0
uint64_t count = arg3
int32_t r15 = *(*(rcx + 0x238) + 0x1c)

if ((r15 & 0x1c8) == 0)
    int64_t rdx_8 = *(arg1 + 0x508)
    
    if ((*(*(*(arg1 + 8) + 0xc0) + 0x18))(arg1, rdx_8 + 0x50, arg2, count, rdx_8 + 8) != 0)
        r14 = 1
else
    uint64_t count_1 = *(rcx + 0x2d0)
    int32_t r15_1 = r15 & 8
    
    if (r15_1 != 0)
        count = count_1
    
    uint64_t r13_2 = count_1 + 4 + count
    uint8_t* rax_1 = sub_1428a6730(r13_2)
    
    if (rax_1 != 0)
        *rax_1 = (count u>> 8).b
        rax_1[1] = count.b
        
        if (r15_1 == 0)
            memcpy(&rax_1[2], arg2, count.d)
        else
            memset(&rax_1[2], 0, count)
        
        rax_1[count + 3] = count_1.b
        rax_1[2 + count] = (count_1 u>> 8).b
        memcpy(count + 2 + &rax_1[2], *(*(arg1 + 0xa8) + 0x2c8), count_1.d)
        sub_1428a6890(*(*(arg1 + 0xa8) + 0x2c8), count_1, "ssl\s3_lib.c", 0x120b)
        *(*(arg1 + 0xa8) + 0x2c8) = 0
        int64_t rdx_5 = *(arg1 + 0x508)
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x18))(arg1, rdx_5 + 0x50, rax_1, r13_2, rdx_5 + 8) != 0)
            sub_1428a6890(rax_1, r13_2, "ssl\s3_lib.c", 0x1214)
            r14 = 1
        else
            sub_1428a6890(rax_1, r13_2, "ssl\s3_lib.c", 0x1210)

if (arg2 != 0)
    if (arg4 == 0)
        sub_1428b8960(arg2, count)
    else
        sub_1428a6890(arg2, count, "ssl\s3_lib.c", 0x1226)

if (*(arg1 + 0x38) == 0)
    *(*(arg1 + 0xa8) + 0x2b8) = 0

return zx.q(r14)
