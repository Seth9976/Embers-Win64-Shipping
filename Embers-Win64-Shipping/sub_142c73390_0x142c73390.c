// 函数: sub_142c73390
// 地址: 0x142c73390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int64_t r14 = sx.q(arg2)
SOCKET r13 = arg1[r14 + 0x47]
int64_t rbx_1 = r14 + ((r14 + 0x16) << 2)
void* rbx_2 = &arg1[rbx_1]

if (*(&arg1[rbx_1] + 4) == 2)
    *arg4 = 1
    return 0

int64_t r8
int32_t result

if (*(rbx_2 + 8) != 0)
label_142c73438:
    
    while (true)
        if (*(rbx_2 + 8) - 1 u> 2)
            if (*(rbx_2 + 8) == 4)
                result = sub_142c74230(arg1, r14.d, arg5)
            
            if (*(rbx_2 + 8) != 4 || result == 0)
                if (*(rbx_2 + 8) != 5)
                    *arg4 = 0
                else
                    *(rbx_2 + 4) = 2
                    arg1[r14 + 0x4c] = sub_142c743e0
                    arg1[r14 + 0x4e] = sub_142c74500
                    *arg4 = 1
                
                result = 0
                *(rbx_2 + 8) = 0
            
            return result
        
        int64_t rax_4
        rax_4, r8 = sub_142c65dc0(rsi, nullptr, 1, rbx_2)
        
        if (rax_4 s< 0)
            break
        
        int32_t rdx_1 = *(rbx_2 + 8)
        
        if (rdx_1 - 2 u<= 1)
            SOCKET r8_1 = -1
            
            if (rdx_1 == 3)
                r8_1 = r13
            
            SOCKET rcx_5 = -1
            
            if (rdx_1 == 2)
                rcx_5 = r13
            
            if (arg3 != 0)
                rax_4 = 0
            
            int32_t rax_5
            rax_5, r8 = sub_142c64080(rcx_5, -1, r8_1, rax_4)
            
            if (rax_5 s< 0)
                sub_142c64760(rsi, "select/poll on SSL socket, errno: %d", zx.q(WSAGetLastError()), 
                    arg5)
                return 0x23
            
            if (rax_5 == 0)
                if (arg3 == 0)
                    break
                
                *arg4 = 0
                return 0
        
        result, arg5 = sub_142c73f30(arg1, r14.d, arg5)
        
        if (result != 0)
            return result
        
        if (arg3 != 0)
            if (*(rbx_2 + 8) - 1 u<= 2)
                return result
else
    int64_t rax_1
    rax_1, r8 = sub_142c65dc0(rsi, nullptr, 1, rbx_2)
    
    if (rax_1 s>= 0)
        result, arg5 = sub_142c73560(arg1, zx.q(r14.d))
        
        if (result != 0)
            return result
        
        goto label_142c73438
sub_142c64760(rsi, "SSL connection timeout", r8, arg5)
return 0x1c
