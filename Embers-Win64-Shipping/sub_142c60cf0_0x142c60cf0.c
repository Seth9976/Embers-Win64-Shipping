// 函数: sub_142c60cf0
// 地址: 0x142c60cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = -1
void* result = nullptr
int128_t var_28
uint64_t* rax = sub_142c59600(&var_28)
int64_t* i = *(arg2 + 0x10)
int128_t zmm6 = *rax

for (; i != 0; i = i[2])
    void* result_1 = *i
    
    if (*(result_1 + 0x60) == 0)
        int128_t zmm0 = *(result_1 + 0x218)
        var_28 = zmm6
        int128_t var_38 = zmm0
        int64_t rax_1 = sub_142c595d0(&var_28, &var_38)
        
        if (rax_1 s> rbp)
            rbp = rax_1
            result = result_1

return result
