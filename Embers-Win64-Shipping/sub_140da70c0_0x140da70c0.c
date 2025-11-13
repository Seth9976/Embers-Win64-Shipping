// 函数: sub_140da70c0
// 地址: 0x140da70c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg2, 0, 0x19)
int64_t* var_38
int64_t* rax = sub_140da6800(*(arg1 + 0x18), &var_38, arg3, arg5)

if (arg2 != rax)
    *arg2 = *rax
    *rax = 0
    int64_t rcx_2 = rax[1]
    int64_t* rdi_1 = arg2[1]
    
    if (rcx_2 != rdi_1)
        rax[1] = 0
        arg2[1] = rcx_2
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

int64_t* rax_5 = *arg2
int64_t rax_7

if (rax_5 != 0)
    arg2[2].d = sub_142b91fc0(*rax_5)
    rax_7 = *arg2
    arg2[3].b = 0

if (rax_5 == 0 || rax_7 == 0)
    void var_28
    
    if (arg4 == 0xfffd || arg6 u>= 2)
    label_140da71c2:
        
        if (*(sub_140da2a70() + 0x120) != 0)
            var_38 = arg3
            var_30.d = arg4
            int64_t* rax_10
            int512_t zmm1
            rax_10, zmm1 = sub_140da81b0(sub_140da2a70())
            int64_t* rax_11 = sub_140da6800(*(arg1 + 0x18), &var_28, rax_10, zmm1)
            
            if (arg2 != rax_11)
                *arg2 = *rax_11
                *rax_11 = 0
                int64_t rcx_11 = rax_11[1]
                int64_t* rdi_3 = arg2[1]
                
                if (rcx_11 != rdi_3)
                    rax_11[1] = 0
                    arg2[1] = rcx_11
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d -= 1
                        
                        if (rdi_3[1].d == 1)
                            (**rdi_3)(rdi_3)
                            int32_t temp8_1 = *(rdi_3 + 0xc)
                            *(rdi_3 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                (*(*rdi_3 + 8))(rdi_3, 1)
            
            int64_t* var_20
            
            if (var_20 != 0)
                var_20[1].d -= 1
                
                if (var_20[1].d == 1)
                    (**var_20)(var_20)
                    int32_t temp5_1 = *(var_20 + 0xc)
                    *(var_20 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*var_20 + 8))(var_20, 1)
            
            int64_t* rcx_16 = *arg2
            
            if (rcx_16 != 0)
                int32_t rax_16 = sub_142b91fc0(*rcx_16)
                arg2[2].d = rax_16
                
                if (rax_16 != 0)
                    *(arg2 + 0x14) |= 0x20
                    arg2[3].b = 2
    
label_140da7297:
    
    if (arg4 != 0 && arg2[2].d == 0 && arg2 != &var_28)
        *arg2 = 0
        int64_t* rdi_5 = arg2[1]
        
        if (rdi_5 != 0)
            arg2[1] = 0
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t temp9_1 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rdi_5 + 8))(rdi_5, 1)
else if (arg4 != 0)
    if (arg2[2].d != 0 || (arg4 != 0xfffd && arg6 u< 2))
        goto label_140da7297
    
    goto label_140da71c2

return arg2
