// 函数: sub_140b73740
// 地址: 0x140b73740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x10))().b != 0)
    int64_t fileSize_1 = arg1[6]
    HANDLE hFile = arg1[1]
    int64_t fileSize = fileSize_1
    
    if (SetFilePointer(hFile, fileSize_1.d, &fileSize:4, FILE_BEGIN) != 0xffffffff
            && SetEndOfFile(arg1[1]) != 0)
        GetFileSizeEx(arg1[1], &fileSize)
        arg1[7] = fileSize
        int64_t rax_2
        rax_2.b = 1
        return rax_2

uint32_t rax_1
rax_1.b = 0
return rax_1
