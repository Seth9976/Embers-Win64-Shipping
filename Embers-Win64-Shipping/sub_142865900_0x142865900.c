// 函数: sub_142865900
// 地址: 0x142865900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = 0
int64_t rax = sub_1428a6730(arg4 * 2)

if (rax == 0)
    sub_1428a5670((rax + 0x14).d, 0x275, 0x41, "ssl\t1_lib.c", 0x15b)
    return 0

int64_t r8_1 = 0

if (arg4 != 0)
    do
        int64_t rdx_1 = 0
        int64_t rax_2 = 0
        
        while (true)
            if (*(rax_2 + &data_1434dc570) == *(arg3 + (r8_1 << 2)))
                rdx_1.w += 1
                break
            
            rdx_1 += 1
            rax_2 += 0xc
            
            if (rax_2 u>= 0x168)
                rdx_1 = 0
                break
        
        int32_t rax_3 = 1 << rdx_1.b
        
        if (rdx_1.w == 0 || (rbx & rax_3) != 0)
            sub_1428a6780(rax)
            return 0
        
        *(rax + (r8_1 << 1)) = rdx_1.w
        rbx |= rax_3
        r8_1 += 1
    while (r8_1 u< arg4)

sub_1428a6780(*arg1)
*arg1 = rax
*arg2 = arg4
return 1
