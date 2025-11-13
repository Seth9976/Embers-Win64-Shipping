// 函数: sub_141e663b0
// 地址: 0x141e663b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rbx = *arg3
int64_t* result = arg2
void* rsi_2 = &rbx[sx.q(arg3[1].d) * 2]
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int64_t var_100 = 0
int32_t var_f8 = 0
int128_t var_d8 = zx.o(0)
int64_t var_118
int16_t* var_e8
int32_t i_2
int64_t var_c0

if (rbx != rsi_2)
    do
        if (sub_141e61330(arg1, &var_a8, rbx, arg4, arg5) != 0)
            wchar16 const* const rdx_1
            int32_t r8_1
            
            if (var_f8 s> 1)
                rdx_1 = &data_142d8adc4
                r8_1 = 2
            else
                rdx_1 = u"Preloading "
                r8_1 = 0xb
            
            sub_140a20ba0(&var_100, rdx_1, r8_1)
            int64_t var_108_1 = 0
            int32_t rcx_2
            
            if (*rbx != 0)
                rcx_2.b = sub_140b5b8a0(rbx[1].d, 0) == 0
            
            int32_t r8_3
            int32_t var_110
            
            if (*rbx == 0 || (*(rbx + 0xc) != 0 | rcx_2.b) == 0)
                var_118 = 0
                var_110.q = 0
                r8_3 = 0
            else
                int64_t* rax_5 = sub_140b63b70(&rbx[1], &var_c0)
                
                if (rax_5[1].d != 0)
                    *rax_5
                
                sub_140b63b70(rbx, &var_e8)
                int16_t* const r8_2 = &data_142d40450
                
                if (i_2 != 0)
                    r8_2 = var_e8
                
                sub_140a2e390(&var_118, u"%s:%s", r8_2)
                int16_t* rcx_6 = var_e8
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                int64_t rcx_7 = var_c0
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                if (var_110 == 0)
                    r8_3 = 0
                else
                    r8_3 = var_110 - 1
            sub_140a20ba0(&var_100, var_118, r8_3)
            int64_t rcx_9 = var_118
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
        
        rbx = &rbx[2]
    while (rbx != rsi_2)
    
    result = arg2

var_118 = 0
int32_t var_110_1 = 0

if (arg6 != &var_118 && arg6[1].d != 0)
    int64_t* rcx_10 = *arg6
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x40))(rcx_10, &var_118)

int64_t* rax_9 =
    (*(*arg1 + 0x348))(arg1, &var_c0, sub_141e54b80(&var_a8, &var_e8), &var_118, arg7, &var_100)
int64_t* rbx_2
int64_t r14_1

if (&var_d8 == rax_9)
    r14_1 = var_d8.q
    rbx_2 = var_d8:8.q
else
    r14_1 = *rax_9
    *rax_9 = 0
    rbx_2 = rax_9[1]
    
    if (rbx_2 == 0)
        rbx_2 = var_d8:8.q
    else
        rax_9[1] = 0

int64_t* var_b8

if (var_b8 != 0)
    var_b8[1].d -= 1
    
    if (var_b8[1].d == 1)
        (**var_b8)(var_b8)
        int32_t temp1_1 = *(var_b8 + 0xc)
        *(var_b8 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_b8 + 8))(var_b8, 1)

int32_t i_1 = i_2

if (i_1 != 0)
    void* rdi_4 = &var_e8[4]
    int32_t i
    
    do
        int64_t rcx_15 = *rdi_4
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        rdi_4 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

int16_t* rcx_16 = var_e8

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

if (r14_1 != 0)
    *result = r14_1
    result[1] = rbx_2
else
    *result = 0
    result[1] = 0
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, zx.q((r14_1 + 1).d))

int64_t rcx_19 = var_100

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int32_t var_60_1 = 0

if (var_68 != 0)
    sub_140a74f90(var_68)

sub_140597460(&var_a8)
sub_140745b20(arg6)
__security_check_cookie(rax_1 ^ &var_148)
return result
