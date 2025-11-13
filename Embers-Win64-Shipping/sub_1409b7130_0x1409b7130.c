// 函数: sub_1409b7130
// 地址: 0x1409b7130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cee4f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cee4f0)
    
    if (data_143cee4f0 == 0xffffffff)
        atexit(sub_142cb82d0)
        _Init_thread_footer(&data_143cee4f0)

int32_t rdx_2 = data_143cee4ec
int64_t rdi = 0
data_143cee4e8 = 0

if (rdx_2 s< 0 && rdx_2 != 0)
    sub_1405dadb0(&data_143cee4e0, 0)
    rdx_2 = data_143cee4ec

int64_t r12_1 = sx.q(arg2) << 5
int32_t rsi = 0
int32_t r13 = *(*arg1[5] + r12_1 + 0x18)

if (r13 s> 0)
    int64_t r14_1 = 0
    
    while (true)
        int64_t rax_4
        
        if (rsi s>= 0)
            rax_4 = *arg1[5]
        
        int32_t* rcx_2
        
        if (rsi s< 0 || rsi s>= *(r12_1 + rax_4 + 0x18))
            rcx_2 = &data_143a1c6bc
        else
            rcx_2 = *(r12_1 + rax_4 + 0x10) + r14_1
        
        int64_t rbp_1 = sx.q(data_143cee4e8)
        int32_t rbx_1 = *rcx_2
        int32_t rax_5 = (rbp_1 + 1).d
        data_143cee4e8 = rax_5
        
        if (rax_5 s> rdx_2)
            sub_1405a4cf0(&data_143cee4e0)
        
        rsi += 1
        r14_1 += 4
        *(data_143cee4e0 + (rbp_1 << 2)) = rbx_1
        
        if (rsi s>= r13)
            break
        
        rdx_2 = data_143cee4ec

int32_t* rbx_2 = data_143cee4e0
int64_t* result = sx.q(data_143cee4e8)
void* rcx_3 = &rbx_2[result]
uint64_t rsi_4 = (rcx_3 - rbx_2 + 3) u>> 2

if (rbx_2 u> rcx_3)
    rsi_4 = 0

if (rsi_4 != 0)
    do
        int32_t rdx_4 = *rbx_2
        result = arg1[5]
        
        if (rdx_4 s>= 0 && rdx_4 s< result[0xf].d)
            void* r9 = &result[0x10]
            void* rax_7 = *(r9 + 0x10)
            
            if (rax_7 != 0)
                r9 = rax_7
            
            int32_t rax_8 = rdx_4
            
            if (rdx_4 s< 0)
                rax_8 = rdx_4 + 0x1f
            
            result = zx.q(*(r9 + (sx.q(rax_8 s>> 5) << 2)))
            
            if (test_bit(result.d, rdx_4 & 0x1f))
                result = sub_1409b5930(arg1, rdx_4, arg3, arg4, arg5, arg6)
        
        rbx_2 = &rbx_2[1]
        rdi += 1
    while (rdi != rsi_4)

return result
