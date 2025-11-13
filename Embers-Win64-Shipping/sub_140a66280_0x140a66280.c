// 函数: sub_140a66280
// 地址: 0x140a66280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t arg_8
sub_14062d5f0(rbx + 0x38, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* rdx_3

if (rax.d == 0xffffffff)
    rdx_3 = nullptr
else
    rdx_3 = (rax << 5) + *(rbx + 0x38)

int32_t* rax_1 = rdx_3 + 0x10

if (rdx_3 == 0)
    rax_1 = nullptr

if (rax_1 != 0)
    int64_t* rbx_3 = (sx.q(*rax_1) << 6) + *(*arg1 + 0x28)
    sub_140597df0(arg3, rbx_3)
    sub_140597df0(&arg3[2], &rbx_3[2])
    sub_140597df0(&arg3[4], &rbx_3[4])
    sub_140597df0(&arg3[6], &rbx_3[6])
    uint64_t result
    result.b = 1
    return result

void* var_18
sub_140a73ec0(*arg1, &var_18, arg2, 0)
void* rbx_4 = var_18
int64_t* rsi

if (rbx_4 == 0)
    rsi.b = 0
else
    sub_140597df0(arg3, rbx_4 + 0x28)
    sub_140597df0(&arg3[2], rbx_4 + 0x68)
    sub_140597df0(&arg3[4], rbx_4 + 0xa8)
    sub_140597df0(&arg3[6], rbx_4 + 0x88)
    rsi.b = 1

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        int64_t rdx_13 = *var_10
        (*rdx_13)(var_10, rdx_13)
        int32_t rdi_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_2 = *var_10
            (*(r8_2 + 8))(var_10, zx.q(rdi_1), r8_2)

return zx.q(rsi.b)
