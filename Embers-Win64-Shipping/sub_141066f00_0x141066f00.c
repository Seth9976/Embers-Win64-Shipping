// 函数: sub_141066f00
// 地址: 0x141066f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x128)
int64_t rsi = 0
int64_t* rbx = *(rax + 0x4d0)
*(rax + 0x4d0) = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        char rax_2
        
        if (rbx[2].b == 0 && data_143f0f1d0 == 0)
            rax_2 = sub_1405949a0()
        
        if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
            (**rbx)(rbx, 1)
        else
            bool z_1
            
            if (0 == *(rbx + 0xc))
                *(rbx + 0xc) = 1
                z_1 = true
            else
                *(rbx + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rbx)

uint64_t result = sub_141064a00(arg2, arg4)

if (result.b != 0)
    TEB* gsbase
    
    if (data_143e2c998
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e2c998)
        
        if (data_143e2c998 == 0xffffffff)
            int64_t* rcx_9 = data_143db18d0
            
            if (rcx_9 == 0)
                sub_140a53c40()
                rcx_9 = data_143db18d0
            
            int64_t r8
            r8.b = 1
            int64_t* rax_11 = (*(*rcx_9 + 0xb0))(rcx_9, u"r.FinishCurrentFrame", r8)
            
            if (rax_11 != 0)
                int64_t rdx_5 = *rax_11
                rsi = (*(rdx_5 + 0x58))(rax_11, rdx_5)
            
            data_143e2c990 = rsi
            _Init_thread_footer(&data_143e2c998)
    
    if (*(data_143e2c990 + 4) != 0)
        int64_t rax_8 = sub_141036400(arg2 + 0xf0, 0)
        *(arg2 + 0x1a8) = rax_8
        result = sub_14106a230(arg2 + 0xf0, rax_8)
    else
        sub_14106a230(arg2 + 0xf0, *(arg2 + 0x1a8))
        result = sub_141036400(arg2 + 0xf0, 0)
        *(arg2 + 0x1a8) = result

if (data_1439c90fa != 0)
    sub_14106a230(arg2 + 0xf0, *(arg2 + 0x1a8))
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    result = zx.q(performanceCount.d - data_1439c90fc)
    data_1439c9100 = result.d
    data_1439c90fa = 0

return result
