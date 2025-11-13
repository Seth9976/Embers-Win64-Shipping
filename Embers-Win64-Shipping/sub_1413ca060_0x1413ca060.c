// 函数: sub_1413ca060
// 地址: 0x1413ca060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_298 = &arg1[2]
int64_t* var_290 = &arg1[1]
int32_t arg_18
sub_140bbe6a0(*arg1 + 0x1cb8, &arg_18, &var_298, nullptr)
void* rbx = *arg1
int64_t rbp = arg1[1]
void arg_20

if (*sub_140865c40(rbx + 0x1c68, &arg_20, rbp) != 0xffffffff)
    int32_t arg_8
    sub_140865c40(rbx + 0x1c68, &arg_8, rbp)
    int64_t rax_2 = sx.q(arg_8)
    void* const rcx_4
    
    if (rax_2.d == 0xffffffff)
        rcx_4 = nullptr
    else
        rcx_4 = *(rbx + 0x1c68) + rax_2 * 0x18
    
    int64_t* rax_4 = rcx_4 + 8
    
    if (rcx_4 == 0)
        rax_4 = nullptr
    
    int32_t* result = *rax_4
    result[0x226] += 1
    return result

int32_t* rax_5 = j_sub_140a82f30(0x8a0)
void* const rbx_1 = rax_5

if (rax_5 == 0)
    rbx_1 = nullptr
else
    sub_14234fc70(rax_5)
    *(rbx_1 + 0x890) = 0
    *(rbx_1 + 0x898) = 1

void* rdx_4 = arg1[1]
void* const var_2a8 = rbx_1
memcpy(rbx_1, *(rdx_4 + 0xc8), 0x890)
void var_278
sub_1413c2ae0(&var_278)
memset(&var_278, 0, 0x260)
int64_t* rcx_9 = data_143f0f180
void* var_2b8
(*(*rcx_9 + 0xf8))(rcx_9, &var_2b8, &var_278, &data_143f59580, 2, 1)
void* rax_7 = var_2b8
void* var_2b0 = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

sub_1405d1550(&var_2b8)
sub_1405d1600(var_2a8 + 0x890, &var_2b0)
sub_1405d1550(&var_2b0)
int64_t* rcx_15 = *arg1 + 0x1c68
int64_t* var_288 = &arg1[1]
void** var_280_1 = &var_2a8
int32_t var_2a0
return sub_140bbe6a0(rcx_15, &var_2a0, &var_288, nullptr)
