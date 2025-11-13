// 函数: sub_1428661c0
// 地址: 0x1428661c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rbx = arg2

if ((arg3.b & 1) != 0)
    return 0

uint64_t r14_1 = arg3 u>> 1
int16_t* rax_1 = sub_1428a6730(r14_1 * 2)

if (rax_1 == 0)
    sub_1428a5670((&rax_1[0xa]).d, 0x278, (rax_1 + 0x41).d, "ssl\t1_lib.c", 0x7c8)
    return 0

int64_t r9 = 0
int16_t* r10_1 = rax_1

if (arg3 != 0)
    do
        int32_t rcx_2 = *rbx
        int64_t i = 0
        int32_t r8_2 = rbx[1]
        rbx = &rbx[2]
        char const (** const rax_3)[0x17] = &data_1434dc750
        
        do
            if (*(rax_3 + 0xc) == rcx_2 && *(rax_3 + 0x14) == r8_2)
                *r10_1 = rax_3[1].w
                r10_1 = &r10_1[1]
                break
            
            i += 1
            rax_3 = &rax_3[5]
        while (i u< 0x1a)
        
        if (i == 0x1a)
            sub_1428a6780(rax_1)
            return 0
        
        r9 += 2
    while (r9 u< arg3)

if (arg4 == 0)
    sub_1428a6780(*(arg1 + 0x198))
    *(arg1 + 0x198) = rax_1
    *(arg1 + 0x1a0) = r14_1
else
    sub_1428a6780(*(arg1 + 0x1a8))
    *(arg1 + 0x1a8) = rax_1
    *(arg1 + 0x1b0) = r14_1

return 1
