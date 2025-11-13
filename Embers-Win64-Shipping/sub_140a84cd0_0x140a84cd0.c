// 函数: sub_140a84cd0
// 地址: 0x140a84cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg1
bool cond:0 = data_14399eab8 == data_14399eae4
int64_t arg_8 = rbx
void* rcx_3

if (cond:0)
label_140a84d6a:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* rcx_1 = data_14399eaf0
    void* rax_4 = &data_14399eae8
    
    if (rcx_1 != 0)
        rax_4 = rcx_1
    
    int32_t rax_5 = *(rax_4 + (((sx.q(data_14399eaf8) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_140a84d6a_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = data_14399eab0
        int64_t rdx_4
        
        while (true)
            rdx_4 = sx.q(rax_5) * 0x18
            
            if (*(rdx_4 + r8_1) == rbx)
                break
            
            rax_5 = *(rdx_4 + r8_1 + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_140a84d6a_2
        
        rcx_3 = rdx_4 + r8_1
        
        if (rax_5 == 0xffffffff)
        label_140a84d6a_2:
            rcx_3 = nullptr

int64_t* rax_6 = rcx_3 + 8

if (rcx_3 == 0)
    rax_6 = nullptr

if (rax_6 != 0)
    *arg1 = *rax_6

TEB* gsbase

if (data_143db9aa8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9aa8)
    
    if (data_143db9aa8 == 0xffffffff)
        sub_140a5bd30(&data_143db9a08)
        data_143db9aa0 = &data_143db9a08
        atexit(sub_142cbd740)
        _Init_thread_footer(&data_143db9aa8)

char* rax_10 = data_143db9aa0

if (rax_10 != 0 && *rax_10 != 0)
    int64_t* rcx_6 = data_143db7a40
    
    if (rcx_6 != 0 && (*(*rcx_6 + 8))(rcx_6) != 0)
        int64_t* rcx_7 = data_143db7a40
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x20))(rcx_7, arg1)

sub_140a73990(&data_14399eb00, &arg_8, *arg1)
int64_t rax_14 = sx.q(arg_8.d)
int64_t result

if (rax_14.d == 0xffffffff)
    result = 0
else
    result = rax_14 * 0x60 + data_14399eb00

int64_t* rbx_1 = result + 8

if (result == 0)
    rbx_1 = nullptr

if (rbx_1 != 0)
    sub_140a73a40(rbx_1, &arg_8, arg2)
    result = sx.q(arg_8.d)
    int64_t rcx_9
    
    if (result.d == 0xffffffff)
        rcx_9 = 0
    else
        int64_t rdx_8 = result * 5
        result = *rbx_1
        rcx_9 = result + (rdx_8 << 3)
    
    int64_t* rdx_9 = rcx_9 + 0x10
    
    if (rcx_9 == 0)
        rdx_9 = nullptr
    
    if (rdx_9 != 0)
        return sub_140597df0(arg2, rdx_9)

return result
