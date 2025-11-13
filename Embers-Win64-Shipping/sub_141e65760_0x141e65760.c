// 函数: sub_141e65760
// 地址: 0x141e65760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[2]
void* result = rcx[0x18]
int64_t rdi = *(result + 0x28)

if (rdi != 0)
    int64_t rsi_1 = *rcx
    int64_t* (* var_48)(int64_t* arg1)
    int64_t zmm2
    
    if (*(result + 0x182) s< 0)
        int64_t var_60_1 = rsi_1
        (*(*arg1 + 0x70))(arg1)
        zmm2.d = arg2
        void** const var_28_1 = &data_142e345d8
        int64_t var_38_1 = 0
        var_48 = j_sub_141e52ac0
        int128_t var_20_1 = rdi.o
        int64_t var_58 = zmm2
        int64_t var_10_1 = zmm2
        arg2 = sub_141e85f30(&var_48)
        rcx = arg1[2]
    
    if ((*(rcx[0x18] + 0x183) & 1) != 0)
        int64_t var_60_2 = rsi_1
        (*(*arg1 + 0x78))(arg1)
        void** const var_28_2 = &data_142e345d8
        zmm2.d = arg2
        int64_t var_38_2 = 0
        var_48 = j_sub_141e52b80
        int128_t var_20_2 = rdi.o
        int64_t var_10_2 = zmm2
        arg2 = sub_141e85f30(&var_48)
        rcx = arg1[2]
    
    result = rcx[0x18]
    
    if ((*(result + 0x183) & 2) != 0)
        (*(*arg1 + 0x78))(arg1)
        result = arg1[2]
        *(result + 0xd4) = arg2

return result
