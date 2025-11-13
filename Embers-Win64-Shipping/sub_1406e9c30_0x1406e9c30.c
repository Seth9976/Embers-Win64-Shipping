// 函数: sub_1406e9c30
// 地址: 0x1406e9c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void var_138
char* entry_rdx
void* rax_2 = sub_14060c4d0(&var_138, entry_rdx)
int64_t rdi = 0
int32_t rsi = 0
int64_t var_148 = 0
int64_t var_140 = 0
int16_t* rbp = *(rax_2 + 0x108)
int32_t rax_3 = 0

if (rbp != 0 && *rbp != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rbp[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_148, rbx_1.d + 1)
        rax_3 = var_140:4.d
        rsi = var_140.d
        rdi = var_148
    
    rsi += rbx_1.d + 1
    var_140.d = rsi
    
    if (rsi s> rax_3)
        sub_140594770(&var_148)
        rsi = var_140.d
        rdi = var_148
    
    UnDecorator::getReferenceType(rdi, rbp, (rbx_1.d + 1) * 2)

int32_t rcx_4
rcx_4.b = sub_140b5b8a0(data_143cdf5e0.d, 0).b == 0
int64_t result
result.b = data_143cdf5e0:4.d != 0
result.b |= rcx_4.b

if (result.b != 0)
    result = sub_140d3c6e0(&data_143cdf5d8)
    
    if (result != 0)
        result = sub_140d1fd20(result, data_143cdf5e0)
        
        if (result != 0)
            var_148 = 0
            var_140:4.d = 0
            var_140.d = rsi
            
            if (rsi != 0)
                sub_1405a4c70(&var_148, rsi, 0)
                memcpy(var_148, rdi, rsi * 2)
            
            int64_t* rax_4 = sub_140d3c6e0(&data_143cdf5d8)
            int64_t rax_5 = sub_140d1fd30(rax_4, data_143cdf5e0)
            int64_t r9_1 = *rax_4
            result = (*(r9_1 + 0x210))(rax_4, rax_5, &var_148, r9_1)
            int64_t rcx_10 = var_148
            
            if (rcx_10 != 0)
                result = sub_140a74f90(rcx_10)

if (rdi != 0)
    result = sub_140a74f90(rdi)

int64_t var_38

if (var_38 != 0)
    result = sub_140a74f90(var_38)

__security_check_cookie(rax_1 ^ &var_168)
return result
