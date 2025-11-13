// 函数: sub_140f8c6f0
// 地址: 0x140f8c6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx

if (arg1[0x59].d == 0)
    rbx.b = 0
else
    int64_t* rcx = arg1[0x58]
    
    if (rcx == 0)
        rbx.b = 0
    else if ((*(*rcx + 0x28))(rcx) == 0)
        rbx.b = 0
    else
        rbx.b = 1

char rax

if (arg2[6] == 0)
    rax = 0
else
    int64_t* rcx_1 = *(arg2 + 0x10)
    
    if (rcx_1 == 0)
        rax = 0
    else if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
        rax = 0
    else
        rax = 1

if (rbx.b != rax)
label_140f8c7d4:
    
    if (arg2 != &arg1[0x56])
        if (*(arg1 + 0x2b4) != 0)
            *(arg1 + 0x2b4) = 0
        
        if (arg2[1].b != 0)
            arg1[0x56].d = *arg2
            *(arg1 + 0x2b4) = 1
    
    arg1[0x57].b = arg2[2].b
    sub_1407473e0(&arg1[0x58], &arg2[4])
    sub_140f908f0(arg1)
    sub_140e19ef0(arg1, 5)
else
    bool z_1
    
    if (rbx.b != 0)
        int64_t rbx_1 = 0
        int64_t rdi_1 = 0
        
        if (arg2[6] != 0)
            int64_t* rcx_2 = *(arg2 + 0x10)
            void arg_8
            
            if (rcx_2 != 0)
                rdi_1 = *(*(*rcx_2 + 0x30))(rcx_2, &arg_8)
        
        if (arg1[0x59].d != 0)
            int64_t* rcx_3 = arg1[0x58]
            void arg_10
            
            if (rcx_3 != 0)
                rbx_1 = *(*(*rcx_3 + 0x30))(rcx_3, &arg_10)
        
        z_1 = rbx_1 == rdi_1
        goto label_140f8c7cf
    
    if (arg1[0x57].b != arg2[2].b)
        goto label_140f8c7d4
    
    char rax_8 = *(arg1 + 0x2b4)
    
    if (rax_8 != arg2[1].b)
        goto label_140f8c7d4
    
    if (rax_8 != 0)
        float zmm0 = *arg2
        float temp0_1 = arg1[0x56].d
        zmm0 - temp0_1
        z_1 = zmm0 == temp0_1
    label_140f8c7cf:
        
        if (not(z_1))
            goto label_140f8c7d4

uint64_t result = sub_140745b20(&arg2[4])

if (arg2[1].b != 0)
    arg2[1].b = 0

return result
