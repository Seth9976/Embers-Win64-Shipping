// 函数: sub_142085b10
// 地址: 0x142085b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x440)
int64_t rax

if (rdx == 0)
    rax.b = 0
    return rax

void* rbx = *(rdx + 0x130)

if (rbx == 0 || (*(rbx + 0x28) & 1) != 0)
    rax.b = 0
    return rax

if (((*(rbx + 0x28) u>> 1).b & 1) == 0)
    int64_t rdx_3 = *(rdx + 0x88)
    
    if (rdx_3 != 0)
        (*(*arg2 + 0x30))(arg2, rdx_3, &data_143dbb0c0)
else
    (*(*arg2 + 0x38))(arg2, *(rbx + 0x50), zx.q(*(rbx + 0x58)), *(rbx + 0x60), *(rbx + 0x68), 
        &data_143dbb0c0)
    (*(*arg2 + 0x38))(arg2, *(rbx + 0x30), zx.q(*(rbx + 0x38)), *(rbx + 0x40), *(rbx + 0x48), 
        &data_143dbb0c0)

int64_t (* var_18)(int64_t* arg1) = sub_14207a5cc
int32_t var_10 = 0
void*** var_28 = nullptr
void*** rax_6 = sub_140a84c80(0, 0x30, 0)
var_28 = rax_6
int32_t var_20 = 3

if (rax_6 != 0)
    *rax_6 = &data_143084628
    sub_140d3a3a0(&rax_6[1], arg1)
    *(rax_6 + 0x10) = var_18.o
    rax_6[5] = sub_140a387b0()
    *rax_6 = &data_143084680

(*(*arg2 + 0x48))(arg2, &var_28)
void*** rax_9

if (var_20 == 0)
    rax_9 = var_28
label_142085c7e:
    
    if (rax_9 != 0)
        sub_140a74f90(rax_9)
else
    void*** rcx_5 = var_28
    
    if (rcx_5 != 0)
        (*rcx_5)[7](rcx_5, 0)
        rax_9 = var_28
        
        if (rax_9 != 0)
            rax_9 = sub_140a84c80(rax_9, 0, 0)
            var_28 = rax_9
        
        int32_t var_20_1 = 0
        goto label_142085c7e

rax_9.b = 0
return rax_9
