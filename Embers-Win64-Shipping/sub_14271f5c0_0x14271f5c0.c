// 函数: sub_14271f5c0
// 地址: 0x14271f5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0xd]
int64_t* rbx = nullptr
void* const rbp

if (rax == 0)
    rbp = nullptr
else
    rbp = *(rax + 0x2d8)

if (rbp == 0)
    if (arg1[0x1e].d != 0xffffffff)
        if (rax != 0)
            rbx = *(rax + 0x2d8)
        
        if (rbx != 0 && rbx[0x37].b != 0)
            (*(*arg1 + 0x2b8))()
            (*(*rbx + 0x418))(rbx, arg1, 0x10, zx.q(arg1[0x1e].d), 0)
    
    arg1[0x21].b = 5
    sub_14263a2c0(arg1)
    return sub_1405a9f90(&arg1[0xe], 0)

(*(*arg1 + 0x2b8))()
(*(*arg1 + 0x2c0))(arg1)
int64_t* rcx_4 = arg1[0xd]
int512_t zmm0
zmm0.o = zx.o(0)
uint128_t var_58 = zx.o(0)
int32_t arg_10
int32_t result = (*(*rcx_4 + 0x770))(zmm0, &arg_10, &arg1[0x12], &var_58)
uint32_t rcx_5 = zx.d(arg2)

if (rcx_5 == 0)
    result = sub_14271cf20(arg1, 5)
else if (rcx_5 == 1)
    int64_t rbx_1 = *arg1
    arg1[0x1e].d = arg_10
    void arg_8
    int16_t* rax_18 = sub_1426f29b0(&arg_8, 0, 0x200)
    result = (*(rbx_1 + 0x2d8))(arg1, zx.q(arg_10), rax_18)
else if (rcx_5 == 2)
    arg1[0x1e].d = arg_10
    int64_t (* var_48)(int64_t* arg1) = sub_1426cb040
    int32_t var_40_1 = 0
    void*** rax_8 = sub_140a84c80(0, zx.q(rcx_5 + 0x2e), 0)
    void*** var_38_1 = rax_8
    
    if (rax_8 != 0)
        *rax_8 = &data_143468348
        sub_140d3a3a0(&rax_8[1], arg1)
        *(rax_8 + 0x10) = var_48.o
        rax_8[5] = sub_140a387b0()
        *rax_8 = &data_1434683a0
    
    if (rax_8 != 0)
        sub_140599630(rbp + 0xd0, 1)
        void arg_18
        int64_t** rax_11 = (*rax_8)[6](rax_8, &arg_18)
        int64_t r14_1 = sx.q(*(rbp + 0xd8))
        rbx = *rax_11
        int32_t rax_12 = (r14_1 + 1).d
        *(rbp + 0xd8) = rax_12
        
        if (rax_12 s> *(rbp + 0xdc))
            sub_1405a4f90(rbp + 0xd0)
        
        void** rax_15 = (r14_1 << 4) + *(rbp + 0xd0)
        *rax_15 = rax_8
        rax_15[1].d = 3
    
    uint128_t zmm0_1 = var_58
    var_48.o = zmm0_1
    void* rax_16 = _mm_bsrli_si128(zmm0_1, 8).q
    arg1[0x1a] = rbx
    
    if (rax_16 != 0)
        *(rax_16 + 8) += 1
    
    result = sub_142721270(arg1, &var_48)

int64_t* rbx_2 = var_58:8.q

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return result
