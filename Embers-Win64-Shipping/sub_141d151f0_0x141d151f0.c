// 函数: sub_141d151f0
// 地址: 0x141d151f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f36e18 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f36e18)
    
    if (data_143f36e18 == 0xffffffff)
        sub_1405947f0(&data_143f36e08, 0x20)
        int32_t rax_12 = data_143f36e10 + 0x20
        bool cond:0_1 = rax_12 s<= data_143f36e14
        data_143f36e10 = rax_12
        
        if (not(cond:0_1))
            sub_140594770(&data_143f36e08)
        
        UnDecorator::getReferenceType(data_143f36e08, u"LocalFileNetworkReplayStreaming", 0x40)
        atexit(sub_142cf7cf0)
        _Init_thread_footer(&data_143f36e18)

int32_t rbx = data_143f36e10
int64_t rsi = data_143f36e08
int16_t* var_48 = nullptr
int32_t var_40 = rbx
int32_t var_3c
int32_t rcx

if (rbx != 0)
    sub_1405a4c70(&var_48, rbx, 0)
    memcpy(var_48, rsi, rbx * 2)
    rcx = var_3c
else
    rcx = 0
    var_3c = 0

if (arg2 == 0)
    sub_140af5b90(data_143ddb400, NetworkReplayStreaming", DefaultFactoryName", &var_48, 
        &data_143de5780)
else if (var_48 != arg2)
    int32_t rbx_2
    
    if (*arg2 == 0)
        rbx_2 = 0
    else
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        rbx_2 = rbx_1.d + 1
    
    int32_t rdx_2 = 0
    int32_t var_40_1 = 0
    
    if (rcx != rbx_2)
        sub_1405947f0(&var_48, rbx_2)
        rcx = var_3c
        rdx_2 = var_40_1
    
    int32_t rax_2 = rbx_2 + rdx_2
    var_40 = rax_2
    
    if (rax_2 s> rcx)
        sub_140594770(&var_48)
    
    if (rbx_2 != 0)
        memcpy(var_48, arg2, rbx_2 * 2)

int64_t var_38 = 0
int32_t var_30 = 0
sub_140af2b60()
char rax_3 = sub_140b2acc0(&data_143dbb3f0, u"-REPLAYSTREAMER=", &var_38, 1)
char rax_4

if (rax_3 == 0)
    sub_140af2b60()
    rax_4 = sub_140b2acc0(&data_143dbb3f0, u"-REPLAYSTREAMEROVERRIDE=", &var_38, 1)

if (rax_3 != 0 || rax_4 != 0)
    int64_t rdi_1 = var_38
    var_40 = var_30
    
    if (var_30 != 0 || var_3c != 0)
        sub_1405a4c70(&var_48, var_30, var_3c)
        memcpy(var_48, rdi_1, var_30 * 2)
    else
        var_3c = 0

int16_t* const rdi_2 = &data_142d40450
int16_t* const rdx_7 = &data_142d40450

if (var_40 != 0)
    rdx_7 = var_48

void arg_8
int64_t* rax_5
int512_t zmm1
rax_5, zmm1 = sub_140b58260(&arg_8, rdx_7, 1)
j_sub_140b3db50()

if (sub_140b404d0(&data_143de7d78, *rax_5, zmm1) == 0)
    int16_t* rdx_9 = &data_142d40450
    
    if (var_40 != 0)
        rdx_9 = var_48
    
    int64_t* rax_7 = sub_140b58260(&arg_8, rdx_9, 1)
    j_sub_140b3db50()
    sub_140b407e0(&data_143de7d78, *rax_7)
    int16_t* rdx_11 = &data_142d40450
    
    if (var_40 != 0)
        rdx_11 = var_48
    
    int64_t* rax_8
    int512_t zmm1_1
    rax_8, zmm1_1 = sub_140b58260(&arg_8, rdx_11, 1)
    j_sub_140b3db50()
    
    if (sub_140b404d0(&data_143de7d78, *rax_8, zmm1_1) == 0)
        int32_t rbx_7 = data_143f36e10
        int64_t rsi_1 = data_143f36e08
        var_40 = rbx_7
        
        if (rbx_7 != 0 || var_3c != 0)
            sub_1405a4c70(&var_48, rbx_7, var_3c)
            memcpy(var_48, rsi_1, rbx_7 * 2)
        else
            int32_t var_3c_1 = 0

int16_t* rdx_15 = &data_142d40450

if (var_40 != 0)
    rdx_15 = var_48

void arg_10
sub_140b58260(&arg_10, rdx_15, 1)
sub_1407d1800(arg1 + 0x10, &arg_8, &arg_10, nullptr)
j_sub_140b3db50()

if (var_40 != 0)
    rdi_2 = var_48

int64_t rbx_8 = *sub_140b58260(&arg_8, rdi_2, 1)
j_sub_140b3db50()
int64_t result = j_sub_140b407e0(&data_143de7d78, rbx_8)
int64_t rcx_17 = var_38

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int16_t* rcx_18 = var_48

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

return result
