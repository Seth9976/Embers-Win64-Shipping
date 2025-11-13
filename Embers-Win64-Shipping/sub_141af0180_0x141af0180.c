// 函数: sub_141af0180
// 地址: 0x141af0180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
void var_48
sub_1405bb0c0(arg1, &var_48, arg3)
void* rax = sub_1405bdd80(&var_48)
int64_t var_20
int64_t rbx_1
int128_t* rbx_2

if (rax != 0)
    rbx_1 = sx.q(*(rax + 0x4c))
    rbx_2 = rbx_1 + var_20

int128_t var_60
int64_t* rbx_3
int32_t rsi
int128_t var_78_1

if (rax == 0 || rbx_1 == neg.q(var_20))
    var_60 = zx.o(0)
    rbx_3 = nullptr
    rsi = 2
    __builtin_memcpy(&var_78_1, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
else
    char var_68_1 = rbx_2[1].b
    rbx_3 = rbx_2[2].q
    var_60.q = *(rbx_2 + 0x18)
    var_60:8.q = rbx_3
    var_78_1 = *rbx_2
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    rsi = 1
__builtin_memcpy(arg2, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
*(arg2 + 0x18) = var_60.q
void* rax_4 = var_60:8.q
*(arg2 + 0x20) = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    int64_t* rdi_1 = var_60:8.q
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if ((rsi.b & 1) != 0 && rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp5_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t var_30

if (var_30 != 0)
    sub_140a74f90(var_30)

return arg2
