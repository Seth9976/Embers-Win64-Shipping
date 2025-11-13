// 函数: sub_1424260c0
// 地址: 0x1424260c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

if (*(arg1 + 8) == 0)
    void**** rax_1 = j_sub_140a82f30(0x20)
    void**** rsi_1 = rax_1
    void*** var_68
    
    if (rax_1 == 0)
        rsi_1 = nullptr
    else
        void**** rax_2 = sub_140a6e480(&var_68)
        *rsi_1 = *rax_2
        void* rcx_2 = rax_2[1]
        rsi_1[1] = rcx_2
        
        if (rcx_2 != 0)
            *(rcx_2 + 8) += 1
        
        int64_t* var_60
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t temp1_1 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_60 + 8))(var_60, 1)
        
        void*** var_58
        void**** rax_5 = sub_140a6eae0(&var_58)
        rsi_1[2] = *rax_5
        void* rcx_7 = rax_5[1]
        rsi_1[3] = rcx_7
        
        if (rcx_7 != 0)
            *(rcx_7 + 8) += 1
        
        int64_t* var_50
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                (**var_50)(var_50)
                int32_t temp4_1 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_50 + 8))(var_50, 1)
    
    void*** rax_8 = j_sub_140a82f30(0x18)
    void*** rdi_3 = rax_8
    
    if (rax_8 == 0)
        rdi_3 = nullptr
    else
        rax_8[1].d = 1
        *(rax_8 + 0xc) = 1
        *rdi_3 = &data_143347398
        rdi_3[2] = rsi_1
    
    var_68 = rsi_1
    void*** var_60_1 = rdi_3
    
    if (arg1 + 8 == &var_68)
    label_14242623c:
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t temp5_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*rdi_3)[1](rdi_3, 1)
    else
        *(arg1 + 8) = rsi_1
        int64_t* rsi_2 = *(arg1 + 0x10)
        var_68 = nullptr
        
        if (rdi_3 == rsi_2)
            goto label_14242623c
        
        void*** var_60_2 = nullptr
        *(arg1 + 0x10) = rdi_3
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rsi_2)(rsi_2)
                int32_t temp7_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rsi_2 + 8))(rsi_2, 1)
            
            rdi_3 = var_60_2
            goto label_14242623c

int16_t* rsi_3 = *(arg1 + 8)
int64_t rdi_4 = -1
int64_t var_48 = arg4

do
    rdi_4 += 1
while (*(arg4 + (rdi_4 << 1)) != 0)

void** result = arg5
int32_t var_40 = rdi_4.d
int64_t var_38 = arg2
int32_t var_30 = 0
void** result_1 = result
uint64_t* var_20 = arg6

if (arg6 != 0)
    arg6[1].d = 0
    
    if (*(arg6 + 0xc) != 0)
        result = sub_1405c5570(arg6, 0)

if (rdi_4.d s> 0)
    int64_t* rcx_15 = *rsi_3
    (*(*rcx_15 + 8))(rcx_15, arg4, zx.q(rdi_4.d))
    int64_t* rcx_16 = *(rsi_3 + 0x10)
    (*(*rcx_16 + 8))(rcx_16, arg4, zx.q(rdi_4.d))
    
    do
        result = sub_14241ceb0(rsi_3, &var_48)
        
        if (result.b == 0)
            break
        
        rbx += 1
    while (rbx s< var_40)

return result
