// 函数: sub_140bd9510
// 地址: 0x140bd9510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 0

char* var_48

if ((*(arg1 + 0xb0) & 2) != 0)
    int64_t* rcx = *(arg1 + 0xb8)
    char result = 0
    var_48 = &result
    
    if ((*(*rcx + 0xb8))(rcx, arg2) != 0)
        return result

int64_t* i_1 = *(arg1 + 0x50)
void* var_38 = arg1
int32_t var_28_1 = 0xffffffff
int16_t var_24_1 = 0x101
char var_22_1 = 0
sub_1406328d0(&var_38)
int64_t* i_2

for (int64_t* i = i_1; i != 0; i = i_2)
    int32_t j = 0
    
    if (i[7].d s> 0)
        do
            int64_t rdx_2 = sx.q(*(i + 0x3c) * j) + sx.q(*(i + 0x4c))
            
            if ((*(*i + 0x80))(i, rdx_2 + arg2, rdx_2 + arg3, zx.q(arg4), var_48) == 0)
                return 0
            
            j += 1
        while (j s< i[7].d)
    
    i_2 = i[4]
    sub_1406328d0(&var_38)

return 1
