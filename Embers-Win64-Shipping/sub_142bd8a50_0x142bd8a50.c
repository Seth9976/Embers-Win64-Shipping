// 函数: sub_142bd8a50
// 地址: 0x142bd8a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rdi = 0
int64_t rsi = arg1
int32_t result_1
int32_t* var_d0 = &result_1
void* r13 = arg2
*(arg2 + 0x18) = 0
*(arg2 + 0x20) = 0
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x28)
int32_t* rax_3 = sub_142b99a90(rsi, 8, 0, arg3 + 0xa, 0, var_d0)
int32_t* rbx = rax_3
*(r13 + 0x20) = rax_3
int32_t result = result_1

if (result == 0)
    if (arg3 != 0)
        int32_t var_80
        
        do
            char* rax_4 = arg4(arg6, zx.q(rdi))
            
            if (rax_4 != 0)
                uint64_t r9_1 = 0
                void* const r10_1 = &data_143697f38
                
                do
                    void* rax_6 = &(*"Delta")[sx.q(*r10_1)]
                    void* r8_1 = rax_4 - rax_6
                    uint32_t i
                    uint32_t rdx_1
                    
                    do
                        rdx_1 = zx.d(*rax_6)
                        i = zx.d(*(rax_6 + r8_1))
                        
                        if (rdx_1 != i)
                            break
                        
                        rax_6 += 1
                    while (i != 0)
                    
                    if (rdx_1 - i == 0)
                        if (*(&var_a8 + (r9_1 << 2)) == 0)
                            *(&var_a8 + (r9_1 << 2)) = 1
                            (&var_80)[r9_1] = rdi
                        
                        break
                    
                    r9_1 = zx.q(r9_1.d + 1)
                    r10_1 += 4
                while (r9_1.d u< 0xa)
                
                int32_t rax_7 = sub_142bd8930(rax_4)
                
                if ((rax_7 & 0x7fffffff) != 0)
                    uint64_t rcx_3 = 0
                    void* const rax_8 = &data_143688c68
                    
                    do
                        if (rax_7 == *rax_8)
                            *(&var_a8 + (rcx_3 << 2)) = 2
                            break
                        
                        rcx_3 = zx.q(rcx_3.d + 1)
                        rax_8 += 4
                    while (rcx_3.d u< 0xa)
                    
                    *rbx = rax_7
                    rbx[1] = rdi
                    rbx = &rbx[2]
                
                if (arg5 != 0)
                    arg5(arg6, rax_4)
            
            rdi += 1
        while (rdi u< arg3)
        
        r13 = arg2
        
        if (var_a8.d == 1)
            rbx[1] = var_80
            *rbx = 0x394
            rbx = &rbx[2]
        
        if (var_a8:4.d == 1)
            *rbx = 0x3a9
            int32_t var_7c
            rbx[1] = var_7c
            rbx = &rbx[2]
        
        int64_t var_a0
        
        if (var_a0.d == 1)
            *rbx = 0x2215
            int32_t var_78
            rbx[1] = var_78
            rbx = &rbx[2]
        
        if (var_a0:4.d == 1)
            *rbx = 0xad
            int32_t var_74
            rbx[1] = var_74
            rbx = &rbx[2]
        
        int64_t var_98
        
        if (var_98.d == 1)
            *rbx = 0x2c9
            int32_t var_70
            rbx[1] = var_70
            rbx = &rbx[2]
        
        if (var_98:4.d == 1)
            *rbx = 0x3bc
            int32_t var_6c
            rbx[1] = var_6c
            rbx = &rbx[2]
        
        int64_t var_90
        
        if (var_90.d == 1)
            *rbx = 0x2219
            int32_t var_68
            rbx[1] = var_68
            rbx = &rbx[2]
        
        if (var_90:4.d == 1)
            *rbx = 0xa0
            int32_t var_64
            rbx[1] = var_64
            rbx = &rbx[2]
        
        int64_t var_88
        
        if (var_88.d == 1)
            *rbx = 0x21a
            int32_t var_60
            rbx[1] = var_60
            rbx = &rbx[2]
        
        rsi = arg1
        
        if (var_88:4.d == 1)
            *rbx = 0x21b
            int32_t var_5c
            rbx[1] = var_5c
            rbx = &rbx[2]
    
    int64_t rax_19 = *(r13 + 0x20)
    int32_t rbx_2 = ((rbx - rax_19) s>> 3).d
    
    if (rbx_2 != 0)
        if (rbx_2 u< arg3 u>> 1)
            *(r13 + 0x20) = sub_142b99a90(rsi, 8, arg3 + 0xa, rbx_2, rax_19, &result_1)
            result_1 = 0
        
        qsort(*(r13 + 0x20), zx.q(rbx_2), 8, sub_142bd8d60)
        result = result_1
    else
        sub_142b99980(rsi, rax_19)
        result = result_1
        *(r13 + 0x20) = 0
        
        if (result == 0)
            result = 0xa3
    
    *(r13 + 0x18) = rbx_2

__security_check_cookie(rax_1 ^ &var_f8)
return result
