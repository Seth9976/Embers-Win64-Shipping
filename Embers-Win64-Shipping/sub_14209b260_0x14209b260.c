// 函数: sub_14209b260
// 地址: 0x14209b260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t rcx = 0x14
void* rdi = arg2
TEB* gsbase

if (data_143f47970 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    rcx, arg2, r8_1 = _Init_thread_header(&data_143f47970)
    
    if (data_143f47970 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_4 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.BufferVisualizationDumpFramesAsHDR", r8_1)
        int64_t rax_5
        
        if (rax_4 == 0)
            rax_5 = 0
        else
            int64_t rdx = *rax_4
            rax_5 = (*(rdx + 0x58))(rax_4, rdx)
        
        data_143f47968 = rax_5
        rcx, arg2 = _Init_thread_footer(&data_143f47970)

int64_t rsi_1

if (*(arg1 + 0x41) == 0 || *(arg1 + 0x2a) == 0)
    rsi_1 = data_143f47968
    
    if (data_143de5480 == 0)
        rcx = 0
    else
        uint32_t rax_2
        rax_2, arg2 = GetCurrentThreadId()
        rcx.b = rax_2 != data_143de5470

if ((*(arg1 + 0x41) != 0 && *(arg1 + 0x2a) != 0) || *(rsi_1 + (rcx << 2)) != 0)
    arg2.b = 1
else
    arg2.b = 0

uint32_t result = zx.d(arg2.b)
*(rdi + 0x1c) = 0
char temp0 = result.b
result.b = neg.b(result.b)
rcx.b = sbb.b(rcx.b, rcx.b, temp0 != 0)
rcx.b &= 5
*(rdi + 0x18) = rcx.b

if (arg2.b != 0)
    int64_t rsi_2 = data_143f47558
    
    if (data_143de5480 != 0)
        result = GetCurrentThreadId()
        rbx.b = result != data_143de5470
    
    if (*(rsi_2 + (rbx << 2)) == 0)
        *(rdi + 0x1c) = 1

return result
