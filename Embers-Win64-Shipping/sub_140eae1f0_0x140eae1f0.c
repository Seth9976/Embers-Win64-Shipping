// 函数: sub_140eae1f0
// 地址: 0x140eae1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4

if (arg6 == 0)
    int64_t rax
    rax.b = 1
    return rax

int32_t i_2 = arg2[1].d

if (i_2 != 0)
    int64_t* rdi_1 = *arg2 + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 = &rdi_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx = arg4

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405a5410(arg2, 0)

void* rax_3 = *arg3
int32_t i_1 = 0

if (*(rax_3 + 0x30) s> 0)
    int64_t r15_1 = 0
    
    do
        int64_t* rcx_3 = *(rax_3 + 0x28)
        int64_t var_58 = *(rcx_3 + r15_1)
        int64_t* rax_5 = *(rcx_3 + r15_1 + 8)
        
        if (rax_5 != 0)
            rax_5[1].d += 1
        
        void* var_48
        arg5 = sub_140ed6440(arg1, &var_48, &var_58, rbx, arg5, 0, arg6)
        void* rcx_5 = var_48
        
        if (rcx_5 != 0)
            int64_t* rbx_2 = *(rcx_5 + 0x10)
            int64_t rsi = 0
            
            if (rbx_2 != 0)
                int32_t rax_6 = rbx_2[1].d
                
                if (rax_6 == 0)
                    rbx_2 = nullptr
                else
                    rbx_2[1].d = rax_6 + 1
                    
                    if (rbx_2 != 0)
                        rsi = *(rcx_5 + 8)
                        rbx_2[1].d = rax_6 + 1
                        
                        if (rax_6 == 0xffffffff)
                            (**rbx_2)(rbx_2)
                            int32_t temp8_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
            
            int64_t rdi_2 = sx.q(arg2[1].d)
            int32_t rax_10 = (rdi_2 + 1).d
            arg2[1].d = rax_10
            
            if (rax_10 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            int64_t* rax_13 = (rdi_2 << 4) + *arg2
            *rax_13 = rsi
            rax_13[1] = rbx_2
            
            if (rbx_2 != 0)
                int32_t rax_14 = rbx_2[1].d
                rbx_2[1].d = rax_14
                
                if (rax_14 == 0)
                    (**rbx_2)(rbx_2)
                    int32_t temp7_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
        
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp5_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        if (rax_5 != 0)
            rax_5[1].d -= 1
            
            if (rax_5[1].d == 1)
                (**rax_5)(rax_5)
                int32_t temp6_1 = *(rax_5 + 0xc)
                *(rax_5 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rax_5 + 8))(rax_5, 1)
        
        rax_3 = *arg3
        i_1 += 1
        rbx = arg4
        r15_1 += 0x10
    while (i_1 s< *(rax_3 + 0x30))

rax_3.b = arg2[1].d s> 0
return rax_3
