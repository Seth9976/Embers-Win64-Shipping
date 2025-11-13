// 函数: sub_1429cfbc0
// 地址: 0x1429cfbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0x5c)

if (rax s<= 0)
    rax.b = 1
    return rax

int32_t i = 0

if (rax s<= 0)
    rax.b = 1
    return rax

int32_t* r12 = nullptr
uint64_t rax_2

do
    int64_t rax_1 = *(arg2 + 0x60)
    int64_t rdi_1 = *(r12 + rax_1 + 8)
    sub_1429cc040(**(arg1 + 0x28), *(r12 + rax_1), arg1 + 4)
    int32_t j = 0
    int64_t rbx_1 = 0
    
    if (*(arg2 + 4) s> 0)
        do
            int32_t* var_38
            sub_1429cc930(**(arg1 + 0x28), &var_38, j, i)
            int32_t var_30
            
            if (*(arg2 + 0x58) == 0)
                int32_t r8_3 = 0
                
                if (var_30 s> 0)
                    int64_t rdx_2 = 0
                    
                    do
                        int32_t rcx_6 = *(rdi_1 + (rbx_1 << 2))
                        rdx_2 += 4
                        rbx_1 += 1
                        r8_3 += 1
                        *(rdx_2 + var_38 - 4) = rcx_6
                    while (r8_3 s< var_30)
            else
                int32_t rcx_4 = *(rdi_1 + (rbx_1 << 2))
                rbx_1 += 1
                *var_38 = rcx_4
                rax_2 = zx.q(var_30 - 1)
                int64_t k = sx.q(rax_2.d)
                
                if (rax_2.d s> 0)
                    do
                        int32_t rcx_5 = *(rdi_1 + (rbx_1 << 2))
                        rbx_1 += 1
                        *(var_38 + (k << 2)) = rcx_5
                        k -= 1
                    while (k s> 0)
            j += 1
        while (j s< *(arg2 + 4))
    
    i += 1
    r12 = &r12[4]
while (i s< *(arg2 + 0x5c))

rax_2.b = 1
return rax_2
