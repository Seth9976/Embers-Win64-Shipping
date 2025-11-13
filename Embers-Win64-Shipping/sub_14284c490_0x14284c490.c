// 函数: sub_14284c490
// 地址: 0x14284c490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t* r12 = arg3
int64_t r15 = arg2
void* r14 = arg1
enum WIN32_ERROR result

if (arg5 != 0)
    uint64_t var_100
    uint8_t buffer[0x80]
    result = sub_14284cac0(r12, arg4, &buffer, 0x94, &var_100)
    
    if (result s>= NO_ERROR)
        HANDLE rax_3 = CreateFile2(arg5, 0x40010000, FILE_SHARE_NONE, CREATE_ALWAYS, nullptr)
        HANDLE rbx_1 = rax_3
        
        if (rax_3 == -1)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            uint64_t rdi_1 = var_100
            uint32_t numberOfBytesWritten
            char fileInformation
            
            if (WriteFile(rbx_1, &buffer, rdi_1.d, &numberOfBytesWritten, nullptr) == 0)
                enum WIN32_ERROR result_3 = GetLastError()
                enum WIN32_ERROR result_1 = result_3
                
                if (result_3 s> NO_ERROR)
                    result_1 = zx.d(result_3.w) | 0x80070000
                
                fileInformation = 1
                SetFileInformationByHandle(rbx_1, FileDispositionInfo, &fileInformation, 1)
                CloseHandle(rbx_1)
                result = result_1
            else if (zx.q(numberOfBytesWritten) == rdi_1)
                int32_t rax_7 = r12[0xd]
                
                if (rax_7 u< 2)
                label_14284ca5c:
                    fileInformation = 1
                    SetFileInformationByHandle(rbx_1, FileDispositionInfo, &fileInformation, 1)
                    CloseHandle(rbx_1)
                    result = 0x80004005
                else
                    int64_t var_108
                    enum WIN32_ERROR result_2
                    
                    if (rax_7 u> 3)
                        if (rax_7 != 4 || *(r12 + 0x18) != 1)
                            goto label_14284ca5c
                        
                        uint64_t rdx_2 = *(r12 + 0x10)
                        int64_t rcx_7 = 0
                        var_100 = rdx_2
                        int64_t r13_1 = 0
                        int64_t var_130_1 = 0
                        
                        if (*(r12 + 0x20) u<= 0)
                            goto label_14284c7fb
                        
                        while (true)
                            int64_t var_138_1 = 0
                            
                            if (rdx_2 != 0)
                                int64_t* r14_2 = r14 + 0x28 + r13_1 * 0x30
                                
                                while (true)
                                    if (r13_1 u>= r15)
                                        goto label_14284ca5c
                                    
                                    if (*r14_2 == 0)
                                    label_14284c83e:
                                        fileInformation = 1
                                        SetFileInformationByHandle(rbx_1, FileDispositionInfo, 
                                            &fileInformation, 1)
                                        CloseHandle(rbx_1)
                                        result = 0x80004003
                                        goto label_14284caa0
                                    
                                    int64_t var_f8
                                    enum WIN32_ERROR result_4 = sub_14284ac90(r12[0xc], r14_2[-5], 
                                        r14_2[-4], &var_108, &var_f8, 0)
                                    result_2 = result_4
                                    
                                    if (result_4 s>= NO_ERROR)
                                        int64_t rax_11 = var_f8
                                        
                                        if (r14_2[-1] != rax_11 || rax_11 u> 0xffffffff)
                                            int64_t r15_1 = r14_2[-2]
                                            int64_t rax_14 = var_108
                                            
                                            if (r15_1 u< rax_14)
                                                goto label_14284ca5c
                                            
                                            if (rax_14 u> 0xffffffff)
                                                break
                                            
                                            uint8_t* lpBuffer = *r14_2
                                            uint64_t rax_15 = sub_14284b130(r12[0xc], r14_2[-4])
                                            int64_t rdi_3 = 0
                                            
                                            if (rax_15 != 0)
                                                int64_t rcx_11 = var_108
                                                
                                                do
                                                    if (WriteFile(rbx_1, lpBuffer, rcx_11.d, 
                                                            &numberOfBytesWritten, nullptr) == 0)
                                                        goto label_14284ca17
                                                    
                                                    rcx_11 = var_108
                                                    
                                                    if (zx.q(numberOfBytesWritten) != rcx_11)
                                                        goto label_14284ca5c
                                                    
                                                    lpBuffer = &lpBuffer[r15_1]
                                                    rdi_3 += 1
                                                while (rdi_3 u< rax_15)
                                            
                                            r15 = arg2
                                            r12 = arg3
                                        label_14284c7a8:
                                            r13_1 += 1
                                            rdx_2 = var_100
                                            int64_t rcx_14 = var_138_1 + 1
                                            r14_2 = &r14_2[6]
                                            var_138_1 = rcx_14
                                            
                                            if (rcx_14 u< rdx_2)
                                                continue
                                            
                                            rcx_7 = var_130_1
                                            r14 = arg1
                                            goto label_14284c7cf
                                        else
                                            if (WriteFile(rbx_1, *r14_2, rax_11.d, 
                                                    &numberOfBytesWritten, nullptr) != 0)
                                                if (zx.q(numberOfBytesWritten) != var_f8)
                                                    goto label_14284ca5c
                                                
                                                goto label_14284c7a8
                                            
                                        label_14284ca17:
                                            enum WIN32_ERROR result_6 = GetLastError()
                                            result_2 = result_6
                                            
                                            if (result_6 s> NO_ERROR)
                                                result_2 = zx.d(result_6.w) | 0x80070000
                                    
                                label_14284ca32:
                                    fileInformation = 1
                                    SetFileInformationByHandle(rbx_1, FileDispositionInfo, 
                                        &fileInformation, 1)
                                    CloseHandle(rbx_1)
                                    result = result_2
                                    goto label_14284caa0
                                
                                break
                            
                        label_14284c7cf:
                            rcx_7 += 1
                            uint64_t rax_19 = rdx_2 u>> 1
                            var_130_1 = rcx_7
                            
                            if (rdx_2 u<= 1)
                                rax_19 = rdx_2
                            
                            rdx_2 = rax_19
                            var_100 = rax_19
                            
                            if (rcx_7 u>= *(r12 + 0x20))
                                goto label_14284c7fb
                        
                        goto label_14284c80e
                    
                    int64_t r13_2 = 0
                    int64_t rax_20 = 0
                    int64_t var_138_2 = 0
                    
                    if (*(r12 + 0x18) u<= 0)
                    label_14284c7fb:
                        CloseHandle(rbx_1)
                        result = NO_ERROR
                    else
                        while (true)
                            int64_t var_130_2 = 0
                            
                            if (*(r12 + 0x20) u> 0)
                                void* r14_4 = r14 + 0x28 + r13_2 * 0x30
                                
                                while (true)
                                    if (r13_2 u>= r15)
                                        goto label_14284ca5c
                                    
                                    if (*r14_4 == 0)
                                        goto label_14284c83e
                                    
                                    enum WIN32_ERROR result_5 = sub_14284ac90(r12[0xc], 
                                        *(r14_4 - 0x28), *(r14_4 - 0x20), &var_108, &var_100, 0)
                                    result_2 = result_5
                                    
                                    if (result_5 s< NO_ERROR)
                                        goto label_14284ca32
                                    
                                    uint64_t rax_24 = var_100
                                    
                                    if (*(r14_4 - 8) != rax_24 || rax_24 u> 0xffffffff)
                                        int64_t r15_2 = *(r14_4 - 0x10)
                                        int64_t rax_27 = var_108
                                        
                                        if (r15_2 u< rax_27)
                                            goto label_14284ca5c
                                        
                                        if (rax_27 u> 0xffffffff)
                                            break
                                        
                                        uint8_t* lpBuffer_1 = *r14_4
                                        uint64_t rax_28 = sub_14284b130(r12[0xc], *(r14_4 - 0x20))
                                        int64_t rdi_4 = 0
                                        
                                        if (rax_28 != 0)
                                            int64_t rcx_23 = var_108
                                            
                                            do
                                                if (WriteFile(rbx_1, lpBuffer_1, rcx_23.d, 
                                                        &numberOfBytesWritten, nullptr) == 0)
                                                    goto label_14284ca17
                                                
                                                rcx_23 = var_108
                                                
                                                if (zx.q(numberOfBytesWritten) != rcx_23)
                                                    goto label_14284ca5c
                                                
                                                lpBuffer_1 = &lpBuffer_1[r15_2]
                                                rdi_4 += 1
                                            while (rdi_4 u< rax_28)
                                        
                                        r15 = arg2
                                        r12 = arg3
                                    else
                                        if (WriteFile(rbx_1, *r14_4, rax_24.d, 
                                                &numberOfBytesWritten, nullptr) == 0)
                                            goto label_14284ca17
                                        
                                        if (zx.q(numberOfBytesWritten) != var_100)
                                            goto label_14284ca5c
                                    
                                    r13_2 += 1
                                    int64_t rcx_26 = var_130_2 + 1
                                    r14_4 += 0x30
                                    var_130_2 = rcx_26
                                    
                                    if (rcx_26 u>= *(r12 + 0x20))
                                        rax_20 = var_138_2
                                        r14 = arg1
                                        goto label_14284c9f7
                                
                                break
                            
                        label_14284c9f7:
                            rax_20 += 1
                            var_138_2 = rax_20
                            
                            if (rax_20 u>= *(r12 + 0x18))
                                CloseHandle(rbx_1)
                                result = NO_ERROR
                                goto label_14284caa0
                        
                    label_14284c80e:
                        fileInformation = 1
                        SetFileInformationByHandle(rbx_1, FileDispositionInfo, &fileInformation, 1)
                        CloseHandle(rbx_1)
                        result = 0x80070216
            else
                fileInformation = 1
                SetFileInformationByHandle(rbx_1, FileDispositionInfo, &fileInformation, 1)
                CloseHandle(rbx_1)
                result = 0x80004005
        else
            result = GetLastError()
            
            if (result s> NO_ERROR)
                result = zx.d(result.w) | 0x80070000
else
    result = 0x80070057

label_14284caa0:
__security_check_cookie(rax_1 ^ &var_168)
return result
