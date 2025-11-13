// 函数: sub_14282f93c
// 地址: 0x14282f93c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
char* var_288 = arg1
int64_t var_168 = 0
int64_t var_160 = 0xf
char var_178 = 0

if (arg3 s> 0)
    uint64_t i_1 = zx.q(arg3)
    uint64_t i
    
    do
        char rax_2
        int64_t r8
        rax_2, r8 = sub_14282aff8(arg2)
        int64_t rcx_1 = var_168
        
        if (rcx_1 u>= var_160)
            r8.b = 0
            sub_14058b730(&var_178, 1, r8, rax_2)
        else
            var_168 = rcx_1 + 1
            char* rax_4 = &var_178
            
            if (var_160 u>= 0x10)
                rax_4 = var_178.q
            
            rax_4[rcx_1] = rax_2
            rax_4[rcx_1 + 1] = 0
        
        i = i_1
        i_1 -= 1
    while (i != 1)

var_288 = arg2[1]
int32_t var_280 = arg2[2].d
int32_t rax_6 = sub_14282fe40(&var_178, &var_288)
char var_d8

if (rax_6 - 0xd800 u<= 0x7ff || rax_6 u>= 0x110000)
    void* var_278
    sub_140589420(&var_278, 1)
    void var_268
    std::ostream::operator<<(sub_14058b120(&var_268, "invalid unicode: "))
    int64_t* rax_22 = sub_140589320(&var_278, &var_d8)
    struct std::exception::VTable* exceptionObject
    sub_1428244f0(&exceptionObject, sub_1427bde30(arg2, &var_288), rax_22)
    _CxxThrowException(&exceptionObject, &data_143946450)
    noreturn

char rdx_1 = rax_6.b
int64_t rdx_40
bool cond:0

if (rax_6 u> 0x7f)
    uint8_t rdi_2 = (rax_6 u>> 6).b
    char var_158
    int64_t var_140
    char var_138
    int64_t var_120
    
    if (rax_6 u> 0x7ff)
        uint8_t r13_2 = (rax_6 u>> 0xc).b
        char var_118
        int64_t var_100
        char var_f8
        int64_t var_e0
        
        if (rax_6 u> 0xffff)
            void** rax_14 = sub_14282ff10(&var_d8, (rdx_1 & 0x3f) + 0x80)
            char var_b8
            void** rax_15 = sub_14282ff10(&var_b8, (rdi_2 & 0x3f) - 0x80)
            void** rax_16 = sub_14282ff10(&var_158, (r13_2 & 0x3f) - 0x80)
            sub_14282f4e0(arg1, 
                sub_14282f4e0(&var_f8, 
                    sub_14282f4e0(&var_118, sub_14282ff10(&var_138, (rax_6 u>> 0x12).b - 0x10), 
                        rax_16), 
                    rax_15), 
                rax_14)
            
            if (var_e0 u>= 0x10)
                sub_14058ba50(var_f8.q, var_e0 + 1)
            
            int64_t var_e8_2 = 0
            int64_t var_e0_2 = 0xf
            var_f8 = 0
            
            if (var_100 u>= 0x10)
                sub_14058ba50(var_118.q, var_100 + 1)
            
            int64_t var_108_2 = 0
            int64_t var_100_2 = 0xf
            var_118 = 0
            
            if (var_120 u>= 0x10)
                sub_14058ba50(var_138.q, var_120 + 1)
            
            int64_t var_128_3 = 0
            int64_t var_120_3 = 0xf
            var_138 = 0
            
            if (var_140 u>= 0x10)
                sub_14058ba50(var_158.q, var_140 + 1)
            
            int64_t var_148_3 = 0
            int64_t var_140_3 = 0xf
            var_158 = 0
            int64_t var_a0
            
            if (var_a0 u>= 0x10)
                sub_14058ba50(var_b8.q, var_a0 + 1)
            
            int64_t var_a8_1 = 0
            int64_t var_a0_1 = 0xf
            var_b8 = 0
            int64_t var_c0
            
            if (var_c0 u>= 0x10)
                sub_14058ba50(var_d8.q, var_c0 + 1)
            
            int64_t var_c8_1 = 0
            int64_t var_c0_1 = 0xf
            var_d8 = 0
            rdx_40 = var_160
            cond:0 = rdx_40 u< 0x10
        else
            void** rax_10 = sub_14282ff10(&var_f8, (rdx_1 & 0x3f) + 0x80)
            void** rax_11 = sub_14282ff10(&var_118, (rdi_2 & 0x3f) - 0x80)
            sub_14282f4e0(arg1, 
                sub_14282f4e0(&var_138, sub_14282ff10(&var_158, r13_2 - 0x20), rax_11), rax_10)
            
            if (var_120 u>= 0x10)
                sub_14058ba50(var_138.q, var_120 + 1)
            
            int64_t var_128_2 = 0
            int64_t var_120_2 = 0xf
            var_138 = 0
            
            if (var_140 u>= 0x10)
                sub_14058ba50(var_158.q, var_140 + 1)
            
            int64_t var_148_2 = 0
            int64_t var_140_2 = 0xf
            var_158 = 0
            
            if (var_100 u>= 0x10)
                sub_14058ba50(var_118.q, var_100 + 1)
            
            int64_t var_108_1 = 0
            int64_t var_100_1 = 0xf
            var_118 = 0
            
            if (var_e0 u>= 0x10)
                sub_14058ba50(var_f8.q, var_e0 + 1)
            
            int64_t var_e8_1 = 0
            int64_t var_e0_1 = 0xf
            var_f8 = 0
            rdx_40 = var_160
            cond:0 = rdx_40 u< 0x10
    else
        char* rax_8 = sub_14282ff10(&var_138, (rdx_1 & 0x3f) + 0x80)
        sub_14282f4e0(arg1, sub_14282ff10(&var_158, rdi_2 - 0x40), rax_8)
        
        if (var_140 u>= 0x10)
            sub_14058ba50(var_158.q, var_140 + 1)
        
        int64_t var_148_1 = 0
        int64_t var_140_1 = 0xf
        var_158 = 0
        
        if (var_120 u>= 0x10)
            sub_14058ba50(var_138.q, var_120 + 1)
        
        int64_t var_128_1 = 0
        int64_t var_120_1 = 0xf
        var_138 = 0
        rdx_40 = var_160
        cond:0 = rdx_40 u< 0x10
else
    sub_14282ff10(arg1, rdx_1)
    rdx_40 = var_160
    cond:0 = rdx_40 u< 0x10

if (not(cond:0))
    sub_14058ba50(var_178.q, rdx_40 + 1)

__security_check_cookie(rax_1 ^ &var_2a8)
return arg1
