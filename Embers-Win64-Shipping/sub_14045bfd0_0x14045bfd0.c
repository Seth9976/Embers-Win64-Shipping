// 函数: sub_14045bfd0
// 地址: 0x14045bfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = data_143e1e008
int64_t var_20 = data_143e1e010
int64_t* rax_2 = data_143e1e018

if (rax_2 != 0)
    rax_2[1].d += 1

data_143e20e4c = 0x80
__builtin_memset(&data_143e20e20, 0, 0x2c)
data_143e20e54 = 0
data_143e20e60 = 0
data_143e20e68 = 0
data_143e20e50 = 0xffffffff
void arg_8
sub_140d42530(&data_143e20e20, &arg_8, &var_28, nullptr)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp1_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rax_2 + 8))(rax_2, 1)

return atexit(sub_142cc9d20) __tailcall
