// 函数: sub_1425ced00
// 地址: 0x1425ced00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg3[1].d

if (i_2 != 0)
    int64_t* rbx_1 = *arg3 + 0x10
    int32_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx_1 = &rbx_1[5]
        i = i_2
        i_2 -= 1
    while (i != 1)

arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    sub_1405c5660(arg3, 0)

int64_t result = sx.q(*(arg1 + 0x30))
int64_t* i_1 = *(arg1 + 0x28)

for (void* rbp_1 = &i_1[result * 5]; i_1 != rbp_1; i_1 = &i_1[5])
    result = *arg2
    
    if (*i_1 s<= result && result s< i_1[1])
        int64_t rdi = sx.q(arg3[1].d)
        int32_t rax = (rdi + 1).d
        arg3[1].d = rax
        
        if (rax s> *(arg3 + 0xc))
            sub_1405c4ec0(arg3)
        
        int64_t* rdi_1 = *arg3 + rdi * 0x28
        *rdi_1 = *i_1
        rdi_1[1] = i_1[1]
        result = sub_140596d10(&rdi_1[2], &i_1[2])
        rdi_1[4] = i_1[4]

return result
