// 函数: sub_141cab9a0
// 地址: 0x141cab9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

void arg_10
int64_t* rax
int64_t r9
rax, r9 = sub_140b58260(&arg_10, rdx, 1)
r9.b = 1
uint64_t* rdx_1 = *rax
int64_t var_28 = 0
int32_t var_20 = 0
int64_t rax_1 = *arg1
uint64_t* arg_8 = rdx_1
(*(rax_1 + 0x20))(arg1, rdx_1, &var_28, r9, 0)
int64_t* rcx_2 = &var_28

if (var_20 s<= 0)
    sub_141c94120(rcx_2)
    
    if (sub_141cab530(&arg1[0x84], arg_8) != 0)
        int64_t var_18
        sub_140920c10(&arg1[0xaa], sub_140b63b70(&arg_8, &var_18))
        int64_t rcx_6 = var_18
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t result
        result.b = 1
        return result
else
    sub_141c94120(rcx_2)

return 0
