// 函数: sub_1408eb130
// 地址: 0x1408eb130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r15 = arg2
int64_t result

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x48
    int32_t i
    
    do
        int64_t* rdi_1 = r15
        r15 = &r15[0x15]
        sub_140780bc0(rdi_1, &rbx_1[-0x12])
        
        if (&rdi_1[2] != &rbx_1[-0xe])
            int64_t rbp_1 = sx.q(rbx_1[-0xc])
            int64_t r14_1 = *(rbx_1 - 0x38)
            int32_t r8 = *(rdi_1 + 0x1c)
            rdi_1[3].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1406387e0(&rdi_1[2], rbp_1.d, r8)
                memcpy(rdi_1[2], r14_1, (rbp_1 << 3).d)
            else
                *(rdi_1 + 0x1c) = 0
        
        sub_14086c240(&rdi_1[4], &rbx_1[-0xa])
        sub_14086c240(&rdi_1[6], &rbx_1[-6])
        
        if (&rdi_1[8] != &rbx_1[-2])
            int64_t rbp_2 = sx.q(*rbx_1)
            int64_t r14_2 = *(rbx_1 - 8)
            int32_t r8_3 = *(rdi_1 + 0x4c)
            rdi_1[9].d = rbp_2.d
            
            if (rbp_2.d != 0 || r8_3 != 0)
                sub_1405c4a90(&rdi_1[8], rbp_2.d, r8_3)
                memcpy(rdi_1[8], r14_2, (rbp_2 << 2).d)
            else
                *(rdi_1 + 0x4c) = 0
        
        sub_140780bc0(&rdi_1[0xa], &rbx_1[2])
        
        if (&rdi_1[0xc] != &rbx_1[6])
            int64_t rbp_3 = sx.q(rbx_1[8])
            int64_t r14_3 = *(rbx_1 + 0x18)
            int32_t r8_6 = *(rdi_1 + 0x6c)
            rdi_1[0xd].d = rbp_3.d
            
            if (rbp_3.d != 0 || r8_6 != 0)
                sub_1407c3650(&rdi_1[0xc], rbp_3.d, r8_6)
                memcpy(rdi_1[0xc], r14_3, (rbp_3 * 0xc).d)
            else
                *(rdi_1 + 0x6c) = 0
        
        *(rdi_1 + 0x70) = *(rbx_1 + 0x28)
        rdi_1[0x10] = *(rbx_1 + 0x38)
        rdi_1[0x11].d = rbx_1[0x10]
        
        if (&rdi_1[0x12] != &rbx_1[0x12])
            int64_t rbp_4 = sx.q(rbx_1[0x14])
            int64_t r14_4 = *(rbx_1 + 0x48)
            int32_t r8_10 = *(rdi_1 + 0x9c)
            rdi_1[0x13].d = rbp_4.d
            
            if (rbp_4.d != 0 || r8_10 != 0)
                sub_1405c4a90(&rdi_1[0x12], rbp_4.d, r8_10)
                memcpy(rdi_1[0x12], r14_4, (rbp_4 << 2).d)
            else
                *(rdi_1 + 0x9c) = 0
        
        result = *(rbx_1 + 0x58)
        rbx_1 = &rbx_1[0x2a]
        rdi_1[0x14] = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
