// 函数: sub_140d75440
// 地址: 0x140d75440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d s<= 0)
    return 

int64_t* rax_1 = *arg2
int16_t* const rsi_1 = &data_142d40450
wchar16* _String

if (rax_1[1].d == 0)
    _String = &data_142d40450
else
    _String = *rax_1

wcstod(_String, nullptr)
int32_t rcx_1 = (int.q(arg1)).d
char rax_2

if (rcx_1 == 0 || mods.dp.d(0:0x3c, rcx_1) == 0)
    rax_2 = 1
else
    rax_2 = 0

int32_t rbp_1 = 0
int32_t rbx_1 = 0

if (rax_2 != 0)
    rbx_1 = rcx_1

TEB* gsbase

if (data_143e20700 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int32_t rax
    int64_t r8_2
    rax, r8_2 = _Init_thread_header(&data_143e20700)
    
    if (data_143e20700 == 0xffffffff)
        int64_t* rcx_7 = data_143db18d0
        
        if (rcx_7 == 0)
            sub_140a53c40()
            rcx_7 = data_143db18d0
        
        int64_t r9_1 = *rcx_7
        r8_2.b = 1
        data_143e206f8 = (*(r9_1 + 0xb0))(rcx_7, u"rhi.SyncInterval", r8_2, r9_1)
        _Init_thread_footer(&data_143e20700)

int64_t* rdi_1 = data_143e206f8

if (rdi_1 == 0)
    return 

if (rbx_1 s> 0)
    rbp_1 = divs.dp.d(0:0x3c, rbx_1)

int16_t* var_18
sub_140a2e390(&var_18, u"%d", zx.q(rbp_1))
int32_t var_10

if (var_10 != 0)
    rsi_1 = var_18

(*(*rdi_1 + 0x80))(rdi_1, rsi_1, 0x8000000)
int16_t* rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)
