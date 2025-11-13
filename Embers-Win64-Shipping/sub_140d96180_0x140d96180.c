// 函数: sub_140d96180
// 地址: 0x140d96180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t var_18 = *arg2

if (rbx != 0)
    rbx[1].d += 1

if (&var_18 != arg1)
    var_18.o = *arg1
    *arg1 = var_18.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

void* rbx_1 = arg1 + 0x28
arg1[1].d = arg2[2].d
int64_t i_1 = 4
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x18) = arg2[3].w
*(arg1 + 0x1a) = *(arg2 + 0x1a)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x1e) = *(arg2 + 0x1e)
arg1[2].b = arg2[4].b
*(arg1 + 0x21) = *(arg2 + 0x21)
*(arg1 + 0x22) = *(arg2 + 0x22)
*(arg1 + 0x23) = *(arg2 + 0x23)
void* rdi_1 = arg2 - arg1
*(arg1 + 0x24) = *(arg2 + 0x24)
int64_t i

do
    int64_t* rcx_2 = *(rdi_1 + rbx_1 + 8)
    var_18 = *(rdi_1 + rbx_1)
    
    if (rcx_2 != 0)
        *(rcx_2 + 0xc) += 1
    
    if (&var_18 != rbx_1)
        var_18.o = *rbx_1
        *rbx_1 = var_18.o
    
    if (rcx_2 != 0)
        int32_t temp3_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_1 = *rcx_2
            (*(r8_1 + 8))(rcx_2, 1, r8_1)
    
    rbx_1 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
