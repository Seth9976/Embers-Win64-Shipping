// 函数: sub_140fc81f0
// 地址: 0x140fc81f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
wchar16 var_228[0x58]
memset(&var_228, 0, 0x200)
sub_140af2b60()
char result

if (sub_140b2b020(&data_143dbb3f0, u"MULTIHOME=", &var_228, 0x100, 1) == 0)
    result = 0
else
    int32_t rcx_1 = 0
    int32_t rdx = 0
    int64_t var_248 = 0
    int64_t var_240_1 = 0
    
    if (var_228[0] != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (var_228[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_248, rbx_1.d + 1)
            rdx = var_240_1:4.d
            rcx_1 = var_240_1.d
        
        int32_t rax_2 = rcx_1 + rbx_1.d + 1
        var_240_1.d = rax_2
        
        if (rax_2 s> rdx)
            sub_140594770(&var_248)
        
        UnDecorator::getReferenceType(var_248, &var_228, (rbx_1.d + 1) * 2)
    
    int64_t var_238
    (*(*arg1 + 0x58))(arg1, &var_238, &var_248)
    int64_t rcx_6 = var_248
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t* rbx_3
    int64_t* rdi
    int64_t* var_230
    
    if (var_238 == 0)
        rbx_3 = var_230
        rdi.b = 0
    else
        uint128_t zmm0_1 = var_238.o
        var_248.o = zmm0_1
        rbx_3 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
            rbx_3 = var_230
        
        int64_t rcx_7 = *arg2
        *arg2 = var_248
        rdi = arg2[1]
        var_248 = rcx_7
        arg2[1] = var_240_1
        int64_t* var_240_2 = rdi
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp3_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
            
            rbx_3 = var_230
        
        rdi.b = 1
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp2_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                int64_t r8_5 = *rbx_3
                (*(r8_5 + 8))(rbx_3, 1, r8_5)
    
    result = rdi.b

__security_check_cookie(rax_1 ^ &var_278)
return result
