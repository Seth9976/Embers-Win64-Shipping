// 函数: sub_140b3ee30
// 地址: 0x140b3ee30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
char* var_158 = arg1
int32_t var_178
sub_140865c40(&data_1439a9300, &var_178, arg1)
int64_t rax_2 = sx.q(var_178)
void* const rcx

if (rax_2.d == 0xffffffff)
    rcx = nullptr
else
    rcx = data_1439a9300 + rax_2 * 0x18

int32_t* rax_4 = rcx + 8

if (rcx == 0)
    rax_4 = nullptr

uint64_t result

if (rax_4 == 0)
    void var_148
    sub_1405eb940(&var_148, arg1)
    int32_t rdx_3 = 0
    int32_t var_168_1 = 0
    int32_t rcx_2 = 0
    int32_t var_164_1 = 0
    char** rdi_1 = nullptr
    char** var_170 = nullptr
    int16_t* var_40
    
    if (var_40 != 0 && *var_40 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (var_40[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_170, rbx_1.d + 1)
            rcx_2 = var_164_1
            rdx_3 = var_168_1
            rdi_1 = var_170
        
        int32_t rax_5 = rdx_3 + rbx_1.d + 1
        var_168_1 = rax_5
        
        if (rax_5 s> rcx_2)
            sub_140594770(&var_170)
            rdi_1 = var_170
        
        UnDecorator::getReferenceType(rdi_1, var_40, (rbx_1.d + 1) * 2)
    
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    sub_1408f1b50(&data_1439a9350, &var_178, &var_170)
    int64_t rax_6 = sx.q(var_178)
    void* const rcx_9
    
    if (rax_6.d == 0xffffffff)
        rcx_9 = nullptr
    else
        rcx_9 = (rax_6 << 5) + data_1439a9350
    
    int32_t* rbx_3 = rcx_9 + 0x10
    
    if (rcx_9 == 0)
        rbx_3 = nullptr
    
    int32_t result_1
    
    if (rbx_3 == 0)
        int32_t result_2 = data_143de71a0
        sub_140b2c340(&data_1439a9350, &var_170, &result_2)
        int64_t rbx_4 = sx.q(data_143de71a0)
        int32_t rax_8 = (rbx_4 + 1).d
        bool cond:1_1 = rax_8 s<= data_143de71a4
        data_143de71a0 = rax_8
        
        if (not(cond:1_1))
            sub_1405a4f90(&data_143de7198)
        
        rdi_1 = var_170
        int64_t* rbx_6 = (rbx_4 << 4) + data_143de7198
        *rbx_6 = 0
        rbx_6[1].d = var_168_1
        
        if (var_168_1 != 0)
            sub_1405a4c70(rbx_6, var_168_1, 0)
            memcpy(*rbx_6, rdi_1, var_168_1 * 2)
        else
            *(rbx_6 + 0xc) = 0
        
        var_170 = &var_158
        var_168_1.q = &result_2
        sub_140b2c6c0(&data_1439a9300, &var_178, &var_170, nullptr)
        result_1 = result_2
    else
        var_168_1.q = rbx_3
        var_170 = &var_158
        sub_140b2c6c0(&data_1439a9300, &var_178, &var_170, nullptr)
        result_1 = *rbx_3
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    result = zx.q(result_1)
else
    result = zx.q(*rax_4)

__security_check_cookie(rax_1 ^ &var_198)
return result
