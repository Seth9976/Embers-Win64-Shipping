// 函数: sub_141d0ac60
// 地址: 0x141d0ac60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int128_t zmm0 = data_14321e0d0
int32_t rdi = 0
void*** result_1
__builtin_memset(&result_1, 0, 0x14)
void* const var_c0 = nullptr
int128_t var_98 = zmm0
int64_t var_88
__builtin_memset(&var_88, 0, 0x1c)
int64_t var_68
__builtin_memset(&var_68, 0, 0x1a)
int64_t rsi = 0
int32_t r15 = 0
EnterCriticalSection(arg1 + 0x38)
int64_t r12 = sx.q(*(arg1 + 0x18))
int32_t temp0 = r12.d
int64_t var_a8

if (temp0 != 0)
    int32_t var_a0
    
    if (temp0 s> 0)
        sub_1405a5410(&var_a8, r12.d)
        r15 = var_a0
        rsi = var_a8
    
    memcpy((sx.q(r15) << 4) + rsi, *(arg1 + 0x10), (r12 << 4).d)
    var_a0 = r15 + r12.d

if (arg1 != -0x38)
    LeaveCriticalSection(arg1 + 0x38)

char rax_2 = sub_141d02340(&var_a8, arg2, &var_c0, &var_98)

if (rsi != 0)
    sub_140a74f90(rsi)

if (rax_2 == 0)
    var_c0 = nullptr
    int32_t rcx_14 = 0
    int32_t var_b4_1 = 0
    int32_t var_b8_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_5 = -1
        
        do
            rbx_5 += 1
        while (arg2[rbx_5] != 0)
        
        if (rbx_5.d + 1 s> 0)
            sub_1405947f0(&var_c0, rbx_5.d + 1)
            rcx_14 = var_b4_1
            rdi = var_b8_1
        
        int32_t rax_11 = rdi + rbx_5.d + 1
        int32_t var_b8_2 = rax_11
        
        if (rax_11 s> rcx_14)
            sub_140594770(&var_c0)
        
        UnDecorator::getReferenceType(var_c0, arg2, (rbx_5.d + 1) * 2)
    
    char rax_12 = sub_141d06c80(arg1, &var_c0)
    void* const rcx_19 = var_c0
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    if (rax_12 != 0)
        int64_t* rcx_20 = *(arg1 + 8)
        result_1 = (*(*rcx_20 + 0xc0))(rcx_20, arg2, zx.q(arg3))
else
    void* const rbx_2 = var_c0
    void*** result_2 = sub_141cfe880(arg1, arg2, rbx_2, &var_98)
    result_1 = result_2
    
    if (result_2 != 0)
        int16_t* const r12_1
        
        if (*(rbx_2 + 0x10) == 0)
            r12_1 = &data_142d40450
        else
            r12_1 = *(rbx_2 + 8)
        
        r15.b = 0
        int32_t rdx_4 = data_14399fbe8
        int32_t rcx_10 = data_14399fbf4 + 1
        data_14399fbf4 = rcx_10
        int64_t rbx_3 = sx.q(rdx_4 - 1)
        
        if (rdx_4 - 1 s>= 0)
            int64_t rsi_2 = rbx_3 << 4
            int64_t temp1_1
            
            do
                int64_t rax_4 = data_14399fbe0
                
                if (*(rsi_2 + rax_4 + 8) == 0)
                    r15.b = 1
                else
                    int64_t* rcx_11 = *(rsi_2 + rax_4)
                    
                    if (rcx_11 == 0)
                        r15.b = 1
                    else if ((*(*rcx_11 + 0x50))(rcx_11, r12_1, arg2) == 0)
                        r15.b = 1
                
                rsi_2 -= 0x10
                temp1_1 = rbx_3
                rbx_3 -= 1
            while (temp1_1 - 1 s>= 0)
            rcx_10 = data_14399fbf4
            rdx_4 = data_14399fbe8
        
        data_14399fbf4 = rcx_10 - 1
        
        if (r15.b != 0 && rcx_10 - 1 s<= 0)
            int32_t rsi_3 = rdx_4
            
            if (rdx_4 s> 0)
                int64_t* rbx_4 = nullptr
                
                do
                    int64_t rax_7 = data_14399fbe0
                    
                    if (*(rbx_4 + rax_7 + 8) == 0)
                        sub_1405a4880(&data_14399fbe0, rdi, 1, 1)
                    else
                        int64_t* rcx_13 = *(rbx_4 + rax_7)
                        
                        if (rcx_13 == 0)
                            sub_1405a4880(&data_14399fbe0, rdi, 1, 1)
                        else if ((*(*rcx_13 + 0x20))(rcx_13) != 0)
                            sub_1405a4880(&data_14399fbe0, rdi, 1, 1)
                        else
                            rdi += 1
                            rbx_4 = &rbx_4[2]
                    
                    rdx_4 = data_14399fbe8
                while (rdi s< rdx_4)
            
            int32_t rax_10 = rdx_4 * 2
            
            if (rax_10 s<= 2)
                rax_10 = 2
            
            data_14399fbf0 = rax_10
            
            if (rsi_3 s> rax_10 && data_14399fbec != rdx_4)
                sub_1405a5410(&data_14399fbe0, rdx_4)

sub_140a1d5c0(&var_68)
void*** result = result_1
__security_check_cookie(rax_1 ^ &var_e8)
return result
