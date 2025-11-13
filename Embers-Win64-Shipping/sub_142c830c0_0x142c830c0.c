// 函数: sub_142c830c0
// 地址: 0x142c830c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* rdi = *arg1
uint64_t r14
r14.b = 1
int64_t rax_2 = arg1[0x47]
uint8_t* lpBuffer = *(rdi + 0xa80)
*arg2 = 1
int32_t result = sub_142c83a40(arg1)

if (result == 0)
    int32_t* rax_3 = *(rdi + 0x250)
    result = sub_142c836d0(arg1)
    
    if (result == 0)
        int512_t zmm2_1
        result, zmm2_1 = sub_142c839b0(rdi)
        int32_t result_1 = result
        
        if (result == 0)
            HMODULE rax_4 = sub_142c892e0("WS2_32.DLL")
            
            if (rax_4 != 0)
                int64_t rax_6 = GetProcAddress(rax_4, "WSACreateEvent")
                enum WIN32_ERROR rax_7
                char const* const rdx
                
                if (rax_6 != 0)
                    int64_t rax_8 = GetProcAddress(rax_4, "WSACloseEvent")
                    
                    if (rax_8 == 0)
                        rax_7 = GetLastError()
                        rdx = "failed to find WSACloseEvent function (%u)"
                        goto label_142c831e0
                    
                    int64_t rax_9 = GetProcAddress(rax_4, "WSAEventSelect")
                    enum WIN32_ERROR rax_10
                    char const* const rdx_1
                    
                    if (rax_9 != 0)
                        int64_t rax_11 = GetProcAddress(rax_4, "WSAEnumNetworkEvents")
                        
                        if (rax_11 == 0)
                            rax_10 = GetLastError()
                            rdx_1 = "failed to find WSAEnumNetworkEvents function (%u)"
                            goto label_142c83272
                        
                        HANDLE handles_1 = rax_6()
                        
                        if (handles_1 == 0)
                            rax_10 = WSAGetLastError()
                            rdx_1 = "WSACreateEvent failed (%d)"
                            goto label_142c83272
                        
                        if (rax_9(rax_2, handles_1, 0x21) != -1)
                            HANDLE rax_13 = GetStdHandle(STD_INPUT_HANDLE)
                            HANDLE handles = handles_1
                            HANDLE var_b0_1 = rax_13
                            uint32_t dwMilliseconds
                            uint32_t nCount
                            
                            if (GetFileType(rax_13) == FILE_TYPE_PIPE || *(rdi + 0x2f8) != 0)
                                dwMilliseconds = 0x64
                                nCount = 1
                            else
                                dwMilliseconds = 0x3e8
                                nCount = 2
                            
                            uint32_t dwMilliseconds_1 = dwMilliseconds
                            uint32_t* lpBytesLeftThisMessage
                            
                            while (true)
                                uint64_t rsi_3 = zx.q(*(rdi + 0x598))
                                enum WAIT_EVENT rax_15 =
                                    WaitForMultipleObjects(nCount, &handles, 0, dwMilliseconds)
                                int64_t* var_118
                                
                                if (rax_15 == WAIT_OBJECT_0)
                                    int32_t var_78 = 0
                                    
                                    if (rax_11(rax_2, handles_1, &var_78) == -1)
                                        enum WSA_ERROR rax_21 = WSAGetLastError()
                                        
                                        if (rax_21 != WSAEINPROGRESS)
                                            zmm2_1 = sub_142c64850(rdi, 
                                                "WSAEnumNetworkEvents failed (%d)", zx.q(rax_21), 
                                                zmm2_1)
                                        label_142c8349b:
                                            result_1 = 0x1a
                                        labelid_1e:
                                            r14.b = 0
                                    else if ((var_78.b & 1) == 0)
                                    label_142c83597:
                                        r14 = zx.q(r14.b)
                                        
                                        if ((var_78.b & 0x20) != 0)
                                            r14 = 0
                                    else
                                        int64_t var_d0
                                        var_118 = &var_d0
                                        int32_t result_4 = sub_142c648f0(arg1, rax_2, lpBuffer, 
                                            sx.q(*(rdi + 0x598)), var_118)
                                        result_1 = result_4
                                        
                                        if (result_4 != 0x51)
                                            if (result_4 != 0)
                                            labelid_1e:
                                                r14.b = 0
                                            else
                                                int64_t r8_13 = var_d0
                                                
                                                if (r8_13 s<= 0)
                                                label_142c834a0:
                                                    r14.b = 0
                                                else
                                                    int32_t result_5
                                                    result_5, zmm2_1 =
                                                        sub_142c84b30(arg1, lpBuffer, r8_13, zmm2_1)
                                                    result_1 = result_5
                                                    
                                                    if (result_5 == 0)
                                                        if (*rax_3 != result_5
                                                                && rax_3[1] == result_5)
                                                            zmm2_1 = sub_142c83ad0(arg1)
                                                            rax_3[1] = 1
                                                        
                                                        goto label_142c83597
                                                    
                                                label_142c834a0_1:
                                                    r14.b = 0
                                else
                                    uint32_t numberOfBytesRead
                                    
                                    if (rax_15 == 0x1)
                                        var_118 = nullptr
                                        
                                        if (ReadFile(rax_13, lpBuffer, rsi_3.d, &numberOfBytesRead, 
                                                var_118) == 0)
                                            goto label_142c8349b
                                        
                                        int32_t result_3 =
                                            sub_142c84490(arg1, lpBuffer, zx.q(numberOfBytesRead))
                                        result_1 = result_3
                                        
                                        if (result_3 != 0)
                                        label_142c834a0_2:
                                            r14.b = 0
                                    else if (rax_15 == 0x102)
                                        while (true)
                                            uint64_t numberOfBytesRead_1
                                            
                                            if (*(rdi + 0x2f8) == 0)
                                                lpBytesLeftThisMessage = nullptr
                                                var_118 = &numberOfBytesRead
                                                
                                                if (PeekNamedPipe(rax_13, nullptr, 0, nullptr, 
                                                        var_118, lpBytesLeftThisMessage) == 0)
                                                    goto label_142c8349b
                                                
                                                if (numberOfBytesRead == 0)
                                                    break
                                                
                                                var_118 = nullptr
                                                
                                                if (ReadFile(rax_13, lpBuffer, rsi_3.d, 
                                                        &numberOfBytesRead, var_118) == 0)
                                                    goto label_142c8349b
                                                
                                                numberOfBytesRead_1 = zx.q(numberOfBytesRead)
                                            else
                                                numberOfBytesRead_1 = (*(rdi + 0x4e80))(lpBuffer, 
                                                    1, rsi_3, *(rdi + 0x4e88), var_118, 
                                                    lpBytesLeftThisMessage)
                                                
                                                if (numberOfBytesRead_1 == 0x10000000)
                                                    goto label_142c8349b
                                                
                                                if (numberOfBytesRead_1 == 0x10000001)
                                                    break
                                                
                                                if (numberOfBytesRead_1 == 0)
                                                    break
                                                
                                                numberOfBytesRead = numberOfBytesRead_1.d
                                            
                                            int32_t result_2 = sub_142c84490(arg1, lpBuffer, 
                                                zx.q(numberOfBytesRead_1.d))
                                            result_1 = result_2
                                            
                                            if (result_2 != 0)
                                                goto label_142c834a0_2
                                
                                if (*(rdi + 0x380) != 0)
                                    uint64_t var_88[0x2]
                                    uint64_t* rax_22 = sub_142c59600(&var_88)
                                    int128_t var_a8 = *(arg1 + 0x228)
                                    int128_t var_98 = *rax_22
                                    int64_t rax_23
                                    int64_t r8_11
                                    rax_23, r8_11 = sub_142c595d0(&var_98, &var_a8)
                                    
                                    if (rax_23 s>= sx.q(*(rdi + 0x380)))
                                        zmm2_1 = sub_142c64760(rdi, "Time-out", r8_11, zmm2_1)
                                        result_1 = 0x1c
                                        break
                                
                                if (r14.b == 0)
                                    break
                                
                                dwMilliseconds = dwMilliseconds_1
                            
                            if (rax_8(handles_1) == 0)
                                zmm2_1 = sub_142c64850(rdi, "WSACloseEvent failed (%d)", 
                                    zx.q(WSAGetLastError()), zmm2_1)
                            
                            if (FreeLibrary(rax_4) == 0)
                                zmm2_1 = sub_142c64850(rdi, "FreeLibrary(wsock2) failed (%u)", 
                                    zx.q(GetLastError()), zmm2_1)
                            
                            lpBytesLeftThisMessage.d = 0xffffffff
                            sub_142c68d40(arg1, 0xffffffff, -1, 0, zmm2_1, 0, 
                                lpBytesLeftThisMessage.d, nullptr)
                            result = result_1
                        else
                            rax_8(handles_1)
                            FreeLibrary(rax_4)
                            result = 0
                    else
                        rax_10 = GetLastError()
                        rdx_1 = "failed to find WSAEventSelect function (%u)"
                    label_142c83272:
                        sub_142c64760(rdi, rdx_1, zx.q(rax_10), zmm2_1)
                        FreeLibrary(rax_4)
                        result = 2
                else
                    rax_7 = GetLastError()
                    rdx = "failed to find WSACreateEvent function (%u)"
                label_142c831e0:
                    sub_142c64760(rdi, rdx, zx.q(rax_7), zmm2_1)
                    FreeLibrary(rax_4)
                    result = 2
            else
                sub_142c64760(rdi, "failed to load WS2_32.DLL (%u)", zx.q(GetLastError()), zmm2_1)
                result = result_1 + 2

__security_check_cookie(rax_1 ^ &var_138)
return result
