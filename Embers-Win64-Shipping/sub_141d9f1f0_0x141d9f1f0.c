// 函数: sub_141d9f1f0
// 地址: 0x141d9f1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t r14 = sx.q(arg2)
int64_t* rcx = arg1[0x30]
void* r8_2 = &rcx[sx.q(arg1[0x31].d) * 2]

if (rcx != r8_2)
    while (*(*rcx + 0x18) != 0xa)
        rcx = &rcx[2]
        
        if (rcx == r8_2)
            goto label_141d9f246
    
    goto label_141d9f258

label_141d9f246:
void* rax_3 = arg1[0x32]
char result
void** const var_f8
void*** var_e8

if (rax_3 != 0 && *(rax_3 + 0x18) == 0xa)
label_141d9f258:
    int64_t* rbx_1 = nullptr
    int32_t var_dc_1 = 0xfffffffe
    result = -0x78
    int32_t var_e0_1 = 0xfffffffe
    var_e8 = -ffffffffffffffff
    var_f8 = &data_142fc8f88
    int64_t var_f0_1 = 6
    
    if (arg3[1].d != 0)
        int64_t* rcx_1 = *arg3
        
        if (rcx_1 != 0)
            result = (*(*rcx_1 + 0x28))(rcx_1)
            
            if (result != 0)
                if (arg3[1].d != 0)
                    rbx_1 = *arg3
                
                result = (*(*rbx_1 + 0x50))(rbx_1, &var_f8)
else
    int64_t* var_110
    int64_t (* var_b8)()
    void** const var_98
    
    if (r14.d != 0xffffffff)
        if (arg2 s< 0 || r14.d s>= arg1[0x24].d)
            goto label_141d9f258
        
        var_f8 = arg1
        int32_t var_f0 = r14.d
        var_e8 = nullptr
        int32_t var_e0_2 = 0
        void*** var_a8_2
        void* (* var_78)(int64_t* arg1, void* arg2)
        void*** var_68_1
        
        if (arg4 != 1)
            if (arg3 != &var_e8 && arg3[1].d != 0)
                int64_t* rcx_14 = *arg3
                
                if (rcx_14 != 0)
                    (*(*rcx_14 + 0x40))(rcx_14, &var_e8)
            
            void*** rax_18 = sub_140a82f30(0x28, 8)
            *rax_18 = &data_143239850
            rax_18[1] = var_f8
            rax_18[2].d = var_f0
            rax_18[3] = 0
            rax_18[4].d = 0
            
            if (&var_e8 != &rax_18[3] && var_e0_2 != 0)
                void*** rcx_17 = var_e8
                
                if (rcx_17 != 0)
                    (*rcx_17)[8](rcx_17)
            
            int64_t* var_128_1 = &var_78
            *rax_18 = &data_143239870
            void* (* rax_20)(int64_t* arg1, void* arg2) = var_78
            var_68_1 = rax_18
            var_a8_2 = nullptr
            
            if (rax_18 != -8)
                rax_20 = &data_141d9bd40
            
            var_110.d = r14.d
            var_78 = rax_20
            var_98 = &data_142d42ed8
            var_b8 = j_sub_141d987f0
            int128_t var_90_2 = arg1.o
            sub_141d922d0(arg1, 0xa, *(arg1[0x23] + r14 * 0x50), &var_b8, var_128_1)
        else
            if (arg3 != &var_e8 && arg3[1].d != 0)
                int64_t* rcx_9 = *arg3
                
                if (rcx_9 != 0)
                    (*(*rcx_9 + 0x40))(rcx_9, &var_e8)
            
            void*** rax_14 = sub_140a82f30(0x28, 8)
            *rax_14 = &data_143239850
            rax_14[1] = var_f8
            rax_14[2].d = var_f0
            rax_14[3] = 0
            rax_14[4].d = 0
            
            if (&var_e8 != &rax_14[3] && var_e0_2 != 0)
                void*** rcx_12 = var_e8
                
                if (rcx_12 != 0)
                    (*rcx_12)[8](rcx_12)
            
            *rax_14 = &data_143239870
            void* (* rax_16)(int64_t* arg1, void* arg2) = var_78
            var_110.d = r14.d
            
            if (rax_14 != -8)
                rax_16 = j_sub_141d9a710
            
            var_68_1 = rax_14
            var_78 = rax_16
            var_a8_2 = nullptr
            var_98 = &data_142d42ed8
            var_b8 = j_sub_141d98c50
            int128_t var_90_1 = arg1.o
            sub_141d92e20(arg1, 0xa, &var_b8, &var_78)
        
        if (var_b8 != 0)
            void** const* rcx_21 = &var_98
            
            if (var_a8_2 != 0)
                rcx_21 = var_a8_2
            
            (*rcx_21)[2](rcx_21)
        
        if (var_78 != 0)
            void var_58
            void*** rcx_22 = &var_58
            
            if (var_68_1 != 0)
                rcx_22 = var_68_1
            
            (*rcx_22)[2](rcx_22)
        
        result = sub_140745b20(&var_e8)
    else
        var_110 = nullptr
        int64_t* rcx_3 = nullptr
        int32_t var_108_1 = 0
        int32_t rdx_1 = 0
        
        if (arg3 != &var_110 && arg3[1].d != 0)
            int64_t* r8_3 = *arg3
            
            if (r8_3 != 0)
                (*(*r8_3 + 0x40))(r8_3, &var_110)
                rdx_1 = var_108_1
                rcx_3 = var_110
        
        var_e8 = nullptr
        void** const var_d8 = &data_143239620
        void** var_d0_1 = arg1
        int64_t var_c8 = 0
        int32_t var_c0_1 = 0
        
        if (rdx_1 != 0 && rcx_3 != 0)
            (*(*rcx_3 + 0x40))(rcx_3, &var_c8)
        
        void*** var_a8_1 = nullptr
        var_d8 = &data_143239640
        var_f8 = j_sub_141d986c0
        var_98 = &data_142d42d18
        var_b8 = sub_140594850
        sub_141d9b830(arg1, 0xa, &var_b8, &var_f8)
        
        if (var_b8 != 0)
            void** const* rcx_6 = &var_98
            
            if (var_a8_1 != 0)
                rcx_6 = var_a8_1
            
            (*rcx_6)[2](rcx_6)
        
        if (var_f8 != 0)
            void*** rax_11 = var_e8
            void** const* rcx_7 = &var_d8
            
            if (rax_11 != 0)
                rcx_7 = rax_11
            
            (*rcx_7)[2](rcx_7)
        
        result = sub_140745b20(&var_110)
__security_check_cookie(rax_1 ^ &var_148)
return result
