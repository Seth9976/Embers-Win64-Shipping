// 函数: sub_140aed3f0
// 地址: 0x140aed3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rbp = 0
char* r14 = nullptr
char* var_158 = nullptr
int32_t var_14c = 0
int32_t rdi = sub_140af3620(arg1) + 1
int32_t var_150 = rdi

if (rdi s> 0)
    sub_1405daba0(&var_158)
    r14 = var_158

memset(r14, 0, sx.q(rdi))
int32_t rax_3 = arg1[1].d
int32_t rdx_1 = rax_3 - 1

if (rax_3 == 0)
    rdx_1 = 0

int16_t* rcx_2

if (rax_3 == 0)
    rcx_2 = &data_142d40450
else
    rcx_2 = *arg1

int64_t* rbx

if (sub_140ae4700(rcx_2, rdx_1, r14) != 0)
    void var_148
    sub_1405eb940(&var_148, r14)
    int16_t* var_40
    
    if (*arg2 != var_40)
        if (var_40 == 0 || *var_40 == 0)
            rbx = nullptr
        else
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (var_40[rbx_1] != 0)
            
            rbx = zx.q(rbx_1.d + 1)
        
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != rbx.d)
            sub_1405947f0(arg2, rbx.d)
            rbp = arg2[1].d
        
        int32_t rax_5 = rbx.d + rbp
        arg2[1].d = rax_5
        
        if (rax_5 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        if (rbx.d != 0)
            memcpy(*arg2, var_40, rbx.d * 2)
    
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    rbx.b = 1
else
    rbx.b = 0

if (r14 != 0)
    sub_140a74f90(r14)

__security_check_cookie(rax_1 ^ &var_178)
return zx.q(rbx.b)
