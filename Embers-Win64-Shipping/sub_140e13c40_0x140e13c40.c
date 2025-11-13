// 函数: sub_140e13c40
// 地址: 0x140e13c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
uint128_t var_28
sub_140da4b20(sub_140da2a70(), &var_28)
uint128_t zmm0 = var_28
uint128_t var_18 = zmm0
void* rax_1 = _mm_bsrli_si128(zmm0, 8).q

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_140d93ac0(arg1, &var_18, arg3, &arg_10, arg4)
int64_t* rbx_1 = var_28:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
