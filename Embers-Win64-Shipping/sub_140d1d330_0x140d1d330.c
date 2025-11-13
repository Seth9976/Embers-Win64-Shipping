// 函数: sub_140d1d330
// 地址: 0x140d1d330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
char rsi = 0
int32_t i = 0
void** result = *arg2
int64_t rbx = arg2[1]
int64_t rdi = arg2[2]
void** result_3

if (result == 0)
    result_3 = nullptr
else
    result = result()
    result_3 = result

void** result_2

if (rbx == 0)
    result_2 = nullptr
else
    result = rbx()
    result_2 = result

void** result_1

if (rdi == 0)
    result_1 = nullptr
else
    result = rdi()
    result_1 = result

if (*arg1 == 0)
    void var_2b8
    void* rax_2 = sub_14060c4d0(&var_2b8, arg2[3])
    int32_t rdi_1 = *(arg2 + 0x3c)
    void var_2d8
    uint64_t rbx_1 = *sub_140b58260(&var_2d8, *(rax_2 + 0x108), 1)
    void* rax_5 = sub_140d2d830(sub_140bdfe30(), result_3, rbx_1, rdi_1, 0, 0, nullptr)
    void var_198
    void*** rbx_3
    
    if (rax_5 == 0)
        rbx_3 = nullptr
    else
        int64_t* rax_6 = sub_140d159c0(&var_198)
        char var_310_1
        var_310_1.q = arg2[4]
        rbx_3 = sub_140bd6390(rax_5, rax_6, result_2, result_1, arg2[8].d, var_310_1, arg2[5])
        rsi = 1
    
    if ((rsi & 1) != 0)
        sub_140d16260(&var_198)
    
    int64_t var_1b8
    
    if (var_1b8 != 0)
        sub_140a74f90(var_1b8)
    
    *arg1 = rbx_3
    int32_t i_1 = arg2[7].d
    int64_t var_2f0 = arg2[6]
    i = i_1
    
    if (i_1 != 0)
        do
            char var_2e0_1 = 1
            int128_t var_2c8 = rbx_3.o
            sub_140d1ac90(&var_2c8, &var_2f0, &i)
        while (i != 0)
    
    result = sub_140ca8970(rbx_3, 0)

__security_check_cookie(rax_1 ^ &var_338)
return result
