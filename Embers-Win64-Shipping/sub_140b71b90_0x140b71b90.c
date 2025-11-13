// 函数: sub_140b71b90
// 地址: 0x140b71b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = arg3
int64_t rbp = arg2
int64_t result

if (arg3 s<= 0)
label_140b71cb3:
    result.b = 0
else
    if (*(arg1 + 0x48) != *(arg1 + 0x3c))
        goto label_140b71ca9
    
    if (sub_140b74270(arg1).b == 0)
    label_140b71cb3_1:
        result.b = 0
    else
        sub_140b73350(arg1, *(arg1 + 0x40))
    label_140b71ca9:
        
        do
            int64_t rdx_1 = sx.q(*(arg1 + 0x44))
            int64_t i_1 = sx.q(*(arg1 + 0x38) - rdx_1.d)
            
            if (i s<= i_1)
                i_1 = i
            
            if (i_1 + *(arg1 + 0x18) s> *(arg1 + 0x10))
                goto label_140b71cb3_1
            
            if (i_1 s<= 0)
                if (*(arg1 + 0x70) == 0 && *(arg1 + 0x71) != 0)
                    HANDLE hFile = *(arg1 + 8)
                    uint32_t numberOfBytesTransferred = 0
                    
                    if (GetOverlappedResult(hFile, arg1 + 0x50, &numberOfBytesTransferred, 1) == 0)
                        if (GetLastError().d != 0x26)
                            goto label_140b71cb3_1
                        
                        *(arg1 + 0x70) = 1
                    else
                        *(arg1 + 0x20) += zx.q(numberOfBytesTransferred)
                        int64_t rax_6 = *(arg1 + 0x20)
                        *(arg1 + 0x71) = 0
                        *(arg1 + 0x60) = rax_6.d
                        *(arg1 + 0x64) = (rax_6 u>> 0x20).d
                        
                        if (rax_6 u>= *(arg1 + 0x10))
                            *(arg1 + 0x70) = 1
                
                *(arg1 + 0x40) ^= 1
                int32_t rdx_4 = *(arg1 + 0x40)
                *(arg1 + 0x3c) ^= 1
                *(arg1 + 0x44) = 0
                sub_140b73350(arg1, rdx_4)
            else
                memcpy(rbp, rdx_1 + *(arg1 + (sx.q(*(arg1 + 0x3c)) << 3) + 0x28), i_1.d)
                *(arg1 + 0x44) += i_1.d
                i -= i_1
                *(arg1 + 0x18) += i_1
                rbp += i_1
        while (i s> 0)
        
        result.b = 1

return result
