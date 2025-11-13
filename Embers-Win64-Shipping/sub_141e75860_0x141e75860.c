// 函数: sub_141e75860
// 地址: 0x141e75860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t* r15 = *arg3
int32_t rdi = 0
int64_t result = sx.q(arg3[1].d)
void* r12 = &r15[result]

while (r15 != r12)
    result = sx.q(arg1[3].d)
    int64_t rbx_1 = 0
    
    if (result.d s> 0)
        int64_t r8 = arg1[2]
        int64_t result_1 = result
        result = r8 + 0x18
        
        do
            if (*result == *r15)
                int64_t* rbx_3 = (rbx_1 << 5) + r8
                int64_t* rcx_1 = rbx_3[1]
                
                if (rcx_1 != 0)
                    (*(*rcx_1 + 0x28))(rcx_1)
                    int64_t* rcx_2 = rbx_3[1]
                    int512_t zmm1
                    zmm1.o = zx.o(0)
                    (*(*rcx_2 + 0x10))(rcx_2, zmm1)
                    int64_t* rcx_3 = rbx_3[1]
                    
                    if (rcx_3 != 0)
                        (**rcx_3)(rcx_3, 1)
                    
                    rbx_3[1] = 0
                    sub_141e82770(arg1[9])
                
                int64_t rcx_5 = *rbx_3
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                *rbx_3 = 0
                rbx_3[2] = 0
                rbx_3[3].d = 0
                int32_t rcx_6 = arg1[3].d
                int32_t rax_6 = rcx_6 - rdi
                
                if (rax_6 != 1)
                    memmove((sx.q(rdi) << 5) + arg1[2], (sx.q(rdi + 1) << 5) + arg1[2], 
                        (rax_6 - 1) << 5)
                    rcx_6 = arg1[3].d
                
                arg1[3].d = rcx_6 - 1
                result = sub_1405dad20(&arg1[2])
                break
            
            rdi += 1
            rbx_1 += 1
            result += 0x20
        while (rbx_1 s< result_1)
    
    r15 = &r15[1]
    rdi = 0

if (arg2[1].d s<= 0)
    arg1[1].d
    arg1[1].d = 1
else
    arg1[1].d = 2
    int32_t* i = *arg2
    result = sx.q(arg2[1].d)
    
    for (void* r13_1 = &i[result]; i != r13_1; i = &i[1])
        int32_t rcx_12 = arg1[3].d
        int64_t r12_1 = sx.q(*i)
        int64_t rbx_4 = sx.q(rcx_12)
        int32_t* rbp_1 = *(*(*(*arg1 + 0x2e8) + 0x10) + (r12_1 << 3))
        int32_t rax_13 = *rbp_1
        int32_t rax_14 = rbp_1[1]
        int32_t rax_15 = (rbx_4 + 1).d
        arg1[3].d = rax_15
        
        if (rax_15 s> *(arg1 + 0x1c))
            sub_1405c4e40(&arg1[2])
        
        __builtin_memset((rbx_4 << 5) + arg1[2], 0, 0x1c)
        int64_t rdi_2 = sx.q(rcx_12) << 5
        *(rdi_2 + arg1[2] + 0x10) = rax_13
        *(arg1[2] + rdi_2 + 0x14) = rax_14
        int64_t rbx_5 = arg1[2]
        *(rdi_2 + rbx_5 + 0x18) = r12_1.d
        arg1[1].d += 1
        int32_t var_90_1 = rcx_12
        void** const var_68 = &data_142d42ed8
        void*** var_78_1 = nullptr
        int64_t (* var_88)(int64_t* arg1, char* arg2, int64_t* arg3) = sub_141e767f0
        int128_t var_60_1 = arg1.o
        result = sub_140bc48b0(&rbp_1[2], 4, &var_88, 0)
        *(rdi_2 + rbx_5 + 8) = result
        
        if (result == 0)
            arg1[1].d -= 1
        
        if (var_88 != 0)
            void** const* rcx_14 = &var_68
            
            if (var_78_1 != 0)
                rcx_14 = var_78_1
            
            result = (*rcx_14)[2](rcx_14)
    
    arg1[1].d -= 1

__security_check_cookie(rax_1 ^ &var_c8)
return result
