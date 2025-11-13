// 函数: sub_142ae2100
// 地址: 0x142ae2100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
char var_38[0x18]
strncpy(&var_38, arg2, 0x18)
int32_t rbx = 0
char var_20 = 0
*arg3 = 0
char* rax_2 = strchr(&var_38, 0x2d)

if (rax_2 != 0)
    int32_t r10_1 = 2
    
    for (char const (** const i)[0x8] = &data_14365a890; i s> &data_14365a880; i -= 8)
        char const (* rcx_2)[0x8] = *i
        void* r8_1 = rax_2 - rcx_2
        uint32_t j
        uint32_t rdx
        
        do
            rdx = zx.d(*rcx_2)
            j = zx.d(*(rcx_2 + r8_1))
            
            if (rdx != j)
                break
            
            rcx_2 = &(*rcx_2)[1]
        while (j != 0)
        
        if (rdx - j == 0)
            *arg3 = r10_1
            break
        
        r10_1 -= 1
    
    *rax_2 = 0

for (void** const i_1 = &data_14365a800; i_1 s< &data_14365a880; i_1 = &i_1[1])
    void* rax_3 = *i_1
    int64_t r8_2 = &var_38 - rax_3
    uint32_t j_1
    uint32_t rdx_2
    
    do
        rdx_2 = zx.d(*rax_3)
        j_1 = zx.d(*(rax_3 + r8_2))
        
        if (rdx_2 != j_1)
            break
        
        rax_3 += 1
    while (j_1 != 0)
    
    if (rdx_2 - j_1 == 0)
        __security_check_cookie(rax_1 ^ &var_58)
        return zx.q(rbx)
    
    rbx += 1

__security_check_cookie(rax_1 ^ &var_58)
return 0x10
