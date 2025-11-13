// 函数: sub_14093f970
// 地址: 0x14093f970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cecfd0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cecfd0)
    
    if (data_143cecfd0 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        data_143cecfc8 = (*(*rcx_4 + 0x38))(rcx_4, buildidoverride", &data_143cecfb0, 
            Sets build id used for matchmaking ", 0)
        data_143cecfc0 = &data_142d3ff10
        atexit(sub_142cb6cf0)
        _Init_thread_footer(&data_143cecfd0)

if (data_143cecfac != 0)
    return zx.q(data_143cecfb0)

data_143cecfac = 1
sub_140af2b60()

if (sub_140b2ab20(&data_143dbb3f0, u"BuildIdOverride=", &data_143cecfb8) != 0)
    int32_t rax_3 = data_143cecfb8
    
    if (rax_3 != 0)
        data_143cecfb4 = 1
        data_143cecfb0 = rax_3
        return rax_3

sub_140af2fd0(data_143ddb400, OnlineSubsystem", bUseBuildIdOverride", &data_143cecfb4, 
    &data_143de5780)
sub_140af3c10(data_143ddb400, OnlineSubsystem", BuildIdOverride", &data_143cecfb8, &data_143de5780)

if (data_143cecfb4 != 0)
    int32_t rax_5 = data_143cecfb8
    data_143cecfb0 = rax_5
    return rax_5

int32_t rax_4 = sub_140b1a4c0()
data_143cecfb0 = rax_4
return rax_4
