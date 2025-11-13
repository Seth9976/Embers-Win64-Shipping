// 函数: sub_141cbf4b0
// 地址: 0x141cbf4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r8 = sub_140b5b8a0(*arg2, 0).b == 0
int64_t rax
rax.b = arg2[1] != 0
rax.b |= r8

if (rax.b != 0)
    sub_1405a7050(arg1, arg2)
    void* rbx_1 = data_143f35848
    
    if (rbx_1 == 0)
        sub_141cc3750()
        rbx_1 = data_143f35848
    
    rax = zx.q(*(rbx_1 + 0x68))
    int64_t* rdx_6
    
    if (rax.d == *(rbx_1 + 0x94))
    label_141cbf57e:
        rdx_6 = nullptr
    else
        int64_t rax_1 = *arg2
        int32_t rax_3 = sub_140b5ead0(rax_1.d) + rax_1:4.d
        void* r8_1 = rbx_1 + 0x98
        void* rcx_3 = *(r8_1 + 8)
        
        if (rcx_3 != 0)
            r8_1 = rcx_3
        
        rax = zx.q(*(r8_1 + (((sx.q(*(rbx_1 + 0xa8)) - 1) & sx.q(rax_3)) << 2)))
        
        if (rax.d == 0xffffffff)
        label_141cbf57e_1:
            rdx_6 = nullptr
        else
            while (true)
                rdx_6 = (sx.q(rax.d) << 5) + *(rbx_1 + 0x60)
                
                if (*rdx_6 == *arg2)
                    break
                
                rax = zx.q(rdx_6[3].d)
                
                if (rax.d == 0xffffffff)
                    goto label_141cbf57e_2
            
            if (rax.d == 0xffffffff)
            label_141cbf57e_2:
                rdx_6 = nullptr
    
    void* rbx_2 = &rdx_6[1]
    
    if (rdx_6 == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        void* rdi_1 = *rbx_2
        int64_t* rbx_3 = *(rbx_2 + 8)
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        if (rdi_1 != 0)
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    rax = (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        rax = (*(*rbx_3 + 8))(rbx_3, 1)
            
            if (rdi_1 != -8)
                int64_t* rbx_4 = *(rdi_1 + 0x18)
                rax = sx.q(*(rdi_1 + 0x20))
                void* rdi_3 = &rbx_4[rax]
                
                if (rbx_4 != rdi_3)
                    int64_t rax_7
                    
                    do
                        rax_7 = sub_1405a7050(&arg1[2], rbx_4)
                        rbx_4 = &rbx_4[1]
                    while (rbx_4 != rdi_3)
                    
                    return rax_7
        else if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                rax = (**rbx_3)(rbx_3)
                int32_t temp2_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    return (*(*rbx_3 + 8))(rbx_3, 1)

return rax
