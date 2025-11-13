// 函数: sub_1426d7cd0
// 地址: 0x1426d7cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

int64_t* rdi = arg1[0x4b]

if (rdi != 0)
    int64_t rax_2 = sub_1427303e0()
    int64_t r8_1 = *rdi
    int64_t result = (*(r8_1 + 0x610))(rdi, rax_2, r8_1)
    
    if (result != 0)
        return result

int64_t rax_3 = sub_1427303e0()
int64_t r8_2 = *arg1
return (*(r8_2 + 0x610))(arg1, rax_3, r8_2)
