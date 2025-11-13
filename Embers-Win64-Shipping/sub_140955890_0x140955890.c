// 函数: sub_140955890
// 地址: 0x140955890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x58)

if (rcx == 0 || (*(*rcx + 0x378))(rcx) == 0)
    return 

uint64_t rax = zx.q(*(arg1 + 0x1acc))

if (rax.b == 1)
    return 

int64_t rcx_1 = *(arg1 + 0x1a30)

if (rcx_1 != 0)
    if (rax.b != 5)
    label_1409558f7:
        
        if (*(arg1 + 0x1aa8) == rcx_1)
            *(arg1 + 0x1a30) = 0
        
        void var_18
        
        if (arg1 + 0x1aa8 == &var_18)
            goto label_14095594f
        
        *(arg1 + 0x1aa8) = 0
        int64_t* rbx_1 = *(arg1 + 0x1ab0)
        
        if (rbx_1 != 0)
            *(arg1 + 0x1ab0) = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        goto label_14095594f
    
label_14095594f:
    sub_140976730(arg1 + 0x1a98, 0)
    int32_t i_1 = *(arg1 + 0x1ac0)
    
    if (i_1 != 0)
        int64_t* rdi_2 = *(arg1 + 0x1ab8) + 8
        int32_t i
        
        do
            int64_t* rbx_2 = *rdi_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp3_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rdi_2 = &rdi_2[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg1 + 0x1ac0) = 0
    
    if (*(arg1 + 0x1ac4) != 0)
        sub_1405a5410(arg1 + 0x1ab8, 0)
else if (rax.b != 5)
    goto label_1409558f7
