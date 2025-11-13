// 函数: sub_14089a950
// 地址: 0x14089a950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = malloc(0x330)

if (result != 0)
    memset(result, 0, 0x330)
    *(result + 0x10) = 0xffffffff
    char* rax
    
    if (arg2 != 0)
        rax = _strdup(arg2)
        *(result + 0x320) = rax
    
    if (arg2 == 0 || rax != 0)
        int64_t* rax_1 = malloc(0x20)
        
        if (rax_1 != 0)
            *rax_1 = arg1
            rax_1[1] = arg3
            rax_1[2] = result
            void** rax_2 = malloc(0x10)
            HANDLE rax_3
            
            if (rax_2 != 0)
                rax_3 = CreateSemaphoreW(nullptr, 0, 0x8000, nullptr)
                *rax_2 = rax_3
                rax_2[1].d = 0
            
            if (rax_2 == 0 || rax_3 != 0)
                rax_1[3] = rax_2
                
                if (rax_2 != 0)
                    CRITICAL_SECTION* lpCriticalSection_2 = data_143ceaee8
                    
                    if (lpCriticalSection_2 != 0)
                        goto label_14089aa92
                    
                    CRITICAL_SECTION* lpCriticalSection = malloc(zx.q((&lpCriticalSection_2[1]).d))
                    lpCriticalSection_2 = lpCriticalSection
                    
                    if (lpCriticalSection == 0)
                        data_143ceaee8 = lpCriticalSection_2
                    else
                        InitializeCriticalSectionAndSpinCount(lpCriticalSection, 0x7d0)
                        data_143ceaee8 = lpCriticalSection_2
                    label_14089aa92:
                        EnterCriticalSection(lpCriticalSection_2)
                        int32_t rax_5 = data_143ceaedc
                        int32_t rcx_11 = data_143ceaed8
                        
                        if (rax_5 != rcx_11)
                            *(data_143ceaee0 + (sx.q(rax_5) << 3)) = result
                            data_143ceaedc += 1
                        else
                            int64_t rax_7 = realloc(data_143ceaee0, sx.q(rcx_11 + 0x20) << 3)
                            
                            if (rax_7 != 0)
                                data_143ceaed8 += 0x20
                                data_143ceaee0 = rax_7
                                *(rax_7 + (sx.q(data_143ceaedc) << 3)) = result
                                data_143ceaedc += 1
                        
                        CRITICAL_SECTION* lpCriticalSection_1 = data_143ceaee8
                        
                        if (lpCriticalSection_1 != 0)
                            LeaveCriticalSection(lpCriticalSection_1)
                    
                    void** rax_9 = malloc(0x10)
                    
                    if (rax_9 != 0)
                        rax_9[1] = _endthreadex
                        uint32_t arg_20
                        uint32_t* var_10_1 = &arg_20
                        *rax_9 = rax_1
                        arg_20 = 0
                        uintptr_t rax_10
                        
                        if (_beginthreadex == 0)
                            rax_10 = CreateThread(nullptr, 0, j_sub_14089a360, rax_9, 
                                THREAD_CREATE_RUN_IMMEDIATELY, var_10_1)
                        else
                            rax_10 = _beginthreadex(nullptr, 0, j_sub_14089a360, rax_9, 0, var_10_1)
                        
                        *(result + 8) = rax_10
                    
                    int64_t* rsi_2 = rax_1[3]
                    
                    if (rsi_2 != 0 && WaitForSingleObject(*rsi_2, 0xffffffff) == WAIT_OBJECT_0)
                        rsi_2[1].d -= 1
                    
                    int64_t* rsi_3 = rax_1[3]
                    
                    if (rsi_3 != 0)
                        HANDLE hObject = *rsi_3
                        
                        if (hObject != 0)
                            CloseHandle(hObject)
                            *rsi_3 = 0
                        
                        free(rsi_3)
                    
                    free(rax_1)
                    return result
            else
                free(rax_2)
                rax_1[3] = 0
            
            free(*(result + 0x320))
            free(result)
            free(rax_1)
            return nullptr
        
        free(*(result + 0x320))
    
    free(result)

return nullptr
