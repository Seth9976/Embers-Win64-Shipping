// 函数: sub_140960cd0
// 地址: 0x140960cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx = zx.q(data_14401b1a0)
int64_t arg_10 = 0

if (data_143cecf88 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143cecf88)
    
    if (data_143cecf88 == 0xffffffff)
        sub_140b58260(&data_143cecf80, u"OnlineSubsystem", 1)
        _Init_thread_footer(&data_143cecf88)

int64_t rbx = data_143cecf80
j_sub_140b3db50()
int64_t* rax_1 = sub_140b3da90(&data_143de7d78, rbx)
int64_t r8 = *rax_1
int64_t* rax_2 = (*(r8 + 0x50))(rax_1, arg_10, r8)
int64_t* rax_3

if (rax_2 == 0)
    arg_10 = 0
    rax_3 = &arg_10
else
    int64_t r8_1 = *rax_2
    rax_3 = (*(r8_1 + 0x10))(rax_2, &arg_10, r8_1)

*arg2 = *rax_3
return arg2
