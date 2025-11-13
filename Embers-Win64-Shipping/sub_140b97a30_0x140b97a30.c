// 函数: sub_140b97a30
// 地址: 0x140b97a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_20 = &arg_8
void*** (* var_28)() = j_sub_140b99600
void* rax = sub_140a756e0(&var_28, &data_1439a98a0)
int64_t rsi = *arg1
int32_t rbp = arg1[1].d
int32_t result_1
sub_140ba6ab0(rax + 0x10, &result_1, rsi)
uint64_t result = sx.q(result_1)
void* const rbx_3

if (result.d == 0xffffffff)
    rbx_3 = nullptr
else
    rbx_3 = result * 0x60 + *(rax + 0x10)

int64_t* rcx_2 = rbx_3 + 8

if (rbx_3 == 0)
    rcx_2 = nullptr

if (rcx_2 != 0)
    sub_14090a370(rcx_2, rbp)
    int32_t* r8_1 = rbx_3 + 0x3c
    
    if (rbx_3 == 0)
        r8_1 = 0x34
    
    void* rax_1 = rbx_3 + 0x10
    
    if (rbx_3 == 0)
        rax_1 = 8
    
    result = zx.q(*rax_1)
    
    if (result.d == *r8_1)
        return sub_140bb5cf0(rax + 0x10, rsi)

return result
