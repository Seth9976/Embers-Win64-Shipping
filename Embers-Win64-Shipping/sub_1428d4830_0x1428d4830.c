// 函数: sub_1428d4830
// 地址: 0x1428d4830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]

if (arg3 != 0)
    arg1[1].q = arg3

if (arg4 != 0)
    *(arg1 + 0x18) = arg4

if (*(arg2 + 0x58) != 0)
    int64_t rax_1 = sub_1428a6730(arg2[3].q << 4)
    *(arg1 + 0x58) = rax_1
    
    if (rax_1 == 0)
        sub_1428a5670((rax_1 + 0xf).d, (rax_1 + 0x79).d, (rax_1 + 0x41).d, "crypto\modes\ocb128.c", 
            0xce)
        return 0
    
    memcpy(rax_1, *(arg2 + 0x58), ((*(arg2 + 0x28) + 1) << 4).d)

return 1
