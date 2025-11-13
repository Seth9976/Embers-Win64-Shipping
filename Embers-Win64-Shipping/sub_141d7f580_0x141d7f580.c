// 函数: sub_141d7f580
// 地址: 0x141d7f580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t arg_8 = zx.d(*(arg1 + 0xd9))
int16_t* var_38 = nullptr
int32_t var_30 = 0
sub_140af2b60()
int16_t* const rsi = &data_142d40450

if (sub_140b2acc0(&data_143dbb3f0, u"-CaptureGamut=", &var_38, 1) != 0)
    uint32_t rax_5
    
    if (sub_140b24690(&var_38, &arg_8) != 0)
        rax_5 = arg_8
    else
        int16_t* const rdx_2 = &data_142d40450
        
        if (var_30 != 0)
            rdx_2 = var_38
        
        void arg_18
        int64_t* rax_3 = sub_140b58260(&arg_18, rdx_2, 1)
        rax_5 = sub_140be0d00(sub_141d83060(), *rax_3, 0)
        arg_8 = rax_5
    
    if (rax_5 u<= 5)
        *(arg1 + 0xd9) = rax_5.b

int16_t* rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int32_t arg_10 = 0
sub_140af2b60()
bool rax_6
int64_t r8_2
rax_6, r8_2 = sub_140b2ab20(&data_143dbb3f0, u"-HDRCompressionQuality=", &arg_10)

if (rax_6 != 0)
    *(arg1 + 0xd8) = arg_10 != 1

int64_t* rcx_4 = data_143db18d0

if (rcx_4 == 0)
    sub_140a53c40()
    rcx_4 = data_143db18d0

r8_2.b = 1
int64_t* rax_8
int64_t r8_3
rax_8, r8_3 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.HDR.Display.ColorGamut", r8_2)
int64_t* rcx_5 = data_143db18d0

if (rcx_5 == 0)
    sub_140a53c40()
    rcx_5 = data_143db18d0

int64_t r9_1 = *rcx_5
r8_3.b = 1
int64_t* rax_9 = (*(r9_1 + 0xb0))(rcx_5, u"r.HDR.Display.OutputDevice", r8_3, r9_1)
int64_t rdx_4 = *rax_8
*(arg1 + 0xdc) = (*(rdx_4 + 0x90))(rax_8, rdx_4)
int64_t rdx_5 = *rax_9
*(arg1 + 0xe0) = (*(rdx_5 + 0x90))(rax_9, rdx_5)
char rax_12 = *(arg1 + 0xd9)
int16_t** rcx_8 = &var_38
int64_t rax_14
int64_t* rcx_12

if (rax_12 != 5)
    sub_140a2e390(rcx_8, u"%d", zx.q(rax_12))
    rax_14 = *rax_8
    rcx_12 = rax_8
else
    sub_140a2e390(rcx_8, u"%d", 1)
    int16_t* rdx_6 = &data_142d40450
    
    if (var_30 != 0)
        rdx_6 = var_38
    
    (*(*rax_8 + 0x80))(rax_8, rdx_6, 0x8000000)
    int16_t* rcx_10 = var_38
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    sub_140a2e390(&var_38, u"%d", 7)
    rax_14 = *rax_9
    rcx_12 = rax_9

if (var_30 != 0)
    rsi = var_38

(*(rax_14 + 0x80))(rcx_12, rsi, 0x8000000)
int16_t* rcx_13 = var_38

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return sub_141d7f4a0(arg1)
