// 函数: sub_141cc4640
// 地址: 0x141cc4640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143f35848

if (rbx == 0)
    sub_141cc3750()
    rbx = data_143f35848

*(rbx + 0x94)
int64_t* rdx_5

if (*(rbx + 0x68) == *(rbx + 0x94))
label_141cc46ee:
    rdx_5 = nullptr
else
    int64_t rax_2 = *arg1
    int32_t rax_4 = sub_140b5ead0(rax_2.d) + rax_2:4.d
    void* r8_1 = rbx + 0x98
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_6 = *(r8_1 + (((sx.q(*(rbx + 0xa8)) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_141cc46ee_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_6) << 5) + *(rbx + 0x60)
            
            if (*rdx_5 == *arg1)
                break
            
            rax_6 = rdx_5[3].d
            
            if (rax_6 == 0xffffffff)
                goto label_141cc46ee_2
        
        if (rax_6 == 0xffffffff)
        label_141cc46ee_2:
            rdx_5 = nullptr

void* rbx_1 = &rdx_5[1]

if (rdx_5 == 0)
    rbx_1 = nullptr

int64_t result

if (rbx_1 == 0)
label_141cc47e2:
    sub_140b5b8a0(*arg1, 0)
label_141cc47e7:
    result.b = 0
else
    void* rdi_1 = *rbx_1
    int64_t* rbx_2 = *(rbx_1 + 8)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (rdi_1 == 0)
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        goto label_141cc47e2
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (rdi_1 == -8)
        goto label_141cc47e2
    
    int32_t rcx_4
    rcx_4.b = sub_140b5b8a0(*arg2, 0).b == 0
    result.b = arg2[1] != 0
    result.b |= rcx_4.b
    
    if (result.b == 0)
    label_141cc47e7_1:
        result.b = 0
    else
        int64_t* rcx_5 = *(rdi_1 + 8)
        void* rdx_6 = &rcx_5[sx.q(*(rdi_1 + 0x10))]
        
        if (rcx_5 == rdx_6)
        label_141cc478e:
            int64_t* rcx_6 = *(rdi_1 + 0x18)
            void* rdx_7 = &rcx_6[sx.q(*(rdi_1 + 0x20))]
            
            if (rcx_6 == rdx_7)
            label_141cc47e7_2:
                result.b = 0
            else
                while (*rcx_6 != *arg2)
                    rcx_6 = &rcx_6[1]
                    
                    if (rcx_6 == rdx_7)
                        goto label_141cc47e7_2
                
                result.b = 1
        else
            while (*rcx_5 != *arg2)
                rcx_5 = &rcx_5[1]
                
                if (rcx_5 == rdx_6)
                    goto label_141cc478e
            
            result.b = 1

return result
