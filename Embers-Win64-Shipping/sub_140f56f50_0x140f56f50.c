// 函数: sub_140f56f50
// 地址: 0x140f56f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
char var_188 = data_1439ae521
void* var_60 = nullptr
int32_t var_58 = 0
int32_t var_54 = 4
char var_50 = 0
sub_140de8410(arg1, arg3, &var_188)
int32_t r13 = arg6
int128_t zmm1 = arg2[1]
int128_t var_1b8 = *arg2
int128_t var_1a8 = zmm1
var_1a8:8.q = arg1
int128_t var_198 = arg2[2]
char var_1d8_1

if (arg8 == 0)
    var_1d8_1 = 0
else
    if (arg1[0x34].d != 0)
        int64_t* rcx = arg1[0x33]
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (arg1[0x34].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x33]
            
            arg1[0x32].b = (*(*rcx_1 + 0x48))(rcx_1)
    
    var_1d8_1 = 1
    
    if (arg1[0x32].b == 0)
        var_1d8_1 = 0

void var_180

if (var_58 != 0)
    int32_t rbp_1 = 0
    int32_t var_1d4_1 = 0
    
    if ((*arg1[0x55])(&arg1[0x55]) s> 0)
        int64_t* r14_1 = nullptr
        int64_t r15_1 = 0
        int32_t rax_22
        
        do
            void* rdi_1 = &var_180
            
            if (var_60 != 0)
                rdi_1 = var_60
            
            int128_t* rdi_2 = rdi_1 + r15_1
            char* rbx_2 = *(rdi_2 + 0x38) + 0x1a8
            
            if (*(rbx_2 + 0x10) != 0)
                int64_t* rcx_3 = *(rbx_2 + 8)
                
                if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
                    int64_t* rcx_4
                    
                    if (*(rbx_2 + 0x10) == 0)
                        rcx_4 = nullptr
                    else
                        rcx_4 = *(rbx_2 + 8)
                    
                    char var_1d7
                    (*(*rcx_4 + 0x48))(rcx_4, &var_1d7)
                    *rbx_2 = var_1d7
            
            if ((*rbx_2 & 0x19) != 0)
                void* rbx_3 = *(r14_1 + arg1[0x57])
                
                if (sub_140e1a4e0(arg1, arg4, rdi_2) == 0)
                    int32_t rbx_4 = *(rbx_3 + 0x70)
                    int32_t rcx_6 = r13 + 1
                    
                    if (var_1d4_1 == rbx_4)
                        rcx_6 = arg6
                    
                    arg6 = rcx_6
                    int32_t rax_21 = sub_140e1f680(*(rdi_2 + 0x38), &var_1b8, rdi_2, arg4, arg5, 
                        rcx_6, arg7, var_1d8_1)
                    
                    if (r13 s>= rax_21)
                        rax_21 = r13
                    
                    r13 = rax_21
                    
                    if (var_1d4_1 == rbx_4)
                        rbx_4 = var_1d4_1
                    
                    var_1d4_1 = rbx_4
            
            int64_t rdx_4 = arg1[0x55]
            rbp_1 += 1
            r15_1 += 0x48
            r14_1 = &r14_1[1]
            rax_22 = (*rdx_4)(&arg1[0x55], rdx_4)
        while (rbp_1 s< rax_22)

sub_140d94d20(&var_180)
__security_check_cookie(rax_1 ^ &var_218)
return zx.q(r13)
