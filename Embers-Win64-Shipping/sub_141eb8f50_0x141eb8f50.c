// 函数: sub_141eb8f50
// 地址: 0x141eb8f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e6d670(arg2, &arg1[2], 0, 0)
int64_t result = sx.q(arg1[1].d)
void* i = *arg1

for (void* rdi_1 = i + result * 0x28; i != rdi_1; i += 0x28)
    result = sub_140d3e110(i + 8)
    
    if (result.b != 0)
        int64_t* rcx_3 = *(i + 0x10)
        
        if (rcx_3 != 0)
            result = (*(*rcx_3 + 0x20))(rcx_3, arg2)

return result
