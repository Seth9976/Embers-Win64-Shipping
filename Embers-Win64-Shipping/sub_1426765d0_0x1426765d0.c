// 函数: sub_1426765d0
// 地址: 0x1426765d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm0
zmm0.o = zx.o(0)
int32_t arg_8 = 0
int64_t var_18 = *arg5
void* rax_1 = arg5[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int32_t result = (*(*arg1 + 0x728))(zmm0, arg2, arg3, &arg_8, arg4, &var_18, arg6)
int64_t* rbx_1 = arg5[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_1 = *rbx_1
        (*rdx_1)(rbx_1, rdx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return result
