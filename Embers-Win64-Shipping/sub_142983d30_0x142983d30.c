// 函数: sub_142983d30
// 地址: 0x142983d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_188 = -2
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t r14 = 0
int32_t var_194 = 0
int64_t result = 0
int64_t rax_2 = sub_14297cf30(arg1, "preview")
int64_t* rdx = *arg1
void* rax_3 = *rdx
void* var_190 = rax_3

for (bool cond:0 = rax_3 == rdx; not(cond:0); cond:0 = rax_3 == *arg1)
    char* rdi_1 = rax_3 + 0x20
    
    if (*(rax_3 + 0x20) != 0)
        do
            (*(*arg2 + 8))(arg2, rdi_1, 1)
            rdi_1 = &rdi_1[1]
        while (*rdi_1 != 0)
    
    (*(*arg2 + 8))(arg2, rdi_1, 1)
    int64_t* rcx_2 = *(rax_3 + 0x120)
    char* rax_7 = (*(*rcx_2 + 8))(rcx_2)
    char* rdi_2 = rax_7
    
    if (*rax_7 != 0)
        do
            (*(*arg2 + 8))(arg2, rdi_2, 1)
            rdi_2 = &rdi_2[1]
        while (*rdi_2 != 0)
    
    (*(*arg2 + 8))(arg2, rdi_2, 1)
    struct Imf_2_3::OStream::VTable* var_158
    sub_14298b370(&var_158)
    int64_t* rcx_6 = *(rax_3 + 0x120)
    (*(*rcx_6 + 0x18))(rcx_6, &var_158, 2)
    int32_t var_170_1 = 0
    int64_t var_168_1 = 0xf
    char var_180 = 0
    int32_t r14_1 = r14 | 4
    int32_t var_194_1 = r14_1
    char var_b8
    int64_t r8_1
    int64_t* var_e8
    
    if ((var_b8 & 2) == 0)
        r8_1 = *var_e8
    int64_t rdx_6
    
    if ((var_b8 & 2) == 0 && r8_1 != 0)
        int64_t* var_108
        rdx_6 = *var_108
        int64_t var_c0
        
        if (r8_1 u< var_c0)
            r8_1 = var_c0
        
        sub_14058ad40(&var_180, rdx_6, r8_1 - rdx_6)
    else if ((var_b8 & 4) == 0)
        int64_t* var_f0
        int64_t rcx_8 = *var_f0
        
        if (rcx_8 != 0)
            int64_t* var_110
            rdx_6 = *var_110
            int32_t* var_d8
            sub_14058ad40(&var_180, rdx_6, sx.q(*var_d8) - rdx_6 + rcx_8)
    r14 = (r14_1 & 0xfffffffb) | 3
    char var_198 = var_170_1.b
    char var_197_1 = (var_170_1 s>> 8).b
    char var_196_1 = (var_170_1 s>> 0x10).b
    char var_195_1 = (var_170_1 s>> 0x18).b
    (*(*arg2 + 8))(arg2, &var_198, 4)
    
    if (*(rax_3 + 0x120) == rax_2)
        result = (*(*arg2 + 0x10))(arg2)
    
    char* rdx_8 = &var_180
    
    if (var_168_1 u>= 0x10)
        rdx_8 = var_180.q
    
    int64_t r9_1 = *arg2
    (*(r9_1 + 8))(arg2, rdx_8, zx.q(var_170_1), r9_1)
    
    if (var_168_1 u>= 0x10)
        void* rcx_15 = var_180.q
        void* rax_24 = rcx_15
        
        if (var_168_1 + 1 u>= 0x1000)
            rcx_15 = *(rcx_15 - 8)
            
            if (rax_24 - rcx_15 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_15)
    
    int64_t var_170_2 = 0
    int64_t var_168_2 = 0xf
    var_180 = 0
    void* var_130
    *(&var_130 + sx.q(*(var_130 + 4))) = &std::ostringstream::`vftable'
    int64_t rcx_17 = sx.q(*(var_130 + 4))
    void var_134
    *(&var_134 + rcx_17) = (rcx_17 - 0x88).d
    struct std::streambuf::std::stringbuf::VTable* var_128
    sub_140589260(&var_128)
    std::ostream::~ostream<char, struct std::char_traits<char> >()
    class std::basic_ios<unsigned short> var_a8
    std::ios::~ios<char, struct std::char_traits<char> >(&var_a8)
    sub_14297ac20(&var_158)
    sub_14297bb00(&var_190)
    rax_3 = var_190

(*(*arg2 + 8))(arg2, &data_1437020ab, 1)
__security_check_cookie(rax_1 ^ &var_1b8)
return result
