// 函数: sub_142565530
// 地址: 0x142565530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r15 = arg2
int64_t result

if (arg4 != 0)
    void* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* rdi_1 = r15
        r15 = &r15[6]
        *rdi_1 = *(rbx_1 - 8)
        rdi_1[1].b = *rbx_1
        *(rdi_1 + 0xc) = *(rbx_1 + 4)
        rdi_1[2].d = *(rbx_1 + 8)
        
        if (&rdi_1[3] != rbx_1 + 0x10)
            int32_t rbp_1 = *(rbx_1 + 0x18)
            int64_t r12_1 = *(rbx_1 + 0x10)
            int32_t r8 = *(rdi_1 + 0x24)
            rdi_1[4].d = rbp_1
            
            if (rbp_1 != 0 || r8 != 0)
                sub_1405a4c70(&rdi_1[3], rbp_1, r8)
                memcpy(rdi_1[3], r12_1, rbp_1 * 2)
            else
                *(rdi_1 + 0x24) = 0
        
        result = *(rbx_1 + 0x20)
        rbx_1 += 0x30
        rdi_1[5] = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
