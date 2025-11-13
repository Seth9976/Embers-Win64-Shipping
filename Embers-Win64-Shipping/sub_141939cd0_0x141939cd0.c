// 函数: sub_141939cd0
// 地址: 0x141939cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x668) s< 0
*(arg2 + 0x650) = 0xffffffff

if (not(cond:0))
    TEB* gsbase
    
    if (data_143eff8a8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143eff8a8)
        
        if (data_143eff8a8 == 0xffffffff)
            sub_141929790(&data_143eff880)
            atexit(&data_142cee460)
            _Init_thread_footer(&data_143eff8a8)
    
    if (data_143eff638 != 0)
        sub_1409740e0(sx.q(*(arg2 + 0x668)) * 0x58 + data_143eff880 + 8, arg2)
        *(arg2 + 0x668) = 0xffffffff

uint64_t rcx_2 = zx.q(*(arg2 + 0x5e8))
int32_t arg_8 = 0xffffffff
data_143effdd8(rcx_2, 0x8741, &arg_8)
*(arg1 + 4) -= arg_8
int64_t rbx = data_143eff770
int64_t rcx_3

if (data_143de5480 == 0)
    rcx_3 = 0
else
    rcx_3.b = GetCurrentThreadId() != data_143de5470

if (*(rbx + (rcx_3 << 2)) == 0 || *(arg2 + 0x660) == 0)
    sub_14193d610(*(arg2 + 0x5e8), arg2 + 0x658)

sub_141936220(arg2)
int32_t var_18
sub_140d99540(arg1 + 0x70, &var_18)
int128_t* var_10
*var_10 = *(arg2 + 0x450)
var_10[1] = *(arg2 + 0x460)
var_10[2] = *(arg2 + 0x470)
var_10[3] = *(arg2 + 0x480)
var_10[4] = *(arg2 + 0x490)
var_10[5] = *(arg2 + 0x4a0)
var_10[6] = *(arg2 + 0x4b0)
var_10[7].q = *(arg2 + 0x4c0)
*(var_10 + 0x78) = arg2
var_10[8].d = 0xffffffff
return sub_141937430(arg1 + 0x70, &arg_8, sub_140b21160(var_10, 0x78, 0), var_10, var_18, nullptr)
