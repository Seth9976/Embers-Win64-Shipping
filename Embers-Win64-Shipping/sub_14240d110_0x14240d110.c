// 函数: sub_14240d110
// 地址: 0x14240d110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[0x1b]

if (rax == data_143f5bc58)
    (*(*arg1 + 0x2e0))()
else if (rax == data_143f5bcb8)
    (*(*arg1 + 0x308))()

char result
int128_t var_38
int64_t* var_30
void var_28
int64_t* var_20
int64_t* rdi_4

if (arg2 == data_143f5bc58)
    (*(*arg1 + 0x2d8))(arg1, arg1[0x1b])
    sub_140920f30(&data_143a304a8, 1)
    int64_t* rcx_1 = data_143e29f28
    int64_t* rax_5 = (*(*rcx_1 + 0x88))(rcx_1, &var_38)
    arg1[0x24] = *rax_5
    void* rdi_1 = rax_5[1]
    int64_t* rcx_3 = arg1[0x25]
    
    if (rdi_1 != rcx_3)
        if (rdi_1 != 0)
            *(rdi_1 + 0xc) += 1
            rcx_3 = arg1[0x25]
        
        if (rcx_3 != 0)
            int32_t temp2_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
        
        arg1[0x25] = rdi_1
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp1_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    uint128_t zmm0_1 = sub_140e86990(data_143e29f28)
    void* r14_1
    
    if (((arg1[1].d u>> 4).b & 1) == 0)
        r14_1 = arg1[4]
    else
        r14_1 = nullptr
    
    int64_t* rax_11 = sub_142029ad0(r14_1, &var_28)
    var_38.q = *rax_11
    int64_t* rcx_9 = rax_11[1]
    
    if (rcx_9 != 0)
        rcx_9[1].d += 1
    
    result = sub_140e892d0(data_143e29f28, &var_38, 2, zmm0_1)
    
    if (rcx_9 != 0)
        rcx_9[1].d -= 1
        
        if (rcx_9[1].d == 1)
            result = (**rcx_9)(rcx_9)
            int32_t temp8_1 = *(rcx_9 + 0xc)
            *(rcx_9 + 0xc) -= 1
            
            if (temp8_1 == 1)
                result = (*(*rcx_9 + 8))(rcx_9, 1)
    
    rdi_4 = var_20
label_14240d458:
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            result = (**rdi_4)(rdi_4)
            int32_t temp12_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp12_1 == 1)
                result = (*(*rdi_4 + 8))(rdi_4, 1)
else if (arg2 != data_143f5bcb8)
    result = sub_140b5b8a0(arg2.d, 0)
    int32_t rcx_15
    rcx_15.b = arg2:4.d == 0
    
    if ((rcx_15.b & result) != 0)
        arg1[0x16].d &= 0xfffffff9
        int64_t r14_2 = 0
        int64_t arg_10 = 0
        arg1[0x1b] = 0
        var_38 = zx.o(0)
        int64_t* rdi_5
        
        if (arg1[0x24] == 0)
        label_14240d390:
            int64_t* rcx_18 = data_143e29f28
            int64_t* rax_19 = (*(*rcx_18 + 0x88))(rcx_18, &var_28)
            
            if (&var_38 != rax_19)
                var_38.q = *rax_19
                *rax_19 = 0
                int64_t* rcx_20 = rax_19[1]
                int64_t* rdi_6 = var_30
                
                if (rcx_20 != rdi_6)
                    rax_19[1] = 0
                    var_30 = rcx_20
                    
                    if (rdi_6 != 0)
                        rdi_6[1].d -= 1
                        
                        if (rdi_6[1].d == 1)
                            (**rdi_6)(rdi_6)
                            int32_t temp7_1 = *(rdi_6 + 0xc)
                            *(rdi_6 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*rdi_6 + 8))(rdi_6, 1)
            
            rdi_5 = var_20
            goto label_14240d3f7
        
        rdi_5 = arg1[0x25]
        
        if (rdi_5 == 0)
            goto label_14240d390
        
        int32_t rax_15 = rdi_5[1].d
        
        if (rax_15 s<= 0)
            goto label_14240d390
        
        if (rdi_5 != 0)
            if (rax_15 != 0)
                rdi_5[1].d = rax_15 + 1
                rax_15.b = 1
            
            if (rax_15.b == 0)
                rdi_5 = nullptr
            
            if (rdi_5 != 0)
                r14_2 = arg1[0x24]
        
        var_38.q = r14_2
        int64_t* r14_3 = var_30
        
        if (rdi_5 == r14_3)
        label_14240d3f7:
            
            if (rdi_5 != 0)
                rdi_5[1].d -= 1
                
                if (rdi_5[1].d == 1)
                    (**rdi_5)(rdi_5)
                    int32_t temp6_1 = *(rdi_5 + 0xc)
                    *(rdi_5 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rdi_5 + 8))(rdi_5, 1)
        else
            var_30 = rdi_5
            
            if (r14_3 != 0)
                r14_3[1].d -= 1
                
                if (r14_3[1].d == 1)
                    (**r14_3)(r14_3)
                    int32_t temp11_1 = *(r14_3 + 0xc)
                    *(r14_3 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*r14_3 + 8))(r14_3, 1)
        
        if (var_38.q != 0)
            uint128_t zmm0_2 = sub_140e5acb0(data_143e29f28, 2)
            sub_140e892d0(data_143e29f28, &var_38, 0, zmm0_2)
        
        result = sub_140920f30(&data_143a304a8, 0)
        rdi_4 = var_30
        goto label_14240d458
else
    (*(*arg1 + 0x300))(arg1, arg1[0x1b])
    sub_140e86990(data_143e29f28)
    result = sub_140920f30(&data_143a304a8, 1)
arg1[0x1b] = arg2
return result
