// 函数: sub_140eadd30
// 地址: 0x140eadd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi
int64_t* var_8 = rdi
void* var_38
(*(*arg1 + 0x258))(arg1, &var_38)

if (var_38 == 0)
    rdi.b = 0
else
    sub_140ebd660()
    int64_t* rsi_1 = data_143e2a078
    void* rcx = data_143e2a070
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    rdi = *(rcx + 0x168)
    int64_t* rax_1 = rdi
    
    if (rdi != 0)
        int32_t rax_2 = rdi[1].d
        
        if (rax_2 == 0)
            rdi = nullptr
        else
            rdi[1].d = rax_2 + 1
        
        rax_1 = rdi
    
    if (rax_1 == 0)
    label_140eade8f:
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp4_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        if (rsi_1 == 0)
            rdi.b = 0
        else
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp6_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
            
            rdi.b = 0
    else
        void* rbp_1 = *(rcx + 0x160)
        
        if (rbp_1 == 0)
            goto label_140eade8f
        
        void var_18
        int64_t* rax_4 = sub_140ebf640(var_38, &var_18)
        void var_28
        int64_t* rax_5 = sub_140f022f0(rbp_1, &var_28)
        int64_t r14_1 = *rax_4
        int64_t rbp_2 = *rax_5
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp8_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)
        
        int64_t* var_10
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp9_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)
        
        if (rbp_2 != r14_1)
            goto label_140eade8f
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp12_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp13_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        rdi.b = 1

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *var_30
            (*(r8_2 + 8))(var_30, 1, r8_2)

return zx.q(rdi.b)
