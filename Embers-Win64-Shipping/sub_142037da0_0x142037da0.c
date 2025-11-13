// 函数: sub_142037da0
// 地址: 0x142037da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_a8
int64_t* rax = sub_140af3bf0(&var_a8)
int16_t* const rsi = &data_142d40450
int16_t* const rcx_1

if (rax[1].d == 0)
    rcx_1 = &data_142d40450
else
    rcx_1 = *rax

int16_t* const var_e8 = rcx_1
sub_140af8e00(&data_143de5840, u"GameUserSettings", nullptr, 0, 0, 1)
int16_t* rcx_2 = var_a8

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

var_a8 = nullptr
int32_t var_a0 = 0
sub_1405947f0(&var_a8, 0x16)
int32_t rdi = var_a0 + 0x16

if (rdi s> 0)
    sub_140594770(&var_a8)

int16_t* r14 = var_a8
UnDecorator::getReferenceType(r14, u"/Script/Engine.Engine", 0x2c)
int16_t* var_d0 = nullptr
int32_t var_c8 = 0
sub_1405947f0(&var_d0, 0x20)
int32_t rax_1 = var_c8 + 0x20

if (rax_1 s> 0)
    sub_140594770(&var_d0)

UnDecorator::getReferenceType(var_d0, u"/Script/Engine.GameUserSettings", 0x40)
int16_t* const rdx_2 = &data_142d40450

if (rdi != 0)
    rdx_2 = r14

sub_140af5b90(data_143ddb400, rdx_2, u"GameUserSettingsClassName", &var_d0, &data_143de5780)
int64_t rax_2 = data_143dbb180
void* rcx_10 = data_143ddb400
int32_t arg_20 = rax_2.d
int16_t* rdx_3 = &data_142d40450
int32_t rdi_1 = 1
int32_t arg_18 = (rax_2 u>> 0x20).d

if (rax_1 != 0)
    rdx_3 = var_d0

char arg_8 = 0
char arg_10 = 0
int32_t var_c0 = 0
int32_t var_d8

if (sub_140af3c10(rcx_10, rdx_3, u"Version", &var_c0, &data_143de5840) != 0 && var_c0 == 5)
    int16_t* rdx_4 = &data_142d40450
    
    if (rax_1 != 0)
        rdx_4 = var_d0
    
    sub_140af2fd0(data_143ddb400, rdx_4, u"bUseDesktopResolution", &arg_8, &data_143de5840)
    void* rcx_12 = data_143ddb400
    int16_t* rdx_5 = &data_142d40450
    var_d8 = 1
    
    if (rax_1 != 0)
        rdx_5 = var_d0
    
    sub_140af3c10(rcx_12, rdx_5, u"FullscreenMode", &var_d8, &data_143de5840)
    int32_t rcx_13 = var_d8
    
    if (rcx_13 == 0)
        rdi_1 = 0
    else if (rcx_13 != 1)
        rdi_1 = 2
    
    int16_t* rdx_6 = &data_142d40450
    
    if (rax_1 != 0)
        rdx_6 = var_d0
    
    sub_140af3c10(data_143ddb400, rdx_6, u"ResolutionSizeX", &arg_20, &data_143de5840)
    int16_t* rdx_7 = &data_142d40450
    
    if (rax_1 != 0)
        rdx_7 = var_d0
    
    sub_140af3c10(data_143ddb400, rdx_7, u"ResolutionSizeY", &arg_18, &data_143de5840)
    
    if (arg_8 != 0 && arg_20 == 0 && arg_18 == 0 && rdi_1 != 2)
        int64_t var_90 = 0
        int128_t var_58
        __builtin_memset(&var_58, 0, 0x20)
        int64_t var_88_1 = 0
        int32_t var_98
        sub_140d84bf0(&var_98)
        arg_20 = var_98
        int32_t var_94
        arg_18 = var_94
        sub_140d72800(&var_90)
    
    if (rax_1 != 0)
        rsi = var_d0
    
    sub_140af2fd0(data_143ddb400, rsi, u"bUseHDRDisplayOutput", &arg_10, &data_143de5840)

if (sub_1419a4620() != 0)
    TEB* gsbase
    
    if (data_143f40768
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f40768)
        
        if (data_143f40768 == 0xffffffff)
            int64_t* rcx_27 = data_143db18d0
            
            if (rcx_27 == 0)
                sub_140a53c40()
                rcx_27 = data_143db18d0
            
            int64_t r8_3
            r8_3.b = 1
            data_143f40760 = (*(*rcx_27 + 0xb0))(rcx_27, u"r.HDR.EnableHDROutput", r8_3)
            _Init_thread_footer(&data_143f40768)
    
    int64_t* rcx_21 = data_143f40760
    
    if (rcx_21 != 0)
        int32_t rbx
        rbx.b = arg_10 != 0
        sub_1405a55d0(rcx_21, rbx, 0x2000000)

int32_t var_b8 = arg_18
int32_t var_b0 = arg_20
var_d8 = rdi_1
sub_141ffdb30(&var_b0, &var_b8, &var_d8)
sub_1423ee5e0(var_b0, var_b8, var_d8)
int64_t* rcx_24 = data_143db18d0

if (rcx_24 == 0)
    sub_140a53c40()
    rcx_24 = data_143db18d0

int64_t result = (*(*rcx_24 + 0x50))(rcx_24)
int16_t* rcx_25 = var_d0

if (rcx_25 != 0)
    result = sub_140a74f90(rcx_25)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
