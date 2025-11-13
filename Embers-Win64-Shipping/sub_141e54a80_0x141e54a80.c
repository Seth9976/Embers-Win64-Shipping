// 函数: sub_141e54a80
// 地址: 0x141e54a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* var_38 = nullptr
int64_t var_30 = 0
char result = (*(*arg1 + 0x2e8))(arg1, *arg2, &var_38, 0, var_38, var_30)
int128_t* rbx = var_38
void* rsi_2 = &rbx[sx.q(var_30.d)]

if (rbx != rsi_2)
    int128_t zmm6
    int128_t var_18_1 = zmm6
    
    do
        zmm6 = *rbx
        int64_t rax_1 = *arg1
        int128_t var_28 = zmm6
        result = (*(rax_1 + 0x470))(arg1, &var_28, arg2)
        
        if (result != 0)
            int64_t rax_2 = *arg1
            var_28 = zmm6
            result = (*(rax_2 + 0x390))(arg1, &var_28, &arg2[5])
        
        rbx = &rbx[1]
    while (rbx != rsi_2)
    
    rbx = var_38

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
