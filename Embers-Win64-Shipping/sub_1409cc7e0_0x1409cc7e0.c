// 函数: sub_1409cc7e0
// 地址: 0x1409cc7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cef170 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cef170)
    
    if (data_143cef170 == 0xffffffff)
        atexit(sub_142cb9490)
        _Init_thread_footer(&data_143cef170)

int32_t rdx = arg3[1].d
bool cond:0 = rdx s<= data_143cef16c
data_143cef168 = 0

if (not(cond:0))
    sub_1405dadb0(&data_143cef160, rdx)

int32_t* rsi = *arg3
void* rbp = &rsi[sx.q(arg3[1].d) * 2]

while (rsi != rbp)
    int64_t rdi_1 = sx.q(*rsi)
    int32_t rbx_1 = rsi[1]
    sub_1409b6490(arg1, arg2, rdi_1.d)
    *(arg1[8] + rdi_1 * 0x18) = rbx_1
    int64_t rbx_2 = sx.q(data_143cef168)
    int32_t rax_4 = (rbx_2 + 1).d
    bool cond:1_1 = rax_4 s<= data_143cef16c
    data_143cef168 = rax_4
    
    if (not(cond:1_1))
        sub_1405a4cf0(&data_143cef160)
    
    rsi = &rsi[2]
    *(data_143cef160 + (rbx_2 << 2)) = rdi_1.d

jump(*(*arg1 + 0x368))
