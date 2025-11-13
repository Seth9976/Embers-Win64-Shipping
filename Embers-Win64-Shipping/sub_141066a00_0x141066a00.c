// 函数: sub_141066a00
// 地址: 0x141066a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
void buffer2
sub_140fd95b0(&buffer2, arg3, arg3.b)
EnterCriticalSection(&data_143e2c820)
void* rbx_2
int32_t var_58
void buffer2_1

if (data_143e2c850.d == data_143e2c87c)
label_141066b45:
    void*** rax_10 = j_sub_140a82f30(0x248)
    void*** rdi_1
    
    if (rax_10 == 0)
        rdi_1 = nullptr
    else
        void*** rax_11 = sub_14105d170(rax_10, &buffer2, &buffer2_1, var_58)
        rdi_1 = rax_11
        
        if (rax_11 != 0)
            rax_11[1].d += 1
    
    int32_t var_270
    sub_14105e680(&data_143e2c848, &var_270)
    void* var_268
    sub_14105d230(var_268, &buffer2)
    int32_t rax_12 = var_270
    *(var_268 + 0x230) = rdi_1
    *(var_268 + 0x238) = 0xffffffff
    int32_t var_278
    sub_140fe5360(&data_143e2c848, &var_278, *(var_268 + 0x208), var_268, rax_12, nullptr)
    rbx_2 = sx.q(var_278) * 0x240 + data_143e2c848
else
    void* rdx_1 = data_143e2c888
    void* rax_6 = &data_143e2c880
    
    if (rdx_1 != 0)
        rax_6 = rdx_1
    
    int32_t rbx_1 = *(rax_6 + ((sx.q(data_143e2c890 - 1) & sx.q(var_58)) << 2))
    
    if (rbx_1 == 0xffffffff)
        goto label_141066b45
    
    int64_t rbp_1 = data_143e2c848
    int64_t rsi_2
    
    while (true)
        rsi_2 = sx.q(rbx_1) * 0x240
        void* buffer1 = rsi_2 + rbp_1
        int64_t rax_8 = sx.q(*(buffer1 + 0x200))
        int32_t var_60
        
        if (rax_8.d != var_60)
            rax_8.b = 0
        else if (memcmp(buffer1, &buffer2, rax_8 << 5).d != 0)
            rax_8.b = 0
        else
            rax_8.b = 1
        
        if (rax_8.b == 0)
            rax_8.b = 0
        else if (memcmp(buffer1 + 0x20c, &buffer2_1, 0x20).d != 0)
            rax_8.b = 0
        else
            rax_8.b = 1
        
        if (rax_8.b != 0)
            break
        
        rbx_1 = *(buffer1 + 0x238)
        
        if (rbx_1 == 0xffffffff)
            goto label_141066b45
    
    if (rbx_1 == 0xffffffff)
        goto label_141066b45
    
    rbx_2 = rsi_2 + rbp_1
    
    if (rbx_2 == 0 || rbx_2 == -0x230)
        goto label_141066b45
LeaveCriticalSection(&data_143e2c820)
void* rcx_7 = *(rbx_2 + 0x230)
*arg2 = rcx_7

if (rcx_7 != 0)
    *(rcx_7 + 8) += 1

__security_check_cookie(rax_1 ^ &var_2a8)
return arg2
