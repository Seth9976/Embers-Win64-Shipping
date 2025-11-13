// 函数: sub_141889590
// 地址: 0x141889590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t rax = *(arg5 + 8)
int32_t r13 = *arg5
*(arg5 + 8) = 0
int32_t rax_1 = arg5[4]
int32_t var_68 = r13
int32_t var_58 = rax_1
int32_t rax_2 = arg5[5]
*(arg5 + 0x10) = 0
int128_t zmm0 = *(arg5 + 0x20)
int64_t* rbx = *arg3
int64_t zmm1 = *(arg5 + 0x30)
int32_t var_54 = rax_2
int32_t* rax_3 = arg3[1]
arg3[1] = 0
*arg3 = 0
int64_t var_88 = *arg2
int64_t* rax_5 = arg2[1]
arg2[1] = 0
*arg2 = 0
void* rax_6 = *arg1
int128_t var_48 = zmm0
int64_t* rcx = *(rax_6 + 0x38)
int64_t var_38 = zmm1
(*(*rcx + 0x30))(rcx, &var_88)
char var_50 = arg4
int32_t rax_9

if (rbx == 0)
    rax_9 = -1
else
    rax_9 = (*(*rbx + 0x40))(rbx)

int32_t var_4c = rax_9
var_48:8.q = _Query_perf_frequency()

if (rbx != 0)
    rsi = *((*(*rbx + 0x30))(rbx) + 8)

int64_t var_38_1 = sx.q(rsi)
int32_t* var_70 = rax_3
int64_t* var_78 = rbx
int32_t result = sub_1418974d0(rax_6, r13, arg4, &var_78, &var_68)

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        result = (**rax_5)(rax_5)
        int32_t temp2_1 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rax_5 + 8))(rax_5, 1)

if (rax != 0)
    result = sub_140a74f90(rax)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp4_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg3[1]

if (rbx_3 != 0)
    result = rbx_3[1].d
    rbx_3[1].d -= 1
    
    if (result == 1)
        result = (**rbx_3)(rbx_3)
        int32_t rdi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_1))

int64_t rcx_11 = *(arg5 + 8)

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
