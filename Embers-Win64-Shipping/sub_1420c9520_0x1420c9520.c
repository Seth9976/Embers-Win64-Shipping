// 函数: sub_1420c9520
// 地址: 0x1420c9520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38
sub_140d3a3a0(&var_38, nullptr)
int64_t var_30 = 0
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int64_t arg_10
sub_140b58260(&arg_10, rdx, 1)
sub_140d3a3a0(&var_38, arg1)
int64_t rax = arg_10
int64_t var_30_1 = rax
int128_t var_28 = var_38
int32_t rcx_3
rcx_3.b = sub_140b5b8a0(rax.d, 0).b == 0
int64_t result
result.b = var_28:0xc.d != 0
result.b |= rcx_3.b

if (result.b != 0)
    result = sub_140d3c6e0(&var_28)
    
    if (result != 0)
        result = sub_140d1fd20(result, var_28:8.q)
        
        if (result != 0)
            int64_t* rax_1 = sub_140d3c6e0(&var_28)
            result = sub_1423de540(data_143f5b298, rax_1, 1)
            
            if (result != 0)
                void* rbx_1 = *(result + 0x188)
                void* rbx_2
                
                if (rbx_1 == 0)
                    rbx_2 = *(result + 0x300)
                else
                    rbx_2 = *(rbx_1 + 0xc0)
                
                int128_t var_18 = var_28
                sub_1423e6b10(rbx_2, &arg_10, &var_18)
                result = sub_1423dce10(rbx_2, &arg_10)
                
                if (result != 0)
                    result = sub_1423e60e0(rbx_2, arg_10)

int64_t rcx_11 = *arg2

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
