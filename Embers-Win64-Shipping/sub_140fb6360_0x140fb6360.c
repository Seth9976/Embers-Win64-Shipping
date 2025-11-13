// 函数: sub_140fb6360
// 地址: 0x140fb6360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg3)
int64_t* rax = j_sub_140a82f30(0x28)
int128_t* rbx

if (rax == 0)
    rbx = nullptr
else
    int64_t var_28 = *arg2
    void* r9_2 = arg2[1]
    void* var_20_1 = r9_2
    
    if (r9_2 != 0)
        *(r9_2 + 8) += 1
    
    rbx = sub_140f9a1c0(rax, &var_28)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142ef1708
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

int32_t rbp = *(arg1 + 0x18)
*(arg1 + 0x18) = rbp + 1

if (rbp + 1 s> *(arg1 + 0x1c))
    sub_1405a4f90(arg1 + 0x10)

int64_t rdx_4 = *(arg1 + 0x10) + (r15 << 4)
memmove(rdx_4 + 0x10, rdx_4, (rbp - r15.d) << 4)
int64_t* rcx_3 = *(arg1 + 0x10)
rcx_3[r15 * 2] = rbx
rcx_3[r15 * 2 + 1] = rax_2

if (rax_2 != 0)
    rax_2[1].d += 1

int64_t result = sub_140599090(arg1 + 0x20)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        result = (**rax_2)(rax_2)
        int32_t temp2_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*rax_2)[1](rax_2, 1)

int64_t* rbx_4 = arg2[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp3_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
