// 函数: sub_142981040
// 地址: 0x142981040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_200 = -2
void var_228
int64_t rax_1 = __security_cookie ^ &var_228
char* _Source = arg2
void _Destination
void var_1e8

if (*arg2 == 0)
    sub_1429779b0(&_Destination, 3, 1)
    sub_14058b120(&var_1e8, "Image attribute name cannot be an empty string.")
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_142977aa0(&exceptionObject, &_Destination)
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

strncpy(&_Destination, arg2, 0xff)
char var_f9 = 0
void** r10 = *arg1
void** rbx = r10
void** r8 = r10[1]

while (*(r8 + 0x19) == 0)
    void* rax_2 = &r8[4]
    int64_t r9_1 = &_Destination - rax_2
    uint32_t i
    uint32_t rdx
    
    do
        rdx = zx.d(*rax_2)
        i = zx.d(*(rax_2 + r9_1))
        
        if (rdx != i)
            break
        
        rax_2 += 1
    while (i != 0)
    
    if (rdx - i s>= 0)
        rbx = r8
        r8 = *r8
    else
        r8 = r8[2]

uint32_t i_1
uint32_t rdx_2

if (rbx != r10)
    void* rax_3 = &_Destination
    
    do
        rdx_2 = zx.d(*rax_3)
        i_1 = zx.d(*(rax_3 + &rbx[4] - &_Destination))
        
        if (rdx_2 != i_1)
            break
        
        rax_3 += 1
    while (i_1 != 0)

if (rbx == r10 || rdx_2 - i_1 s< 0)
    rbx = r10

void** var_208 = rbx
int64_t rax_4 = *arg3
void* result

if (rbx != r10)
    int64_t* rdi_1 = rbx[0x24]
    int64_t rax_6 = (*(rax_4 + 8))(arg3)
    int64_t rdx_6 = *rdi_1
    char* rax_7 = (*(rdx_6 + 8))(rdi_1, rdx_6)
    void* rsi_2 = rax_6 - rax_7
    uint32_t i_2
    uint32_t rdx_7
    
    do
        rdx_7 = zx.d(*rax_7)
        i_2 = zx.d(*(rax_7 + rsi_2))
        
        if (rdx_7 != i_2)
            break
        
        rax_7 = &rax_7[1]
    while (i_2 != 0)
    
    if (rdx_7 - i_2 != 0)
        sub_1429779b0(&_Destination, 3, 1)
        int64_t* rcx_15 = *(std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* __ptr64 const,struct xec732bf3::pair::operator[]::_Mutex_count_pair> > > >::operator->(
            &var_208) + 0x100)
        char* rax_11 = (*(*rcx_15 + 8))(rcx_15)
        int64_t rdx_10 = *arg3
        char* rax_12 = (*(rdx_10 + 8))(arg3, rdx_10)
        sub_14058b120(
            sub_14058b120(
                sub_14058b120(
                    sub_14058b120(
                        sub_14058b120(
                            sub_14058b120(
                                sub_14058b120(&var_1e8, "Cannot assign a value of type ""), 
                                rax_12), 
                            "" to image attribute ""), 
                        _Source), 
                    "" of type ""), 
                rax_11), 
            "".")
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_1
        sub_14297d5d0(&exceptionObject_1, &_Destination)
        _CxxThrowException(&exceptionObject_1, &data_143946630)
        noreturn
    
    result = (*(*arg3 + 0x10))(arg3)
    void* result_1 = result
    int64_t* rcx_6 = rbx[0x24]
    
    if (rcx_6 != 0)
        int64_t r8_3 = *rcx_6
        result = (*r8_3)(rcx_6, 1, r8_3)
    
    rbx[0x24] = result_1
else
    void** rax_5 = (*(rax_4 + 0x10))(arg3)
    var_208 = rax_5
    strncpy(&_Destination, _Source, 0xff)
    char var_f9_1 = 0
    result = sub_14297da90(arg1, &_Destination)
    *result = rax_5

__security_check_cookie(rax_1 ^ &var_228)
return result
