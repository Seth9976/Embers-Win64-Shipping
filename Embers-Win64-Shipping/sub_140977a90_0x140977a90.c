// 函数: sub_140977a90
// 地址: 0x140977a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x40)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = MSF_HB::MSF_HB(rax)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

(*rbx)[5](rbx, arg3, rbx)
int16_t rax_5

if ((*(arg3 + 0x29) & 1) == 0)
    rax_5 = (*rbx)[2](rbx)

if ((*(arg3 + 0x29) & 1) != 0 || rax_5 == 0)
    *arg2 = nullptr
    arg2[1] = 0
label_140977c79:
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp1_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rax_2)[1](rax_2, 1)
else
    int64_t* rcx_3 = *(arg1 + 0x20)
    
    if ((*(*rcx_3 + 0x118))(rcx_3) == 0)
        void var_38
        int64_t* rax_9 = (*rbx)[3](rbx, &var_38)
        void** const var_28 = &data_142e25968
        int64_t* rbx_1 = rax_9[1]
        int64_t var_20_1 = *rax_9
        int64_t* var_18_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        void* rbp
        rbp.b = sub_14095fe60(arg1 + 0x80, &var_28) == 0xffffffff
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* var_30
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp5_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)
        
        if (rbp.b != 0)
            if (rax_2 != 0)
                rax_2[1].d += 1
            
            int64_t rbp_1 = sx.q(*(arg1 + 0xe0))
            int32_t rax_15 = (rbp_1 + 1).d
            *(arg1 + 0xe0) = rax_15
            
            if (rax_15 s> *(arg1 + 0xe4))
                sub_1405a4f90(arg1 + 0xd8)
            
            void**** rax_18 = (rbp_1 << 4) + *(arg1 + 0xd8)
            *rax_18 = rbx
            rax_18[1] = rax_2
    
    *arg2 = rbx
    arg2[1] = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d += 1
        goto label_140977c79

return arg2
