// 函数: sub_1423d81c0
// 地址: 0x1423d81c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg3
int64_t rdi
rdi.b = 0
rsi[1].d = 0

if (*(rsi + 0xc) s<= 0xffffffff)
    sub_1405c5510(rsi, 0)

if (arg2[1].d s<= 0)
    return 0

int64_t rbx = *sub_140b58170(&arg3, "ImageWrapper", 1)
j_sub_140b3db50()
int64_t* rax_2
int512_t zmm0
rax_2, zmm0 = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t r9 = *rax_2
int64_t* var_38
(*(r9 + 0x40))(rax_2, &var_38, 0, r9)
int64_t* rcx_3 = var_38

if (rcx_3 != 0 && (**rcx_3)(rcx_3, *arg2, sx.q(arg2[1].d)) != 0)
    int64_t* rcx_4 = var_38
    zmm0.o = zx.o(0)
    int128_t var_28
    __builtin_memset(&var_28, 0, 0x18)
    char rax_6 = (*(*rcx_4 + 0x20))(zmm0, 0, 8, &var_28)
    int64_t rbx_1
    
    if (rax_6 != 0)
        rbx_1 = var_28:8.q
    
    if (rax_6 == 0 || rbx_1 != sx.q(rbx_1.d))
        int64_t rcx_8 = var_28.q
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
    else
        rdi = var_28.q
        int32_t r8_2 = *(rsi + 0xc)
        rsi[1].d = rbx_1.d
        
        if (rbx_1 != 0 || r8_2 != 0)
            sub_1405da9e0(rsi, rbx_1.d, r8_2)
            memcpy(*rsi, rdi, rbx_1.d)
            rdi = var_28.q
        else
            *(rsi + 0xc) = r8_2
        
        if (rdi != 0)
            sub_140a74f90(rdi)
        
        rdi.b = 1

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_5 = *var_30
            (*(r8_5 + 8))(var_30, 1, r8_5)

return zx.q(rdi.b)
