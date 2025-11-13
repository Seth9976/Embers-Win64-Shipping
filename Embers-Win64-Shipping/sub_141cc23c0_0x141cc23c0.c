// 函数: sub_141cc23c0
// 地址: 0x141cc23c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[3].d = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_1405c5570(&arg1[2], 0)

int64_t* i = *arg1
int64_t result = sx.q(arg1[1].d)

for (void* r14 = &i[result]; i != r14; i = &i[1])
    if (data_143f35848 == 0)
        sub_141cc3750()
    
    void* rbx_1 = data_143f35848
    result = zx.q(*(rbx_1 + 0x68))
    int64_t* rdx_6
    
    if (result.d == *(rbx_1 + 0x94))
    label_141cc249e:
        rdx_6 = nullptr
    else
        int64_t rax = *i
        int32_t rax_2 = sub_140b5ead0(rax.d) + rax:4.d
        void* r8_1 = rbx_1 + 0x98
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        result = zx.q(*(r8_1 + (((sx.q(*(rbx_1 + 0xa8)) - 1) & sx.q(rax_2)) << 2)))
        
        if (result.d == 0xffffffff)
        label_141cc249e_1:
            rdx_6 = nullptr
        else
            while (true)
                rdx_6 = (sx.q(result.d) << 5) + *(rbx_1 + 0x60)
                
                if (*rdx_6 == *i)
                    break
                
                result = zx.q(rdx_6[3].d)
                
                if (result.d == 0xffffffff)
                    goto label_141cc249e_2
            
            if (result.d == 0xffffffff)
            label_141cc249e_2:
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
                    result = (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rbx_3 + 8))(rbx_3, 1)
            
            if (rdi_1 != -8)
                int64_t* j = *(rdi_1 + 0x18)
                result = sx.q(*(rdi_1 + 0x20))
                
                for (void* rdi_3 = &j[result]; j != rdi_3; j = &j[1])
                    result = sub_1405a7050(&arg1[2], j)
        else if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                result = (**rbx_3)(rbx_3)
                int32_t temp2_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_3 + 8))(rbx_3, 1)

return result
