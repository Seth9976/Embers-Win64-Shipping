// 函数: sub_142c66a40
// 地址: 0x142c66a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t var_58 = 4
int32_t optval_1
optval_1.b = *(arg1 + 0x834) != 0
int32_t optval = optval_1
int32_t result

if (setsockopt(arg2, 0xffff, 8, &optval, var_58) s>= 0)
    int32_t rcx_2 = *(arg1 + 0x838)
    int32_t lpvInBuffer = 1
    int32_t optval_2 = sub_142c56200(rcx_2) * 0x3e8
    optval = optval_2
    int32_t optval_4 = optval_2
    int32_t optval_3 = sub_142c56200(*(arg1 + 0x83c)) * 0x3e8
    LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine = nullptr
    OVERLAPPED* lpOverlapped = nullptr
    uint32_t var_24
    uint32_t* lpcbBytesReturned = &var_24
    uint32_t cbOutBuffer = 0
    optval = optval_3
    int32_t optval_5 = optval_3
    var_58.q = 0
    result = WSAIoctl(arg2, 0x98000004, &lpvInBuffer, 0xc, var_58, cbOutBuffer, lpcbBytesReturned, 
        lpOverlapped, lpCompletionRoutine)
    
    if (result != 0)
        WSAGetLastError()
        result = sub_142c64850(arg1, "Failed to set SIO_KEEPALIVE_VALS on fd %d: %d\n", 
            zx.q(arg2.d), arg3)
else
    result = sub_142c64850(arg1, "Failed to set SO_KEEPALIVE on fd %d\n", arg2, arg3)

__security_check_cookie(rax_1 ^ &var_78)
return result
