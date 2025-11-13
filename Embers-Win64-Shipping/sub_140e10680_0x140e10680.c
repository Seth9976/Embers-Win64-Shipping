// 函数: sub_140e10680
// 地址: 0x140e10680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t r14 = 0
char var_198 = data_1439ae51c
void* var_70 = nullptr
int32_t i_4 = 0
int32_t var_64 = 4
char var_60 = 0
(*(*arg1 + 0x238))(arg1, arg2, &var_198)
int32_t i_2 = i_4
void* rbx = var_70
int32_t i_3 = i_2
void var_190

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    int64_t rsi_1 = 0
    uint64_t i
    
    do
        void* rdi_1 = &var_190
        
        if (rbx != 0)
            rdi_1 = rbx
        
        void* rdi_2 = rdi_1 + rsi_1
        void var_1b4
        
        if (*sub_140e10ae0(arg3, &var_1b4, rdi_2 + 0x38) != 0xffffffff)
            void* var_1a8 = rdi_2 + 0x38
            void* var_1a0_1 = rdi_2
            void var_1b0
            sub_140dd2e00(arg4, &var_1b0, &var_1a8, nullptr)
            rbx = var_70
        
        rsi_1 += 0x48
        i = i_1
        i_1 -= 1
    while (i != 1)
    i_2 = i_3

if (arg4[1].d - *(arg4 + 0x34) != arg3[1].d - *(arg3 + 0x34))
    int64_t i_5 = sx.q(i_2)
    
    if (i_2 s> 0)
        while (true)
            void* rcx_4 = &var_190
            
            if (rbx != 0)
                rcx_4 = rbx
            
            void* rcx_5 = rcx_4 + r14
            sub_140e10680(*(rcx_5 + 0x38), rcx_5, arg3, arg4, i_3)
            r14 += 0x48
            int64_t i_6 = i_5
            i_5 -= 1
            
            if (i_6 == 1)
                break
            
            rbx = var_70

int64_t result = sub_140d94d20(&var_190)
__security_check_cookie(rax_1 ^ &var_1d8)
return result
