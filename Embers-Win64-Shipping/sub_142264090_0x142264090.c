// 函数: sub_142264090
// 地址: 0x142264090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3[1].d
int64_t rbp = *arg3
uint64_t var_48 = 0

if (rdi != 0)
    sub_1405a4c70(&var_48, rdi, 0)
    memcpy(var_48, rbp, rdi * 2)
else
    int32_t var_3c_1 = 0

TEB* gsbase

if (data_143f527f8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f527f8)
    
    if (data_143f527f8 == 0xffffffff)
        sub_140b58260(&data_143f527f0, &data_143311af8, 1)
        _Init_thread_footer(&data_143f527f8)

if (arg4 == data_143f527f0 && arg2 != 0)
    int16_t* const rbx_1 = &data_142d40450
    int64_t var_28
    int64_t* rax_2 = sub_1422a12b0(arg2, &var_28)
    
    if (rax_2[1].d != 0)
        rbx_1 = *rax_2
    
    uint64_t var_38
    sub_140a2e390(&var_38, u"%s: %s", rbx_1)
    uint64_t rcx_6 = var_48
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t rcx_7 = var_28
    var_48 = var_38
    int32_t var_30
    int32_t var_40_1 = var_30
    int32_t var_2c
    int32_t var_3c_2 = var_2c
    var_30.q = 0
    var_38 = 0
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

void* result = *(arg1 + 0x298)

if (result != 0)
    void* rcx_8 = *(result + 0x70)
    
    if (rcx_8 != 0)
        int64_t* rcx_9 = *(rcx_8 + 0x40)
        
        if (rcx_9 != 0)
            result = (*(*rcx_9 + 0x280))(rcx_9, &var_48)

uint64_t rcx_10 = var_48

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
