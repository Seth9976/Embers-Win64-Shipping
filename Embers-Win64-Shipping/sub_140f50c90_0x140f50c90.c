// 函数: sub_140f50c90
// 地址: 0x140f50c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rbx = *(arg4 + 0x28)
int64_t rsi = *(arg4 + 0x18)

if (rbx != 0)
    rbx[1].d += 1

char rax_2
int64_t rdx

if (rsi == data_143e1e0f8)
    rax_2, rdx = sub_140e19840(arg1, arg6)

char var_f8
int32_t var_44

if (rsi == data_143e1e0f8 && rax_2 != 0)
    arg5 = zx.o(*(arg1 + 0x620))
    float temp0_1[0x4] = _mm_cvtpd_ps(arg5)
    *(arg1 + 0x608) = 0
    *(arg1 + 0x60c) = 0xffffffff
    *(arg1 + 0x618) = arg5.q
    arg6.o = temp0_1
    arg6.o = sub_140f44690(arg1 + 0x3b8, rdx, 1)
    sub_140f44620(arg1 + 0x3d8, arg6)
    var_f8 = 1
    int64_t var_f0_1 = 0
    int64_t var_e8_1 = 0
    char var_d8_1 = 0
    int64_t var_d0
    __builtin_memset(&var_d0, 0, 0x88)
    int32_t var_44_1 = (var_44 & 0xffffff01) | 1
    int32_t var_48_1 = 0x20702
    sub_140596b00(arg2, sub_140dbda80(&var_f8, arg1 + 0x610))
    sub_140597700(&var_f8)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else if (rsi == data_143e1e1a0 || rsi == data_143e1e1b8)
    if (*(arg1 + 0x3a0) != 0)
        int64_t* rcx_22 = *(arg1 + 0x398)
        
        if (rcx_22 != 0 && (*(*rcx_22 + 0x28))(rcx_22) != 0)
            int64_t* rcx_23
            
            if (*(arg1 + 0x3a0) == 0)
                rcx_23 = nullptr
            else
                rcx_23 = *(arg1 + 0x398)
            
            (*(*rcx_23 + 0x48))(rcx_23)
            *(arg1 + 0x390) = arg5.d
    
    arg5 = _mm_cvtps_pd((*(arg1 + 0x390)).q)
    *(arg1 + 0x618) = arg5.q
    
    if (*(arg1 + 0x460) != 0)
        int64_t* rcx_24 = *(arg1 + 0x458)
        
        if (rcx_24 != 0 && (*(*rcx_24 + 0x28))(rcx_24) != 0)
            int64_t* rcx_25
            
            if (*(arg1 + 0x460) == 0)
                rcx_25 = nullptr
            else
                rcx_25 = *(arg1 + 0x458)
            
            (*(*rcx_25 + 0x48))(rcx_25)
            *(arg1 + 0x450) = arg5.d
    
    arg6.o = *(arg1 + 0x450)
    arg6.o = _mm_cvtps_pd(arg6.q)
    arg6.q = arg6.q f+ *(arg1 + 0x618)
    sub_140f2d8d0(arg1, arg6, 2, 1)
    sub_140f44b60(arg1)
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            int64_t rdx_5 = *rbx
            (*rdx_5)(rbx, rdx_5)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                int64_t r8_1 = *rbx
                (*(r8_1 + 8))(rbx, 1, r8_1)
else
    if (rsi == data_143e1e1d0 || rsi == data_143e1e188)
        arg5 = _mm_cvtps_pd((*sub_140eff5d0(arg1 + 0x390, arg5.d)).q)
        *(arg1 + 0x618) = arg5.q
        int32_t* rax_15 = sub_140eff5d0(arg1 + 0x450, arg5.d)
        arg6.o = zx.o(*(arg1 + 0x618))
        arg6.q = arg6.q f- _mm_cvtps_pd((*rax_15).q).q
        sub_140f2d8d0(arg1, arg6, 2, 1)
        sub_140f44b60(arg1)
        sub_140e194c0(arg2)
    else if (rsi != data_143e1e0b0)
        sub_140f19db0(arg2)
    else
        *(arg1 + 0x618) = (_mm_cvtps_pd((*sub_140eff5d0(arg1 + 0x390, arg5.d)).q)).q
        sub_140f44290(arg1)
        int64_t* rdi_1 = *(arg1 + 0x400)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t var_108 = *(arg1 + 0x3f8)
        int64_t* var_100_1 = rdi_1
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int32_t var_44_2 = var_44 & 0xffffff00
        var_f8 = 1
        int64_t var_f0_2 = 0
        int64_t var_e8_2 = 0
        char var_d8_2 = 0
        int64_t var_d0_1
        __builtin_memset(&var_d0_1, 0, 0x88)
        int32_t var_48_2 = 0x20702
        sub_140596b00(arg2, sub_140dbdce0(&var_f8, &var_108, 1, 0))
        sub_140597700(&var_f8)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp7_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp5_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx + 8))(rbx, 1)
__security_check_cookie(rax_1 ^ &var_128)
return arg2
