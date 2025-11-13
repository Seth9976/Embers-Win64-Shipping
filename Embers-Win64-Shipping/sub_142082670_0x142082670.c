// 函数: sub_142082670
// 地址: 0x142082670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x38)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr

void* rbp = nullptr

if (rbx != 0)
    rbp = *(arg1 + 0x30)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rbp != 0)
    sub_1423e66c0(rbp + 8)

*arg1 = 0
*(arg1 + 8) = 0
arg1[4] = *arg1
arg1[5] = arg1[1]
arg1[6] = arg1[2]
arg1[7] = arg1[3]
arg1[0xa].w = 0
*(arg1 + 0x2a) = 0
*(arg1 + 0x20) = 0x3f800000
int64_t* rcx_3 = arg2[1]
int64_t var_38 = *arg2

if (rcx_3 != 0)
    *(rcx_3 + 0xc) += 1

int64_t* result = &var_38

if (&var_38 != &arg1[0xc])
    var_38.o = *(arg1 + 0x30)
    *(arg1 + 0x30) = var_38.o

if (rcx_3 != 0)
    int32_t temp2_1 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (temp2_1 == 1)
        result = (*(*rcx_3 + 8))(rcx_3, 1)

int64_t* rcx_4 = arg2[1]

if (rcx_4 != 0)
    int32_t temp3_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp3_1 == 1)
        return (*(*rcx_4 + 8))(rcx_4, 1)

return result
