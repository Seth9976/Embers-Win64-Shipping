// 函数: sub_14045be20
// 地址: 0x14045be20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = data_143e202b8
int64_t var_20 = data_143e202c0
int64_t* rax_2 = data_143e202c8

if (rax_2 != 0)
    rax_2[1].d += 1

data_143e20e9c = 0x80
__builtin_memset(&data_143e20e70, 0, 0x2c)
data_143e20ea4 = 0
data_143e20eb0 = 0
data_143e20eb8 = 0
data_143e20ea0 = 0xffffffff
void arg_8
sub_140d42530(&data_143e20e70, &arg_8, &var_28, nullptr)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp1_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rax_2 + 8))(rax_2, 1)

return atexit(sub_142cc9bb0) __tailcall
