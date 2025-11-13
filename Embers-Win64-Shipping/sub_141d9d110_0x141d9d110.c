// 函数: sub_141d9d110
// 地址: 0x141d9d110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
bool cond:0 = *(arg1 + 0xe9) == 0
int64_t rax_2

if (not(cond:0))
    rax_2 = sx.q(arg1[0x20].d)

char result
void** const var_e8
int64_t* var_e0

if (cond:0 || rax_2.d s< 0 || rax_2.d s>= arg1[0x22].d)
    int64_t* rbx_1 = nullptr
    var_e0 = 6
    result = 0x28
    var_e8 = &data_142d5a028
    
    if (arg2[1].d != 0)
        int64_t* rcx_7 = *arg2
        
        if (rcx_7 != 0)
            result = (*(*rcx_7 + 0x28))(rcx_7)
            
            if (result != 0)
                if (arg2[1].d != 0)
                    rbx_1 = *arg2
                
                result = (*(*rbx_1 + 0x50))(rbx_1, &var_e8)
else
    int64_t rcx = rax_2 * 3
    int64_t rax_3 = arg1[0x21]
    var_e0 = nullptr
    int32_t rdx = 0
    int32_t var_d8_1 = 0
    int64_t r14_1 = *(rax_3 + (rcx << 3) + 0x10)
    int32_t r15_1 = *(rax_3 + (rcx << 3) + 4)
    void** const rax_4 = arg1
    var_e8 = rax_4
    int64_t* rcx_1 = nullptr
    
    if (arg2 != &var_e0 && arg2[1].d != 0)
        int64_t* r8_1 = *arg2
        
        if (r8_1 != 0)
            (*(*r8_1 + 0x40))(r8_1, &var_e0)
            rdx = var_d8_1
            rcx_1 = var_e0
            rax_4 = var_e8
    
    void*** var_a8_1 = nullptr
    void** const var_98 = &data_143239620
    void** const var_90_1 = rax_4
    int64_t var_88 = 0
    int32_t var_80_1 = 0
    
    if (rdx != 0 && rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1, &var_88)
    
    var_98 = &data_143239640
    int32_t var_c8_1 = r15_1
    int64_t (* var_b8)(int64_t* arg1, void* arg2) = j_sub_141d969c0
    void** const var_58 = &data_142e345d8
    void*** var_68_1 = nullptr
    int64_t (* var_78)(int64_t* arg1, void* arg2) = j_sub_141d98b20
    int128_t var_50_1 = arg1.o
    int64_t var_40_1 = r14_1
    sub_141d92910(arg1, 6, &var_78, &var_b8)
    
    if (var_78 != 0)
        void** const* rcx_4 = &var_58
        
        if (var_68_1 != 0)
            rcx_4 = var_68_1
        
        (*rcx_4)[2](rcx_4)
    
    if (var_b8 != 0)
        void** const* rcx_5 = &var_98
        
        if (var_a8_1 != 0)
            rcx_5 = var_a8_1
        
        (*rcx_5)[2](rcx_5)
    
    result = sub_140745b20(&var_e0)
__security_check_cookie(rax_1 ^ &var_108)
return result
