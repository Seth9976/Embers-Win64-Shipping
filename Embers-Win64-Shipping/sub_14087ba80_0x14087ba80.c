// 函数: sub_14087ba80
// 地址: 0x14087ba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r12 = arg2
int32_t result

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* rdi_1 = r12
        r12 = &r12[5]
        *rdi_1 = *(rbx_1 - 8)
        rdi_1[1].d ^= (*rbx_1 ^ rdi_1[1].d) & 1
        rdi_1[1].d ^= (*rbx_1 ^ rdi_1[1].d) & 2
        
        if (&rdi_1[2] != &rbx_1[2])
            int64_t rbp_1 = sx.q(rbx_1[4])
            int64_t r15_1 = *(rbx_1 + 8)
            int32_t r8 = *(rdi_1 + 0x1c)
            rdi_1[3].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4a00(&rdi_1[2], rbp_1.d, r8)
                memcpy(rdi_1[2], r15_1, (rbp_1 << 3).d)
            else
                *(rdi_1 + 0x1c) = 0
        
        rdi_1[4].d = rbx_1[6]
        result = rbx_1[7]
        rbx_1 = &rbx_1[0xa]
        *(rdi_1 + 0x24) = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
