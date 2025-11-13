// 函数: sub_1428a42c0
// 地址: 0x1428a42c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (data_143feb118 == 0)
    int64_t* rax_1 = sub_142898ba0()
    data_143feb118 = rax_1
    
    if (rax_1 == 0)
        return rax_1

int64_t* rax_2 = sub_1428a6a70(0x30)

if (rax_2 == 0)
    sub_1428a5670((rax_2 + 0xe).d, (rax_2 + 0x7a).d, (rax_2 + 0x41).d, "crypto\conf\conf_mod.c", 
        0xec)
    return nullptr

*rax_2 = arg1
int64_t rax_3 = sub_1428a6ba0(arg2)
rax_2[1] = rax_3
rax_2[2] = arg3
rax_2[3] = arg4

if (rax_3 != 0)
    if (sub_142898d50(data_143feb118, rax_2) != 0)
        return rax_2
    
    sub_1428a6780(rax_2[1])

sub_1428a6780(rax_2)
return nullptr
