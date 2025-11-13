// 函数: sub_14180a4f0
// 地址: 0x14180a4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af3b00(data_143ddb400, u"HTTP", u"HttpTimeout", arg1 + 0x18, &data_143de5780)
sub_140af3b00(data_143ddb400, u"HTTP", u"HttpConnectionTimeout", arg1 + 0x1c, &data_143de5780)
sub_140af3b00(data_143ddb400, u"HTTP", u"HttpReceiveTimeout", arg1 + 0x20, &data_143de5780)
sub_140af3b00(data_143ddb400, u"HTTP", u"HttpSendTimeout", arg1 + 0x24, &data_143de5780)
sub_140af3c10(data_143ddb400, u"HTTP", u"HttpMaxConnectionsPerServer", arg1 + 0x3c, &data_143de5780)
sub_140af2fd0(data_143ddb400, u"HTTP", u"bEnableHttp", arg1 + 0x44, &data_143de5780)
sub_140af2fd0(data_143ddb400, u"HTTP", u"bUseNullHttp", arg1 + 0x45, &data_143de5780)
sub_140af3b00(data_143ddb400, u"HTTP", u"HttpDelayTime", arg1 + 0x28, &data_143de5780)
sub_140af3b00(data_143ddb400, HTTP", HttpThreadActiveFrameTimeInSeconds", arg1 + 0x2c, 
    &data_143de5780)
sub_140af3b00(data_143ddb400, HTTP", HttpThreadActiveMinimumSleepTimeInSeconds", arg1 + 0x30, 
    &data_143de5780)
sub_140af3b00(data_143ddb400, HTTP", HttpThreadIdleFrameTimeInSeconds", arg1 + 0x34, 
    &data_143de5780)
sub_140af3b00(data_143ddb400, HTTP", HttpThreadIdleMinimumSleepTimeInSeconds", arg1 + 0x38, 
    &data_143de5780)
int32_t i_1 = *(arg1 + 0xb8)
int64_t* rbx = *(arg1 + 0xb0)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_12 = *rbx
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

bool cond:0 = *(arg1 + 0xbc) == 0
*(arg1 + 0xb8) = 0

if (not(cond:0))
    sub_14061cd70(arg1 + 0xb0, 0)

int64_t result = sub_140af2c50(data_143ddb400, HTTP", AllowedDomains", arg1 + 0xb0, &data_143de5780)
int64_t* rcx_15 = *(arg1 + 0x10)

if (rcx_15 == 0)
    return result

return (*(*rcx_15 + 0x28))(rcx_15)
