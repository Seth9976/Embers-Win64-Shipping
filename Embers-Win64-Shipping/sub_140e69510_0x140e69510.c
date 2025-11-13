// 函数: sub_140e69510
// 地址: 0x140e69510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0xf8)

if (r14 == 0)
    int64_t* rax_1 = j_sub_140a82f30(zx.q((&r14[2]).d))
    int64_t* r14_1 = rax_1
    
    if (rax_1 == 0)
        r14_1 = nullptr
    else
        *rax_1 = 0
        rax_1[1] = 0
    
    void*** rax_2 = j_sub_140a82f30(0x18)
    void*** rsi_1 = rax_2
    
    if (rax_2 == 0)
        rsi_1 = nullptr
    else
        rax_2[1].d = 1
        *(rax_2 + 0xc) = 1
        *rsi_1 = &data_142ed9e88
        rsi_1[2] = r14_1
    
    int64_t* var_38 = r14_1
    void*** var_30_1 = rsi_1
    
    if (arg1 + 0xf8 == &var_38)
    label_140e6960b:
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp1_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rsi_1)[1](rsi_1, 1)
    else
        *(arg1 + 0xf8) = r14_1
        int64_t* r14_2 = *(arg1 + 0x100)
        var_38 = nullptr
        
        if (rsi_1 == r14_2)
            goto label_140e6960b
        
        void*** var_30_2 = nullptr
        *(arg1 + 0x100) = rsi_1
        
        if (r14_2 != 0)
            r14_2[1].d -= 1
            
            if (r14_2[1].d == 1)
                (**r14_2)(r14_2)
                int32_t temp3_1 = *(r14_2 + 0xc)
                *(r14_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*r14_2 + 8))(r14_2, 1)
            
            rsi_1 = var_30_2
            goto label_140e6960b
    
    sub_140e6bf00(*(arg1 + 0xf8))
    r14 = *(arg1 + 0xf8)

int64_t* r14_3 = *r14
void** rax

if (r14_3 != 0)
    int64_t* rdx_5
    
    if (r14_3[1].d == *(r14_3 + 0x34))
    label_140e696ca:
        rdx_5 = nullptr
    else
        int32_t rsi_3 = sub_140b5ead0(arg2.d) + arg2:4.d
        int32_t rax_10 = sub_140b5ead0(arg3.d) + arg3:4.d
        void* r8 = &r14_3[7]
        void* rcx_8 = *(r8 + 8)
        
        if (rcx_8 != 0)
            r8 = rcx_8
        
        int32_t rax_13 = *(r8 + (((sx.q(r14_3[9].d) - 1) & sx.q(rax_10 ^ rsi_3)) << 2))
        
        if (rax_13 == 0xffffffff)
        label_140e696ca_1:
            rdx_5 = nullptr
        else
            while (true)
                rdx_5 = (sx.q(rax_13) << 6) + *r14_3
                
                if (*rdx_5 == arg2 && rdx_5[1] == arg3 && rdx_5[2].b == arg4)
                    break
                
                rax_13 = rdx_5[7].d
                
                if (rax_13 == 0xffffffff)
                    goto label_140e696ca_2
            
            if (rax_13 == 0xffffffff)
            label_140e696ca_2:
                rdx_5 = nullptr
    
    rax = &rdx_5[3]
    
    if (rdx_5 == 0)
        rax = nullptr
    
    if (rax != 0)
        sub_140e54dc0(arg5, rax)
        int64_t* rax_14
        rax_14.b = 1
        return rax_14

rax.b = 0
return rax
