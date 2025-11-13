// 函数: ?reload@NMT@@AEAAHPEAPEAEJ@Z
// 地址: 0x1408560d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg2
arg2.b = 1
(*(*arg1 + 0x18))(arg1, arg2)
arg1[0x19].d = 0

if (*(arg1 + 0xcc) != 0)
    sub_1405c5570(&arg1[0x18], 0)

uint64_t result = zx.q(*(rsi + 0x28))

if (result.b u>= 3)
    if (result.b u<= 8)
        result = sub_140d226f0(rsi, sub_140876da0())
        
        if (result != 0)
            result = zx.q(*(result + 0xd8))
            
            if (result.b != 0 || *(rsi + 0x4e8) != result.b)
                goto label_140856177
    else if (result.b u<= 0xc && *(rsi + 0x4e8) != 0)
        result.b = 0
    label_140856177:
        
        if (result.b == arg3 && rsi != -0xf8)
            (*(*arg1 + 0x28))(arg1, rsi + 0xf8, 0)
            arg1[0x17].d = *(rsi + 0x1b0)
            *(arg1 + 0xbc) = *(rsi + 0x1b4)
            result = rsi + 0x1b8
            
            if (&arg1[0x18] != result)
                int64_t rsi_2 = sx.q(*(result + 8))
                int64_t rbp_1 = *result
                int32_t r8 = *(arg1 + 0xcc)
                arg1[0x19].d = rsi_2.d
                
                if (rsi_2.d != 0 || r8 != 0)
                    sub_1405c4a00(&arg1[0x18], rsi_2.d, r8)
                    result = memcpy(arg1[0x18], rbp_1, (rsi_2 << 3).d)
                else
                    *(arg1 + 0xcc) = rsi_2.d
            
            if (arg4 != 0)
                arg1[0x16].d |= 3
                result = sub_140834b50(arg1)

arg1[0x1a].b |= 1
return result
