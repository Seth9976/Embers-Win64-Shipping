// 函数: sub_140f0c1f0
// 地址: 0x140f0c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t var_118 = 0
*arg2 = 0
char* result = arg2
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
char r15 = 0

if (arg1[0x34].d != 0)
    int64_t* rcx = arg1[0x33]
    
    if (rcx != 0)
        char rax_3
        rax_3, arg2 = (*(*rcx + 0x28))(rcx)
        
        if (rax_3 != 0)
            int64_t* rcx_1
            
            if (arg1[0x34].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x33]
            
            char rax_5
            rax_5, arg2 = (*(*rcx_1 + 0x48))(rcx_1)
            arg1[0x32].b = rax_5

int64_t* rdi
int64_t r12

if (arg1[0x32].b == 0)
    rdi = var_118.q
    r12.b = 0
else
    rdi = *(arg4 + 0x48)
    int64_t rax_6 = *(arg4 + 0x38)
    
    if (rdi != 0)
        rdi[1].d += 1
    
    if (rax_6 != data_143e1e008)
        r15 = 1
    
    if (rax_6 != data_143e1e008 && *(arg4 + 0x5c) == 0)
        r12.b = 0
    else
        r12.b = 1
        r15 = 1

if ((r15 & 1) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (r12.b != 0)
    (*(*arg1 + 0x258))(arg1)
    arg1[0xa0] = *(arg4 + 0x18)
    char rax_10
    
    if (*(arg4 + 0x5c) == 0)
        rax_10 = arg1[0xb6].b
    else
        uint32_t rcx_5 = zx.d(*(arg1 + 0x5b1))
        
        if (rcx_5 == 0)
            rax_10 = 0
        else if (rcx_5 == 1)
            rax_10 = 1
        else if (rcx_5 != 2)
            rax_10 = arg1[0xb6].b
        else
            rax_10 = 3
    
    char var_108
    
    if (rax_10 == 1)
        sub_1405979f0(result, sub_140efc890(arg1, &var_108, arg5))
    else
        int32_t var_54
        
        if (rax_10 != 3)
            void* const rcx_10 = arg1[2]
            int64_t rdx_3 = 0
            
            if (rcx_10 != 0)
                int32_t rax_12 = *(rcx_10 + 8)
                
                if (rax_12 != 0)
                    *(rcx_10 + 8) = rax_12 + 1
                    rax_12.b = 1
                
                if (rax_12.b == 0)
                    rcx_10 = nullptr
                
                if (rcx_10 != 0)
                    rdx_3 = arg1[1]
            
            int32_t var_54_2 = var_54 & 0xffffff00
            var_118.q = rdx_3
            void* const var_110_1 = rcx_10
            var_108 = 1
            int64_t var_100_2 = 0
            int64_t var_f8_2 = 0
            char var_e8_2 = 0
            int64_t var_e0_1
            __builtin_memset(&var_e0_1, 0, 0x88)
            int32_t var_58_2 = 0x20702
            sub_140e54f20(result, sub_140eae530(&var_108, &var_118))
        else
            int32_t var_54_1 = var_54 & 0xffffff00
            var_108 = 1
            int64_t var_100_1 = 0
            int64_t var_f8_1 = 0
            char var_e8_1 = 0
            int64_t var_e0
            __builtin_memset(&var_e0, 0, 0x88)
            int32_t var_58_1 = 0x20702
            sub_1405979f0(result, &var_108)
    
    sub_140597700(&var_108)

arg2.b = 1
sub_140e19ef0(arg1, arg2.b)
__security_check_cookie(rax_1 ^ &var_138)
return result
