// 函数: sub_142666f20
// 地址: 0x142666f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (sub_14243ade0((*(*arg1 + 0x150))()).b == 0)
label_142666f90:
    result.b = 1
    return result

int64_t* i = arg1[0x12]

for (void* rdi_1 = &i[sx.q(arg1[0x13].d)]; i != rdi_1; i = &i[1])
    int64_t* rcx_1 = *i
    
    if (rcx_1 != 0 && (*(*rcx_1 + 0x648))(rcx_1).b != 0)
        goto label_142666f90

result.b = 0
return result
