// 函数: sub_141959d40
// 地址: 0x141959d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
void* rax = arg2[8]
char rax_1 = sub_141955890(*(arg1 + 0x15ba0), arg2, *(rax + 0x60), *(rax + 0x64), arg3, arg4)
*(arg1 + 0x15428) = 0xffffffff
int64_t rdi_1 = 0
int64_t* rbx_1 = *(arg1 + 0x8a0)
*(arg1 + 0x8a0) = 0

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        char rax_2
        
        if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
            rax_2 = sub_1405949a0()
        
        if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
            (**rbx_1)(rbx_1, 1)
        else
            bool z_1
            
            if (0 == *(rbx_1 + 0xc))
                *(rbx_1 + 0xc) = 1
                z_1 = true
            else
                *(rbx_1 + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rbx_1)

if (data_1439c7a38 == 1)
    if (rax_1 != 0)
        TEB* gsbase
        
        if (data_143f01c68
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f01c68)
            
            if (data_143f01c68 == 0xffffffff)
                int64_t* rcx_14 = data_143db18d0
                
                if (rcx_14 == 0)
                    sub_140a53c40()
                    rcx_14 = data_143db18d0
                
                int64_t r8_2
                r8_2.b = 1
                int64_t* rax_16 = (*(*rcx_14 + 0xb0))(rcx_14, u"r.FinishCurrentFrame", r8_2)
                
                if (rax_16 != 0)
                    int64_t rdx_4 = *rax_16
                    rdi_1 = (*(rdx_4 + 0x58))(rax_16, rdx_4)
                
                data_143f01c60 = rdi_1
                _Init_thread_footer(&data_143f01c68)
        
        if (*(data_143f01c60 + 4) != 0)
            sub_14193f1f0(&arg2[9])
            sub_141950380(&arg2[9])
        else
            sub_141950380(&arg2[9])
            sub_14193f1f0(&arg2[9])
    
    if (data_1439c90fa != 0)
        sub_141950380(&arg2[9])
        int64_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        data_1439c9100 = performanceCount_2.d - data_1439c90fc
        data_1439c90fa = 0

if (*(arg1 + 0x8a8) != 0)
    void* rax_10 = *(arg1 + 0x15ba0)
    
    if (wglMakeCurrent(*(rax_10 + 8), *(rax_10 + 0x10)) == 0)
        wglMakeCurrent(nullptr, nullptr)
    
    *(arg1 + 0x8a8) = 0

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t rbx_3 = performanceCount.d - performanceCount_1.d

if (sub_140a80f10() == 0)
    if (sub_140a80e70() != 0)
        data_143f138d0 += rbx_3
        data_143f138e0 += 1
else
    data_143f01c9c += rbx_3

return sub_1419327a0() __tailcall
