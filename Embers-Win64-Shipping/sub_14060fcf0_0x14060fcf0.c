// 函数: sub_14060fcf0
// 地址: 0x14060fcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t result = __security_cookie ^ &var_168
int64_t result_1 = result
int64_t* r12 = arg2

if (*(arg1 + 0xd0) == 0)
    sub_140615620(arg1)
    void* rbx_1 = *(arg1 + 0xc0)
    
    if (rbx_1 != 0)
        sub_14060d4c0(rbx_1)
        j_sub_140a74f90(rbx_1)
    
    *(arg1 + 0xc0) = 0
    char* r14_1 = nullptr
    char* var_68_1 = nullptr
    int64_t rdi_1 = -1
    int32_t var_148
    int32_t var_e8
    char* rdx_1
    int16_t* const rsi_1
    
    if (r12[1].d == 0)
        rsi_1 = &data_142d40450
    label_14060fdc4:
        int64_t rbx_2 = -1
        
        do
            rbx_2 += 1
        while (rsi_1[rbx_2] != 0)
        
        var_148 = 0
        sub_14060af80(&var_148, (rbx_2 << 2).d, rsi_1, rbx_2.d)
        int32_t rax_1 = var_148
        int32_t var_58_2 = rax_1
        
        if (rax_1 + 1 u> 0x80 && rax_1 != 0xffffffff)
            char* rax_2 = sub_140a84c80(0, sx.q(rax_1 + 1), 0)
            r14_1 = rax_2
            var_68_1 = rax_2
        
        char* rcx_4 = &var_e8
        
        if (r14_1 != 0)
            rcx_4 = r14_1
        
        var_148.q = rcx_4
        sub_14060ac90(&var_148, rax_1 + 1, rsi_1, (rbx_2 + 1).d)
        rdx_1 = rcx_4
    else
        rsi_1 = *r12
        
        if (rsi_1 != 0)
            goto label_14060fdc4
        
        rdx_1 = nullptr
        int32_t var_58_1 = 0
        int64_t var_60_1 = 0
    int64_t var_100_1 = 0
    int64_t var_f8_1 = 0xf
    char var_110 = 0
    
    do
        rdi_1 += 1
    while (rdx_1[rdi_1] != 0)
    
    sub_14058ad40(&var_110, rdx_1, rdi_1)
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)
    
    int32_t var_d0_1 = 0x7f
    char var_c0_1 = 0
    void var_130
    int64_t* rax_3 = sub_140592d30(&var_130, &var_110)
    int32_t var_dc_1 = 0x3f800000
    int64_t* var_c8_1 = rax_3
    int64_t var_e4_1 = 0
    int32_t* rax_4 = j_sub_140a82f30(0x20)
    int32_t* rbx_3 = rax_4
    
    if (rax_4 == 0)
        int64_t var_b8_2 = 0
        rbx_3 = nullptr
    else
        __builtin_memset(&rax_4[2], 0, 0x18)
        *rax_4 = 0
        rax_4[1].w = 0
        int32_t* var_b8_1 = rax_4
    
    void* var_b0
    int64_t* rax_5 = public: struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
        &var_b0, 1)
    var_b0 = rax_5
    int32_t var_d8_1 = 5
    int32_t var_d4_1 = 0x64
    *rax_5 = rbx_3
    var_e8 = 4
    sub_1406148d0(&var_e8)
    int64_t rdx_6 = rax_3[3]
    
    if (rdx_6 u>= 0x10)
        void* rcx_11 = *rax_3
        
        if (rdx_6 + 1 u>= 0x1000)
            void* r8_4 = *(rcx_11 - 8)
            
            if (rcx_11 - r8_4 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_11 = r8_4
        
        j_sub_140a74f90(rcx_11)
    
    rax_3[2] = 0
    rax_3[3] = 0xf
    *rax_3 = 0
    int64_t* rax_8 = j_sub_140a82f30(0x28)
    
    if (rax_8 == 0)
        rax_8 = nullptr
    else
        __builtin_memset(&rax_8[2], 0, 0x18)
        rax_8[1].d = 0x1e0
        *rax_8 = 0
    
    void* r14_2 = var_b0
    *(arg1 + 0xc0) = rax_8
    int32_t i_2 = ((&rax_5[1] - r14_2) s>> 3).d
    
    if (i_2 s> 0)
        uint64_t i_1 = zx.q(i_2)
        void* r12_1 = r14_2
        var_148.q = i_1
        uint64_t i
        
        do
            int32_t* rbx_4 = *(arg1 + 0xc0)
            int32_t rcx_15 = 0
            int64_t r15_2 = *r12_1
            int64_t var_140 = r15_2
            int64_t* r9_3 = *(rbx_4 + 0x18)
            int64_t rax_9 = *(rbx_4 + 0x10)
            int32_t rdx_10 = ((r9_3 - rax_9) s>> 3).d
            
            if (rdx_10 s>= 0)
                rcx_15 = rdx_10
            
            int64_t* rsi_2 = rax_9 + (sx.q(rcx_15) << 3)
            
            if (r9_3 == *(rbx_4 + 0x20))
                sub_14060b880(&rbx_4[4], rsi_2, &var_140)
                i_1 = var_148.q
            else if (rsi_2 != r9_3)
                *r9_3 = r9_3[-1]
                *(rbx_4 + 0x18) += 8
                memmove(r9_3 - (r9_3 - rsi_2 - 8), rsi_2, (r9_3 - rsi_2 - 8).d)
                *rsi_2 = r15_2
                i_1 = var_148.q
            else
                *r9_3 = r15_2
                *(rbx_4 + 0x18) += 8
            
            int32_t rcx_21 = ((*(rbx_4 + 0x18) - *(rbx_4 + 0x10)) s>> 3).d
            rbx_4[1] = rcx_21
            int32_t rax_11
            rax_11.b = rcx_21 s> 1
            r12_1 += 8
            i = i_1
            i_1 -= 1
            *rbx_4 = rax_11
            var_148.q = i_1
        while (i != 1)
        rax_8 = *(arg1 + 0xc0)
        r12 = arg2
    
    result = sub_140612870(arg1 + 0xc8, rax_8)
    
    if (r14_2 != 0)
        void* rax_12 = r14_2
        
        if (((&rax_5[1] - r14_2) & 0xfffffffffffffff8) u>= 0x1000)
            r14_2 = *(r14_2 - 8)
            
            if (rax_12 - r14_2 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        result = j_sub_140a74f90(r14_2)
    
    if (var_f8_1 u>= 0x10)
        void* rcx_24 = var_110.q
        void* rax_15 = rcx_24
        
        if (var_f8_1 + 1 u>= 0x1000)
            rcx_24 = *(rcx_24 - 8)
        
        if (var_f8_1 + 1 u>= 0x1000 && rax_15 - rcx_24 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        result = j_sub_140a74f90(rcx_24)
    
    int64_t rcx_25 = *r12
    
    if (rcx_25 != 0)
        result = sub_140a74f90(rcx_25)
else
    int64_t rcx = *arg2
    
    if (rcx != 0)
        result = sub_140a74f90(rcx)

__security_check_cookie(result_1 ^ &var_168)
return result
