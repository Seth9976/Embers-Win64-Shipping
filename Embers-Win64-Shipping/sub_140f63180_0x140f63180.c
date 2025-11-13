// 函数: sub_140f63180
// 地址: 0x140f63180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t rdx = 0
int64_t* rcx = data_143e29f28
int64_t* rbx = *(arg1 + 0x10)

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rdx = *(arg1 + 8)

int64_t var_198 = rdx
int64_t* var_190 = rbx

if (rbx != 0)
    rbx[1].d += 1

int64_t var_188
(*(*rcx + 0x28))(rcx, &var_188, &var_198)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t rax_6 = var_188
int64_t* rdi
int64_t* arg_18 = rdi
int64_t* var_180

if (rax_6 == 0)
    rdi.b = 0
else
    if (var_180 != 0)
        var_180[1].d += 1
    
    var_198 = rax_6
    
    if (var_180 != 0)
        var_180[1].d += 1
    
    int64_t* rcx_3 = data_143e29f28
    char rax_8 = (*(*rcx_3 + 0xe8))(rcx_3, &var_198)
    
    if (var_180 != 0)
        var_180[1].d -= 1
        
        if (var_180[1].d == 1)
            int64_t rdx_3 = *var_180
            (*rdx_3)(var_180, rdx_3)
            int32_t temp6_1 = *(var_180 + 0xc)
            *(var_180 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_180 + 8))(var_180, 1)
    
    if (var_180 != 0)
        var_180[1].d -= 1
        
        if (var_180[1].d == 1)
            (**var_180)(var_180)
            int32_t temp7_1 = *(var_180 + 0xc)
            *(var_180 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_180 + 8))(var_180, 1)
    
    if (rax_8 == 0)
        rdi.b = 1
    else
        void var_178
        sub_140d947e0(&var_178)
        int64_t* rbx_2 = *(arg1 + 0x3b8)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        var_198 = *(arg1 + 0x3b0)
        int64_t* var_190_2 = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        sub_140e64900(data_143e29f28, &var_198, &var_178, data_1439ae51c, arg2)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp9_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        int64_t* rcx_12 = data_143e29f28
        int64_t r8_2
        r8_2.b = 2
        (*(*rcx_12 + 0x138))(rcx_12, &var_178, r8_2)
        sub_140de0810(&var_178)
        rdi.b = 0

if (var_180 != 0)
    var_180[1].d -= 1
    
    if (var_180[1].d == 1)
        (**var_180)(var_180)
        int32_t temp3_1 = *(var_180 + 0xc)
        *(var_180 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_4 = *var_180
            (*(r8_4 + 8))(var_180, 1, r8_4)

__security_check_cookie(rax_1 ^ &var_1b8)
return zx.q(rdi.b)
