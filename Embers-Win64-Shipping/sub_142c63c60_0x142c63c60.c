// 函数: sub_142c63c60
// 地址: 0x142c63c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_718
int64_t rax_1 = __security_cookie ^ &var_718
int32_t result_2 = 0
uint64_t i_2 = zx.q(arg2)
uint32_t r12 = 0
int64_t var_6d8 = 0
int32_t var_6d0 = 0
uint64_t result

if (arg1 != 0)
    int32_t rdx = 0
    
    if (i_2.d != 0)
        int64_t* rax_2 = arg1
        
        while (true)
            if (*rax_2 != -1)
                int128_t var_6b8
                int128_t zmm6
                
                if (arg3 s<= 0)
                    zmm6 = var_6d8.o
                else
                    r12 = arg3
                    zmm6 = *sub_142c59600(&var_6b8)
                
                int64_t j_1 = -1
                FD_SET param1
                param1.fd_count = 0
                void* rsi_1 = &arg1[1]
                FD_SET param1_1
                param1_1.fd_count = 0
                uint32_t fd_count_1 = 0
                FD_SET param1_2
                param1_2.fd_count = 0
                uint32_t fd_count_2 = 0
                uint32_t fd_count = 0
                uint64_t i_3 = i_2
                uint64_t i
                
                do
                    int64_t j = *(rsi_1 - 8)
                    *(rsi_1 + 2) = 0
                    
                    if (j != -1)
                        int16_t r9_1 = *rsi_1
                        
                        if ((0x710 & r9_1) != 0)
                            if (j u> j_1)
                                j_1 = j
                            
                            if ((0x300 & r9_1) != 0)
                                int32_t rcx_1 = 0
                                var_680
                                
                                if (fd_count_1 != 0)
                                    while (*(&var_680 + (zx.q(rcx_1) << 3)) != j)
                                        rcx_1 += 1
                                        
                                        if (rcx_1 u>= fd_count_1)
                                            break
                                
                                if (rcx_1 == fd_count_1 && fd_count_1 u< 0x40)
                                    *(&var_680 + (zx.q(rcx_1) << 3)) = j
                                    fd_count_1 = param1.fd_count + 1
                                    param1.fd_count = fd_count_1
                            
                            if ((r9_1.b & 0x10) != 0)
                                int32_t rcx_2 = 0
                                var_470
                                
                                if (fd_count_2 != 0)
                                    while (*(&var_470 + (zx.q(rcx_2) << 3)) != j)
                                        rcx_2 += 1
                                        
                                        if (rcx_2 u>= fd_count_2)
                                            break
                                
                                if (rcx_2 == fd_count_2 && fd_count_2 u< 0x40)
                                    *(&var_470 + (zx.q(rcx_2) << 3)) = j
                                    fd_count_2 = param1_1.fd_count + 1
                                    param1_1.fd_count = fd_count_2
                            
                            if ((0x600 & r9_1) != 0)
                                int32_t rcx_3 = 0
                                var_260
                                
                                if (fd_count != 0)
                                    while (*(&var_260 + (zx.q(rcx_3) << 3)) != j)
                                        rcx_3 += 1
                                        
                                        if (rcx_3 u>= fd_count)
                                            break
                                
                                if (rcx_3 == fd_count && fd_count u< 0x40)
                                    *(&var_260 + (zx.q(rcx_3) << 3)) = j
                                    fd_count = param1_2.fd_count + 1
                                    param1_2.fd_count = fd_count
                    
                    rsi_1 += 0x10
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                
                if (fd_count_1 != 0 || fd_count_2 != 0 || fd_count != 0)
                    int64_t* timeout = &var_6d8
                    
                    if (arg3 s< 0)
                        timeout = nullptr
                    
                    while (true)
                        if (arg3 s> 0)
                            var_6d8.d = r12 s/ 0x3e8
                            var_6d8:4.d = r12 s% 0x3e8 * 0x3e8
                        else if (arg3 == 0)
                            var_6d8 = 0
                        
                        FD_SET* exceptfds = &param1_2
                        
                        if (fd_count == 0)
                            exceptfds = nullptr
                        
                        FD_SET* writefds = &param1_1
                        FD_SET* readfds = &param1
                        
                        if (fd_count_2 == 0)
                            writefds = nullptr
                        
                        if (fd_count_1 == 0)
                            readfds = nullptr
                        
                        int32_t rax_14 = select((j_1 + 1).d, readfds, writefds, exceptfds, timeout)
                        
                        if (rax_14 == 0xffffffff)
                            enum WSA_ERROR rax_15 = WSAGetLastError()
                            
                            if (rax_15 == WSA_WAIT_EVENT_0)
                            label_142c63f6d:
                                
                                if (arg3 s<= 0)
                                    fd_count_1 = param1.fd_count
                                    fd_count_2 = param1_1.fd_count
                                    fd_count = param1_2.fd_count
                                    continue
                                
                                int128_t var_6a8 = zmm6
                                uint64_t var_698[0x2]
                                var_6b8 = *sub_142c59600(&var_698)
                                r12 = arg3 - sub_142c595d0(&var_6b8, &var_6a8)
                                
                                if (r12 s<= 0)
                                    result = 0
                                    break
                                
                                fd_count_1 = param1.fd_count
                                fd_count_2 = param1_1.fd_count
                                fd_count = param1_2.fd_count
                                continue
                            else if (data_14401b0c8 == 0 && rax_15 == WSAEINTR)
                                goto label_142c63f6d
                        else if (rax_14 s>= 0)
                            if (rax_14 == 0)
                                result = 0
                                break
                            
                            int32_t result_1 = 0
                            void* rbx_1 = arg1 + 0xa
                            uint64_t i_1
                            
                            do
                                SOCKET fd = *(rbx_1 - 0xa)
                                *rbx_1 = 0
                                
                                if (fd != -1)
                                    if (__WSAFDIsSet(fd, &param1) != 0)
                                        *rbx_1 |= 0x300
                                    
                                    if (__WSAFDIsSet(*(rbx_1 - 0xa), &param1_1) != 0)
                                        *rbx_1 |= 0x10
                                    
                                    if (__WSAFDIsSet(*(rbx_1 - 0xa), &param1_2) != 0)
                                        *rbx_1 |= 0x400
                                    
                                    if (*rbx_1 != 0)
                                        result_1 += 1
                                
                                rbx_1 += 0x10
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                            result = zx.q(result_1)
                            break
                        
                        result = 0xffffffff
                        break
                else
                    if (arg3 != 0)
                        if (arg3 s>= 0)
                            Sleep(arg3)
                        else
                            WSASetLastError(0x2726)
                            result_2 = -1
                    
                    result = zx.q(result_2)
                
                goto label_142c63eb9
            
            rdx += 1
            rax_2 = &rax_2[2]
            
            if (rdx u>= i_2.d)
                break

if (arg3 == 0)
    result = 0
else if (arg3 s>= 0)
    Sleep(arg3)
    result = 0
else
    WSASetLastError(0x2726)
    result = 0xffffffff

label_142c63eb9:
__security_check_cookie(rax_1 ^ &var_718)
return result
