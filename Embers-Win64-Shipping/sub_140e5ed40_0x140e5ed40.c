// 函数: sub_140e5ed40
// 地址: 0x140e5ed40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void var_178
sub_140d947e0(&var_178)
int64_t var_188 = *arg2
int64_t* rax_3 = arg2[1]

if (rax_3 != 0)
    rax_3[1].d += 1

if (sub_140e649d0(arg1, &var_188, &var_178, data_1439ae51c, arg3) != 0)
    sub_140e63a40(arg1 + 0x1d0, &var_188, &var_178)
    int64_t rdx_2 = var_188
    
    if (rdx_2 != 0)
        int64_t* r8_2 = *(arg1 + 0x220)
        int64_t* rax_5 = r8_2
        void* rcx_5 = &r8_2[sx.q(*(arg1 + 0x228)) * 2]
        
        if (r8_2 != rcx_5)
            do
                if (*rax_5 == rdx_2)
                    int32_t rax_7 = ((rax_5 - r8_2) s>> 4).d
                    
                    if (rax_7 != 0xffffffff)
                        sub_140e5ecc0(arg1 + 0x1d0, rax_7)
                    
                    break
                
                rax_5 = &rax_5[2]
            while (rax_5 != rcx_5)
    
    if (rax_3 != 0)
        rax_3[1].d -= 1
        
        if (rax_3[1].d == 1)
            (**rax_3)(rax_3)
            int32_t temp3_1 = *(rax_3 + 0xc)
            *(rax_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rax_3 + 8))(rax_3, 1)

void var_28
sub_140596d80(&var_28)
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

void var_170
int64_t result = sub_140d94d20(&var_170)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
