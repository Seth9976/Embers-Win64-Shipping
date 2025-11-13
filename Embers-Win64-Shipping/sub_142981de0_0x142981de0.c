// 函数: sub_142981de0
// 地址: 0x142981de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_578 = -2
void var_5c8
int64_t rax_1 = __security_cookie ^ &var_5c8
int32_t r13 = 0
void _Destination
void var_558
char _Source[0x100]

while (true)
    char (* rbx_1)[0x100] = &_Source
    int32_t rdi_1 = 0xff
    int32_t temp0_1
    
    do
        (*(*arg2 + 0x10))(arg2, rbx_1, 1)
        
        if (*rbx_1 == 0)
            break
        
        rbx_1 = &(*rbx_1)[1]
        temp0_1 = rdi_1
        rdi_1 -= 1
    while (temp0_1 - 1 s>= 0)
    
    if (_Source[0] == 0)
        bool result = r13 == 0
        arg1[2].b = result
        __security_check_cookie(rax_1 ^ &var_5c8)
        return result
    
    r13 += 1
    int64_t rax_3 = 0
    
    while (true)
        if (rax_3 u>= 0x100)
            sub_1429779b0(&_Destination, 3, 1)
            sub_14058b120(
                std::ostream::operator<<(sub_14058b120(
                    sub_14058b120(sub_14058b120(&var_558, "Invalid "), "attribute name"), 
                    ": it is more than ")), 
                " characters long.")
            struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_2
            sub_14297d5a0(&exceptionObject_2, &_Destination)
            _CxxThrowException(&exceptionObject_2, &data_1439465c8)
            noreturn
        
        if (_Source[rax_3] == 0)
            break
        
        rax_3 += 1
    
    char _Str2[0x100]
    char (* rbx_2)[0x100] = &_Str2
    int32_t rdi_2 = 0xff
    int32_t temp1_1
    
    do
        (*(*arg2 + 0x10))(arg2, rbx_2, 1)
        
        if (*rbx_2 == 0)
            break
        
        rbx_2 = &(*rbx_2)[1]
        temp1_1 = rdi_2
        rdi_2 -= 1
    while (temp1_1 - 1 s>= 0)
    int64_t rax_5 = 0
    
    while (true)
        if (rax_5 u>= 0x100)
            sub_1429779b0(&_Destination, 3, 1)
            sub_14058b120(
                std::ostream::operator<<(sub_14058b120(
                    sub_14058b120(sub_14058b120(&var_558, "Invalid "), "attribute type name"), 
                    ": it is more than ")), 
                " characters long.")
            struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_1
            sub_14297d5a0(&exceptionObject_1, &_Destination)
            _CxxThrowException(&exceptionObject_1, &data_1439465c8)
            noreturn
        
        if (_Str2[rax_5] == 0)
            break
        
        rax_5 += 1
    
    char var_598
    (*(*arg2 + 0x10))(arg2, &var_598, 4)
    char var_597
    char var_596
    char var_595
    int32_t rsi_7 = ((sx.d(var_595) << 8 | zx.d(var_596)) << 8 | zx.d(var_597)) << 8 | zx.d(var_598)
    char _Destination_1[0xff]
    strncpy(&_Destination_1, &_Source, 0xff)
    char var_249_1 = 0
    void** rbx_3 = *arg1
    void** r8 = rbx_3[1]
    void** r10_1 = rbx_3
    
    while (*(r8 + 0x19) == 0)
        void* rax_10 = &r8[4]
        int64_t r9_1 = &_Destination_1 - rax_10
        uint32_t i
        uint32_t rdx_4
        
        do
            rdx_4 = zx.d(*rax_10)
            i = zx.d(*(rax_10 + r9_1))
            
            if (rdx_4 != i)
                break
            
            rax_10 += 1
        while (i != 0)
        
        if (rdx_4 - i s>= 0)
            rbx_3 = r8
            r8 = *r8
        else
            r8 = r8[2]
    
    uint32_t rcx_6
    uint32_t i_1
    
    if (rbx_3 != r10_1)
        char (* rax_11)[0xff] = &_Destination_1
        
        do
            rcx_6 = zx.d(*rax_11)
            i_1 = zx.d((*rax_11)[&rbx_3[4] - &_Destination_1])
            
            if (rcx_6 != i_1)
                break
            
            rax_11 = &(*rax_11)[1]
        while (i_1 != 0)
    
    if (rbx_3 == r10_1 || rcx_6 - i_1 s< 0)
        rbx_3 = r10_1
    
    int64_t* var_5a8
    
    if (rbx_3 == r10_1)
        int64_t* rdi_3
        
        if (sub_14298c840(&_Str2) == 0)
            struct Imf_2_3::Attribute::VTable** rax_18 = j_sub_140a82f30(0x30)
            struct Imf_2_3::Attribute::VTable** var_570_1 = rax_18
            
            if (rax_18 == 0)
                rdi_3 = nullptr
            else
                rdi_3 = sub_1429a1bf0(rax_18, &_Str2)
        else
            rdi_3 = sub_14298c930(&_Str2)
        
        int64_t* var_590_1 = rdi_3
        (*(*rdi_3 + 0x20))(rdi_3, arg2, zx.q(rsi_7), zx.q(*arg3), var_5a8)
        strncpy(&_Destination, &_Source, 0xff)
        char var_469_1 = 0
        void** rbx_4 = *arg1
        void** r8_5 = rbx_4[1]
        void** r10_2 = rbx_4
        
        while (*(r8_5 + 0x19) == 0)
            void* rax_21 = &r8_5[4]
            int64_t r9_4 = &_Destination - rax_21
            uint32_t i_2
            uint32_t rdx_11
            
            do
                rdx_11 = zx.d(*rax_21)
                i_2 = zx.d(*(rax_21 + r9_4))
                
                if (rdx_11 != i_2)
                    break
                
                rax_21 += 1
            while (i_2 != 0)
            
            if (rdx_11 - i_2 s>= 0)
                rbx_4 = r8_5
                r8_5 = *r8_5
            else
                r8_5 = r8_5[2]
        
        uint32_t rcx_16
        uint32_t i_3
        
        if (rbx_4 != r10_2)
            void* rax_22 = &_Destination
            
            do
                rcx_16 = zx.d(*rax_22)
                i_3 = zx.d(*(rax_22 + &rbx_4[4] - &_Destination))
                
                if (rcx_16 != i_3)
                    break
                
                rax_22 += 1
            while (i_3 != 0)
        
        if (rbx_4 == r10_2 || rcx_16 - i_3 s< 0)
            void* var_588 = &_Destination
            int64_t* rax_23 = sub_14297c450(arg1, &data_143552141, &var_588)
            var_5a8 = rax_23
            void** var_580
            sub_14297c7d0(arg1, &var_580, rbx_4, &rax_23[4], var_5a8)
            rbx_4 = var_580
        
        rbx_4[0x24] = rdi_3
    else
        int64_t* rcx_8 = rbx_3[0x24]
        
        if (strncmp((*(*rcx_8 + 8))(rcx_8), &_Str2, 0x100) != 0)
            break
        
        int64_t* rcx_10 = rbx_3[0x24]
        (*(*rcx_10 + 0x20))(rcx_10, arg2, zx.q(rsi_7), zx.q(*arg3), var_5a8)

sub_1429779b0(&_Destination, 3, 1)
sub_14058b120(
    sub_14058b120(sub_14058b120(&var_558, "Unexpected type for image attribute ""), &_Source), "".")
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
sub_14297d5a0(&exceptionObject, &_Destination)
_CxxThrowException(&exceptionObject, &data_1439465c8)
noreturn
