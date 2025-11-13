// 函数: sub_141869140
// 地址: 0x141869140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*(arg2 + 0x18))
int64_t entry_r9

if (rax.d u> 0xff)
    sub_140af98a0("Unknown", 0x189, u"Unrecognized TUnion subtype", entry_r9)
    sub_140afbb40()
else if (rax.d != 0xff)
    if (rax.d u<= 5)
        switch (rax)
            case 0
                sub_14185ed80(arg1, arg2)
                return arg1
            case 1
                sub_14185edf0(arg1, arg2)
                return arg1
            case 2, 3, 4, 5
                *(arg1 + 0x18) = 2
                return arg1
    
    sub_140af98a0("Unknown", 0x189, u"Unrecognized TUnion subtype", entry_r9)
    sub_140afbb40()
return arg1
