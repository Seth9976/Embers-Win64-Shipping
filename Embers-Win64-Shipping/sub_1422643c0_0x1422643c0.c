// 函数: sub_1422643c0
// 地址: 0x1422643c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t arg_8 = arg2
int16_t* var_40
sub_140b63b70(&arg_8, &var_40)
int64_t rbx = *data_143f5b298
int64_t rax_1
int64_t r9
rax_1, r9 = sub_141dc9ff0(arg1)
r9.b = 1
(*(rbx + 0x400))(data_143f5b298, rax_1, &var_40, r9)
int16_t* const rdx_2 = &data_142d40450
int32_t var_38

if (var_38 != 0)
    rdx_2 = var_40

int64_t var_48
sub_140b58260(&var_48, rdx_2, 1)
int16_t* rcx_4 = var_40

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rax_2 = var_48
void* rax_4 = (*(*arg1 + 0x150))(arg1)
int64_t result

if (rax_4 == 0)
label_142264494:
    result = sub_1423f1730(data_143f5b298, rax_4)
    
    if (result.b != 0)
        return sub_1423d1e00(data_143f5b298, rax_4, rax_2, arg3, arg4, arg6)
    
    if (rax_4 != 0)
        int32_t rcx_9
        rcx_9.b = sub_140b5b8a0(rax_2.d, 0).b == 0
        result.b = rax_2:4.d != 0
        result.b |= rcx_9.b
        
        if (result.b != 0)
            int64_t** i = *(rax_4 + 0x98)
            result = sx.q(*(rax_4 + 0xa0))
            
            for (void* rbp_1 = &i[result]; i != rbp_1; i = &i[1])
                int64_t* rsi_1 = *i
                
                if (rsi_1 != 0)
                    result = sub_1420e4d10(rsi_1, &arg_8)
                    
                    if (*result == rax_2)
                        if ((*(*rsi_1 + 0x268))(rsi_1) != 0 && arg3 == 0)
                            sub_1423d83d0(data_143f5b298)
                        
                        (*(*rsi_1 + 0x260))(rsi_1, zx.q(arg3))
                        sub_1420ee450(rsi_1, arg4)
                        *(rsi_1 + 0xba) &= 0x7f
                        *(rsi_1 + 0xba) |= arg5 << 7
                        return sub_1420ee190(rsi_1, arg6)
else
    void* rcx_6 = *(rax_4 + 0x560)
    
    if (rcx_6 == 0)
        goto label_142264494
    
    result = sub_14244e5d0(rcx_6, rax_2)
    
    if (result.b == 0)
        goto label_142264494

return result
