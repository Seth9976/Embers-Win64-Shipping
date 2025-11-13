// 函数: sub_1429cab70
// 地址: 0x1429cab70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = arg2.b
int64_t* arg_8 = arg1
int64_t var_28 = -2
char* rbx

if (arg2 == 0)
    rbx = nullptr
else if (arg2 u< 0x1000)
    char* rax_2 = j_sub_140a82f30(arg2)
    rbx = rax_2
    
    if (rax_2 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
else
    if (arg2 + 0x27 u<= arg2)
        std::_Xbad_alloc()
        noreturn
    
    int64_t rax_1 = j_sub_140a82f30(arg2 + 0x27)
    
    if (rax_1 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rbx = (rax_1 + 0x27) & 0xffffffffffffffe0
    *(rbx - 8) = rax_1

char* arg_18 = rbx
char var_30 = arg_10
char var_38 = arg_10
sub_1429c9a60(*arg1, arg1[1], rbx)
void* rcx_3 = *arg1
void* r14_1 = arg1[1] - rcx_3

if (rcx_3 != 0)
    if (arg1[2] - rcx_3 u>= 0x1000)
        if ((rcx_3.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_7 = *(rcx_3 - 8)
        
        if (rax_7 u>= rcx_3)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_4 = rcx_3 - rax_7
        
        if (rcx_4 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_4 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_3 = rax_7
    
    j_sub_140a74f90(rcx_3)

arg1[2] = &rbx[arg2]
void* result = rbx + r14_1
arg1[1] = result
*arg1 = rbx
return result
