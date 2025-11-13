// 函数: sub_142c64080
// 地址: 0x142c64080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_718
int64_t rax_1 = __security_cookie ^ &var_718
int32_t result_1 = 0
int64_t var_6d8 = 0
int64_t rdi = arg4
int32_t var_6d0 = 0

if (arg4 s>= 0x7fffffff)
    rdi = 0x7fffffff

int32_t r15 = 0
uint64_t result

if (arg1 != -1 || arg2 != arg1 || arg3 != arg1)
    int128_t var_6c8
    int128_t zmm6
    
    if (rdi s<= 0)
        zmm6 = var_6d8.o
    else
        r15 = rdi.d
        zmm6 = *sub_142c59600(&var_6c8)
    
    SOCKET r8 = -1
    FD_SET var_278
    var_278.fd_count = 0
    FD_SET param1
    param1.fd_count = 0
    int32_t rcx_2 = 0
    uint32_t fd_count = 0
    void var_690
    void var_270
    
    if (arg1 != -1)
        var_690.q = arg1
        fd_count = 1
        param1.fd_count = 1
        rcx_2 = 1
        var_270.q = arg1
        r8 = arg1
        var_278.fd_count = 1
    
    if (arg2 != -1)
        int32_t rdx = 0
        
        if (fd_count != 0)
            while (*(&var_690 + (zx.q(rdx) << 3)) != arg2)
                rdx += 1
                
                if (rdx u>= fd_count)
                    break
        
        if (rdx == fd_count && fd_count u< 0x40)
            *(&var_690 + (zx.q(rdx) << 3)) = arg2
            fd_count = param1.fd_count + 1
            param1.fd_count = fd_count
        
        int32_t rdx_1 = 0
        
        if (rcx_2 != 0)
            while (*(&var_270 + (zx.q(rdx_1) << 3)) != arg2)
                rdx_1 += 1
                
                if (rdx_1 u>= rcx_2)
                    break
        
        if (rdx_1 == rcx_2 && rcx_2 u< 0x40)
            *(&var_270 + (zx.q(rdx_1) << 3)) = arg2
            rcx_2 = var_278.fd_count + 1
            var_278.fd_count = rcx_2
        
        if (arg2 u> r8)
            r8 = arg2
    
    FD_SET param1_1
    param1_1.fd_count = 0
    
    if (arg3 != -1)
        param1_1.fd_array[0] = arg3
        int32_t rdx_2 = 0
        param1_1.fd_count = 1
        
        if (rcx_2 != 0)
            while (*(&var_270 + (zx.q(rdx_2) << 3)) != arg3)
                rdx_2 += 1
                
                if (rdx_2 u>= rcx_2)
                    break
        
        if (rdx_2 == rcx_2 && rcx_2 u< 0x40)
            *(&var_270 + (zx.q(rdx_2) << 3)) = arg3
            var_278.fd_count += 1
        
        if (arg3 u> r8)
            r8 = arg3
    
    int64_t* timeout = &var_6d8
    int32_t nfds = (r8 + 1).d
    
    if (rdi s< 0)
        timeout = nullptr
    
    int32_t nfds_1 = nfds
    
    while (true)
        if (rdi s> 0)
            var_6d8.d = r15 s/ 0x3e8
            var_6d8:4.d = r15 s% 0x3e8 * 0x3e8
        else if (rdi == 0)
            var_6d8 = 0
        
        FD_SET* writefds = &param1_1
        FD_SET* readfds = &param1
        
        if (param1_1.fd_count == 0)
            writefds = nullptr
        
        if (fd_count == 0)
            readfds = nullptr
        
        int32_t rax_13 = select(nfds, readfds, writefds, &var_278, timeout)
        
        if (rax_13 == 0xffffffff)
            enum WSA_ERROR rax_14 = WSAGetLastError()
            
            if (rax_14 == WSA_WAIT_EVENT_0)
            label_142c642e0:
                
                if (rdi s<= 0)
                    fd_count = param1.fd_count
                    nfds = nfds_1
                    continue
                
                int128_t var_6b8 = zmm6
                uint64_t var_6a8[0x2]
                var_6c8 = *sub_142c59600(&var_6a8)
                r15 = rdi.d - sub_142c595d0(&var_6c8, &var_6b8)
                
                if (r15 s<= 0)
                    result = 0
                    break
                
                fd_count = param1.fd_count
                nfds = nfds_1
                continue
            else if (data_14401b0c8 == 0 && rax_14 == WSAEINTR)
                goto label_142c642e0
        else if (rax_13 s>= 0)
            if (rax_13 == 0)
                result = 0
                break
            
            if (arg1 != -1)
                if (__WSAFDIsSet(arg1, &param1) != 0)
                    result_1 = 1
                
                if (__WSAFDIsSet(arg1, &var_278) != 0)
                    result_1 |= 4
            
            if (arg2 != -1)
                if (__WSAFDIsSet(arg2, &param1) != 0)
                    result_1 |= 8
                
                if (__WSAFDIsSet(arg2, &var_278) != 0)
                    result_1 |= 4
            
            if (arg3 != -1)
                if (__WSAFDIsSet(arg3, &param1_1) != 0)
                    result_1 |= 2
                
                if (__WSAFDIsSet(arg3, &var_278) != 0)
                    result_1 |= 4
            
            result = zx.q(result_1)
            break
        
        result = 0xffffffff
        break
else
    int32_t temp0_1 = rdi.d
    
    if (temp0_1 == 0)
        result = 0
    else if (temp0_1 s>= 0)
        Sleep(rdi.d)
        result = 0
    else
        WSASetLastError(0x2726)
        result = zx.q(arg1.d)

__security_check_cookie(rax_1 ^ &var_718)
return result
