// 函数: sub_140e49c00
// 地址: 0x140e49c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
void* r13 = arg2
arg4[2] = *(arg3 + 8)

if (*arg1 == 0)
    int32_t i = *arg3
    
    while (i s>= 0)
        void* rax_3 = *(arg3 + 8)
        int64_t i_1 = sx.q(i)
        int64_t* r8_2 = (i_1 << 4) + *(rax_3 + 0x150)
        void* r9 = rax_3 + 8
        void* rcx = *(r9 + 0x120)
        
        if (rcx != 0)
            r9 = rcx
        
        void var_b8
        sub_140d94310(&var_b8, r9 + i_1 * 0x48, r8_2)
        void** var_128
        sub_140e51390(&var_128, arg4)
        int128_t* var_70
        
        if (var_70 != 0)
            int32_t var_110_1 = (*var_70).d
            int32_t var_10c_1 = (*(var_70 + 4)).d
            int32_t var_108_1 = (*(var_70 + 8)).d
            int32_t var_104_1 = (*(var_70 + 0xc)).d
        
        int64_t* var_80
        (*(*var_80 + 0x80))(var_80, &var_128, r8_2)
        int64_t* rdi_1 = nullptr
        int64_t* var_78
        
        if (var_78 != 0)
            var_78[1].d += 1
            rdi_1 = var_78
        
        *arg1 = 0
        int64_t* var_148 = var_80
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        if (&var_148 != &arg1[8])
            var_148.o = *(arg1 + 8)
            *(arg1 + 8) = var_148.o
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp4_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* var_e0
        
        if (var_e0 != 0)
            var_e0[1].d -= 1
            
            if (var_e0[1].d == 1)
                (**var_e0)(var_e0)
                int32_t temp6_1 = *(var_e0 + 0xc)
                *(var_e0 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_e0 + 8))(var_e0, 1)
        
        var_128 = &data_142d7f690
        int64_t* var_68
        
        if (var_68 != 0)
            var_68[1].d -= 1
            
            if (var_68[1].d == 1)
                (**var_68)(var_68)
                int32_t temp8_1 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_68 + 8))(var_68, 1)
        
        if (var_78 != 0)
            var_78[1].d -= 1
            
            if (var_78[1].d == 1)
                (**var_78)(var_78)
                int32_t temp9_1 = *(var_78 + 0xc)
                *(var_78 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*var_78 + 8))(var_78, 1)
        
        *arg3 -= 1
        i = *arg3
        
        if (*arg1 != 0)
            break
    
    r13 = arg2

sub_140e6d8b0(r13, arg4, arg1)
sub_140e29130(arg4)
__security_check_cookie(rax_1 ^ &var_168)
return arg1
