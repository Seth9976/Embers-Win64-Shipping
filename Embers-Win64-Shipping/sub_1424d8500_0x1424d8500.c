// 函数: sub_1424d8500
// 地址: 0x1424d8500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
__builtin_memset(&var_38, 0, 0x18)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rdx_2 = &var_38

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void var_20
int64_t* rax_4 = sub_1420cad90(&var_20, rdx_2)
int64_t rdx_3 = *arg3
*arg3 = *rax_4
*rax_4 = rdx_3
int64_t rdx_4 = arg3[1]
arg3[1] = rax_4[1]
rax_4[1] = rdx_4
int32_t result = rax_4[2].d
arg3[2].d = result
int64_t* var_18

if (var_18 != 0)
    result = var_18[1].d
    var_18[1].d -= 1
    
    if (result == 1)
        result = (**var_18)(var_18)
        int32_t rdi_2 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (rdi_2 == 1)
            result = (*(*var_18 + 8))(var_18, zx.q(rdi_2))

int128_t var_30
int64_t* rbx_2 = var_30:8.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
