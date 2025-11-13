// 函数: sub_1427a2bf0
// 地址: 0x1427a2bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t (* var_40)(int64_t arg1) = sub_1427a2dc0
void*** rbx = nullptr
void** const var_48 = &data_142e347e8
int64_t (* var_68)(int64_t arg1, int64_t* arg2) = sub_1418f6830
void*** var_58 = nullptr
int32_t rsi_1
void** rdi

if (*(arg2 + 0x30) s<= 0)
    rdi = *(arg2 + 0x18)
    int64_t (** var_b0)(int64_t arg1, int64_t* arg2) = &var_68
    rsi_1 = 0
    uint64_t r14_3 = sx.q(*(arg2 + 0x20)) << 3 u>> 3
    
    if (rdi u> &rdi[sx.q(*(arg2 + 0x20))])
        r14_3 = 0
    
    if (r14_3 != 0)
        do
            int32_t rax_13
            rax_13, arg3 = sub_14279d6d0(&var_b0, *rdi, arg3)
            rsi_1 += rax_13
            rdi = &rdi[1]
            rbx += 1
        while (rbx != r14_3)
        
        rbx = var_58
else
    int64_t (* var_a8_1)(int64_t arg1, int64_t* arg2) = sub_1418f6830
    void* var_98 = nullptr
    sub_140956100(&var_48, &var_98)
    rdi = nullptr
    int64_t* rsi = *(arg2 + 0x28)
    uint64_t r14_1 = sx.q(*(arg2 + 0x30)) << 3 u>> 3
    
    if (rsi u> &rsi[sx.q(*(arg2 + 0x30))])
        r14_1 = 0
    
    void var_88
    
    if (r14_1 != 0)
        do
            void* rcx_1 = &var_88
            int64_t var_b8 = *rsi
            void* rax_5 = var_98
            
            if (rax_5 != 0)
                rcx_1 = rax_5
            
            if (var_a8_1((*(*rcx_1 + 8))(rcx_1), &var_b8) != 0)
                rbx += 1
            
            rsi = &rsi[1]
            rdi += 1
        while (rdi != r14_1)
    
    if (var_a8_1 != 0)
        void* rax_9 = var_98
        void* rcx_3 = &var_88
        
        if (rax_9 != 0)
            rcx_3 = rax_9
        
        (*(*rcx_3 + 0x10))(rcx_3)
    
    rsi_1 = rbx.d
    rbx = var_58

rdi.b = rsi_1 == 1

if (var_68 != 0)
    void** const* rcx_5 = &var_48
    
    if (rbx != 0)
        rcx_5 = rbx
    
    void** const rdx_3 = *rcx_5
    rdx_3[2](rcx_5, rdx_3)

__security_check_cookie(rax_1 ^ &var_d8)
return zx.q(rdi.b)
