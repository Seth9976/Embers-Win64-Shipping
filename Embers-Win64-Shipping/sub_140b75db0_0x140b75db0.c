// 函数: sub_140b75db0
// 地址: 0x140b75db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
sub_14062d6e0(arg1, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
void* const rcx

if (rax.d == 0xffffffff)
    rcx = nullptr
else
    rcx = *arg1 + rax * 0x28

int64_t* rax_2 = rcx + 0x10

if (rcx == 0)
    rax_2 = nullptr

int64_t rdx_1

if (rax_2 != 0)
    rdx_1 = *rax_2

int64_t* var_20
int128_t var_18
int64_t* rcx_2
int32_t rsi

if (rax_2 == 0 || rdx_1 == 0)
    rcx_2 = &var_18
    var_18 = zx.o(0)
    rsi = 2
    rdx_1 = 0
else
    int64_t* rcx_1 = rax_2[1]
    int64_t var_28 = rdx_1
    var_20 = rcx_1
    
    if (rcx_1 != 0)
        rcx_1[1].d += 1
    
    rcx_2 = &var_28
    rsi = 1

int64_t rax_3 = rcx_2[1]
rcx_2[1] = 0
*arg2 = rdx_1
arg2[1] = rax_3
*rcx_2 = 0

if ((rsi.b & 2) != 0)
    int64_t* rbx_1 = var_18:8.q
    rsi &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if ((rsi.b & 1) != 0 && var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp3_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

return arg2
