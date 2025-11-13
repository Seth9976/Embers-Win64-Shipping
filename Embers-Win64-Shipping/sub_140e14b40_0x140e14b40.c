// 函数: sub_140e14b40
// 地址: 0x140e14b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void arg_10
sub_140a73990(arg1 + 0x2b8, &arg_8, *sub_140e1ad30(&arg_10, arg3, arg4))
int64_t rax_2 = sx.q(arg_8)
void* const rax_5

if (rax_2.d == 0xffffffff)
    rax_5 = nullptr
else
    rax_5 = rax_2 * 0x60 + *(arg1 + 0x2b8)

int64_t* rcx_2 = rax_5 + 8

if (rax_5 == 0)
    rcx_2 = nullptr

int64_t* rdx_2
int64_t* rbx_1
int32_t rbp
int64_t r8_2

if (rcx_2 == 0)
    void var_68
    int64_t* rax_11 = sub_140e14a10(&var_68, 0xa)
    int64_t* var_80
    rbx_1 = var_80
    rdx_2 = rax_11
    rbp = 2
    r8_2 = *rax_11
else
    rbx_1 = rcx_2[7]
    r8_2 = *rcx_2
    int64_t var_b0_1 = rcx_2[1]
    int64_t var_88_1 = rcx_2[6]
    int64_t var_b8 = r8_2
    int64_t* var_80_1 = rbx_1
    int128_t var_a8_1 = *(rcx_2 + 0x10)
    int128_t var_98_1 = *(rcx_2 + 0x20)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    rdx_2 = &var_b8
    int64_t var_78_1 = rcx_2[8]
    rbp = 1
    int32_t var_70_1 = rcx_2[9].d
    char var_6c_1 = *(rcx_2 + 0x4c)

*arg2 = r8_2
arg2[1] = rdx_2[1]
*(arg2 + 0x10) = *(rdx_2 + 0x10)
*(arg2 + 0x20) = *(rdx_2 + 0x20)
arg2[6] = rdx_2[6]
void* rax_13 = rdx_2[7]
arg2[7] = rax_13

if (rax_13 != 0)
    *(rax_13 + 8) += 1

arg2[8] = rdx_2[8]
arg2[9].d = rdx_2[9].d
*(arg2 + 0x4c) = *(rdx_2 + 0x4c)

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp2_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

if ((rbp.b & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
