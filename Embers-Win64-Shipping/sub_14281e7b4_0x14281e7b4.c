// 函数: sub_14281e7b4
// 地址: 0x14281e7b4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
char* result
char var_50

if (*(arg1 + 0xb0) != *(arg1 + 0xb8))
    if (arg1[0xd2] != 0)
        int64_t var_40_2 = 0
        int64_t var_38_2 = 0xf
        var_50 = 0
        SimpleString::operator=(&var_50, "invalid tag")
        *arg1 = 0
        
        if (&arg1[8] != &var_50)
            char* r9_3 = &var_50
            
            if (var_38_2 u>= 0x10)
                r9_3 = var_50.q
            
            if (var_40_2 u> *(arg1 + 0x20))
                int64_t r8_5
                r8_5.b = 0
                sub_14058b8a0(&arg1[8], var_40_2, r8_5, r9_3)
            else
                void* r15_1 = &arg1[8]
                
                if (*(arg1 + 0x20) u>= 0x10)
                    r15_1 = *(arg1 + 8)
                
                *(arg1 + 0x18) = var_40_2
                memmove(r15_1, r9_3, var_40_2.d)
                *(r15_1 + var_40_2) = 0
        
        if (var_38_2 u>= 0x10)
            sub_14058ba50(var_50.q, var_38_2 + 1)
    
    if (arg1[0xd0] != 0)
        int64_t var_40_3 = 0
        int64_t var_38_3 = 0xf
        var_50 = 0
        SimpleString::operator=(&var_50, "invalid anchor")
        *arg1 = 0
        
        if (&arg1[8] != &var_50)
            char* r9_4 = &var_50
            
            if (var_38_3 u>= 0x10)
                r9_4 = var_50.q
            
            if (var_40_3 u> *(arg1 + 0x20))
                int64_t r8_7
                r8_7.b = 0
                sub_14058b8a0(&arg1[8], var_40_3, r8_7, r9_4)
            else
                void* r15_2 = &arg1[8]
                
                if (*(arg1 + 0x20) u>= 0x10)
                    r15_2 = *(arg1 + 8)
                
                *(arg1 + 0x18) = var_40_3
                memmove(r15_2, r9_4, var_40_3.d)
                *(r15_2 + var_40_3) = 0
        
        if (var_38_3 u>= 0x10)
            sub_14058ba50(var_50.q, var_38_3 + 1)
    
    void* rax_3 = *(arg1 + 0xb8)
    int32_t* rsi_4 = *(rax_3 - 8)
    *(rax_3 - 8) = 0
    int32_t* var_58_1 = rsi_4
    void* rax_4 = *(arg1 + 0xb8)
    void* r15_3 = *(rax_4 - 8)
    
    if (r15_3 != 0)
        sub_14281e584(r15_3 + 0x20)
        j_sub_140a74f90(r15_3)
        rax_4 = *(arg1 + 0xb8)
    
    *(arg1 + 0xb8) = rax_4 - 8
    
    if (*rsi_4 == arg2)
        sub_14281e584(&rsi_4[8])
        j_sub_140a74f90(rsi_4)
        void* rax_6 = *(arg1 + 0xb8)
        int64_t rax_7
        
        if (*(arg1 + 0xb0) != rax_6)
            rax_7 = *(*(rax_6 - 8) + 8)
        else
            rax_7 = 0
        
        *(arg1 + 0xc8) -= rax_7
        int64_t r14_3 = *(arg1 + 0xa0)
        
        for (int64_t* i = *(arg1 + 0x98); i != r14_3; i = &i[1])
            int64_t* rcx_24 = *i
            (*(*rcx_24 + 8))(rcx_24)
        
        result = sub_14281e68c(arg1)
        arg1[0xd0] = 0
        *(arg1 + 0xd2) = 0
    else
        int64_t var_40_4 = 0
        int64_t var_38_4 = 0xf
        var_50 = 0
        SimpleString::operator=(&var_50, "unmatched group tag")
        *arg1 = 0
        
        if (&arg1[8] != &var_50)
            char* r9_5 = &var_50
            
            if (var_38_4 u>= 0x10)
                r9_5 = var_50.q
            
            if (var_40_4 u> *(arg1 + 0x20))
                int64_t r8_9
                r8_9.b = 0
                sub_14058b8a0(&arg1[8], var_40_4, r8_9, r9_5)
            else
                void* r15_4 = &arg1[8]
                
                if (*(arg1 + 0x20) u>= 0x10)
                    r15_4 = *(arg1 + 8)
                
                *(arg1 + 0x18) = var_40_4
                memmove(r15_4, r9_5, var_40_4.d)
                *(r15_4 + var_40_4) = 0
        
        if (var_38_4 u>= 0x10)
            sub_14058ba50(var_50.q, var_38_4 + 1)
        
        int64_t var_40_5 = 0
        int64_t var_38_5 = 0xf
        var_50 = 0
        sub_14281e584(&rsi_4[8])
        result = j_sub_140a74f90(rsi_4)
else
    char* rcx = &var_50
    int64_t var_40_1 = 0
    var_50 = 0
    int64_t var_38_1 = 0xf
    
    if (arg2 != 1)
        SimpleString::operator=(rcx, "unexpected end map token")
        *arg1 = 0
        result = &var_50
        
        if (&arg1[8] != &var_50)
            char* r9_2 = &var_50
            
            if (var_38_1 u>= 0x10)
                r9_2 = var_50.q
            
            if (var_40_1 u> *(arg1 + 0x20))
                int64_t r8_3
                r8_3.b = 0
                result = sub_14058b8a0(&arg1[8], var_40_1, r8_3, r9_2)
            else
                void* r14_2 = &arg1[8]
                
                if (*(arg1 + 0x20) u>= 0x10)
                    r14_2 = *(arg1 + 8)
                
                *(arg1 + 0x18) = var_40_1
                result = memmove(r14_2, r9_2, var_40_1.d)
                *(r14_2 + var_40_1) = 0
    else
        SimpleString::operator=(rcx, "unexpected end sequence token")
        *arg1 = 0
        result = &var_50
        
        if (&arg1[8] != &var_50)
            char* r9_1 = &var_50
            
            if (var_38_1 u>= 0x10)
                r9_1 = var_50.q
            
            if (var_40_1 u> *(arg1 + 0x20))
                int64_t r8_1
                r8_1.b = 0
                result = sub_14058b8a0(&arg1[8], var_40_1, r8_1, r9_1)
            else
                void* r14_1 = &arg1[8]
                
                if (*(arg1 + 0x20) u>= 0x10)
                    r14_1 = *(arg1 + 8)
                
                *(arg1 + 0x18) = var_40_1
                result = memmove(r14_1, r9_1, var_40_1.d)
                *(r14_1 + var_40_1) = 0
    
    if (var_38_1 u>= 0x10)
        result = sub_14058ba50(var_50.q, var_38_1 + 1)
__security_check_cookie(rax_1 ^ &var_78)
return result
