// 函数: sub_141062d30
// 地址: 0x141062d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
HANDLE hFile = arg2

if (*(arg1 + 0x41) == 0)
    uint64_t dwNumberOfBytesToFlush = arg1[7]
    hFile += dwNumberOfBytesToFlush
    
    if (hFile u> arg1[6])
        arg1[6] = (hFile + 0xfffff) & 0xfffffffffff00000
        int64_t lpBaseAddress = arg1[5]
        
        if (lpBaseAddress != 0)
            FlushViewOfFile(lpBaseAddress, dwNumberOfBytesToFlush)
            UnmapViewOfFile(arg1[5])
        
        HANDLE hObject = arg1[4]
        
        if (hObject != 0)
            CloseHandle(hObject)
        
        HANDLE hObject_1 = arg1[3]
        
        if (hObject_1 != 0)
            CloseHandle(hObject_1)
        
        enum FILE_CREATION_DISPOSITION dwCreationDisposition = CREATE_NEW
        
        if (arg1[8].b != 0)
            dwCreationDisposition = OPEN_EXISTING
        
        hFile = CreateFileW(*arg1, 0xc0000000, FILE_SHARE_READ, nullptr, dwCreationDisposition, 
            FILE_ATTRIBUTE_NORMAL, nullptr)
        arg1[3] = hFile
        
        if (hFile != -1)
            arg1[8].b = 1
            uint32_t rax_4 = GetFileSize(hFile, nullptr)
            
            if (rax_4 == 0)
                HANDLE hFile_1 = arg1[3]
                int64_t buffer
                __builtin_memset(&buffer, 0, 0x40)
                enum FILE_CREATION_DISPOSITION lpOverlapped
                lpOverlapped.q = 0
                WriteFile(hFile_1, &buffer, 0x40, nullptr, lpOverlapped)
            else if (arg3 != 0)
                arg1[6] = zx.q(rax_4)
            
            enum FILE_FLAGS_AND_ATTRIBUTES lpName
            lpName.q = 0
            HANDLE hFileMappingObject =
                CreateFileMappingW(arg1[3], nullptr, PAGE_READWRITE, 0, arg1[6].d, lpName)
            arg1[4] = hFileMappingObject
            
            if (hFileMappingObject != 0)
                uint32_t dwNumberOfBytesToMap
                dwNumberOfBytesToMap.q = arg1[6]
                hFile = MapViewOfFile(hFileMappingObject, FILE_MAP_ALL_ACCESS, 0, 0, 
                    dwNumberOfBytesToMap)
                arg1[5] = hFile
            
            if (hFileMappingObject == 0 || hFile == 0)
                *(arg1 + 0x41) = 1
                hFile = sub_14105eae0(arg1)
            else
                arg1[2] = hFile
        else
            *(arg1 + 0x41) = 1

__security_check_cookie(rax_1 ^ &var_98)
return hFile
