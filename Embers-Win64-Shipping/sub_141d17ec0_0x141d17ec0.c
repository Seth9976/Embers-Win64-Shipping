// 函数: sub_141d17ec0
// 地址: 0x141d17ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = *arg2
uint64_t result = sub_1416f3c40(arg1, &var_48, arg3)

if ((arg1[5].b & 1) != 0)
    void* r15_1 = arg1[0x13]
    int64_t rbx_1 = var_48
    sub_140865c40(r15_1 + 0xb8, &var_48, rbx_1)
    int64_t rax_1 = sx.q(var_48.d)
    void*** rdi_2
    
    if (rax_1.d == 0xffffffff)
    label_141d17f46:
        void*** rax_3 = j_sub_140a82f30(0x18)
        rdi_2 = rax_3
        
        if (rax_3 == 0)
            rdi_2 = rax_3
        else
            *rdi_2 = &data_14321f688
            rdi_2[1] = rbx_1
            void*** rax_4 = j_sub_140a82f30(0x18)
            
            if (rax_4 != 0)
                rax_4[1].d = 1
                *rax_4 = &data_142d42ea8
                *(rax_4 + 0xc) = 1
                rax_4[2] = rbx_1
            
            rdi_2[2] = rax_4
        
        void*** var_30 = rdi_2
        int64_t var_38
        int64_t* var_28 = &var_38
        var_38 = rbx_1
        void**** var_20_1 = &var_30
        sub_140bd29a0(r15_1 + 0xb8, &var_48, &var_28, nullptr)
    else
        void* rdi_1 = *(r15_1 + 0xb8) + rax_1 * 0x18
        
        if (rdi_1 == 0)
            goto label_141d17f46
        
        rdi_2 = *(rdi_1 + 8)
        
        if (rdi_2 == 0)
            goto label_141d17f46
    
    int64_t* rbx_2 = rdi_2[2]
    var_48 = rdi_2[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    result = &var_48
    
    if (&var_48 != arg2)
        var_48.o = *arg2
        *arg2 = var_48.o
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_2 + 8))(rbx_2, 1)

return result
