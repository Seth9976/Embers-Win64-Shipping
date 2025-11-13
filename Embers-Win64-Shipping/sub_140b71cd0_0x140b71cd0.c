// 函数: sub_140b71cd0
// 地址: 0x140b71cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg3
uint8_t* lpBuffer = arg2
BOOL result

while (true)
    HANDLE hFile = *(arg1 + 8)
    uint32_t arg_8 = 0
    uint32_t nNumberOfBytesToRead = -1
    
    if (rdi s<= 0xffffffff)
        nNumberOfBytesToRead = rdi.d
    
    if (ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, &arg_8, arg1 + 0x10) != 0)
    label_140b71d5a:
        uint64_t rcx = zx.q(arg_8)
        *(arg1 + 0x30) += rcx
        uint64_t nNumberOfBytesToRead_1 = zx.q(nNumberOfBytesToRead)
        rdi -= nNumberOfBytesToRead_1
        lpBuffer = &lpBuffer[nNumberOfBytesToRead_1]
        int64_t rax_2 = *(arg1 + 0x30)
        *(arg1 + 0x20) = rax_2.d
        *(arg1 + 0x24) = (rax_2 u>> 0x20).d
        
        if (nNumberOfBytesToRead == rcx.d)
            if (rdi s> 0)
                continue
            
            result.b = 1
            break
    else if (GetLastError() == 0x3e5)
        HANDLE hFile_1 = *(arg1 + 8)
        arg_8 = 0
        
        if (GetOverlappedResult(hFile_1, arg1 + 0x10, &arg_8, 1) != 0)
            goto label_140b71d5a
    
    result.b = 0
    break

return result
