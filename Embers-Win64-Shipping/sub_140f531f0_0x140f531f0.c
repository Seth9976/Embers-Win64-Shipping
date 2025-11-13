// 函数: sub_140f531f0
// 地址: 0x140f531f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* rsi = *(arg4 + 0x48)

if (rsi != 0)
    rsi[1].d += 1

int64_t r14

if (*(arg4 + 0x38) != data_143e1e008 || *(arg1 + 0x60c) != *(arg4 + 0x50))
    r14.b = 0
else
    r14.b = 1

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp1_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rsi + 8))(rsi, 1)

if (r14.b == 0)
    goto label_140f532a0

char rax_6 = sub_140e19840(arg1, arg6)

if (rax_6 != 0)
    if (*(arg1 + 0x608) != 0)
        int32_t* rax_8
        int64_t rdx
        rax_8, rdx = sub_140eff5d0(arg1 + 0x450, arg5.d)
        arg6.o = *rax_8
        
        if (not(arg6.d f== 0f))
            arg5 = zx.o(*(arg1 + 0x618))
            arg6.o = _mm_cvtps_pd(arg6.q)
            *(arg1 + 0x618) = sub_140f61a50(arg5, arg6.o)
        
        sub_140f4aee0(arg1, rdx)
    
    *(arg1 + 0x608) = 0
    int64_t var_1b0_1 = 0
    int64_t var_1a8_1 = 0
    char var_198_1 = 0
    int64_t var_190
    __builtin_memset(&var_190, 0, 0x88)
    *(arg1 + 0x60c) = 0xffffffff
    char var_1b8 = 1
    int32_t var_104
    int32_t var_104_1 = (var_104 & 0xffffff01) | 1
    int32_t var_108_1 = 0x20702
    void var_f8
    sub_140596b00(&var_f8, &var_1b8)
    sub_140597700(&var_1b8)
    
    if (*(arg4 + 0x5c) == 0)
        sub_140dbda80(&var_f8, arg1 + 0x610)
    
    if (not(sub_140e66040(data_143e29f28) f<= *(arg1 + 0x448)))
        sub_140f44290(arg1)
        int64_t* rdi_1 = *(arg1 + 0x400)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t var_1c8 = *(arg1 + 0x3f8)
        int64_t* var_1c0_1 = rdi_1
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        sub_140dbdce0(&var_f8, &var_1c8, 2, 0)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    sub_140e51550(arg2, &var_f8)
    sub_140597700(&var_f8)
else
    *(arg1 + 0x608) = rax_6
    *(arg1 + 0x60c) = 0xffffffff
label_140f532a0:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702

__security_check_cookie(rax_1 ^ &var_1e8)
return arg2
