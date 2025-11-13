// 函数: sub_140ed1f50
// 地址: 0x140ed1f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int32_t rax_2 = sub_140f47e50(*(arg1 + 0x3a8))

if (((arg3 & 0xfffffffd) != 0 || rax_2 != 0) && (((arg3 - 1) & 0xfffffffd) != 0 || rax_2 != 1))
    rax_2.b = 0
else
    rax_2.b = 1

int32_t rbp = *(arg1 + 0x3c0)

if (rax_2.b != 0)
    goto label_140ed1ff4

int64_t rdi_1 = 0
int32_t rbx_1
rbx_1.b = sub_140f47e50(*(arg1 + 0x3a8)) == 0
int64_t result

if (rbp != 1)
    void*** var_1f8
    void*** rcx_11 = *sub_140ec5720(&var_1f8)
    rcx_11[4].d = rbx_1
    int64_t* rbx_2 = rcx_11[2]
    
    if (rbx_2 != 0)
        int32_t rax_7 = rbx_2[1].d
        
        if (rax_7 != 0)
            rbx_2[1].d = rax_7 + 1
            rax_7.b = 1
        
        if (rax_7.b == 0)
            rbx_2 = nullptr
        
        if (rbx_2 != 0)
            rdi_1 = rcx_11[1]
    
    int64_t var_238 = rdi_1
    
    if (rbx_2 != 0)
        int32_t rax_8 = rbx_2[1].d
        rbx_2[1].d = rax_8
        
        if (rax_8 == 0)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* var_228 = &var_238
    void*** rax_11 = sub_140e91b00()
    void* var_220 = &rax_11[2]
    sub_140918950(&var_220, &rax_11[2])
    int64_t var_248_1 = 0x3c8
    int64_t** var_210_1 = &var_228
    sub_140e23ed0(&rax_11[2], "SDockingSplitter")
    void var_1e8
    int64_t* rax_12
    int128_t zmm1_1
    rax_12, zmm1_1 = sub_140e93f70(&var_1e8)
    uint128_t var_208
    sub_140e9c380(&var_220, &var_208, rax_12, zmm1_1)
    
    if (rax_11 != 0)
        rax_11[1].d -= 1
        
        if (rax_11[1].d == 1)
            (**rax_11)(rax_11)
            int32_t temp3_1 = *(rax_11 + 0xc)
            *(rax_11 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rax_11)[1](rax_11, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* var_1f0
    
    if (var_1f0 != 0)
        var_1f0[1].d -= 1
        
        if (var_1f0[1].d == 1)
            (**var_1f0)(var_1f0)
            int32_t temp6_1 = *(var_1f0 + 0xc)
            *(var_1f0 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_1f0 + 8))(var_1f0, 1)
    
    sub_140ddea30(&var_1e8)
    uint128_t zmm0_1 = var_208
    var_238.o = zmm0_1
    int64_t* rdi_2 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    sub_140ed57e0(arg1, arg4, &var_238)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp9_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    sub_140ea15b0(var_208.q, arg4, 0xffffffff)
    result = sub_140ed1f50(var_208.q, arg2, zx.q(arg3), arg4, var_248_1)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            result = (**rdi_2)(rdi_2)
            int32_t temp10_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp10_1 == 1)
                result = (*(*rdi_2 + 8))(rdi_2, 1)
else
    sub_140f5e590(*(arg1 + 0x3a8), rbx_1)
label_140ed1ff4:
    int64_t* r8 = *(arg1 + 0x3b8)
    int64_t* rax_4 = r8
    void* rcx_6 = &r8[sx.q(*(arg1 + 0x3c0)) * 2]
    int32_t rax_5
    
    if (r8 == rcx_6)
    label_140ed2026:
        rax_5 = -1
    else
        while (*rax_4 != *arg4)
            rax_4 = &rax_4[2]
            
            if (rax_4 == rcx_6)
                goto label_140ed2026
        
        rax_5 = ((rax_4 - r8) s>> 4).d
    
    int32_t r8_1 = rax_5 + 1
    
    if (arg3 u<= 1)
        r8_1 = rax_5
    
    result = sub_140ea15b0(arg1, arg2, r8_1)

__security_check_cookie(rax_1 ^ &var_268)
return result
