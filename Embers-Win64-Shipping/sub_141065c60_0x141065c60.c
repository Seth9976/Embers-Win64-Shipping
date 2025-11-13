// 函数: sub_141065c60
// 地址: 0x141065c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t rbx = sx.q(arg2[1].d)
void* var_58 = nullptr
int32_t var_50 = 0
int32_t var_4c = 0x10
void* var_e8 = nullptr
int32_t var_e0 = 0
int32_t var_dc = 0x10
void var_168
void var_d8

if (rbx.d s> 0x10)
    sub_141068e60(&var_d8, rbx.d)
    
    if (rbx.d s> var_dc)
        sub_141068e60(&var_168, rbx.d)

void* i = *arg2
void* i_1 = i
void* r13 = i + rbx * 0x28

if (i != r13)
    do
        void* rcx_3 = *(i_1 + 0x10)
        int32_t rdx_2 = data_1439c7a34
        
        if (rcx_3 != 0 && rdx_2 u> 1)
            while (*(rcx_3 + 0x28) != *(arg1 + 0x138))
                rcx_3 = *(rcx_3 + 0xd8)
                
                if (rcx_3 == 0)
                    break
        
        void* rax_4 = *i_1
        
        if (rax_4 != 0 && rdx_2 u> 1)
            while (*(rax_4 + 0x28) != *(arg1 + 0x138))
                rax_4 = *(rax_4 + 0xd8)
                
                if (rax_4 == 0)
                    break
        
        int64_t rdi_1 = sx.q(var_50)
        int64_t r14_1 = *(rax_4 + 0x78)
        int64_t rsi_1 = *(rcx_3 + 0x78)
        int32_t rax_5 = (rdi_1 + 1).d
        var_50 = rax_5
        
        if (rax_5 s> var_4c)
            sub_141068820(&var_d8, rdi_1.d)
        
        void* rcx_5 = &var_d8
        
        if (var_58 != 0)
            rcx_5 = var_58
        
        *(rcx_5 + (rdi_1 << 3)) = rsi_1
        int64_t rdi_2 = sx.q(var_e0)
        int32_t rax_7 = (rdi_2 + 1).d
        var_e0 = rax_7
        
        if (rax_7 s> var_dc)
            sub_141068820(&var_168, rdi_2.d)
        
        void* rcx_7 = &var_168
        
        if (var_e8 != 0)
            rcx_7 = var_e8
        
        i_1 += 0x28
        *(rcx_7 + (rdi_2 << 3)) = r14_1
    while (i_1 != r13)

void* rcx_8 = &var_d8

if (var_58 != 0)
    rcx_8 = var_58

sub_140b57650(rcx_8, var_50)
void* rcx_9 = &var_168

if (var_e8 != 0)
    rcx_9 = var_e8

sub_140b57650(rcx_9, var_e0)
void* rbx_1 = *(arg1 + 0x1c8)
int32_t rdx_8 = *(rbx_1 + 0x128)
int64_t* rcx_10 = *(rbx_1 + 0x30)

if (rdx_8 != 0)
    (*(*rcx_10 + 0xd0))(rcx_10, rdx_8, *(rbx_1 + 0x120))
    *(rbx_1 + 0x128) = 0

char var_178
sub_14105d660(&var_178, arg1 + 0x1c0, &var_d8, 0)
sub_14105d660(&var_178, arg1 + 0x1c0, &var_168, 1)
void* rbx_2 = *(arg1 + 0x1c8)
int32_t rdx_11 = *(rbx_2 + 0x128)
int64_t* rcx_13 = *(rbx_2 + 0x30)

if (rdx_11 != 0)
    (*(*rcx_13 + 0xd0))(rcx_13, rdx_11, *(rbx_2 + 0x120))
    *(rbx_2 + 0x128) = 0

for (; i != r13; i += 0x28)
    void* r14_2 = *(i + 0x10)
    int32_t rcx_14 = data_1439c7a34
    
    if (r14_2 != 0 && rcx_14 u> 1)
        while (*(r14_2 + 0x28) != *(arg1 + 0x138))
            r14_2 = *(r14_2 + 0xd8)
            
            if (r14_2 == 0)
                break
    
    void* r11_1 = *i
    
    if (r11_1 != 0 && rcx_14 u> 1)
        while (*(r11_1 + 0x28) != *(arg1 + 0x138))
            r11_1 = *(r11_1 + 0xd8)
            
            if (r11_1 == 0)
                break
    
    int64_t r9_2 = *(i + 0x20)
    int64_t rdx_12 = *(i + 0x18)
    int64_t r8_6 = *(i + 8)
    void* rdi_3 = *(r14_2 + 0x78)
    void* rbx_3 = *(r11_1 + 0x78)
    void* rax_15 = *(arg1 + 0x1c8)
    void* rsi_2 = *(r14_2 + 0x28)
    *(arg1 + 0x3b90) += 1
    int64_t* rcx_15 = *(rax_15 + 0x30)
    (*(*rcx_15 + 0x78))(rcx_15, *(rbx_3 + 0x20), r8_6 + *(r11_1 + 0xb8), *(rdi_3 + 0x20), 
        rdx_12 + *(r14_2 + 0xb8), r9_2)
    sub_14105c1a0(rbx_3, arg1 + 0x1c0)
    sub_14105c1a0(rdi_3, arg1 + 0x1c0)
    sub_141031e00(rsi_2, 1, 0)

sub_14105d660(&var_178, arg1 + 0x1c0, &var_d8, 2)
int64_t result = sub_14105d660(&var_178, arg1 + 0x1c0, &var_168, 3)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
