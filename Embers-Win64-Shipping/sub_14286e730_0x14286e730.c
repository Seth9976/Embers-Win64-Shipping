// 函数: sub_14286e730
// 地址: 0x14286e730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (sub_142885880(*(arg2 + 8)) u>= 0x64)
    return 0

int64_t* rax_2 = sub_1428a6730(0x80)
int64_t* rax_3 = sub_142885630(arg3, rax_2)

if (rax_2 == 0 || rax_3 == 0)
    sub_1428a6780(rax_2)
    sub_142885600(rax_3)
    sub_142856580(arg1, 0x50, 0xf7, 0x44, "ssl\record\rec_layer_d1.c", 0x9a)
else
    *rax_2 = *(arg1 + 0x1648)
    rax_2[1] = *(arg1 + 0x1650)
    *(rax_2 + 0x10) = *(arg1 + 0x820)
    *(rax_2 + 0x20) = *(arg1 + 0x830)
    rax_2[6] = *(arg1 + 0x840)
    *(rax_2 + 0x38) = *(arg1 + 0xd48)
    *(rax_2 + 0x48) = *(arg1 + 0xd58)
    *(rax_2 + 0x58) = *(arg1 + 0xd68)
    *(rax_2 + 0x68) = *(arg1 + 0xd78)
    rax_2[0xf] = *(arg1 + 0xd88)
    rax_3[1] = rax_2
    *(arg1 + 0x1648) = 0
    *(arg1 + 0x1650) = 0
    __builtin_memset(arg1 + 0x820, 0, 0x28)
    memset(arg1 + 0xd48, 0, 0x900)
    
    if (sub_14285d870(arg1) != 0)
        void* rax_5 = sub_142885740(*(arg2 + 8), rax_3)
        
        if (rax_5 != 0)
            return 1
        
        sub_142856580(arg1, (rax_5 + 0x50).d, 0xf7, (rax_5 + 0x44).d, "ssl\record\rec_layer_d1.c", 
            0xbf)
        sub_1428a6780(rax_2[2])
    else
        sub_1428a6780(rax_2[2])
    
    sub_1428a6780(rax_2)
    sub_142885600(rax_3)

return 0xffffffff
