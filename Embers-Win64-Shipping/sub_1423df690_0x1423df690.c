// 函数: sub_1423df690
// 地址: 0x1423df690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0xc38)
void* rdx_1 = &rax[sx.q(*(arg1 + 0xc40))]
int64_t* rbx_1

if (rax == rdx_1)
label_1423df6e3:
    rbx_1 = sub_1423d6f90(data_143f5b298, 0)
else
    while (true)
        rbx_1 = *rax
        
        if (rbx_1[0x4f] == arg4)
            break
        
        rax = &rax[1]
        
        if (rax == rdx_1)
            goto label_1423df6e3

if (*(rbx_1 + 0x15c) == 0)
    rax.b = 1
    return rax

int16_t* rdi = &data_142d40450
int16_t* const rcx_1

if (rbx_1[0x2a].d == 0)
    rcx_1 = &data_142d40450
else
    rcx_1 = rbx_1[0x29]

if (sub_140a54510(rcx_1, &data_142d40450) != 0)
    int64_t var_18
    int64_t* rax_2 = sub_142423a30(&rbx_1[0x27], &var_18, 0)
    
    if (rax_2[1].d != 0)
        rdi = *rax_2
    
    sub_1423ef930(arg1, arg4, rdi, 0)
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

int32_t rax_1
rax_1.b = 1
return rax_1
