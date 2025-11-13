// 函数: sub_1405e2400
// 地址: 0x1405e2400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg2

if ((*(arg1 + 0x64) & 2) != 0)
    return sub_1405dfc90(arg4, &arg1[0xd]) __tailcall

int32_t rsi = 0
void* r12 = nullptr
int32_t r13 = 0
int32_t var_4c = 0
void* var_58 = nullptr

for (void** i = data_143f1da58; i != 0; i = *i)
    void* rax_2 = i[2]
    void* rdi_1 = nullptr
    
    if (*(rax_2 + 8) == 4)
        rdi_1 = rax_2
    
    if (rdi_1 != 0)
        int32_t var_48 = r14
        int32_t var_44_1 = 0
        int64_t* var_40_1 = arg1
        
        if (sub_1419d8600(rdi_1, &var_48) != 0 && (*(*arg1 + 8))(arg1, zx.q(r14), rdi_1) != 0)
            int64_t r14_1 = sx.q(rsi)
            rsi = (r14_1 + 1).d
            
            if (rsi s> r13)
                sub_1405a4d70(&var_58)
                r13 = var_4c
                r12 = var_58
            
            *(r12 + (r14_1 << 3)) = rdi_1
            r14 = arg2

sub_1405ddf40(r12, rsi, arg5)
int32_t rax_6 = arg1[0xc].d
var_58 = nullptr
*arg4 = rax_6
int32_t rbx = arg1[8].d
int64_t rdi_2 = arg1[7]

if (rbx != 0)
    sub_1405e3e80(&var_58, rbx, 0)
    void* rcx_7
    
    if ((var_58.b & 1) == 0)
        rcx_7 = var_58
    else
        rcx_7 = &var_58 + (var_58 s>> 1)
    
    memcpy(rcx_7, rdi_2, rbx * 2)
else
    var_4c = 0

if (&arg4[2] != &var_58)
    sub_140a2c970(&arg4[2], &var_58)
    arg4[4] = rbx
    arg4[5] = var_4c
    int32_t var_50_2
    var_50_2.q = 0

int64_t result = sub_140a1d5c0(&var_58)
sub_140b51560(&arg4[0xa])

if (r12 == 0)
    return result

return sub_140a74f90(r12)
