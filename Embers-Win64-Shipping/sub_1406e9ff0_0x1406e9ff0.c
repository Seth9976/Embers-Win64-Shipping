// 函数: sub_1406e9ff0
// 地址: 0x1406e9ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t rax = 0
int64_t r14 = 0
int64_t var_10 = 0
int64_t rsi = 0
int64_t var_18 = 0
int16_t var_28

if (arg3 != 0 && *arg3 != 0)
    char* rbx_1 = -ffffffffffffffff
    
    do
        rbx_1 = &rbx_1[1]
    while (*(rbx_1 + arg3) != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        rax = var_10:4.d
        rdi = var_10.d
        r14 = var_18
    
    rdi += rbx_1.d + 1
    var_10.d = rdi
    
    if (rdi s> rax)
        sub_140594770(&var_18)
        rdi = var_10.d
        r14 = var_18
    
    var_28 = 0x3f
    sub_1405a7220(r14, rbx_1.d + 1, arg3, rbx_1.d + 1, 0x3f)
    rsi = r14

int32_t rcx_3
rcx_3.b = sub_140b5b8a0(data_143cdf630.d, 0).b == 0
int64_t result
result.b = data_143cdf630:4.d != 0
result.b |= rcx_3.b

if (result.b != 0)
    result = sub_140d3c6e0(&data_143cdf628)
    
    if (result != 0)
        result = sub_140d1fd20(result, data_143cdf630)
        
        if (result != 0)
            var_18 = 0
            var_10:4.d = 0
            var_10.d = rdi
            
            if (rdi != 0)
                sub_1405a4c70(&var_18, rdi, 0)
                memcpy(var_18, rsi, rdi * 2)
            
            int64_t* rax_1 = sub_140d3c6e0(&data_143cdf628)
            int64_t rax_2 = sub_140d1fd30(rax_1, data_143cdf630)
            int64_t r9_2 = *rax_1
            result = (*(r9_2 + 0x210))(rax_1, rax_2, &var_18, r9_2, var_28)
            int64_t rcx_9 = var_18
            
            if (rcx_9 != 0)
                result = sub_140a74f90(rcx_9)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
