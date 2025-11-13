// 函数: unzOpenInternal
// 地址: 0x140b1e8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* rax_2 = arg2

if (arg2 == 0)
    rax_2 = sub_140a464c0()

int64_t r9 = *rax_2
int64_t* result = (*(r9 + 0x18))(rax_2, arg1, 0, r9)

if (result != 0)
    int64_t rdx_1 = *result
    int32_t rax_3 = (*(rdx_1 + 0x28))(result, rdx_1)
    int64_t* result_1 = nullptr
    int32_t rsi_1 = 0
    int64_t var_180_1 = 0
    int32_t rdx_2 = 0
    
    if (rax_3 != 0xffffffff)
        sub_1405c5510(&result_1, rax_3 + 1)
        rdx_2 = var_180_1.d
        rsi_1 = var_180_1:4.d
    
    int32_t rbx_1 = rax_3 + rdx_2
    var_180_1.d = rbx_1
    
    if (rbx_1 s> rsi_1)
        sub_1405daba0(&result_1)
        rsi_1 = var_180_1:4.d
        rbx_1 = var_180_1.d
    
    int64_t* result_2 = result_1
    (*(*result + 0x150))(result, result_2, sx.q(rax_3))
    var_180_1.d = rbx_1 + 1
    
    if (rbx_1 + 1 s> rsi_1)
        sub_1405daba0(&result_1)
        result_2 = result_1
    
    *(sx.q(rbx_1) + result_2) = 0
    (**result)(result, 1)
    int64_t r12
    r12.b = 0
    int64_t* result_3 = result_2
    
    do
        char i_2 = *result_3
        int64_t* result_4 = result_3
        char i
        
        if (i_2 != 0)
            char i_1 = i_2
            
            do
                i = i_1
                
                if (i_1 == 0xd)
                    break
                
                if (i_1 == 0xa)
                    break
                
                i = *(result_3 + 1)
                result_3 += 1
                i_1 = i
            while (i != 0)
        
        if (i_2 == 0 || i == 0)
            r12.b = 1
        else if (i != 0xd || *(result_3 + 1) != 0xa)
            *result_3 = 0
            result_3 += 1
        else
            *result_3 = 0
            result_3 += 2
        
        void var_168
        sub_1405eb940(&var_168, result_4)
        int64_t r15_1 = 0
        int32_t rsi_2 = 0
        int64_t var_178 = 0
        int32_t rax_9 = 0
        int64_t var_170_1 = 0
        int16_t* var_60
        
        if (var_60 != 0 && *var_60 != 0)
            int64_t rdi_1 = -1
            
            do
                rdi_1 += 1
            while (var_60[rdi_1] != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(&var_178, rdi_1.d + 1)
                rax_9 = var_170_1:4.d
                rsi_2 = var_170_1.d
                r15_1 = var_178
            
            rsi_2 += rdi_1.d + 1
            var_170_1.d = rsi_2
            
            if (rsi_2 s> rax_9)
                sub_140594770(&var_178)
                rsi_2 = var_170_1.d
                r15_1 = var_178
            
            UnDecorator::getReferenceType(r15_1, var_60, (rdi_1.d + 1) * 2)
        
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t rdi_3 = sx.q(arg3[1].d)
        int32_t rax_10 = (rdi_3 + 1).d
        arg3[1].d = rax_10
        
        if (rax_10 s> *(arg3 + 0xc))
            sub_1405a4f90(arg3)
        
        int64_t* rdi_5 = (rdi_3 << 4) + *arg3
        *rdi_5 = 0
        rdi_5[1].d = rsi_2
        
        if (rsi_2 != 0)
            sub_1405a4c70(rdi_5, rsi_2, 0)
            memcpy(*rdi_5, r15_1, rsi_2 * 2)
        else
            *(rdi_5 + 0xc) = 0
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
    while (r12.b == 0)
    
    result = result_1
    
    if (result != 0)
        sub_140a74f90(result)
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_1a8)
return result
