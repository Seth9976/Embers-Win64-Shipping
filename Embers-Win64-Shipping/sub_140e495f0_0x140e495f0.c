// 函数: sub_140e495f0
// 地址: 0x140e495f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
void* r9 = arg2
arg4[2] = *(arg3 + 8)

if (*arg1 == 0)
    int32_t i = *arg3
    int64_t* rdi
    int64_t* var_40_1 = rdi
    
    while (i s>= 0)
        void* rax_3 = *(arg3 + 8)
        int64_t i_1 = sx.q(i)
        void* r9_1 = rax_3 + 8
        void* rcx = *(r9_1 + 0x120)
        
        if (rcx != 0)
            r9_1 = rcx
        
        void var_b8
        sub_140d94310(&var_b8, r9_1 + i_1 * 0x48, (i_1 << 4) + *(rax_3 + 0x150))
        void** var_128
        sub_140e51390(&var_128, arg4)
        int128_t* var_70
        
        if (var_70 != 0)
            int32_t var_110_1 = (*var_70).d
            int32_t var_10c_1 = (*(var_70 + 4)).d
            int32_t var_108_1 = (*(var_70 + 8)).d
            int32_t var_104_1 = (*(var_70 + 0xc)).d
        
        int64_t* var_80
        int64_t* var_140 = var_80
        int64_t* var_78
        
        if (var_78 != 0)
            var_78[1].d += 1
        
        rdi.b = sub_140d9c250(*arg5, &var_140) == 0
        
        if (var_78 != 0)
            var_78[1].d -= 1
            
            if (var_78[1].d == 1)
                (**var_78)(var_78)
                int32_t temp1_1 = *(var_78 + 0xc)
                *(var_78 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_78 + 8))(var_78, 1)
        
        if (rdi.b != 0)
            (*(*var_80 + 0x78))(var_80, &var_b8, &var_128)
        
        rdi = nullptr
        
        if (var_78 != 0)
            var_78[1].d += 1
            rdi = var_78
        
        *arg1 = 0
        int64_t* var_158 = var_80
        
        if (rdi != 0)
            rdi[1].d += 1
        
        if (&var_158 != &arg1[8])
            var_158.o = *(arg1 + 8)
            *(arg1 + 8) = var_158.o
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp4_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp6_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        int64_t* var_e0
        
        if (var_e0 != 0)
            var_e0[1].d -= 1
            
            if (var_e0[1].d == 1)
                (**var_e0)(var_e0)
                int32_t temp8_1 = *(var_e0 + 0xc)
                *(var_e0 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_e0 + 8))(var_e0, 1)
        
        var_128 = &data_142d7f690
        int64_t* var_68
        
        if (var_68 != 0)
            var_68[1].d -= 1
            
            if (var_68[1].d == 1)
                (**var_68)(var_68)
                int32_t temp10_1 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*var_68 + 8))(var_68, 1)
        
        if (var_78 != 0)
            var_78[1].d -= 1
            
            if (var_78[1].d == 1)
                (**var_78)(var_78)
                int32_t temp11_1 = *(var_78 + 0xc)
                *(var_78 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*var_78 + 8))(var_78, 1)
        
        *arg3 -= 1
        i = *arg3
        
        if (*arg1 != 0)
            break
    
    r9 = arg2

sub_140e6d8b0(r9, arg4, arg1, r9)
sub_140e29130(arg4)
__security_check_cookie(rax_1 ^ &var_178)
return arg1
