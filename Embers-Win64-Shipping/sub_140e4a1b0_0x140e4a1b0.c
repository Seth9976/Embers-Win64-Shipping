// 函数: sub_140e4a1b0
// 地址: 0x140e4a1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
*arg1 = 0
*(arg1 + 8) = 0
void* r9 = arg2
*(arg1 + 0x10) = 0
arg4[2] = *(arg3 + 8)

if (*arg1 == 0)
    int32_t i = *arg3
    int64_t* rdi
    int64_t* var_30_1 = rdi
    
    while (i s>= 0)
        void* rax_3 = *(arg3 + 8)
        int64_t i_1 = sx.q(i)
        void* r9_1 = rax_3 + 8
        void* rcx = *(r9_1 + 0x120)
        
        if (rcx != 0)
            r9_1 = rcx
        
        void var_b8
        sub_140d94310(&var_b8, r9_1 + i_1 * 0x48, (i_1 << 4) + *(rax_3 + 0x150))
        void** var_138
        sub_140e51390(&var_138, arg4)
        int64_t var_c8_1 = arg4[0xe]
        int64_t* rax_6 = arg4[0xf]
        var_138 = &data_142ed7318
        
        if (rax_6 != 0)
            rax_6[1].d += 1
        
        int64_t* var_80
        int64_t* var_150 = var_80
        int64_t* var_78
        
        if (var_78 != 0)
            var_78[1].d += 1
        
        rdi.b = sub_140d9c250(*arg5, &var_150) == 0
        
        if (var_78 != 0)
            var_78[1].d -= 1
            
            if (var_78[1].d == 1)
                (**var_78)(var_78)
                int32_t temp3_1 = *(var_78 + 0xc)
                *(var_78 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_78 + 8))(var_78, 1)
        
        if (rdi.b != 0)
            (*(*var_80 + 0xc0))(var_80, &var_b8, &var_138)
        
        rdi = nullptr
        
        if (var_78 != 0)
            var_78[1].d += 1
            rdi = var_78
        
        *arg1 = 0
        int64_t* var_168 = var_80
        
        if (rdi != 0)
            rdi[1].d += 1
        
        if (&var_168 != &arg1[8])
            var_168.o = *(arg1 + 8)
            *(arg1 + 8) = var_168.o
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp6_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp8_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        if (rax_6 != 0)
            rax_6[1].d -= 1
            
            if (rax_6[1].d == 1)
                (**rax_6)(rax_6)
                int32_t temp10_1 = *(rax_6 + 0xc)
                *(rax_6 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rax_6 + 8))(rax_6, 1)
        
        int64_t* var_f0
        
        if (var_f0 != 0)
            var_f0[1].d -= 1
            
            if (var_f0[1].d == 1)
                (**var_f0)(var_f0)
                int32_t temp12_1 = *(var_f0 + 0xc)
                *(var_f0 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*var_f0 + 8))(var_f0, 1)
        
        var_138 = &data_142d7f690
        int64_t* var_68
        
        if (var_68 != 0)
            var_68[1].d -= 1
            
            if (var_68[1].d == 1)
                (**var_68)(var_68)
                int32_t temp14_1 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*var_68 + 8))(var_68, 1)
        
        if (var_78 != 0)
            var_78[1].d -= 1
            
            if (var_78[1].d == 1)
                (**var_78)(var_78)
                int32_t temp15_1 = *(var_78 + 0xc)
                *(var_78 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*var_78 + 8))(var_78, 1)
        
        *arg3 -= 1
        i = *arg3
        
        if (*arg1 != 0)
            break
    
    r9 = arg2

sub_140e6d8b0(r9, arg4, arg1, r9)
int64_t* rbx_8 = arg4[0xf]

if (rbx_8 != 0)
    rbx_8[1].d -= 1
    
    if (rbx_8[1].d == 1)
        (**rbx_8)(rbx_8)
        int32_t temp1_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_6 = *rbx_8
            (*(r8_6 + 8))(rbx_8, 1, r8_6)

sub_140e29130(arg4)
__security_check_cookie(rax_1 ^ &var_188)
return arg1
