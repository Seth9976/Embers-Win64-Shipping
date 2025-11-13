// 函数: sub_141e7d2b0
// 地址: 0x141e7d2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_48 = nullptr
int64_t var_40 = 0
sub_140af5b90(data_143ddb400, /Script/WindowsTargetPlatform.WindowsTargetSettings", 
    ModulationPlugin", &var_48, &data_143de5780)
int16_t* const rsi = &data_142d40450
int16_t* const rdx = &data_142d40450

if (var_40.d != 0)
    rdx = var_48

int32_t arg_10
sub_140b58260(&arg_10, rdx, 1)
int16_t* rcx_2 = var_48

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

char rax = sub_140b5b8a0(arg_10, 0)
uint64_t rbx_1 = zx.q(data_14401b1a0)
int32_t rcx_3
rcx_3.b = arg1 == 0
int32_t arg_8
int64_t* arg_18
TEB* gsbase

if ((rcx_3.b & rax) == 0)
    arg_18 = &arg_10
else
    arg_18 = &data_143f3a078
    
    if (data_143f3a080 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rbx_1 << 3))))
        _Init_thread_header(&data_143f3a080)
        
        if (data_143f3a080 == 0xffffffff)
            sub_140b58260(&data_143f3a078, u"DefaultModulationPlugin", 1)
            _Init_thread_footer(&data_143f3a080)
    
    int32_t rax_3 = data_143f39da0
    
    if (rax_3 s> 1)
        if (rax_3 != 0)
            rsi = data_143f39d98
        
        data_143f3a078 = *sub_140b58260(&arg_8, rsi, 1)

if (data_143f3a020 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rbx_1 << 3))))
    _Init_thread_header(&data_143f3a020)
    
    if (data_143f3a020 == 0xffffffff)
        sub_140b58260(&data_143f3a018, u"AudioModulationPlugin", 1)
        _Init_thread_footer(&data_143f3a020)

int64_t rbx_2 = data_143f3a018
sub_140a387e0()
int16_t* r15 = nullptr
int32_t r12 = 0
var_48 = nullptr
var_40:4.d = 0
void* r8 = data_14399e720
int32_t rsi_1 = 0
int32_t rax_7 = (*(r8 + 8))(&data_14399e720, rbx_2, r8)
int32_t rbp = 0
arg_8 = rax_7

if (rax_7 s> 0)
    do
        void* r9_1 = data_14399e720
        int64_t rax_8 = (*(r9_1 + 0x10))(&data_14399e720, rbx_2, zx.q(rbp), r9_1)
        int64_t r14_1
        
        if (rax_8 == 0)
            r14_1 = 0
        else
            r14_1 = rax_8 - 8
        
        int64_t rdi_1 = sx.q(rsi_1)
        rsi_1 = (rdi_1 + 1).d
        var_40.d = rsi_1
        
        if (rsi_1 s> r12)
            sub_1405a4d70(&var_48)
            r12 = var_40:4.d
            rsi_1 = var_40.d
            r15 = var_48
        
        rbp += 1
        *(r15 + (rdi_1 << 3)) = r14_1
    while (rbp s< arg_8)

int16_t* rdi_2 = r15
void* rbp_1 = &r15[sx.q(rsi_1) * 4]
int64_t* result

if (r15 == rbp_1)
label_141e7d52d:
    result = nullptr
else
    while (true)
        result = *rdi_2
        
        if (*(*(*result + 8))(result) == *arg_18)
            break
        
        rdi_2 = &rdi_2[4]
        
        if (rdi_2 == rbp_1)
            goto label_141e7d52d

if (r15 != 0)
    sub_140a74f90(r15)

return result
