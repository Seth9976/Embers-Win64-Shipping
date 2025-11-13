// 函数: sub_1419d26f0
// 地址: 0x1419d26f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* result = arg2
AcquireSRWLockShared(&arg1[4])
ReleaseSRWLockShared(&arg1[4])
int64_t* rbx = *arg1
void* rdi_1 = &rbx[sx.q(arg1[1].d)]

if (rbx == rdi_1)
label_1419d2773:
    *result = 0
else
    int64_t rbp_1
    
    while (true)
        int64_t* rcx_2 = **rbx
        rbp_1 = sx.q((*(*rcx_2 + 0x30))(rcx_2, arg3))
        
        if (rbp_1.d != 0xffffffff)
            break
        
        rbx = &rbx[1]
        
        if (rbx == rdi_1)
            goto label_1419d2773_1
    
    int64_t* r15_1 = *rbx
    
    if (r15_1 == 0)
    label_1419d2773_1:
        *result = 0
    else
        AcquireSRWLockShared(&r15_1[0x25])
        int64_t* rdi_2 = *(r15_1[3] + (rbp_1 << 3))
        int64_t* var_a8_1 = rdi_2
        
        if (rdi_2 != 0)
            *(rdi_2 + 0x3c) += 1
        
        ReleaseSRWLockShared(&r15_1[0x25])
        
        if (rdi_2 == 0)
            int64_t* rax_8 = j_sub_140a82f30(zx.q((&rdi_2[0xa]).d))
            int64_t* rsi = rax_8
            
            if (rax_8 == 0)
                rsi = nullptr
            else
                int64_t* rcx_8 = *r15_1
                int32_t rax_10 = (*(*rcx_8 + 0x20))(rcx_8, zx.q(rbp_1.d))
                sub_1419c2140(rsi, *(*r15_1 + 0x18), rax_10)
                rsi[8] = r15_1
                *rsi = &data_14300ea30
                rsi[2] = &data_14300ea88
                rsi[9].d = rbp_1.d
            
            int64_t rbx_1 = sx.q(rsi[9].d)
            *(rsi + 0x3c) += 1
            AcquireSRWLockExclusive(&r15_1[0x25])
            int64_t rax_11 = r15_1[3]
            int64_t* rbx_2 = *(rax_11 + (rbx_1 << 3))
            int64_t* r13_1
            
            if (rbx_2 != 0)
                *(rbx_2 + 0x3c) += 1
                r13_1 = rbx_2
                int32_t rax_12 = *(rsi + 0x3c)
                *(rsi + 0x3c) -= 1
                
                if (rax_12 == 1 && (*(*rsi + 0x50))(rsi) != 0)
                    sub_141997f50(rsi)
                    sub_141997870(&rsi[2])
            else
                *(rax_11 + (rbx_1 << 3)) = rsi
                r13_1 = rsi
            
            ReleaseSRWLockExclusive(&r15_1[0x25])
            var_a8_1 = r13_1
            
            if (rdi_2 != 0)
                int32_t rax_15 = *(rdi_2 + 0x3c)
                *(rdi_2 + 0x3c) -= 1
                
                if (rax_15 == 1 && (*(*rdi_2 + 0x50))(rdi_2) != 0)
                    sub_141997f50(rdi_2)
                    void* rcx_19 = &rdi_2[2]
                    
                    if (rdi_2 == 0)
                        rcx_19 = nullptr
                    
                    sub_141997870(rcx_19)
            
            result = arg2
        
        if (data_143f0f1d2 == 0)
            int64_t* rcx_20 = *r15_1
            int64_t* var_b0
            (*(*rcx_20 + 0x48))(rcx_20, &var_b0, zx.q(rbp_1.d))
            
            if (arg4 == 0)
            label_1419d2978:
                int64_t* rcx_23 = var_b0
                
                if (rcx_23 != 0)
                    rcx_23[9].d -= 1
                    
                    if (rcx_23[9].d == 1)
                        sub_140a2f6e0(rcx_23)
            else
                int64_t* rax_19 = var_b0
                
                if (rax_19 != 0)
                    rax_19[9].d += 1
                    int64_t* var_68_1 = rax_19
                    void*** var_88_1 = nullptr
                    void** const var_78 = &data_143010160
                    int64_t (* var_98)(int64_t* arg1, int64_t* arg2) = sub_1419c8910
                    int64_t* var_70_1 = r15_1
                    (*(*arg4 + 0x1f8))(arg4, &var_98)
                    
                    if (var_98 != 0)
                        void** const* rcx_22 = &var_78
                        
                        if (var_88_1 != 0)
                            rcx_22 = var_88_1
                        
                        (*rcx_22)[2](rcx_22)
                    
                    goto label_1419d2978
        
        *result = var_a8_1

__security_check_cookie(rax_1 ^ &var_d8)
return result
