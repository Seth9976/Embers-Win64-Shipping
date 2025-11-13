// 函数: sub_14217e150
// 地址: 0x14217e150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t rbx = sx.q(arg3)
int32_t* rdx_2

if (*(arg1 + 0x368) == *(arg1 + 0x394))
label_14217e1cd:
    rdx_2 = nullptr
else
    void* rcx = *(arg1 + 0x3a0)
    void* r10_1 = arg1 + 0x398
    
    if (rcx != 0)
        r10_1 = rcx
    
    int32_t rax_1 = *(r10_1 + (((sx.q(*(arg1 + 0x3a8)) - 1) & rbx) << 2))
    
    if (rax_1 == 0xffffffff)
    label_14217e1cd_1:
        rdx_2 = nullptr
    else
        while (true)
            rdx_2 = (sx.q(rax_1) << 5) + *(arg1 + 0x360)
            
            if (*rdx_2 == rbx.d)
                break
            
            rax_1 = rdx_2[6]
            
            if (rax_1 == 0xffffffff)
                goto label_14217e1cd_2
        
        if (rax_1 == 0xffffffff)
        label_14217e1cd_2:
            rdx_2 = nullptr

void* rcx_1 = &rdx_2[2]

if (rdx_2 == 0)
    rcx_1 = nullptr

if (rcx_1 == 0)
label_14217e286:
    int32_t* rax_9 = j_sub_140a82f30(0x10)
    int32_t* rdi_2 = rax_9
    
    if (rax_9 == 0)
        rdi_2 = nullptr
    else
        *rax_9 = rbx.d
        *(rax_9 + 8) = arg4
    
    int64_t* rax_10 = j_sub_140a82f30(0x18)
    
    if (rax_10 == 0)
        rax_10 = nullptr
    else
        rax_10[1].d = 1
        *rax_10 = &data_142ec7b18
        *(rax_10 + 0xc) = 1
        rax_10[2] = rdi_2
    
    uint128_t zmm0_1 = rdi_2.o
    uint128_t var_38 = zmm0_1
    void* rax_11 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_11 != 0)
        *(rax_11 + 0xc) += 1
    
    sub_142159c40(arg1 + 0x360, &arg_18, &var_38)
    int64_t* rcx_7 = var_38:8.q
    
    if (rcx_7 != 0)
        int32_t temp3_1 = *(rcx_7 + 0xc)
        *(rcx_7 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rcx_7 + 8))(rcx_7, 1)
    
    *arg2 = rdi_2
    arg2[1] = rax_10
    
    if (rax_10 != 0)
        rax_10[1].d += 1
        
        if (rax_10 != 0)
            rax_10[1].d -= 1
            
            if (rax_10[1].d == 1)
                (**rax_10)(rax_10)
                int32_t temp5_1 = *(rax_10 + 0xc)
                *(rax_10 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rax_10 + 8))(rax_10, 1)
else
    int64_t* rdi_1 = *(rcx_1 + 8)
    int64_t* rsi_1 = rdi_1
    
    if (rdi_1 != 0)
        int32_t rax_2 = rdi_1[1].d
        
        if (rax_2 != 0)
            rdi_1[1].d = rax_2 + 1
            rax_2.b = 1
        
        if (rax_2.b == 0)
            rdi_1 = nullptr
            rsi_1 = nullptr
    
    if (rsi_1 == 0)
        goto label_14217e286
    
    int64_t rax_3 = *rcx_1
    
    if (rax_3 == 0)
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp1_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        goto label_14217e286
    
    *arg2 = rax_3
    arg2[1] = rdi_1
    
    if (rdi_1 != 0)
        int32_t rax_4 = rdi_1[1].d
        rdi_1[1].d = rax_4
        
        if (rax_4 == 0)
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

return arg2
