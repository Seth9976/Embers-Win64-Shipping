// 函数: sub_142293080
// 地址: 0x142293080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result

if ((*(arg1 + 0x2b4) & 0x20) != 0)
    result.o = *(arg1 + 0x304)
    return result

int64_t* rax_1

if (sub_140d3e110(&arg1[0x75]) == 0)
    rax_1 = (*(*arg1 + 0x690))(arg1)
    
    if (rax_1 == 0)
        result.o = zx.o(0)
        return result
else
    rax_1 = sub_140d3c6e0(&arg1[0x75])

jump(*(*rax_1 + 0x270))
