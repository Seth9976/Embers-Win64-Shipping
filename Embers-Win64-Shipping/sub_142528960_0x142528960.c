// 函数: sub_142528960
// 地址: 0x142528960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2
int64_t result

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* rdi_1 = r14
        r14 = &r14[7]
        *rdi_1 = rbx_1[-1]
        
        if (&rdi_1[1] != rbx_1)
            int32_t rbp_1 = rbx_1[1].d
            int64_t r12_1 = *rbx_1
            int32_t r8 = *(rdi_1 + 0x14)
            rdi_1[2].d = rbp_1
            
            if (rbp_1 != 0 || r8 != 0)
                sub_1405a4c70(&rdi_1[1], rbp_1, r8)
                memcpy(rdi_1[1], r12_1, rbp_1 * 2)
            else
                *(rdi_1 + 0x14) = 0
        
        rdi_1[3] = rbx_1[2]
        rdi_1[4].d = rbx_1[3].d
        *(rdi_1 + 0x24) = *(rbx_1 + 0x1c)
        result = rbx_1[5]
        rbx_1 = &rbx_1[7]
        rdi_1[6] = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
