// 函数: sub_1426f9680
// 地址: 0x1426f9680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_150 = zx.o(0)
int64_t var_178 = *arg7
void* rax_1 = arg7[1]
void* var_170 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void var_138
sub_142642800(&var_138, arg8, arg5, arg2, arg3, &var_178, &var_150, 0x7f7fffff)
int32_t var_100
int32_t var_100_1 = var_100 & 0xfffffffe
int64_t* var_168
void var_a8
sub_142652c30(arg6, &var_168, sub_142642440(&var_a8, &var_138), arg4)
int32_t var_158
uint128_t result

if (var_158 != 3)
    result = 0x7f7fc99e
else
    int64_t* rcx_3 = var_168
    
    if (rcx_3[6].d == 0)
        result = zx.o(0)
    else
        int64_t* rax_3 = rcx_3[5]
        uint128_t result_1 = zx.o(*rax_3)
        int32_t var_180_1 = rax_3[1].d
        int64_t rax_5 = *rcx_3
        uint64_t result_2 = result_1.q
        (*(rax_5 + 0x40))(result_1, &result_2, 1)
        result = result_1

int64_t* var_160

if (var_160 != 0)
    var_160[1].d -= 1
    
    if (var_160[1].d == 1)
        (**var_160)(var_160)
        int32_t rax_8 = *(var_160 + 0xc)
        *(var_160 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*var_160 + 8))(var_160, 1)

int64_t var_c0

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int64_t* var_e8

if (var_e8 != 0)
    var_e8[1].d -= 1
    
    if (var_e8[1].d == 1)
        (**var_e8)(var_e8)
        int32_t rax_12 = *(var_e8 + 0xc)
        *(var_e8 + 0xc) -= 1
        
        if (rax_12 == 1)
            (*(*var_e8 + 8))(var_e8, 1)

int64_t* var_110

if (var_110 != 0)
    var_110[1].d -= 1
    
    if (var_110[1].d == 1)
        (**var_110)(var_110)
        int32_t rax_16 = *(var_110 + 0xc)
        *(var_110 + 0xc) -= 1
        
        if (rax_16 == 1)
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
