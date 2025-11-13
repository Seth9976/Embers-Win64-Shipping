// 函数: sub_14272c210
// 地址: 0x14272c210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_38 = 0
int64_t var_30 = 0
int32_t var_28 = 0

if (&var_38 != arg2)
    int64_t rbx_1 = sx.q(arg2[1].d)
    int64_t rsi_1 = *arg2
    var_30.d = rbx_1.d
    
    if (rbx_1.d != 0)
        sub_1405c4a00(&var_38, rbx_1.d, 0)
        memcpy(var_38, rsi_1, (rbx_1 << 3).d)

int64_t rbx_2 = *arg1
int64_t rax
int512_t result
rax, result = sub_140d1fd30(arg1, data_143f72930)
(*(rbx_2 + 0x210))(arg1, rax, &var_38)
uint64_t rcx_4 = var_38

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

result.o = var_28
return result
