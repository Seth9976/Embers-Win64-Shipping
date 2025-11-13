// 函数: sub_1423d5190
// 地址: 0x1423d5190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg5
int64_t rdi
rdi.b = 0
rsi[1].d = 0

if (*(rsi + 0xc) s<= 0xffffffff)
    sub_1405c5510(rsi, 0)

if (arg2[1].d s<= 0)
    return 0

int64_t rbx_1 = *sub_140b58170(&arg5, "ImageWrapper", 1)
j_sub_140b3db50()
int64_t* rax_2 = j_sub_140b407e0(&data_143de7d78, rbx_1)
int64_t r9 = *rax_2
int64_t* var_28
(*(r9 + 0x40))(rax_2, &var_28, 0, r9)
int64_t* rcx_3 = var_28

if (rcx_3 != 0 && (*(*rcx_3 + 8))(rcx_3, *arg2, sx.q(arg2[1].d), zx.q(arg3), arg4, 0, 8) != 0)
    int64_t* rcx_4 = var_28
    sub_1423cca70(rsi, (*(*rcx_4 + 0x18))(rcx_4, 0))
    rdi.b = 1

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *var_20
            (*(r8_2 + 8))(var_20, 1, r8_2)

return zx.q(rdi.b)
