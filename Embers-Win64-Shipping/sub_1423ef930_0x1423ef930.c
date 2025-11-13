// 函数: sub_1423ef930
// 地址: 0x1423ef930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0xc38)
void* rcx_1 = &rax[sx.q(*(arg1 + 0xc40))]
char* rdi_1

if (rax == rcx_1)
label_1423ef985:
    rdi_1 = sub_1423d6f90(data_143f5b298, 0)
else
    while (true)
        rdi_1 = *rax
        
        if (*(rdi_1 + 0x278) == arg2)
            break
        
        rax = &rax[1]
        
        if (rax == rcx_1)
            goto label_1423ef985

if (*(rdi_1 + 0xb8) != arg3)
    int32_t rdx = 0
    int32_t rbx_2
    
    if (arg3 == 0 || *arg3 == 0)
        rbx_2 = 0
    else
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg3[rbx_1] != 0)
        
        rbx_2 = rbx_1.d + 1
    
    *(rdi_1 + 0xc0) = 0
    
    if (*(rdi_1 + 0xc4) != rbx_2)
        sub_1405947f0(&rdi_1[0xb8], rbx_2)
        rdx = *(rdi_1 + 0xc0)
    
    int32_t rax_2 = rdx + rbx_2
    *(rdi_1 + 0xc0) = rax_2
    
    if (rax_2 s> *(rdi_1 + 0xc4))
        sub_140594770(&rdi_1[0xb8])
    
    if (rbx_2 != 0)
        memcpy(*(rdi_1 + 0xb8), arg3, rbx_2 * 2)

rdi_1[0xc8] = arg4
char result = sub_1424130d0(&rdi_1[0xd0], u"Listen")

if (result == 0)
    return result

return sub_14241df00(&rdi_1[0xd0], u"Listen", nullptr, &data_143de5830) __tailcall
