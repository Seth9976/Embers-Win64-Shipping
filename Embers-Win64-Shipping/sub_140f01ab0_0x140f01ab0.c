// 函数: sub_140f01ab0
// 地址: 0x140f01ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg3
float var_b8
(*(*rcx + 0x38))(rcx, &var_b8)
int64_t* rcx_1 = *arg3
int32_t arg_10
(*(*rcx_1 + 0x10))(rcx_1, &arg_10)
int64_t* rcx_2 = *arg3
int16_t var_b0
(*(*rcx_2 + 0x20))(rcx_2, &var_b0)
char var_98
int32_t arg_8
int32_t arg_c

if (var_98 != 0)
    arg_8 = arg_10 + arg4
    arg_c = arg5
else
    int32_t rax_3 = (arg_10.q).d
    arg_8 = rax_3
    arg_c = rax_3 + arg4
int16_t** rax_5 = *(arg1 + 0x78)
int32_t rdx_3 = rax_5[1].d
int16_t* rcx_6

if (rdx_3 == 0)
    rcx_6 = &data_142d40450
else
    rcx_6 = *rax_5

float rax_6 = rdx_3 - 1
int128_t zmm1 = *(arg1 + 0xb0)
int32_t var_88 = arg6.d
int128_t zmm0 = *(arg1 + 0xa0)

if (rdx_3 == 0)
    rax_6 = 0f

float arg_18 = 0f
int64_t var_90 = arg_18.q
int16_t var_84 = var_b0
int64_t var_80 = *(arg1 + 0x90)
int64_t var_78 = *(arg1 + 0x98)
int64_t var_50 = *(arg1 + 0xc0)
int64_t* rax_12 = *(arg1 + 0xc8)
int128_t var_70 = zmm0
int128_t var_60 = zmm1

if (rax_12 != 0)
    rax_12[1].d += 1

int64_t var_40 = *(arg1 + 0xd0)
int32_t var_38 = *(arg1 + 0xd8)
char var_34 = *(arg1 + 0xdc)
int64_t* var_a8
sub_140f08790(&arg_18, &var_a8, &var_90, &arg_8, rcx_6)

if (rax_12 != 0)
    rax_12[1].d -= 1
    
    if (rax_12[1].d == 1)
        (**rax_12)(rax_12)
        int32_t temp2_1 = *(rax_12 + 0xc)
        *(rax_12 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rax_12 + 8))(rax_12, 1)

*arg2 = var_b8 + arg_18
float var_b4
arg2[1] = var_b4 + rax_6
int64_t* var_a0

if (var_a0 != 0)
    var_a0[1].d -= 1
    
    if (var_a0[1].d == 1)
        (**var_a0)(var_a0)
        int32_t temp3_1 = *(var_a0 + 0xc)
        *(var_a0 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_a0 + 8))(var_a0, 1)

return arg2
