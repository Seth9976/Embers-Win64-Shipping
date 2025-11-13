// 函数: sub_1410b79f0
// 地址: 0x1410b79f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[2].d = arg1

if (arg2 != 0)
    *arg3 = data_1439b53b8
    int64_t rax_1 = data_1439b53d0
    arg3[1] = rax_1
    arg3[7].d = 0
    return rax_1

TEB* gsbase

if (data_143e38b00 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e38b00)
    
    if (data_143e38b00 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        int64_t r8
        r8.b = 1
        int64_t* rax_8 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.BasePassOutputsVelocityDebug", r8)
        
        if (rax_8 != 0)
            int64_t rdx_1 = *rax_8
            rax_8 = (*(rdx_1 + 0x58))(rax_8, rdx_1)
        
        data_143e38af8 = rax_8
        _Init_thread_footer(&data_143e38b00)

int64_t rax_4 = data_143e38af8
int64_t rax_5

if (rax_4 != 0)
    rax_5 = data_1439b53e8

if (rax_4 == 0 || *(rax_4 + 4) != 2)
    rax_5 = data_14395da00

bool cond:1 = (arg3[2].b & 2) != 0
*arg3 = rax_5
int64_t rax_6 = data_1439b5400

if (not(cond:1))
    rax_6 = data_1439b53d0

arg3[7].d = 0
arg3[1] = rax_6
return rax_6
