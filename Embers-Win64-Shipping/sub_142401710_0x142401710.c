// 函数: sub_142401710
// 地址: 0x142401710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_14240d4a0(&data_143f5bdc8, arg1) == 0xffffffff)
    int64_t rbx_1 = sx.q(data_143f5bdd0)
    int32_t rax_1 = (rbx_1 + 1).d
    bool cond:0_1 = rax_1 s<= data_143f5bdd4
    data_143f5bdd0 = rax_1
    
    if (not(cond:0_1))
        sub_1405c4ec0(&data_143f5bdc8)
    
    sub_1423fb8b0(data_143f5bdc8 + rbx_1 * 0x28, arg1)

int32_t var_18 = 0xffffffff
void* result_1 = nullptr
int32_t i_2 = 0
void* result = sub_140d3cc80(sub_142575670(), &result_1, 1, 0x10, 0)
int32_t i = i_2
int32_t i_1 = var_18 + 1
void* result_2 = result_1
int32_t i_3 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(result_2 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
    while (result.d s< i)

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    sub_14241e8d0(*(result_2 + (sx.q(i_1) << 3)) + 0x1c0)
    result = result_1
    void* rdx_4 = *(result + (sx.q(i_3) << 3))
    *(rdx_4 + 0x2b4) &= 0xfe
    i = i_2
    i_1 = i_3 + 1
    result_2 = result_1
    i_3 = i_1
    
    if (i_1 s< i)
        do
            result = sx.q(i_1)
            
            if (*(result_2 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (result_2 == 0)
    return result

return sub_140a74f90(result_2)
