// 函数: sub_140a83f20
// 地址: 0x140a83f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
void var_178
sub_1405eb940(&var_178, arg4)
int64_t rsi = 0
int16_t* var_1b8 = nullptr
int32_t rdx_1 = 0
int32_t var_1b0 = 0
int32_t rcx_1 = 0
int32_t var_1ac = 0
int16_t* var_70

if (var_70 != 0 && *var_70 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (var_70[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_1b8, rbx_1.d + 1)
        rcx_1 = var_1ac
        rdx_1 = var_1b0
    
    int32_t rax_2 = rbx_1.d + 1 + rdx_1
    var_1b0 = rax_2
    
    if (rax_2 s> rcx_1)
        sub_140594770(&var_1b8)
    
    UnDecorator::getReferenceType(var_1b8, var_70, (rbx_1.d + 1) * 2)

int64_t var_78

if (var_78 != 0)
    int64_t* rcx_5 = data_143ddb3f0
    
    if (rcx_5 == 0)
        sub_140a750a0()
        rcx_5 = data_143ddb3f0
    
    (*(*rcx_5 + 0x30))(rcx_5, var_78)

sub_140b21570(&var_1b8)
int16_t* rdi

if (sub_140a32a50(&var_1b8, arg1 + 0x18, 1) == 0)
    *arg2 = nullptr
    rdi.b = 0
else
    int32_t var_1a8
    sub_140926e00(arg1 + 0x290, &var_1a8, &var_1b8)
    int64_t rax_5 = sx.q(var_1a8)
    void* const rcx_9
    
    if (rax_5.d == 0xffffffff)
        rcx_9 = nullptr
    else
        rcx_9 = *(arg1 + 0x290) + rax_5 * 0x28
    
    int32_t* rbx_4 = rcx_9 + 0x10
    
    if (rcx_9 == 0)
        rbx_4 = nullptr
    
    if (rbx_4 != 0)
    label_140a8418a:
        *rbx_4 += 1
        int16_t* rax_16 = j_sub_140a82f30(0x10)
        
        if (rax_16 == 0)
            *arg2 = nullptr
            rsi = *(rbx_4 + 8)
            rdi.b = 1
        else
            *rax_16 = 0
            int16_t* r15_2 = var_1b8
            *(rax_16 + 8) = var_1b0
            
            if (var_1b0 != 0)
                sub_1405a4c70(rax_16, var_1b0, 0)
                memcpy(*rax_16, r15_2, var_1b0 * 2)
                *arg2 = rax_16
                rdi.b = 1
                rsi = *(rbx_4 + 8)
            else
                *(rax_16 + 0xc) = 0
                rdi.b = 1
                *arg2 = rax_16
                rsi = *(rbx_4 + 8)
    else
        sub_140a464c0()
        int16_t* const rdx_8 = &data_142d40450
        
        if (var_1b0 != 0)
            rdx_8 = var_1b8
        
        char const (* r9)[0x4] = data_14399ea08
        int16_t* rax_7 = (*(r9 + 0x18))(&data_14399ea08, rdx_8, 0, r9)
        
        if (rax_7 != 0)
            int64_t rdx_9 = *rax_7
            int64_t rax_8 = (*(rdx_9 + 0x28))(rax_7, rdx_9)
            int64_t* rcx_11 = data_143ddb3f0
            int32_t var_1a0 = 0
            int64_t rax_9
            
            if (rcx_11 != 0)
                rax_9 = (*(*rcx_11 + 0x10))(rcx_11, rax_8, 0)
            else
                sub_140a750a0()
                int64_t* rcx_12 = data_143ddb3f0
                int64_t r9_1 = *rcx_12
                rax_9 = (*(r9_1 + 0x10))(rcx_12, rax_8, 0, r9_1)
            
            int16_t** var_190 = &var_1b8
            int32_t* var_188_1 = &var_1a0
            sub_140a5c1a0(arg1 + 0x290, &var_1a8, &var_190, nullptr)
            rbx_4 = *(arg1 + 0x290) + ((sx.q(var_1a8) * 5 + 2) << 3)
            
            if (rax_9 != 0)
                int64_t* rcx_14 = data_143ddb3f0
                
                if (rcx_14 == 0)
                    sub_140a750a0()
                    rcx_14 = data_143ddb3f0
                
                (*(*rcx_14 + 0x30))(rcx_14, rax_9)
            
            (*(*rax_7 + 0x150))(rax_7, *(rbx_4 + 8), rax_8)
            (**rax_7)(rax_7, 1)
        
        if (rbx_4 != 0)
            goto label_140a8418a
        
        *arg2 = nullptr
        rdi.b = 0

*arg3 = rsi
int16_t* rbx_7 = var_1b8

if (rbx_7 != 0)
    int64_t* rcx_19 = data_143ddb3f0
    
    if (rcx_19 != 0)
        (*(*rcx_19 + 0x30))(rcx_19, rbx_7)
    else
        sub_140a750a0()
        int64_t* rcx_20 = data_143ddb3f0
        int64_t r8_7 = *rcx_20
        (*(r8_7 + 0x30))(rcx_20, rbx_7, r8_7)

__security_check_cookie(rax_1 ^ &var_1d8)
return zx.q(rdi.b)
