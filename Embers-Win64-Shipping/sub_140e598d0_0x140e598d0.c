// 函数: sub_140e598d0
// 地址: 0x140e598d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int64_t* rdi = arg1
int64_t* var_208 = arg1
char result = sub_140db3500(arg2)

if (result != 0)
    char rax_2 = arg4[6].b
    char r14_1 = *(arg3 + 0x18)
    int64_t r15
    r15.b = 0
    uint128_t var_218 = zx.o(0)
    uint128_t var_1e8
    int64_t* rbx_2
    uint128_t zmm0
    
    if (rax_2 == 1)
        var_208 = arg4[2]
        void* rax_4 = arg4[3]
        void* var_200_1 = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        zmm0 = var_208.o
        int64_t* rbx_1 = _mm_bsrli_si128(var_218, 8).q
        var_218 = zmm0
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        r15.b = 1
        rbx_2 = var_218:8.q
    else if (rax_2 != 4)
        if (r14_1 - 4 u<= 1)
            void var_1b8
            sub_140dbe300(&var_1e8, &var_1b8, r14_1, arg4, sub_140d94220(&var_1e8, arg2), arg5)
            void var_1b0
            void* rdx_6 = &var_1b0
            void* var_90
            
            if (var_90 != 0)
                rdx_6 = var_90
            
            int32_t var_88
            int64_t rcx_16 = sx.q(var_88) * 9
            int64_t* rax_24 = *(rdx_6 + (rcx_16 << 3) - 8)
            
            if (rax_24 != 0)
                rax_24[1].d += 1
            
            rbx_2 = var_218:8.q
            var_218.q = *(rdx_6 + (rcx_16 << 3) - 0x10)
            
            if (rax_24 != 0)
                rbx_2 = rax_24
            
            var_218:8.q = rbx_2
            void var_68
            sub_140596d80(&var_68)
            int64_t* var_70
            
            if (var_70 != 0)
                var_70[1].d -= 1
                
                if (var_70[1].d == 1)
                    (**var_70)(var_70)
                    int32_t temp7_1 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*var_70 + 8))(var_70, 1)
            
            sub_140d94d20(&var_1b0)
            int64_t* var_1d0
            
            if (var_1d0 != 0)
                int32_t temp6_1 = *(var_1d0 + 0xc)
                *(var_1d0 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_1d0 + 8))(var_1d0, 1)
            
            sub_140d94cb0(&var_1e8)
        else
            void* rax_13 = *(arg2 + 0x128)
            void* rdx_1 = arg2 + 8
            
            if (rax_13 != 0)
                rdx_1 = rax_13
            
            void var_1c8
            int64_t* rax_17 = sub_140da08d0(sub_140e14f20(*sub_140da4ac0(arg2, &var_1e8)), 
                &var_1c8, rdx_1 + sx.q(*(arg2 + 0x130)) * 0x48 - 0x48, r14_1, arg4, arg5, 
                *(arg3 + 0xc))
            
            if (&var_218 == rax_17)
                rbx_2 = var_218:8.q
            else
                var_218.q = *rax_17
                *rax_17 = 0
                rbx_2 = rax_17[1]
                
                if (rbx_2 == 0)
                    rbx_2 = var_218:8.q
                else
                    rax_17[1] = 0
                    var_218:8.q = rbx_2
            
            int64_t* var_1c0
            
            if (var_1c0 != 0)
                var_1c0[1].d -= 1
                
                if (var_1c0[1].d == 1)
                    (**var_1c0)(var_1c0)
                    int32_t temp9_1 = *(var_1c0 + 0xc)
                    *(var_1c0 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*var_1c0 + 8))(var_1c0, 1)
            
            int64_t* rdi_3 = var_1e8:8.q
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t temp10_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
        
        rdi = var_208
    else if (arg4[5].d == 0)
        rbx_2 = var_218:8.q
    else
        int64_t* rcx_3 = arg4[4]
        
        if (rcx_3 == 0)
            rbx_2 = var_218:8.q
        else if ((*(*rcx_3 + 0x28))(rcx_3) == 0)
            rbx_2 = var_218:8.q
        else
            int64_t* rcx_4
            
            if (arg4[5].d == 0)
                rcx_4 = nullptr
            else
                rcx_4 = arg4[4]
            
            (*(*rcx_4 + 0x48))(rcx_4, &var_208, zx.q(r14_1))
            r15.b = 1
            rbx_2 = var_218:8.q
            var_218.q = var_208
            int64_t* var_200
            
            if (var_200 != 0)
                rbx_2 = var_200
            
            var_218:8.q = rbx_2
    
    zmm0 = var_218
    var_1e8 = zmm0
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int64_t* var_238
    var_238.b = r15.b
    char result_1 = sub_140e62da0(rdi, arg2, &var_1e8, *(arg3 + 0xc), zmm0, var_238.b)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_258)
return result
