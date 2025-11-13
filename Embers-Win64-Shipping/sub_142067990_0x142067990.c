// 函数: sub_142067990
// 地址: 0x142067990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f46bd0 s> *rbx_1)
    _Init_thread_header(&data_143f46bd0)
    
    if (data_143f46bd0 == 0xffffffff)
        int64_t* rcx_14 = data_143db18d0
        
        if (rcx_14 == 0)
            sub_140a53c40()
            rcx_14 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        data_143f46bc8 = (*(*rcx_14 + 0xb0))(rcx_14, u"GPUSort.DebugOffsets", r8_4)
        _Init_thread_footer(&data_143f46bd0)

if (data_143f46be0 s> *rbx_1)
    _Init_thread_header(&data_143f46be0)
    
    if (data_143f46be0 == 0xffffffff)
        int64_t* rcx_13 = data_143db18d0
        
        if (rcx_13 == 0)
            sub_140a53c40()
            rcx_13 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        data_143f46bd8 = (*(*rcx_13 + 0xb0))(rcx_13, u"GPUSort.DebugSort", r8_3)
        _Init_thread_footer(&data_143f46be0)

int64_t* rbx_2 = data_143f46bc8
int32_t r12 = *(data_143f412e8 + 4)
int32_t rbp = *(data_143f41398 + 4)
int16_t* var_38
sub_140a2e390(&var_38, u"%d", 1)
int16_t* const rdi = &data_142d40450
int16_t* const rdx = &data_142d40450
int32_t var_30

if (var_30 != 0)
    rdx = var_38

(*(*rbx_2 + 0x80))(rbx_2, rdx, 0x8000000)
int16_t* rcx_2 = var_38

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rbx_3 = data_143f46bd8
int16_t* var_28
sub_140a2e390(&var_28, u"%d", 1)
int16_t* const rdx_1 = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rdx_1 = var_28

(*(*rbx_3 + 0x80))(rbx_3, rdx_1, 0x8000000)
int16_t* rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_142066820(arg1, arg2, arg3)
int64_t* rbx_4 = data_143f46bc8
int64_t r8_1
r8_1.b = r12 != 0
sub_140a2e390(&var_28, u"%d", r8_1)
int16_t* rdx_3 = &data_142d40450

if (var_20 != 0)
    rdx_3 = var_28

(*(*rbx_4 + 0x80))(rbx_4, rdx_3, 0x8000000)
int16_t* rcx_9 = var_28

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t* rbx_5 = data_143f46bd8
int32_t rsi_1
rsi_1.b = rbp != 0
sub_140a2e390(&var_38, u"%d", zx.q(rsi_1))

if (var_30 != 0)
    rdi = var_38

int64_t result = (*(*rbx_5 + 0x80))(rbx_5, rdi, 0x8000000)
int16_t* rcx_12 = var_38

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
