// 函数: sub_140fc5760
// 地址: 0x140fc5760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = *arg4
int64_t optval
sub_140b63580(&data_143e2b868, &optval)

if (*arg4 != optval)
    sub_140b63580(&data_143e2b878, &optval)
    
    if (*arg4 != optval)
        var_28 = *(*(*arg1 + 0x118))(arg1, &optval)
        sub_140b63580(&data_143e2b868, &optval)
        
        if (var_28 != optval)
            sub_140b63580(&data_143e2b878, &optval)
            
            if (var_28 != optval)
                return 0

char rax_8 = sub_140b5b8a0(*arg2, 0x118)
int32_t protocol = 6

if (rax_8 != 0)
    protocol = 0x11

int32_t rbx_1
rbx_1.b = rax_8 != 0
SOCKET rax_10
int32_t r8_1
rax_10, r8_1 = socket((*(*arg1 + 0x120))(arg1, &var_28), rbx_1 + 1, protocol)
void* const result

if (rax_10 == -1)
    result = nullptr
else
    result =
        (*(*arg1 + 0x158))(arg1, rax_10, zx.q(sbb.d(r8_1, r8_1, rax_8 != 0) + 2), arg3, &var_28)

if (result != 0)
    SetHandleInformation(*(result + 0x28), 1, 0)
    int64_t rdx_9 = data_143e2b878
    int64_t optval_1 = *(result + 0x20)
    optval = optval_1
    int32_t* rax_12
    
    if ((-0x8000000000000000 & rdx_9) == 0 || optval_1 != 0)
        int32_t var_20
        int64_t rcx_7 = *sub_140b63580(&data_143e2b878, &var_20)
        rax_12.b = optval == rcx_7
    else
        int64_t* rcx_6 = &optval
        char* rdx_10 = rdx_9 & 0x7fffffffffffffff
        
        if (data_143e2b884 != 0)
            rax_12 = sub_140b5b9d0(rcx_6, rdx_10)
        else
            rax_12 = sub_140b5b8c0(rcx_6, rdx_10)
    
    if (rax_12.b != 0)
        optval.d = 0
        setsockopt(*(result + 0x28), 0x29, 0x1b, &optval, 4)

return result
