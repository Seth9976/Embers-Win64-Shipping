// 函数: sub_140ed5ec0
// 地址: 0x140ed5ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
void* result = &arg1[2]
arg1[1].b = 0
int64_t arg_8 = 0
void var_18

if (result == &var_18)
    arg1[4].d = 0xffffffff
    return result

*result = 0
int64_t* rdi = *(result + 8)

if (rdi != 0)
    *(result + 8) = 0
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rdi + 8))(rdi, 1)

arg1[4].d = 0xffffffff
return result
