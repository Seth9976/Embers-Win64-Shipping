// 函数: sub_14200d070
// 地址: 0x14200d070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2

if (arg2 == 0 || (*(arg2 + 0x59) & 0x40) == 0)
    int64_t result
    result.b = 0
    return result

sub_1405a7050(arg1 + 0x38, &arg_10)
wchar16* i_1 = nullptr

for (wchar16* i = wcsstr(&UAutoDestroySubsystem::OnActorEndPlay", ::"); i != 0; 
        i = wcsstr(&i[1], ::"))
    i_1 = i

sub_140b58260(&arg_10, &i_1[2], 1)
void* rbx = arg_10
int128_t var_28
sub_140d3a3a0(&var_28, nullptr)
int64_t var_20 = 0
sub_140d3a3a0(&var_28, arg1)
int32_t rcx_5
rcx_5.b = sub_140b5b8a0(rbx.d, 0) == 0

if ((rbx:4.d != 0 | rcx_5.b) != 0)
    void* rax_1 = sub_140d3c6e0(&var_28)
    
    if (rax_1 != 0)
        sub_140d1fd20(rax_1, rbx)

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx_8 = zx.q(data_14401b1a0)
int128_t var_18 = var_28

if (data_143f38e90 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_8 << 3))))
    _Init_thread_header(&data_143f38e90)
    
    if (data_143f38e90 == 0xffffffff)
        sub_140b58170(&data_143f38e88, "OnEndPlay", 1)
        _Init_thread_footer(&data_143f38e90)

char rax_3 = sub_140d17340(arg2, data_143f38e88, &var_18)
*(arg2 + 0x18f) |= rax_3
return 1
