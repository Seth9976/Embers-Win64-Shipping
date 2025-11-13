// 函数: sub_140e8ab30
// 地址: 0x140e8ab30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int32_t var_1a8 = 0
int128_t var_1b8
int64_t* var_198
int64_t* rax_5
uint32_t rdi
void* const r15

if (arg2 s< 0 || arg2 s>= arg1[0x58].d)
    arg5 = zx.o(0)
    rax_5 = &var_1b8
    var_1b8 = zx.o(0)
    rdi = 2
    r15 = nullptr
else
    int64_t* rax_4 = (sx.q(arg2) << 4) + arg1[0x57]
    int64_t* rcx = rax_4[1]
    r15 = *rax_4
    void* const var_1a0 = r15
    var_198 = rcx
    
    if (rcx != 0)
        rcx[1].d += 1
    
    rax_5 = &var_1a0
    rdi = 1

int64_t* rsi = rax_5[1]
rax_5[1] = 0
*rax_5 = 0

if ((rdi.b & 2) != 0)
    int64_t* rbx_1 = var_1b8:8.q
    rdi &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if ((rdi.b & 1) != 0 && var_198 != 0)
    var_198[1].d -= 1
    
    if (var_198[1].d == 1)
        (**var_198)(var_198)
        int32_t temp3_1 = *(var_198 + 0xc)
        *(var_198 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_198 + 8))(var_198, 1)

if (*arg3 == 0 || r15 == 0)
    rdi.b = 0
else
    void var_190
    sub_140d947e0(&var_190)
    int64_t* rbx_3 = arg3[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    var_1b8.q = *arg3
    var_1b8:8.q = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    char rax_11
    uint128_t zmm0
    int512_t zmm1_1
    rax_11, zmm0, zmm1_1 = sub_140da1990(&arg1[0x30], &var_1b8, &var_190, data_1439ae51c, arg5)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            int64_t rdx_1 = *rbx_3
            (*rdx_1)(rbx_3, rdx_1)
            int32_t temp7_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    char rax_14
    
    if (rax_11 == 0)
        int64_t* rbx_4 = arg3[1]
        
        if (rbx_4 != 0)
            rbx_4[1].d += 1
        
        var_1b8.q = *arg3
        var_1b8:8.q = rbx_4
        
        if (rbx_4 != 0)
            rbx_4[1].d += 1
        
        rax_14, zmm1_1 = sub_140da1990(&arg1[0x32], &var_1b8, &var_190, data_1439ae51c, zmm0)
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                int64_t rdx_3 = *rbx_4
                (*rdx_3)(rbx_4, rdx_3)
                int32_t temp11_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
    
    void var_188
    int64_t* var_48
    void var_40
    
    if (rax_11 != 0 || rax_14 != 0)
        rdi = zx.d(sub_140e89df0(arg1, r15, &var_190, arg4, zmm1_1))
        sub_140596d80(&var_40)
        
        if (var_48 != 0)
            var_48[1].d -= 1
            
            if (var_48[1].d == 1)
                (**var_48)(var_48)
                int32_t temp9_1 = *(var_48 + 0xc)
                *(var_48 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*var_48 + 8))(var_48, 1)
        
        sub_140d94d20(&var_188)
    else
        sub_140596d80(&var_40)
        
        if (var_48 != 0)
            var_48[1].d -= 1
            
            if (var_48[1].d == 1)
                (**var_48)(var_48)
                int32_t temp13_1 = *(var_48 + 0xc)
                *(var_48 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*var_48 + 8))(var_48, 1)
        
        sub_140d94d20(&var_188)
        rdi.b = 0

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp5_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_3 = *rsi
            (*(r8_3 + 8))(rsi, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_1d8)
return zx.q(rdi.b)
