// 函数: sub_140b745a0
// 地址: 0x140b745a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg3
uint8_t* lpBuffer = arg2
int64_t result

while (true)
    HANDLE hFile = *(arg1 + 8)
    uint32_t arg_8 = 0
    uint32_t nNumberOfBytesToWrite = -1
    
    if (rdi s<= 0xffffffff)
        nNumberOfBytesToWrite = rdi.d
    
    if (WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, &arg_8, arg1 + 0x10) != 0)
    label_140b7462a:
        uint64_t rdx_2 = zx.q(arg_8)
        *(arg1 + 0x30) += rdx_2
        int64_t result_1 = *(arg1 + 0x30)
        uint64_t nNumberOfBytesToWrite_1 = zx.q(nNumberOfBytesToWrite)
        rdi -= nNumberOfBytesToWrite_1
        *(arg1 + 0x20) = result_1.d
        lpBuffer = &lpBuffer[nNumberOfBytesToWrite_1]
        *(arg1 + 0x24) = (result_1 u>> 0x20).d
        result = *(arg1 + 0x38)
        
        if (result_1 s>= result)
            result = result_1
        
        *(arg1 + 0x38) = result
        
        if (nNumberOfBytesToWrite == rdx_2.d)
            if (rdi s> 0)
                continue
            
            result.b = 1
            break
    else if (GetLastError().d == 0x3e5)
        HANDLE hFile_1 = *(arg1 + 8)
        arg_8 = 0
        
        if (GetOverlappedResult(hFile_1, arg1 + 0x10, &arg_8, 1).d != 0)
            goto label_140b7462a
    
    result.b = 0
    break

return result
