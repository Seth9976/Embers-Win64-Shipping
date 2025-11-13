// 函数: sub_140e19d60
// 地址: 0x140e19d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg3 + 0x10)
int64_t rdx = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rdx = *(arg3 + 8)

int64_t var_28 = *arg4
void* rax_3 = arg4[1]
void* var_20 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

int64_t var_18 = rdx
int64_t* var_10 = rbx

if (rbx != 0)
    rbx[1].d += 1

sub_140db2960(*(arg1 + 8), &var_18, &var_28)
int128_t zmm1 = arg1[1]
*arg2 = *arg1
int128_t zmm0 = arg1[2]
arg2[1] = zmm1
arg2[2] = zmm0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
