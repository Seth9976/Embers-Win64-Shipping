// 函数: sub_140e49e90
// 地址: 0x140e49e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
void* r12 = arg2
arg4[2] = *(arg3 + 8)

if (*arg1 == 0)
    int32_t i = *arg3
    
    while (i s>= 0)
        void* rax_3 = *(arg3 + 8)
        int64_t i_1 = sx.q(i)
        void* r9 = rax_3 + 8
        void* rcx = *(r9 + 0x120)
        
        if (rcx != 0)
            r9 = rcx
        
        void var_b8
        sub_140d94310(&var_b8, r9 + i_1 * 0x48, (i_1 << 4) + *(rax_3 + 0x150))
        void** var_138
        sub_140e51390(&var_138, arg4)
        int64_t var_c8_1 = arg4[0xe]
        int64_t* rax_6 = arg4[0xf]
        var_138 = &data_142ed7318
        
        if (rax_6 != 0)
            rax_6[1].d += 1
        
        int64_t* var_80
        (*(*var_80 + 0xc0))(var_80, &var_b8, &var_138)
        int64_t* rdi_1 = nullptr
        int64_t* var_78
        
        if (var_78 != 0)
            var_78[1].d += 1
            rdi_1 = var_78
        
        *arg1 = 0
        int64_t* var_158 = var_80
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        if (&var_158 != &arg1[8])
            var_158.o = *(arg1 + 8)
            *(arg1 + 8) = var_158.o
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp4_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp6_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (rax_6 != 0)
            rax_6[1].d -= 1
            
            if (rax_6[1].d == 1)
                (**rax_6)(rax_6)
                int32_t temp8_1 = *(rax_6 + 0xc)
                *(rax_6 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rax_6 + 8))(rax_6, 1)
        
        int64_t* var_f0
        
        if (var_f0 != 0)
            var_f0[1].d -= 1
            
            if (var_f0[1].d == 1)
                (**var_f0)(var_f0)
                int32_t temp10_1 = *(var_f0 + 0xc)
                *(var_f0 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*var_f0 + 8))(var_f0, 1)
        
        var_138 = &data_142d7f690
        int64_t* var_68
        
        if (var_68 != 0)
            var_68[1].d -= 1
            
            if (var_68[1].d == 1)
                (**var_68)(var_68)
                int32_t temp12_1 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*var_68 + 8))(var_68, 1)
        
        if (var_78 != 0)
            var_78[1].d -= 1
            
            if (var_78[1].d == 1)
                (**var_78)(var_78)
                int32_t temp13_1 = *(var_78 + 0xc)
                *(var_78 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*var_78 + 8))(var_78, 1)
        
        *arg3 -= 1
        i = *arg3
        
        if (*arg1 != 0)
            break
    
    r12 = arg2

sub_140e6d8b0(r12, arg4, arg1)
int64_t* rbx_7 = arg4[0xf]

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp1_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_6 = *rbx_7
            (*(r8_6 + 8))(rbx_7, 1, r8_6)

sub_140e29130(arg4)
__security_check_cookie(rax_1 ^ &var_178)
return arg1
