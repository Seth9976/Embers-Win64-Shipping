// 函数: sub_142c5d010
// 地址: 0x142c5d010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0xa48)
int64_t rsi = -1
void* result = nullptr
int128_t var_48
int128_t zmm6 = *sub_142c59600(&var_48)
void var_38
sub_142c67240(rbx, &var_38)

for (void* i = sub_142c67110(&var_38); i != 0; i = sub_142c67110(&var_38))
    for (int64_t* j = *(*(i + 0x18) + 0x10); j != 0; j = j[2])
        void* result_1 = *j
        
        if (*(result_1 + 0x60) == 0)
            int128_t zmm0 = *(result_1 + 0x218)
            var_48 = zmm6
            int128_t var_58 = zmm0
            int64_t rax_1 = sub_142c595d0(&var_48, &var_58)
            
            if (rax_1 s> rsi)
                rsi = rax_1
                result = result_1

return result
