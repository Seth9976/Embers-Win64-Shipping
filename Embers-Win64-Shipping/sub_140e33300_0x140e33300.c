// 函数: sub_140e33300
// 地址: 0x140e33300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (sub_140e33560(arg1, arg2, arg3).b != 0)
    char* r8 = arg1[4]
    
    if (arg1[0xc].b == 0)
        result = *(r8 + 0x10)
        
        if ((result == 0 || result == 3) && *(r8 + 0xc) == 1)
            uint32_t rdx_2 = zx.d(*(r8 + 0xe))
            
            if ((0xffe7 & (rdx_2 - 8).w) == 0 && rdx_2.w != 0x10)
                *(arg1 + 0x3c) = *(r8 + 4)
                int32_t temp0
                int32_t temp1
                temp0:temp1 = sx.q(*(r8 + 8))
                *(arg1 + 0x3a) = 1
                arg1[8].d = (temp1 ^ temp0) - temp0
                *(arg1 + 0x3b) = r8[0xe]
                return 1
    else if (arg1[5] u>= 0x36 && *r8 == 0x42 && r8[1] == 0x4d)
        result = *(r8 + 0x1e)
        
        if ((result == 0 || result == 3) && *(r8 + 0x1a) == 1)
            uint32_t rdx = zx.d(*(r8 + 0x1c))
            
            if ((0xffe7 & (rdx - 8).w) == 0 && rdx.w != 0x10)
                *(arg1 + 0x3c) = *(r8 + 0x12)
                int32_t temp2
                int32_t temp3
                temp2:temp3 = sx.q(*(r8 + 0x16))
                *(arg1 + 0x3a) = 1
                arg1[8].d = (temp3 ^ temp2) - temp2
                *(arg1 + 0x3b) = r8[0x1c]
                return 1

result.b = 0
return result
