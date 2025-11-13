// 函数: sub_14242f9a0
// 地址: 0x14242f9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x138) != 0)
    return *(arg1 + 0x138)

if (sub_141dd9580(sub_14243ac50(arg1)) == 0 || *(arg1 + 0x30) == 0)
    return *(arg1 + 0x138)

int64_t arg_8
sub_141dc5110(&arg_8)
void* rax_2 = sub_1420e4e60(*(arg1 + 0x30))
int64_t rbx = arg_8

if (rbx != 0 && rax_2 != 0 && (*(rax_2 + 0x22d) & 0x10) != 0)
    j_sub_140b3db50()
    int64_t* rax_3 = sub_140b407e0(&data_143de7d78, rbx)
    
    if (rax_3 != 0)
        int64_t r8_1 = *rax_3
        *(arg1 + 0x138) = (*(r8_1 + 0x40))(rax_3, arg1, r8_1)

return *(arg1 + 0x138)
