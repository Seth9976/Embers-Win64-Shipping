// 函数: sub_140fc9c60
// 地址: 0x140fc9c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 8)
enum SEND_RECV_FLAGS flags_1 = arg5 & 2
enum SEND_RECV_FLAGS flags = flags_1 | MSG_WAITALL

if ((arg5 & 0x100) == 0)
    flags = flags_1

int32_t rax_2 = recv(*(arg1 + 0x28), arg2, arg3, flags)
*arg4 = rax_2

if (rax_2 s< 0)
    if (rdi == 2)
        int64_t* rcx_1 = *(arg1 + 0x38)
        rax_2 = (*(*rcx_1 + 0xc0))(rcx_1)
    
    if (rdi != 2 || rax_2 != 7)
        rax_2.b = 0
        *arg4 = 0
        return rax_2
    
    *arg4 = 0
else if (rdi == 2 && rax_2 s<= 0)
    rax_2.b = 0
    return rax_2

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t rax_4
rax_4.b = 1
*(arg1 + 0x30) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
return rax_4
