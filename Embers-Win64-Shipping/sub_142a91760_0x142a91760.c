// 函数: sub_142a91760
// 地址: 0x142a91760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* _Str1_1 = arg1
*(arg3 + 0x18) = _Str1_1
int32_t r10 = 0
*(arg3 + 0x20) = &arg2[0x3c]
*(arg3 + 0xc) = *(arg2 + 0xdc)
uint32_t result = zx.d(*_Str1_1)
char* rcx = arg2

if (result.b == 0)
label_142a917d0:
    *rcx = 0
    *(arg3 + 0x18) = arg2
    
    for (char i = *_Str1_1; i != 0; i = *_Str1_1)
        void* _Str1 = &_Str1_1[1]
        
        if (i != 0x2c)
            _Str1 = _Str1_1
        
        _Str1_1 = _Str1
        
        if (strncmp(_Str1, "locale=", 7) != 0)
            if (strncmp(_Str1_1, "version=", 8) != 0)
                if (strncmp(_Str1_1, "swaplfnl", 8) != 0)
                    do
                        result = zx.d(*_Str1_1)
                        _Str1_1 = &_Str1_1[1]
                        
                        if (result.b == 0)
                            return result
                    while (result.b != 0x2c)
                    
                    if (result.b == 0)
                        break
                else
                    _Str1_1 = &_Str1_1[8]
                    *(arg2 + 0xdc) |= 0x10
                    result = *(arg2 + 0xdc)
                    *(arg3 + 0xc) = result
            else
                uint32_t rcx_4 = zx.d(_Str1_1[8])
                _Str1_1 = &_Str1_1[8]
                
                if (rcx_4.b == 0)
                    *(arg2 + 0xdc) &= 0xfffffff0
                    result = *(arg2 + 0xdc)
                    *(arg3 + 0xc) = result
                    break
                
                result = rcx_4 - 0x30
                
                if (result.b u< 0xa)
                    result = *(arg2 + 0xdc) & 0xfffffff0
                    int32_t rcx_7 = (sx.d(rcx_4.b) - 0x30) | result
                    *(arg2 + 0xdc) = rcx_7
                    _Str1_1 = &_Str1_1[1]
                    *(arg3 + 0xc) = rcx_7
        else
            result = zx.d(_Str1_1[7])
            _Str1_1 = &_Str1_1[7]
            int32_t rdx = 0
            char* rcx_2 = &arg2[0x3c]
            
            if (result.b != 0)
                while (true)
                    if (result.b == 0x2c)
                        goto label_142a91841
                    
                    _Str1_1 = &_Str1_1[1]
                    rdx += 1
                    
                    if (rdx s>= 0x9d)
                        *arg4 = 1
                        arg2[0x3c] = 0
                        break
                    
                    *rcx_2 = result.b
                    rcx_2 = &rcx_2[1]
                    result = zx.d(*_Str1_1)
                    
                    if (result.b == 0)
                        goto label_142a91841
                
                break
            
        label_142a91841:
            *rcx_2 = 0
else
    while (true)
        if (result.b == 0x2c)
            goto label_142a917d0
        
        r10 += 1
        
        if (r10 s>= 0x3c)
            *arg4 = 1
            *arg2 = 0
            break
        
        _Str1_1 = &_Str1_1[1]
        *rcx = result.b
        rcx = &rcx[1]
        result = zx.d(*_Str1_1)
        
        if (result.b == 0)
            goto label_142a917d0

return result
