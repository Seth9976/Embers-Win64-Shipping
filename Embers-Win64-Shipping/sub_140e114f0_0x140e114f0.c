// 函数: sub_140e114f0
// 地址: 0x140e114f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
char rax_2
char rsi

if (arg3 != 0)
    rax_2 = *(arg1 + 0x2b)
    rsi = *(arg1 + 0x2a)
else
    rax_2 = *(arg1 + 0x2a)
    rsi = *(arg1 + 0x2b)

uint32_t rcx = zx.d(rax_2)

if (rcx == 1)
    int64_t var_48
    (*(*arg1 + 0x1e0))(arg1, &var_48, zx.q(arg3))
    char var_30
    char rcx_15 = var_30
    int64_t* var_40
    int64_t* rsi_1
    
    if (rcx_15 != 0)
        rsi_1 = var_40
        *arg2 = var_48
        arg2[1] = rsi_1
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
            rcx_15 = var_30
            rsi_1 = var_40
        
        int32_t var_38
        arg2[2].d = var_38
        
        if (rcx_15 != 0)
            goto label_140e116dc
    else if ((rsi & 0xfd) == 0)
        sub_140e113b0(arg1, arg2)
    label_140e116d0:
        
        if (var_30 != 0)
            rsi_1 = var_40
        label_140e116dc:
            char var_30_1 = 0
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    (**rsi_1)(rsi_1)
                    int32_t rbx_3 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (rbx_3 == 1)
                        (*(*rsi_1 + 8))(rsi_1, 1)
    else
        if (rsi - 3 u<= 1)
            int64_t r8_1
            r8_1.b = arg3 == 0
            sub_140e114f0(arg1, arg2, r8_1)
            goto label_140e116d0
        
    label_140e116a1:
        sub_1405d9400()
        *arg2 = data_143cd6fd8
        void* rcx_18 = data_143cd6fe0
        arg2[1] = rcx_18
        
        if (rcx_18 != 0)
            *(rcx_18 + 8) += 1
        
        arg2[2].d = data_143cd6fe8
else if (rcx == 2)
    sub_140e113b0(arg1, arg2)
else if (rcx == 3)
    int64_t* rcx_9 = &data_1439af130
    
    if (arg3 != 0)
        rcx_9 = &data_1439af190
    
    int64_t* rax_9 = sub_140e105c0(rcx_9, arg1)
    sub_1405d9400()
    int64_t* rdx_3 = &data_143cd6fd8
    
    if (rax_9[3].b != 0)
        rdx_3 = sub_140d44910(rax_9)
    
    *arg2 = *rdx_3
    void* rax_11 = rdx_3[1]
    arg2[1] = rax_11
    
    if (rax_11 != 0)
        *(rax_11 + 8) += 1
    
    arg2[2].d = rdx_3[2].d
else
    if (rcx != 4)
        goto label_140e116a1
    
    int64_t* rcx_4 = arg1[0x4b]
    
    if (rcx_4 == 0)
        goto label_140e116a1
    
    if ((*(*rcx_4 + 0x18))(rcx_4) != 0)
        goto label_140e116a1
    
    int64_t* rcx_5 = arg1[0x4b]
    void var_58
    sub_140e114f0(*(*(*rcx_5 + 8))(rcx_5, &var_58), arg2, 0)
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp5_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_50 + 8))(var_50, 1)

__security_check_cookie(rax_1 ^ &var_78)
return arg2
