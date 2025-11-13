// 函数: sub_1423576b0
// 地址: 0x1423576b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_48
sub_142361500(arg1 - 0x390, &var_48, arg2)
void* rbp = var_48
int64_t* result
int64_t* var_40

if (rbp == 0)
label_142357906:
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp2_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    int64_t* rbx_8 = arg4[1]
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp3_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_8 + 8))(rbx_8, 1)
    
    result.b = 0
else
    int64_t rbx_1 = *arg3
    int32_t rax = *(rbp + 0x30)
    int64_t arg_8 = rbx_1
    int64_t* rsi_2
    
    if (rax != *(rbp + 0x5c))
        int32_t rax_2 = sub_140b5ead0(rbx_1.d) + arg_8:4.d
        void* r8_1 = rbp + 0x60
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        int32_t rax_4 = *(r8_1 + (((sx.q(*(rbp + 0x70)) - 1) & sx.q(rax_2)) << 2))
        
        if (rax_4 == 0xffffffff)
            goto label_14235775d
        
        int64_t rdx_4 = *(rbp + 0x28)
        int64_t rsi_1
        
        while (true)
            rsi_1 = sx.q(rax_4)
            int64_t rcx_4 = rsi_1 << 5
            
            if (*(rcx_4 + rdx_4) == rbx_1)
                break
            
            rax_4 = *(rcx_4 + rdx_4 + 0x18)
            
            if (rax_4 == 0xffffffff)
                goto label_14235775d
        
        if (rax_4 == 0xffffffff)
            goto label_14235775d
        
        int64_t rsi_3 = rsi_1 << 5
        void* rsi_4 = rsi_3 + rdx_4
        
        if (rsi_3 == neg.q(rdx_4))
            goto label_14235775d
        
        rsi_2 = *(rsi_4 + 0x10)
        
        if (rsi_2 != 0)
            rsi_2[1].d += 1
        
        if (*(rsi_4 + 8) == 0)
            goto label_142357762
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rsi_2)(rsi_2)
                int32_t temp16_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*rsi_2 + 8))(rsi_2, 1)
        
        goto label_142357906
    
label_14235775d:
    rsi_2 = nullptr
label_142357762:
    int64_t var_38 = *arg4
    int64_t* rax_6 = arg4[1]
    
    if (rax_6 != 0)
        rax_6[1].d += 1
    
    int64_t* var_28 = arg3
    int64_t* var_20_1 = &var_38
    sub_14234db90(rbp + 0x28, &arg_8, &var_28, nullptr)
    
    if (rax_6 != 0)
        rax_6[1].d -= 1
        
        if (rax_6[1].d == 1)
            (**rax_6)(rax_6)
            int32_t temp6_1 = *(rax_6 + 0xc)
            *(rax_6 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rax_6 + 8))(rax_6, 1)
    
    int64_t* rcx_8 = *arg4
    int64_t* rdi_1 = *(rbp + 0x10)
    int64_t* rax_10 = (**rcx_8)(rcx_8, &var_28)
    sub_140de1aa0(sub_140de7320(rdi_1, arg5), rax_10)
    
    if (var_20_1 != 0)
        var_20_1[1].d -= 1
        
        if (var_20_1[1].d == 1)
            (**var_20_1)(var_20_1)
            int32_t temp8_1 = *(var_20_1 + 0xc)
            *(var_20_1 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_20_1 + 8))(var_20_1, 1)
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            (**rsi_2)(rsi_2)
            int32_t temp11_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rsi_2 + 8))(rsi_2, 1)
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp13_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    int64_t* rbx_6 = arg4[1]
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp14_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)
    
    result.b = 1
return result
