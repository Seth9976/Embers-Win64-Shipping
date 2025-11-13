// 函数: sub_14189e9c0
// 地址: 0x14189e9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg2[5].b)
int64_t entry_r9

if (rax.d u> 0xff)
    sub_140af98a0("Unknown", 0x189, u"Unrecognized TUnion subtype", entry_r9)
    sub_140afbb40()
else if (rax.d != 0xff)
    if (rax.d u<= 5)
        switch (rax)
            case 0
                sub_14189ca00(arg1, arg2)
                return arg1
            case 1
                sub_1418aab80(arg1)
                *arg1 = *arg2
                arg1[2].d = arg2[2].d
                arg1[5].b = 1
                return arg1
            case 2
                sub_14189cb60(arg1, arg2)
                return arg1
            case 3
                sub_14189cb20(arg1, arg2)
                return arg1
            case 4, 5
                sub_1418aab80(arg1)
                arg1[5].b = 4
                return arg1
    
    sub_140af98a0("Unknown", 0x189, u"Unrecognized TUnion subtype", entry_r9)
    sub_140afbb40()
return arg1
