// 函数: sub_140cacf60
// 地址: 0x140cacf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg5
*arg1 = 0
arg1[4] = rax
int64_t* arg_30
int64_t* rax_1 = arg_30
arg1[1] = arg3
arg1[6] = rax_1
arg1[2] = arg4
arg1[3].d = 0
arg1[5] = 0
arg1[7].d = 0
sub_140b58260(&arg5, arg2 + 2, 1)
uint64_t rcx_1 = zx.q(data_14401b1a0)
*arg1 = arg5
TEB* gsbase

if (data_143e1b268 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_1 << 3))))
    _Init_thread_header(&data_143e1b268)
    
    if (data_143e1b268 == 0xffffffff)
        data_143e1b258 = 0
        data_143e1b260.q = 0
        atexit(sub_142cc1ef0)
        _Init_thread_footer(&data_143e1b268)

int64_t rdi = sx.q(data_143e1b260)
int32_t rax_5 = (rdi + 1).d
bool cond:0 = rax_5 s<= data_143e1b264
data_143e1b260 = rax_5

if (not(cond:0))
    sub_1405a4d70(&data_143e1b258)

int64_t rax_6 = data_143e1b258
arg_30 = arg1
*(rax_6 + (rdi << 3)) = arg1
sub_140cbcdf0()
sub_1405a7750(&data_143e1b270, arg1, &arg_30)
return arg1
