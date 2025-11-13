// 函数: sub_1427147d0
// 地址: 0x1427147d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* rbx = arg1[0x11]
int64_t rdi = 0
uint64_t r14_1 = sx.q(arg1[0x12].d) << 3 u>> 3

if (rbx u> &rbx[arg1[0x12]])
    r14_1 = 0

void* (* var_a8)(void* arg1)

if (r14_1 != 0)
    do
        void* rdx_1 = *rbx
        
        if (rdx_1 != 0 && ((*(rdx_1 + 0x30) u>> 1).b & 1) != 0)
            var_a8.b = *(rdx_1 + 0x44)
            var_a8 = *(rdx_1 + 0x48)
            arg2 = sub_1427098b0(arg1, &var_a8)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != r14_1)

uint64_t result = (*(*arg1 + 0x150))(arg1)

if (result != 0)
    int128_t var_28_1 = arg2
    var_a8 = sub_1426f6220
    void* rcx_3 = *(result + 0x188)
    int32_t var_a0_1 = 0
    void* rdi_1
    
    if (rcx_3 == 0)
        rdi_1 = *(result + 0x300)
    else
        rdi_1 = *(rcx_3 + 0xc0)
    
    arg2 = arg1[0x13].d
    int64_t* rax_8 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_8 != 0)
        *rax_8 = &data_142e33ea8
        sub_140d3a3a0(&rax_8[1], arg1)
        *(rax_8 + 0x10) = var_a8.o
        rax_8[5] = sub_140a387b0()
        *rax_8 = &data_142e33f00
    
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    
    if (rax_8 != 0)
        (*(*rax_8 + 0x40))(rax_8, &var_98)
    
    void var_88
    sub_140d3a3a0(&var_88, nullptr)
    int64_t var_80_1 = 0
    int64_t var_78_1 = 0
    void* var_68_1 = nullptr
    sub_1423e6200(rdi_1, &arg1[0x26], &var_98, arg2, 1, 0xbf800000)
    int512_t zmm6
    zmm6.o = var_28_1
    
    if (var_78_1 != 0)
        void var_58
        void* rcx_8 = &var_58
        
        if (var_68_1 != 0)
            rcx_8 = var_68_1
        
        (*(*rcx_8 + 0x10))(rcx_8)
    
    result = sub_140745b20(&var_98)
    
    if (rax_8 != 0)
        (*(*rax_8 + 0x38))(rax_8, 0)
        result = sub_140a84c80(rax_8, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_d8)
return result
