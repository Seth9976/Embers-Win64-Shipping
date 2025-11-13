// 函数: sub_14246b730
// 地址: 0x14246b730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2
int32_t result

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* rdi_1 = r14
        r14 = &r14[5]
        *rdi_1 = rbx_1[-1]
        
        if (&rdi_1[1] != rbx_1)
            int64_t rbp_1 = sx.q(rbx_1[1].d)
            int64_t r12_1 = *rbx_1
            int32_t r8 = *(rdi_1 + 0x14)
            rdi_1[2].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405a4be0(&rdi_1[1], rbp_1.d, r8)
                memcpy(rdi_1[1], r12_1, (rbp_1 << 4).d)
            else
                *(rdi_1 + 0x14) = 0
        
        rdi_1[3].d = rbx_1[2].d
        *(rdi_1 + 0x1c) = *(rbx_1 + 0x14)
        rdi_1[4].d = rbx_1[3].d
        result = *(rbx_1 + 0x1c)
        rbx_1 = &rbx_1[5]
        *(rdi_1 + 0x24) = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
