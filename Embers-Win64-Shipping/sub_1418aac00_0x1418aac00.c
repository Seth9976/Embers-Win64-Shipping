// 函数: sub_1418aac00
// 地址: 0x1418aac00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8_1 = zx.q(*(arg1 + 0x18))

if (r8_1.d u> 5)
    return 

bool cond:0_1

switch (r8_1)
    case 0
        cond:0_1 = r8_1.b != 0
    label_1418aac22:
        
        if (not(cond:0_1))
            *(arg1 + 0x18) = 0xff
            int64_t rcx = *(arg1 + 8)
            
            if (rcx != 0)
                return sub_140a74f90(rcx) __tailcall
    case 1
        cond:0_1 = r8_1.b != 1
        goto label_1418aac22
    case 2, 3, 4, 5
        if (r8_1.b == 2)
            *(arg1 + 0x18) = 0xff
