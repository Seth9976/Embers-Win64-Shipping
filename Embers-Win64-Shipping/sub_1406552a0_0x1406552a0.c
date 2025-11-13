// 函数: sub_1406552a0
// 地址: 0x1406552a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
sub_140a96170(&var_48)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_48
int32_t arg_10 = 0

if (rax_2 != 0)
    rdi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rsi
rsi.b = arg_10 != 0
int64_t rdx_4
rdx_4.b = rax_4 != 0
int64_t rdx_5 = rdx_4 + rax_4
*(arg2 + 0x20) = rdx_5
int64_t* rax_5 = sub_140ac6680(rdi, rdx_5)
int16_t* _String_1 = nullptr
int32_t rbx_1 = rax_5[1].d
int64_t rdi_1 = *rax_5

if (rbx_1 != 0)
    sub_1405a4c70(&_String_1, rbx_1, 0)
    memcpy(_String_1, rdi_1, rbx_1 * 2)
else
    int32_t var_4c_1 = 0

int16_t* const _String = &data_142d40450
int16_t* const rdi_2

if (rsi.b == 0)
    rdi_2 = &data_142d40450
else
    rdi_2 = &data_142d404c4
    sub_140a306e0(&_String_1, &data_142d404c4, &data_142d40450, 1)

int64_t zmm0 = sub_140a306e0(&_String_1, &data_142d7fa60, rdi_2, 1)

if (rbx_1 != 0)
    _String = _String_1

int32_t result = _wtof(_String)
int16_t* _String_2 = _String_1
int128_t zmm6
zmm6.d = fconvert.s(zmm0)

if (_String_2 != 0)
    result = sub_140a74f90(_String_2)

*arg3 = zmm6.d
int64_t* var_40

if (var_40 != 0)
    result = var_40[1].d
    var_40[1].d -= 1
    
    if (result == 1)
        result = (**var_40)(var_40)
        int32_t rdi_3 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rdi_3 == 1)
            return (*(*var_40 + 8))(var_40, zx.q(rdi_3))

return result
