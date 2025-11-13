// 函数: sub_1425f8980
// 地址: 0x1425f8980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rsi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
int64_t var_18

if (data_143f70d30 s> *rsi_1)
    _Init_thread_header(&data_143f70d30)
    
    if (data_143f70d30 == 0xffffffff)
        int64_t* rax_9 = sub_140b13b30(&var_18)
        int32_t rdx_3 = rax_9[1].d
        data_143f70d20 = 0
        int32_t rdx_4 = neg.d(rdx_3)
        data_143f70d20 = *rax_9
        *rax_9 = 0
        data_143f70d28 = rax_9[1].d
        data_143f70d2c = *(rax_9 + 0xc)
        rax_9[1] = 0
        int32_t rdx_7 = sbb.d(rdx_4, rdx_4, rdx_3 != 0) + 0x3f + data_143f70d28
        
        if (rdx_7 s> data_143f70d2c)
            sub_1405947f0(&data_143f70d20, rdx_7)
        
        sub_140a2cf70(&data_143f70d20, 
            Binaries/ThirdParty/Windows/XAudio2_9/x64/xaudio2_9redist.dll", 0x3d)
        int64_t rcx_8 = var_18
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        atexit(sub_142d11fe0)
        _Init_thread_footer(&data_143f70d30)

if (data_143f70d48 s> *rsi_1)
    _Init_thread_header(&data_143f70d48)
    
    if (data_143f70d48 == 0xffffffff)
        int16_t* const rdx_2 = &data_142d40450
        
        if (data_143f70d28 != 0)
            rdx_2 = data_143f70d20
        
        sub_140b58260(&var_18, rdx_2, 1)
        void var_10
        sub_140b58260(&var_10, u"XAudio2_7.dll", 1)
        data_143f70d38 = 0
        data_143f70d40 = 2
        sub_1405c4a00(&data_143f70d38, 2, 0)
        *data_143f70d38 = var_18.o
        atexit(sub_142d12000)
        _Init_thread_footer(&data_143f70d48)

int64_t* r8 = data_143f70d38
int64_t r9 = sx.q(data_143f70d40)
int64_t* rax_3 = r8
void* rdx_1 = &r8[r9]
int32_t rax_4

if (r8 == rdx_1)
label_1425f89fe:
    rax_4 = -1
else
    while (*rax_3 != arg2)
        rax_3 = &rax_3[1]
        
        if (rax_3 == rdx_1)
            goto label_1425f89fe
    
    rax_4 = ((rax_3 - r8) s>> 3).d

if (rax_4 + 1 s< 0 || rax_4 + 1 s>= r9.d)
    *arg1 = 0
else
    *arg1 = r8[sx.q(rax_4) + 1]

return arg1
