// 函数: sub_14283e4b0
// 地址: 0x14283e4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
uint8_t* lpBuffer = arg4
uint8_t* lpBuffer_3 = arg4
enum WIN32_ERROR result

if (arg3 == 0 || ((arg2 & 0x60) != 0 && arg4 == 0))
    result = 0x80070057
else if (arg1[5] != 0)
    int64_t r12_1 = 0
    int32_t numberOfBytesWritten_1 = 0
    int128_t buffer
    __builtin_memset(&buffer, 0, 0x12)
    result = sub_14283e3a0(arg1, &buffer, &numberOfBytesWritten_1)
    
    if (result s>= NO_ERROR)
        HANDLE rax_2 = CreateFile2(arg3, 0x40000000, FILE_SHARE_NONE, CREATE_ALWAYS, nullptr)
        HANDLE rbx_1 = rax_2
        
        if (rax_2 == -1)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t numberOfBytesWritten_2 = numberOfBytesWritten_1
            uint64_t var_2a0
            int64_t var_278
            enum WIN32_ERROR result_3 = sub_14284ac90(arg1[2].d, *arg1, arg1[1], &var_2a0, 
                &var_278, numberOfBytesWritten_2 u>> 1 & 0x10000)
            enum WIN32_ERROR result_2 = result_3
            
            if (result_3 s< NO_ERROR)
                goto label_14283e65f
            
            char fileInformation
            
            if (var_278 u>= 0xffff)
                int32_t* lpBuffer_1 = j_sub_140a82f30(var_2a0)
                uint32_t numberOfBytesWritten
                
                if (lpBuffer_1 != 0)
                    if (WriteFile(rbx_1, &buffer, 0x12, &numberOfBytesWritten, nullptr) == 0)
                    label_14283e9af:
                        enum WIN32_ERROR result_6 = GetLastError()
                        enum WIN32_ERROR result_1 = result_6
                        
                        if (result_6 s> NO_ERROR)
                            result_1 = zx.d(result_6.w) | 0x80070000
                        
                        j_sub_140a74f90(lpBuffer_1)
                        fileInformation = 1
                        SetFileInformationByHandle(rbx_1, FileDispositionInfo, &fileInformation, 1)
                        CloseHandle(rbx_1)
                        result = result_1
                    else
                        if (numberOfBytesWritten != 0x12)
                        label_14283e8fe:
                            j_sub_140a74f90(lpBuffer_1)
                            goto label_14283e90c
                        
                        uint64_t rdx_7 = var_2a0
                        
                        if (rdx_7 u<= 0xffffffff)
                            int32_t* r15_1 = arg1[5]
                            
                            if (arg1[1] u> 0)
                                int32_t r13_1 = numberOfBytesWritten_2 & 0x20000
                                
                                while (true)
                                    if (r13_1 == 0)
                                        uint64_t r9_8 = arg1[3]
                                        int32_t var_2b0_2 = 0
                                        OVERLAPPED* var_2b8_4
                                        var_2b8_4.d = arg1[2].d
                                        
                                        if (not(test_bit(numberOfBytesWritten_2, 0x10)))
                                            sub_142840fe0(lpBuffer_1, rdx_7, r15_1, r9_8, 
                                                var_2b8_4.d, var_2b0_2.b)
                                            rdx_7 = var_2a0
                                        else
                                            sub_14284a7a0(lpBuffer_1, rdx_7, r15_1, r9_8, 
                                                var_2b8_4.d, var_2b0_2)
                                            rdx_7 = var_2a0
                                    else
                                        int64_t rax_9 = arg1[3]
                                        int32_t* r9_5 = r15_1
                                        int32_t* lpBuffer_2 = lpBuffer_1
                                        
                                        if (rax_9 u>= 4 && rdx_7 u>= 3)
                                            int64_t i = 0
                                            
                                            if (rax_9 != 3)
                                                void* r8_7 = lpBuffer_1 + 3
                                                
                                                do
                                                    int32_t rdx_8 = *r9_5
                                                    r9_5 = &r9_5[1]
                                                    
                                                    if (r8_7 u> lpBuffer_1 + rdx_7)
                                                        break
                                                    
                                                    *lpBuffer_2 = rdx_8.b
                                                    r8_7 += 3
                                                    i += 4
                                                    *(lpBuffer_2 + 1) = (rdx_8 u>> 8).b
                                                    *(lpBuffer_2 + 2) = (rdx_8 u>> 0x10).b
                                                    lpBuffer_2 += 3
                                                while (i u< rax_9 - 3)
                                                
                                                rdx_7 = var_2a0
                                            
                                            numberOfBytesWritten_2 = numberOfBytesWritten_1
                                    
                                    r15_1 += arg1[3]
                                    
                                    if (WriteFile(rbx_1, lpBuffer_1, rdx_7.d, 
                                            &numberOfBytesWritten, nullptr) == 0)
                                        goto label_14283e9af
                                    
                                    rdx_7 = var_2a0
                                    
                                    if (zx.q(numberOfBytesWritten) != rdx_7)
                                        goto label_14283e8fe
                                    
                                    r12_1 += 1
                                    
                                    if (r12_1 u>= arg1[1])
                                        lpBuffer_3 = lpBuffer
                                        break
                            
                            uint32_t buffer_3 = 0
                            
                            if (lpBuffer_3 != 0)
                                void buffer_2
                                memset(&buffer_2, 0, 0x1ef)
                                sub_14283ecf0(&buffer_2, arg2, lpBuffer_3)
                                buffer_3 = SetFilePointer(rbx_1, 0, nullptr, FILE_CURRENT)
                                
                                if (buffer_3 == 0xffffffff)
                                    goto label_14283e9af
                                
                                if (WriteFile(rbx_1, &buffer_2, 0x1ef, &numberOfBytesWritten, 
                                        nullptr) == 0)
                                    goto label_14283e9af
                                
                                if (numberOfBytesWritten == 0x1ef)
                                    goto label_14283e985
                                
                                goto label_14283e8fe
                            
                        label_14283e985:
                            int32_t var_254_1 = 0
                            OVERLAPPED* lpOverlapped = nullptr
                            uint32_t buffer_1 = buffer_3
                            int128_t var_250
                            __builtin_strcpy(&var_250, "TRUEVISION-XFILE.")
                            
                            if (WriteFile(rbx_1, &buffer_1, 0x1a, &numberOfBytesWritten, 
                                    lpOverlapped) == 0)
                                goto label_14283e9af
                            
                            if (numberOfBytesWritten != 0x1a)
                                j_sub_140a74f90(lpBuffer_1)
                                goto label_14283e90c
                            
                            j_sub_140a74f90(lpBuffer_1)
                            CloseHandle(rbx_1)
                            result = NO_ERROR
                        else
                            j_sub_140a74f90(lpBuffer_1)
                            fileInformation = 1
                            SetFileInformationByHandle(rbx_1, FileDispositionInfo, 
                                &fileInformation, 1)
                            CloseHandle(rbx_1)
                            result = 0x80070216
                else
                    fileInformation = 1
                    SetFileInformationByHandle(rbx_1, (&lpBuffer_1[1]).d, &fileInformation, 
                        (lpBuffer_1 + 1).d)
                    CloseHandle(rbx_1)
                    result = 0x8007000e
            else
                lpBuffer = nullptr
                uint32_t nNumberOfBytesToWrite = 0
                enum WIN32_ERROR result_4 = sub_14283ea30(arg1, arg2, &lpBuffer, lpBuffer_3)
                result_2 = result_4
                
                if (result_4 s< NO_ERROR)
                label_14283e654:
                    sub_14284b5f0(&lpBuffer)
                label_14283e65f:
                    fileInformation = 1
                    SetFileInformationByHandle(rbx_1, FileDispositionInfo, &fileInformation, 1)
                    CloseHandle(rbx_1)
                    result = result_2
                else
                    if (WriteFile(rbx_1, lpBuffer, nNumberOfBytesToWrite, &numberOfBytesWritten_1, 
                            nullptr) == 0)
                        enum WIN32_ERROR result_5 = GetLastError()
                        result_2 = result_5
                        
                        if (result_5 s> NO_ERROR)
                            result_2 = zx.d(result_5.w) | 0x80070000
                        
                        goto label_14283e654
                    
                    void** rcx_9 = &lpBuffer
                    
                    if (numberOfBytesWritten_1 == nNumberOfBytesToWrite)
                        sub_14284b5f0(rcx_9)
                        CloseHandle(rbx_1)
                        result = NO_ERROR
                    else
                        sub_14284b5f0(rcx_9)
                    label_14283e90c:
                        fileInformation = 1
                        SetFileInformationByHandle(rbx_1, FileDispositionInfo, &fileInformation, 1)
                        CloseHandle(rbx_1)
                        result = 0x80004005
        else
            result = GetLastError()
            
            if (result s> NO_ERROR)
                result = zx.d(result.w) | 0x80070000
else
    result = 0x80004003

__security_check_cookie(rax_1 ^ &var_2d8)
return result
