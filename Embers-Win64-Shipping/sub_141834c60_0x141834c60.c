// 函数: sub_141834c60
// 地址: 0x141834c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void var_118
sub_141823e50(arg1 + 8, sub_141820bf0(&var_118))
sub_141822cb0(&var_118)
int64_t var_178

if (arg1 + 0xe8 != &var_178)
    int64_t rcx_3 = *(arg1 + 0xe8)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *(arg1 + 0xe8) = 0
    *(arg1 + 0xf0) = 0

var_178 = 0
int64_t var_170 = 0

if (arg1 + 0xf8 != &var_178)
    void* rsi_1 = *(arg1 + 0xf8)
    int32_t i_1 = *(arg1 + 0x100)
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_4 = *(rsi_1 + 0x48)
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int32_t j_1 = *(rsi_1 + 0x40)
            int64_t* rbx_1 = *(rsi_1 + 0x38)
            
            if (j_1 != 0)
                int32_t j
                
                do
                    int64_t rcx_5 = *rbx_1
                    
                    if (rcx_5 != 0)
                        sub_140a74f90(rcx_5)
                    
                    rbx_1 = &rbx_1[2]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                rbx_1 = *(rsi_1 + 0x38)
            
            if (rbx_1 != 0)
                sub_140a74f90(rbx_1)
            
            int64_t rcx_7 = *(rsi_1 + 0x10)
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            int64_t rcx_8 = *rsi_1
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            rsi_1 += 0x60
            i = i_1
            i_1 -= 1
        while (i != 1)
        rsi_1 = *(arg1 + 0xf8)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    *(arg1 + 0xf8) = 0
    *(arg1 + 0x100) = 0

sub_141821690(&var_178)
int64_t var_168
__builtin_memset(&var_168, 0, 0x2c)
int32_t var_13c = 0x80
int32_t var_138 = 0xffffffff
int32_t var_134 = 0
int64_t var_128 = 0
int32_t var_120 = 0

if (arg1 + 0x108 != &var_168)
    sub_140a642d0(arg1 + 0x108, &var_168)
    int64_t rsi_2 = var_128
    void var_130
    
    if (rsi_2 == 0)
        memmove(arg1 + 0x140, &var_130, (rsi_2 + 4).d)
    int64_t rcx_13 = *(arg1 + 0x148)
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
        rsi_2 = var_128
    
    *(arg1 + 0x148) = rsi_2
    *(arg1 + 0x150) = var_120
    int64_t var_128_1 = 0

int32_t var_120_1 = 0
sub_1405e1b50(&var_168, 0)
int64_t var_148

if (var_148 != 0)
    sub_140a74f90(var_148)

int64_t rcx_16 = var_168

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

sub_140cb9250(arg1 + 0x160, 0)
sub_140aee920(arg1 + 0x1b0, 0)
sub_1405e1ad0(arg1 + 0x200, 0)
void* result = sub_140cb9250(arg1 + 0x250, 0)
*(arg1 + 0x2a0) = -1
*(arg1 + 0x2a8) = -1
*(arg1 + 0x2b0) = 0
__security_check_cookie(rax_1 ^ &var_198)
return result
