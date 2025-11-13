// 函数: sub_142c53f70
// 地址: 0x142c53f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int64_t* arg_8 = rbx
void* rsi = *rbx
int64_t entry_r8
int512_t entry_zmm2
int512_t zmm2 =
    sub_142c64850(rsi, "Re-used connection seems dead, get a new one\n", entry_r8, entry_zmm2)
sub_142c65340(rbx, 1)
int32_t result
int512_t zmm2_1
result, zmm2_1 = sub_142c53be0(&arg_8, 0, 0, zmm2)
*arg1 = 0

if (result == 0 || result == 0x37)
    arg_8.b = 1
    char arg_10
    int512_t zmm2_2
    result, zmm2_2 = sub_142c5c7a0(rsi, arg1, &arg_10, &arg_8, zmm2_1)
    
    if (result == 0)
        int64_t* rbx_1 = *arg1
        
        if (arg_10 != result.b)
            int512_t zmm2_3
            result, zmm2_3 = sub_142c59970(rbx_1, nullptr, zmm2_2)
            
            if (result == 0)
                return sub_142c6a1e0(rbx_1, &arg_8, zmm2_3)

return result
