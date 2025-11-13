// 函数: sub_142b79860
// 地址: 0x142b79860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char const (** const i)[0x6] = &data_14367cdf0
int32_t rdi = 0

do
    int32_t rax = sub_142a862b0(arg1, *i, rax)
    
    if (rax == 0)
        return rdi + 0x1000
    
    rdi += 1
    i = &i[1]
while (i s< &data_14367ce18)

int32_t result = j_sub_142a94e30(0x100a, arg1)

if (result s>= 0)
    return result

if (sub_142a862b0(arg1, "others", result) == 0)
    return 0x67

return -1
