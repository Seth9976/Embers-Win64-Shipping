// 函数: sub_141c8a730
// 地址: 0x141c8a730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = 0
int32_t i = 0
char r14 = arg3
int32_t rsi = 1

while (i s>= 0)
    if (i s>= *(arg1 + 0x108))
        break
    
    int64_t r15_1 = *(arg1 + 0x100)
    int64_t rbx_2 = sx.q(i) * 2
    int64_t* rdi_1 = *(r15_1 + (rbx_2 << 3) + 8)
    
    if (rdi_1 == 0)
        goto label_141c8a7bf
    
    int32_t rax_1 = 0
    bool z_1
    
    if (0 == rdi_1[1].d)
        rdi_1[1].d = 0
        z_1 = true
    else
        rax_1 = rdi_1[1].d
        z_1 = false
    
    int32_t rax
    
    if (z_1)
    label_141c8a7b8:
        rdi_1 = nullptr
    label_141c8a7bf:
        int64_t* rcx_1 = *(*(arg1 + 0x100) + (rbx_2 << 3) + 8)
        
        if (rcx_1 != 0)
            int32_t rax_4 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (rax_4 == 1 && rcx_1 != 0)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        int32_t rax_7 = *(arg1 + 0x108)
        int32_t rcx_3 = rax_7 - i
        
        if (rcx_3 != 1)
            int64_t rax_6 = *(arg1 + 0x100)
            memmove(rax_6 + (rbx_2 << 3), (sx.q(rsi) << 4) + rax_6, (rcx_3 - 1) << 4)
            rax_7 = *(arg1 + 0x108)
        
        *(arg1 + 0x108) = rax_7 - 1
        sub_1405a5010(arg1 + 0x100)
        i -= 1
        rsi -= 1
    else
        while (true)
            bool z_2
            
            if (rax_1 == rdi_1[1].d)
                rdi_1[1].d = rax_1 + 1
                z_2 = true
            else
                rdi_1[1].d
                z_2 = false
            
            if (z_2)
                break
            
            rax_1 = 0
            bool z_3
            
            if (0 == rdi_1[1].d)
                rdi_1[1].d = 0
                z_3 = true
            else
                rax_1 = rdi_1[1].d
                z_3 = false
            
            if (z_3)
                goto label_141c8a7b8
        
        if (rdi_1 == 0)
            goto label_141c8a7bf
        
        int64_t* r15_2 = *(r15_1 + (rbx_2 << 3))
        
        if (r15_2 == 0)
            goto label_141c8a7bf
        
        int32_t rax_10 = (*(*r15_2 + 8))(r15_2)
        
        if (rax_10 != 0xff)
            void** lpTlsValue_1 = TlsGetValue(data_143cf0950)
            void** lpTlsValue = lpTlsValue_1
            
            if (lpTlsValue_1 == 0)
                void** lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
                lpTlsValue = lpTlsValue_2
                
                if (lpTlsValue_2 == 0)
                    lpTlsValue = nullptr
                else
                    __builtin_memset(lpTlsValue, 0, 0x14)
                
                TlsSetValue(data_143cf0950, lpTlsValue)
            
            void*** r14_1 = lpTlsValue[1]
            int32_t rcx_13
            
            if (r14_1 != 0)
                rcx_13 = lpTlsValue[2].d
            else
                void* rax_12 = *lpTlsValue
                
                if (rax_12 == 0)
                    int64_t rax_13 = sub_14059e7c0(&data_143cf0958)
                    lpTlsValue[1] = rax_13
                    
                    if (rax_13 == 0)
                        int64_t* rax_14 = sub_140a82f70(0x2000, 0)
                        lpTlsValue[1] = rax_14
                        int64_t j_1 = 0x1f
                        int64_t* rcx_12
                        int64_t j
                        
                        do
                            rcx_12 = &rax_14[0x20]
                            *rax_14 = rcx_12
                            rax_14 = rcx_12
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        *rcx_12 = j_1
                else
                    lpTlsValue[1] = rax_12
                    *lpTlsValue = r14_1
                
                r14_1 = lpTlsValue[1]
                rcx_13 = 0x20
                lpTlsValue[2].d = 0x20
            
            lpTlsValue[1] = *r14_1
            lpTlsValue[2].d = rcx_13 - 1
            int64_t* var_68
            int64_t** rax_17 = sub_140a228d0(&var_68)
            arg_20 = 0
            int64_t* rcx_15 = *rax_17
            *rax_17 = nullptr
            *r14_1 = &data_142d40498
            int64_t* var_58_1 = rcx_15
            r14_1[1].d = 0xff
            *(r14_1 + 0xc) = 1
            *r14_1 = &data_14320f7b0
            r14_1[8].b = 0
            r14_1[9] = rcx_15
            int64_t* rcx_16 = var_68
            
            if (rcx_16 != 0)
                rcx_16[9].d -= 1
                
                if (rcx_16[9].d == 1)
                    sub_140a2f6e0(rcx_16)
            
            int128_t zmm0_1 = *arg2
            *(rdi_1 + 0xc) += 1
            r14_1[2].d = rax_10
            r14_1[3] = r15_2
            r14_1[4] = rdi_1
            *(rdi_1 + 0xc) += 1
            r14_1[7].b = arg3
            *(r14_1 + 0x28) = zmm0_1
            int32_t rax_22 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_22 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
            
            int64_t* rbx_3 = r14_1[9]
            int64_t* var_70_1 = rbx_3
            int32_t* rsi_1 = &rbx_3[9]
            
            if (rbx_3 != 0)
                *rsi_1 += 1
                rbx_3 = var_70_1
            
            sub_141c8ccb0(r14_1, nullptr, 0xff, 1)
            
            if (rbx_3 != 0)
                rax = *rsi_1
                *rsi_1 -= 1
                
                if (rax == 1)
                    sub_140a2f6e0(var_70_1)
            
            r14 = arg3
        else
            (*(*r15_2 + 0x10))(r15_2, arg2, zx.q(r14))
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            rax = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    i += 1
    rsi += 1
