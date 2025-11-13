// 函数: sub_140a5a520
// 地址: 0x140a5a520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = arg3
void* rsi = arg1

if (arg3 == 0)
    sub_140a58510(arg1, arg2)
    return 0

if (zx.q(arg2.w) != 0)
    int16_t* r14_2 = arg2 & 0xffffffffffff0000
    char rax_2 = *(r14_2 + 3)
    
    if (rax_2 != 0xe3)
        int32_t var_30_1 = 0xe3
        uint32_t var_38_1 = zx.d(rax_2)
        sub_140af98a0("Unknown", 0x4cc, 
            FMallocBinned2 Attempt to realloc an unrecognized block %p   canary == 0x%x != 0x%x", r14_2)
        sub_140afbb40()
    
    uint64_t r15_1 = zx.q(*r14_2)
    uint64_t rax_4
    rax_4.b = rbx u<= r15_1
    uint64_t rcx
    rcx.b = arg4 u<= 0x10
    
    if ((rcx.d & rax_4.d) != 0)
        uint32_t rcx_1 = zx.d(r14_2[1].b)
        
        if (rcx_1 == 0 || rbx u> zx.q((&data_143db7150)[zx.q(0x2d - rcx_1)]))
            return arg2
    
    rcx.b = arg4 u<= 0x10
    rax_4.b = rbx u<= 0x7ff0
    int64_t* rax_6
    
    if ((rax_4.b & rcx.b) == 0)
        rax_6 = sub_140a59900(rsi, rbx, arg4)
    else
        rax_6 = sub_140a59a80(rsi, rbx)
    
    if (rbx u<= r15_1)
        r15_1 = rbx
    
    memcpy(rax_6, arg2, r15_1.d)
    sub_140a58510(rsi, arg2)
    return rax_6

if (arg2 == 0)
    arg1.b = arg4 u<= 0x10
    uint64_t rax_1
    rax_1.b = rbx u<= 0x7ff0
    
    if ((rax_1.b & arg1.b) == 0)
        return sub_140a59900(rsi, rbx, arg4)
    
    return sub_140a59a80(rsi, rbx)

EnterCriticalSection(arg1 + 0x888)
void* rax_8 = sub_140a57f10(rsi, arg2)

if (rax_8 == 0)
    sub_140af98a0("Unknown", 0x35d, FMallocBinned2 Attempt to realloc an unrecognized block %p", 
        arg2)
    sub_140afbb40()

int64_t rax_9 = sub_140a593d0(rax_8)
uint64_t r14_4 = zx.q(*(rax_8 + 4)) << 4
bool rdx_5 = arg4 u<= 0x10 & rbx u<= 0x7ff0
uint64_t* rbp_2

if (rbx u> rax_9)
    if (rdx_5 == 0)
        rbp_2 = sub_140a59900(rsi, rbx, arg4)
        LeaveCriticalSection(rsi + 0x888)
    else
        LeaveCriticalSection(rsi + 0x888)
        rbp_2 = sub_140a59a80(rsi, rbx)
else if (rdx_5 != 0)
    LeaveCriticalSection(rsi + 0x888)
    rbp_2 = sub_140a59a80(rsi, rbx)
else
    uint64_t rax_10 = zx.q(data_143db71c0)
    
    if (((rax_10 - 1 + rbx) & not.q(rax_10 - 1)) u>= rax_9)
        LeaveCriticalSection(rsi + 0x888)
        uint64_t rax_13 = 0x10
        
        if (arg4 u>= 0x10)
            rax_13 = zx.q(arg4)
        
        if (rbx u<= 1)
            rbx = 1
        
        sub_140a5ab60(rax_8, (rbx - 1 + rax_13) & not.q(rax_13 - 1), rax_9)
        return arg2
    
    rbp_2 = sub_140a59900(rsi, rbx, arg4)
    LeaveCriticalSection(rsi + 0x888)

if (rbx u<= r14_4)
    r14_4 = rbx

memcpy(rbp_2, arg2, r14_4.d)
sub_140a58510(rsi, arg2)
return rbp_2
