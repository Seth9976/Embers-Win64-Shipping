// 函数: sub_140ebda30
// 地址: 0x140ebda30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38
int64_t* result = sub_140ebdf00(*arg1, &var_38)
int32_t i_4
int32_t i_2 = i_4
int64_t* r13 = var_38

if (i_2 s> 0)
    int64_t* rdi_1 = r13
    uint64_t i_3 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t* rcx_1 = *rdi_1
        result = (*(*rcx_1 + 0x240))(rcx_1)
        
        if (result.d == 0)
            int64_t* rbx_1 = rdi_1[1]
            int64_t r12_1 = *rdi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int64_t rbp_1 = sx.q(arg2[1].d)
            int32_t rax_1 = (rbp_1 + 1).d
            arg2[1].d = rax_1
            
            if (rax_1 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            result = (rbp_1 << 4) + *arg2
            *result = r12_1
            result[1] = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        result = (**rbx_1)(rbx_1)
                        int32_t temp5_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 = &rdi_1[2]
        i = i_3
        i_3 -= 1
    while (i != 1)

if (i_2 != 0)
    void* rdi_2 = &r13[1]
    int32_t i_1
    
    do
        int64_t* rbx_2 = *rdi_2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_2 += 0x10
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r13 == 0)
    return result

return sub_140a74f90(r13) __tailcall
