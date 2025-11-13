// 函数: sub_140b70e60
// 地址: 0x140b70e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = (*(*arg1 + 0x78))()

if (rax_1 s>= 1)
    int16_t* lpFileName_1
    sub_140b74300(arg1, &lpFileName_1, arg2, 1)
    int16_t* const lpFileName = &data_142d40450
    int32_t var_20
    
    if (var_20 != 0)
        lpFileName = lpFileName_1
    
    HANDLE rax_2 = CreateFileW(lpFileName, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
        FILE_ATTRIBUTE_NORMAL, nullptr)
    int16_t* lpFileName_2 = lpFileName_1
    
    if (lpFileName_2 != 0)
        sub_140a74f90(lpFileName_2)
    
    if (rax_2 != -1)
        HANDLE rax_3 = CreateFileMappingW(rax_2, nullptr, PAGE_READONLY, 0, 0, nullptr)
        
        if (rax_3 == -1)
            CloseHandle(rax_2)
            return nullptr
        
        void* result = j_sub_140a82f30(0x38)
        
        if (result == 0)
            return nullptr
        
        *(result + 8) = rax_1
        *result = &data_142e7cb08
        *(result + 0x10) = rax_2
        *(result + 0x18) = rax_3
        *(result + 0x20) = 0
        *(result + 0x28) = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (arg2[rbx_2] != 0)
            
            int32_t rdx_1 = 0
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(result + 0x20, rbx_2.d + 1)
                rdx_1 = *(result + 0x28)
            
            int32_t rax_5 = rdx_1 + rbx_2.d + 1
            *(result + 0x28) = rax_5
            
            if (rax_5 s> *(result + 0x2c))
                sub_140594770(result + 0x20)
            
            UnDecorator::getReferenceType(*(result + 0x20), arg2, (rbx_2.d + 1) * 2)
        
        *(result + 0x30) = 0
        return result

return 0
