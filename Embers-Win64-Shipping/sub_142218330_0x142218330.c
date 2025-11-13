// 函数: sub_142218330
// 地址: 0x142218330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = *(arg1 + 0x100)
int64_t arg_8 = *(arg1 + 0xf8)
void* rax_2 = data_143f5b298

if (rax_2 == 0 || *(rax_2 + 0x680) == 0)
    return 0

int64_t rax_3 = *(arg1 + 0xb8)

if (rax_3 != 0)
    return rax_3

int64_t* rax_4 = sub_140d3c6e0(&arg_8)

if (rax_4 != 0 && rax_4[0x6c] != 0)
    return *(sub_140d3c6e0(&arg_8) + 0x360)

void* rax_7 = sub_140d3c6e0(&arg_10)

if (rax_7 != 0 && *(rax_7 + 0x90) != 0)
    return *(sub_140d3c6e0(&arg_10) + 0x90)

if (rax_4 != 0)
    void* rax_10 = sub_142546fa0()
    void* rdx_1 = rax_4[2]
    int64_t rax_11 = sx.q(*(rax_10 + 0x38))
    
    if (rax_11.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30)
        int64_t* rax_14 = (*(*rax_4 + 0x548))(rax_4, 0)
        
        if (rax_14 != 0)
            int64_t rdx_2 = *rax_14
            int64_t rax_15 = (*(rdx_2 + 0x288))(rax_14, rdx_2)
            
            if (rax_15 != 0)
                return rax_15

return *(data_143f5b298 + 0x680)
