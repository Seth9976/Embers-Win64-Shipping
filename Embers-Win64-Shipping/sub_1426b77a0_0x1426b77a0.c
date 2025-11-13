// 函数: sub_1426b77a0
// 地址: 0x1426b77a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x5b]
char var_68

if (rcx != 0 && rcx[0x37].b != 0)
    var_68 = 1
    (*(*rcx + 0x418))(rcx, arg1, 0x180, zx.q(data_143f7206c), 1)

int32_t rax_2 = arg2[1].d
int64_t zmm0 = *arg2
void* arg_40
void* rbx_1 = arg_40
int64_t var_58 = 0
int64_t var_30
__builtin_memset(&var_30, 0, 0x14)
int32_t var_48 = rax_2
int64_t var_50 = zmm0

if (rbx_1 == 0)
    rbx_1 = arg1[0x61]
else
    void* rax_7 = sub_14269cf80()
    
    if (rax_7 == 0)
        rbx_1 = arg1[0x61]
    else
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_8.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
            rbx_1 = arg1[0x61]

int32_t var_34 = arg3.d
void* var_40 = rbx_1
int32_t var_38
int32_t var_38_2 = (zx.d(arg7) << 2 | zx.d(arg4)) << 5 | ((
    ((((zx.d(arg6) * 2) | zx.d(arg8)) * 2) | zx.d(arg5)) << 2 | (var_38 & 0xffffff61) | 0x61)
    & 0xffffff5f)
uint32_t rsi_1 = zx.d(*((*(*arg1 + 0x770))(arg1, &arg_40, &var_58, 0, var_68) + 4))
int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        int64_t rdx_3 = *var_28
        (*rdx_3)(var_28, rdx_3)
        int32_t rdi_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_1 = *var_28
            (*(r8_1 + 8))(var_28, zx.q(rdi_1), r8_1)

return zx.q(rsi_1)
