// 函数: sub_140b71db0
// 地址: 0x140b71db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
rbx.b = 0
HANDLE rax = CreateFileW(arg1, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
    FILE_ATTRIBUTE_NORMAL, nullptr)

if (rax != -1)
    HANDLE rax_1 = CreateFileMappingW(rax, nullptr, PAGE_READONLY, 0, 0, nullptr)
    
    if (rax_1 != 0)
        struct MEMORY_MAPPED_VIEW_ADDRESS lpBaseAddress =
            MapViewOfFile(rax_1, FILE_MAP_READ, 0, 0, 0)
        
        if (lpBaseAddress != 0)
            rbx = zx.q(sub_140b71e90(lpBaseAddress, arg2))
            UnmapViewOfFile(lpBaseAddress)
        
        CloseHandle(rax_1)
    
    CloseHandle(rax)

return zx.q(rbx.b)
