// 函数: sub_1413c8cb0
// 地址: 0x1413c8cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[2]
int32_t* rsi = arg1[1]
int64_t r14 = *(rbx + 0x10)
int64_t rbp = *(rsi + 0x10)
void** var_38
sub_1407453e0(&var_38, *arg1 + 0x62e0)
void* result_1
void* result = result_1
int32_t i_1

for (int32_t i = i_1; i s< *(result + 0x18); i = i_1)
    void** r8_1 = var_38
    
    if (*(*r8_1 + (sx.q(i) << 3)) == rbx)
        *rsi = i
        result = *r8_1
        *(result + (sx.q(i) << 3)) = rsi
        
        if (rbx != 0)
            sub_1414fb910(rbx)
            result = j_sub_140a74f90(rbx)
        
        break
    
    int32_t var_2c
    int32_t var_20 = var_20 & not.d(var_2c)
    void var_30
    sub_14059bdd0(&var_30)
    result = result_1

if (rbp == r14)
    return result

return sub_1414047a0(*arg1)
