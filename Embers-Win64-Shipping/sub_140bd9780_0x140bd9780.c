// 函数: sub_140bd9780
// 地址: 0x140bd9780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_48
int64_t* rax_1 = (*(*arg1 + 0x288))(arg1, &var_48, &data_142e9f168)
int16_t* const rdi = &data_142d40450
int16_t* rdx_1

if (rax_1[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax_1

void arg_10
int32_t result = sub_140bddcb0(arg1, *sub_140b58260(&arg_10, rdx_1, 1), 2)
int16_t* rcx_2 = var_48
int64_t rsi
rsi.b = result != 0xffffffff

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if (rsi.b == 0)
    int64_t var_28
    int64_t* rax_3 = sub_140bdc6b0(arg1, &var_28)
    int16_t* rcx_4 = *rax_3
    int32_t rdx_4 = rax_3[1].d
    int32_t rdx_5 = neg.d(rdx_4)
    *rax_3 = 0
    int32_t r8_1 = rax_3[1].d
    var_48 = rcx_4
    int32_t rcx_5 = *(rax_3 + 0xc)
    int32_t rdx_8 = sbb.d(rdx_5, rdx_5, rdx_4 != 0) + 5 + r8_1
    int32_t var_3c_1 = rcx_5
    rax_3[1] = 0
    
    if (rdx_8 s> rcx_5)
        sub_1405947f0(&var_48, rdx_8)
    
    sub_140a20ba0(&var_48, u"_MAX", 4)
    int16_t* rsi_1 = var_48
    int64_t rax_5 = *arg1
    int16_t* const r8_2 = &data_142d40450
    
    if (r8_1 != 0)
        r8_2 = rsi_1
    
    var_48 = nullptr
    int32_t var_40_1
    var_40_1.q = 0
    int64_t var_38
    int16_t** rax_6 = (*(rax_5 + 0x288))(arg1, &var_38, r8_2)
    
    if (rax_6[1].d != 0)
        rdi = *rax_6
    
    int64_t arg_8
    sub_140b58260(&arg_8, rdi, 1)
    int64_t rcx_10 = var_38
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    int64_t rcx_12 = var_28
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    if (sub_140bddcb0(arg1, arg_8, 2) == 0xffffffff)
        result.b = 0
        return result

result.b = 1
return result
