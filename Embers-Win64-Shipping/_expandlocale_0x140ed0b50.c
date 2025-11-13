// 函数: _expandlocale
// 地址: 0x140ed0b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int64_t* r14 = *(arg4 + 0x70)
char rax_2

if (r14 != 0)
    int64_t rbx_1 = *r14
    sub_140ec00f0()
    rax_2 = (*(rbx_1 + 0x58))(r14, &data_143e29fe0)

int64_t* r14_1

if (r14 == 0 || rax_2 == 0)
    r14_1 = nullptr
label_140ed0e51:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp1_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*r14_1 + 8))(r14_1, 1)
else
    r14_1 = *(arg4 + 0x78)
    void* r15_1 = *(arg4 + 0x70)
    
    if (r14_1 != 0)
        r14_1[1].d += 1
    
    if (r15_1 == 0)
        goto label_140ed0e51
    
    if (arg3 != 4)
        sub_140eb6ed0(arg1, arg3, arg4)
    else
        uint128_t var_238
        void**** var_248 = sub_140ec5860(&var_238)
        void*** rax_4 = sub_140e91bb0()
        void* var_228 = &rax_4[2]
        sub_140918950(&var_228, &rax_4[2])
        int64_t var_258_1 = 0x4d0
        void***** var_218_1 = &var_248
        sub_140e23ed0(&rax_4[2], "SDockingTabStack")
        void var_1f8
        int64_t* rax_5
        int128_t zmm1_1
        rax_5, zmm1_1 = sub_140e94090(&var_1f8)
        uint128_t var_208
        sub_140e9c640(&var_228, &var_208, rax_5, zmm1_1)
        
        if (rax_4 != 0)
            rax_4[1].d -= 1
            
            if (rax_4[1].d == 1)
                (**rax_4)(rax_4)
                int32_t temp5_1 = *(rax_4 + 0xc)
                *(rax_4 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*rax_4)[1](rax_4, zx.q(arg3 - 3))
        
        int64_t* var_230
        
        if (var_230 != 0)
            var_230[1].d -= 1
            
            if (var_230[1].d == 1)
                (**var_230)(var_230)
                int32_t temp7_1 = *(var_230 + 0xc)
                *(var_230 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_230 + 8))(var_230, 1)
        
        sub_140ddea30(&var_1f8)
        uint128_t zmm0_1 = var_208
        var_238 = zmm0_1
        int64_t* rbx_5 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
        
        sub_140ea15b0(arg1, &var_238, 0xffffffff)
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp9_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        int64_t* rax_12 = *(r15_1 + 0x48)
        
        if (rax_12 != 0)
            rax_12[1].d += 1
        
        var_248 = *(r15_1 + 0x40)
        sub_140ed1540(var_208.q, &var_248, 0xffffffff)
        
        if (rax_12 != 0)
            rax_12[1].d -= 1
            
            if (rax_12[1].d == 1)
                (**rax_12)(rax_12)
                int32_t temp12_1 = *(rax_12 + 0xc)
                *(rax_12 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rax_12 + 8))(rax_12, 1)
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp13_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
    
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp6_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                int64_t r8_4 = *r14_1
                (*(r8_4 + 8))(r14_1, 1, r8_4)
__security_check_cookie(rax_1 ^ &var_278)
return arg2
