// 函数: sub_140e113b0
// 地址: 0x140e113b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int32_t rdi = 0
int64_t var_38
__builtin_memset(&var_38, 0, 0x14)
int64_t* rax_1 = (*(rax + 0x188))()

if (rax_1 != 0)
    int64_t rdx = *rax_1
    
    if ((*rdx)(rax_1, rdx) s> 0)
        int32_t rax_13
        
        do
            void var_48
            void var_20
            sub_140e114f0(*(*(*rax_1 + 0x10))(rax_1, &var_48, zx.q(rdi)), &var_20, 1)
            int64_t* var_40
            
            if (var_40 != 0)
                var_40[1].d -= 1
                
                if (var_40[1].d == 1)
                    (**var_40)(var_40)
                    int32_t temp2_1 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*var_40 + 8))(var_40, 1)
            
            if (sub_140ab3dc0(&var_20) == 0)
                sub_140a9eae0(&var_38, &var_20)
            
            int64_t* var_18
            
            if (var_18 != 0)
                var_18[1].d -= 1
                
                if (var_18[1].d == 1)
                    (**var_18)(var_18)
                    int32_t rax_10 = *(var_18 + 0xc)
                    *(var_18 + 0xc) -= 1
                    
                    if (rax_10 == 1)
                        (*(*var_18 + 8))(var_18, 1)
            
            rdi += 1
            rax_13 = (**rax_1)(rax_1)
        while (rdi s< rax_13)

sub_140ac66a0(&var_38, arg2)
sub_140846740(&var_38)
return arg2
