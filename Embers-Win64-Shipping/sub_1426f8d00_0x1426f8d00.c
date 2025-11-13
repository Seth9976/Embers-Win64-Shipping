// 函数: sub_1426f8d00
// 地址: 0x1426f8d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_150 = zx.o(0)
int64_t var_178 = *arg7
void* rax_1 = arg7[1]
void* var_170 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void var_138
sub_142642800(&var_138, arg8, arg5, arg3, arg2, &var_178, &var_150, 0x7f7fffff)
int32_t var_100
int32_t var_100_1 = var_100 & 0xfffffffe
int64_t* var_168
void var_a8
int128_t result_1 = sub_142652c30(arg6, &var_168, sub_142642440(&var_a8, &var_138), arg4)
int32_t var_158
int128_t result

if (var_158 != 3)
    result = 0x7f7fc99e
else
    int64_t* rcx_3 = var_168
    (*(*rcx_3 + 0x30))(rcx_3, 0)
    result = result_1

int64_t* var_160

if (var_160 != 0)
    var_160[1].d -= 1
    
    if (var_160[1].d == 1)
        (**var_160)(var_160)
        int32_t rax_6 = *(var_160 + 0xc)
        *(var_160 + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*var_160 + 8))(var_160, 1)

int64_t var_c0

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int64_t* var_e8

if (var_e8 != 0)
    var_e8[1].d -= 1
    
    if (var_e8[1].d == 1)
        (**var_e8)(var_e8)
        int32_t rax_10 = *(var_e8 + 0xc)
        *(var_e8 + 0xc) -= 1
        
        if (rax_10 == 1)
            (*(*var_e8 + 8))(var_e8, 1)

int64_t* var_110

if (var_110 != 0)
    var_110[1].d -= 1
    
    if (var_110[1].d == 1)
        (**var_110)(var_110)
        int32_t rax_14 = *(var_110 + 0xc)
        *(var_110 + 0xc) -= 1
        
        if (rax_14 == 1)
            (*(*var_110 + 8))(var_110, 1)

int64_t* rdi_3 = arg7[1]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rbx_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rbx_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, zx.q(rbx_1))

return result
