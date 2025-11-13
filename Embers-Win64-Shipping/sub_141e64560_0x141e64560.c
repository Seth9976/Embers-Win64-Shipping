// 函数: sub_141e64560
// 地址: 0x141e64560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x430)

if (result == 0)
    int64_t* rax = sub_14246dc80()
    result = rax[0x23]
    
    if (result == 0)
        int64_t rdx = *rax
        (*(rdx + 0x390))(rax, rdx)
        result = rax[0x23]
    
    *(arg1 + 0x430) = result

int64_t* i = *(result + 0x48)

for (void* rdi_3 = &i[sx.q(*(result + 0x50)) * 2]; i != rdi_3; i = &i[2])
    int16_t* rdx_1
    
    if (i[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *i
    
    if (sub_140a23cf0(arg2, rdx_1, 1, 0, 0xffffffff).d != 0xffffffff)
        result.b = 1
        return result

result.b = 0
return result
