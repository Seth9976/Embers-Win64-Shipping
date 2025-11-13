// 函数: sub_141ecc080
// 地址: 0x141ecc080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t zmm0 = float.d(performanceCount) f* data_143d796f8
arg1[2] = 0
*arg1 = zmm0 f+ 16777216.0
int32_t rax = data_143f3a4fc
data_143f3a4f8 = 0

if (rax s< 0 && rax != 0)
    sub_1405dadb0(&data_143f3a4f0, 0)

int64_t* rax_1 = data_143f3a4e8
int64_t* var_28 = nullptr
int32_t var_20 = 0
int16_t* _String_1 = nullptr
int32_t rbx_1 = rax_1[1].d
int64_t rdi = *rax_1
int32_t var_30 = rbx_1

if (rbx_1 != 0)
    sub_1405a4c70(&_String_1, rbx_1, 0)
    memcpy(_String_1, rdi, rbx_1 * 2)
else
    int32_t var_2c_1 = 0

int32_t result = sub_140a2ccb0(&_String_1, &var_28, U",", 1)
int16_t* _String_2 = _String_1

if (_String_2 != 0)
    result = sub_140a74f90(_String_2)

int64_t* rbx_2 = var_28
int64_t rdi_1 = sx.q(var_20)
void* rsi_2 = &rbx_2[rdi_1 * 2]

if (rbx_2 != rsi_2)
    do
        int32_t rdi_2 = rbx_2[1].d
        int64_t r14_1 = *rbx_2
        _String_1 = nullptr
        
        if (rdi_2 != 0)
            sub_1405a4c70(&_String_1, rdi_2, 0)
            memcpy(_String_1, r14_1, rdi_2 * 2)
        else
            int32_t var_2c_2 = 0
        
        _DeleteExceptionPtr(&_String_1)
        int16_t* const _String = &data_142d40450
        
        if (rdi_2 != 0)
            _String = _String_1
        
        result = _wtoi(_String)
        int64_t rdi_3 = sx.q(data_143f3a4f8)
        int32_t result_1 = result
        int32_t rcx_7 = (rdi_3 + 1).d
        bool cond:2_1 = rcx_7 s<= data_143f3a4fc
        data_143f3a4f8 = rcx_7
        
        if (not(cond:2_1))
            result = sub_1405a4cf0(&data_143f3a4f0)
        
        *(data_143f3a4f0 + (rdi_3 << 2)) = result_1
        int16_t* _String_3 = _String_1
        
        if (_String_3 != 0)
            result = sub_140a74f90(_String_3)
        
        rbx_2 = &rbx_2[2]
    while (rbx_2 != rsi_2)
    
    rdi_1 = zx.q(var_20)
    rbx_2 = var_28

data_143f5b2a4 = 0

if (rdi_1.d != 0)
    int32_t i
    
    do
        int64_t rcx_9 = *rbx_2
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        rbx_2 = &rbx_2[2]
        i = rdi_1.d
        rdi_1 = zx.q(rdi_1.d - 1)
    while (i != 1)
    rbx_2 = var_28

if (rbx_2 == 0)
    return result

return sub_140a74f90(rbx_2)
