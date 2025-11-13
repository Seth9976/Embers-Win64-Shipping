// 函数: sub_1421470d0
// 地址: 0x1421470d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rbx = arg2
int64_t rbp
rbp.b = data_143f4d278 == 1
int32_t arg_8
sub_1405ba560(arg1 + 0x1468, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax << 5) + *(arg1 + 0x1468)

int64_t* rax_1 = rcx_3 + 8

if (rcx_3 == 0)
    rax_1 = nullptr

if (rax_1 != 0)
    if (rbp.b != 0)
        sub_141fd0580(*rax_1, rbx.d)
        rbx = arg_10
    
    sub_140dba910(arg1 + 0x1468, rbx)

int32_t* rax_2 = j_sub_140a82f30(0xe0)
int32_t* rbx_1

if (rax_2 == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_141fa4db0(rax_2)

int32_t* var_38 = rbx_1
void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 == 0)
    rax_4 = nullptr
else
    rax_4[1].d = 1
    *rax_4 = &data_14328f978
    *(rax_4 + 0xc) = 1
    rax_4[2] = rbx_1

void** var_28 = &arg_10
int32_t** var_20 = &var_38
sub_140dd2c70(arg1 + 0x1468, &arg_8, &var_28, nullptr)
void* rdi_1 = *(arg1 + 0x1468) + (sx.q(arg_8) << 5)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t temp1_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rax_4)[1](rax_4, 1)

int32_t* result = sub_141fb87a0(*(rdi_1 + 8), arg_10, arg1, 0)
void* rcx_13 = *(arg1 + 0x68)

if (rcx_13 != 0)
    *(rcx_13 + 0x328) = 0
    
    if (*(rcx_13 + 0x32c) != 0)
        return sub_1405dadb0(rcx_13 + 0x320, 0)

return result
