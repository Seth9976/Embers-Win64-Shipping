// 函数: sub_140be0b10
// 地址: 0x140be0b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28 = arg1
void* i_1

if (arg1 == 0)
    i_1 = nullptr
else
    i_1 = *(arg1 + 0x50)

int32_t var_18 = 0xffffffff
int16_t var_14 = 0x101
char var_12 = 0
sub_1406328d0(&var_28)
void* i_2

for (void* const i = i_1; i != 0; i = i_2)
    int64_t rcx_1 = *(i + 0x40)
    
    if (rcx_1.b s>= 0)
        break
    
    if (test_bit(rcx_1, 0xa))
        return i
    
    i_2 = *(i + 0x20)
    sub_1406328d0(&var_28)

return nullptr
