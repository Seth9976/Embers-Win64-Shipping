// 函数: sub_140ed0f20
// 地址: 0x140ed0f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *(arg4 + 0x70)
char rax_1

if (r15 != 0)
    int64_t rbx_1 = *r15
    sub_140ec00f0()
    rax_1 = (*(rbx_1 + 0x58))(r15, &data_143e29fe0)

int64_t* rbx_2

if (r15 == 0 || rax_1 == 0)
    rbx_2 = nullptr
    *arg2 = 0
else
    rbx_2 = *(arg4 + 0x78)
    void* rax_2 = *(arg4 + 0x70)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (rax_2 == 0)
        *arg2 = 0
    else
        int64_t* rax_3 = *(rax_2 + 0x48)
        
        if (rax_3 != 0)
            rax_3[1].d += 1
        
        int64_t var_38 = *(rax_2 + 0x40)
        void var_28
        sub_140ed1540(*sub_140eb6370(arg1, &var_28, arg3), &var_38, 0xffffffff)
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp4_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)
        
        if (rax_3 != 0)
            rax_3[1].d -= 1
            
            if (rax_3[1].d == 1)
                (**rax_3)(rax_3)
                int32_t temp5_1 = *(rax_3 + 0xc)
                *(rax_3 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rax_3 + 8))(rax_3, 1)
        
        if (*(arg1 + 0x450) != 0)
            sub_140e214e0(*(arg1 + 0x440), 0xffffffff)
            *(arg1 + 0x450) = 0
        
        *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg2
