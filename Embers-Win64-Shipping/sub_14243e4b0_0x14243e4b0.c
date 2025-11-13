// 函数: sub_14243e4b0
// 地址: 0x14243e4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t var_98
__builtin_memset(&var_98, 0, 0x3c)
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0

if (arg2 == 0)
    void* rax_2 = *(arg1 + 0x30)
    
    if (*(rax_2 + 0xb8) == 0)
        *(rax_2 + 0xb8) = arg1
    
    void* rax_3 = sub_140d21d80(arg1)
    *(rax_3 + 0x50) |= 0x20000

int64_t rsi
rsi.b = 0
int32_t rdx = data_143a306b8
int32_t rcx_1 = data_143a306c4 + 1
data_143a306c4 = rcx_1
int64_t rbx = sx.q(rdx - 1)
int64_t var_88

if (rdx - 1 s>= 0)
    int64_t rdi_2 = rbx << 4
    int64_t temp0_1
    
    do
        int64_t* rax_5 = data_143a306b0
        
        if (*(rax_5 + rdi_2 + 8) == 0)
            rsi.b = 1
        else
            int64_t* rcx_2 = *(rax_5 + rdi_2)
            
            if (rcx_2 == 0)
                rsi.b = 1
            else if ((*(*rcx_2 + 0x50))(rcx_2, arg1, zx.q(arg2), &var_88, &var_98) == 0)
                rsi.b = 1
        
        rdi_2 -= 0x10
        temp0_1 = rbx
        rbx -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_1 = data_143a306c4
    rdx = data_143a306b8

data_143a306c4 = rcx_1 - 1

if (rsi.b != 0 && rcx_1 - 1 s<= 0)
    int32_t rsi_1 = rdx
    int32_t rbx_1 = 0
    
    if (rdx s> 0)
        int64_t rdi_3 = 0
        
        do
            int64_t* rax_8 = data_143a306b0
            
            if (*(rax_8 + rdi_3 + 8) == 0)
                sub_1405a4880(&data_143a306b0, rbx_1, 1, 1)
            else
                int64_t* rcx_4 = *(rax_8 + rdi_3)
                
                if (rcx_4 == 0)
                    sub_1405a4880(&data_143a306b0, rbx_1, 1, 1)
                else if ((*(*rcx_4 + 0x20))(rcx_4) != 0)
                    sub_1405a4880(&data_143a306b0, rbx_1, 1, 1)
                else
                    rbx_1 += 1
                    rdi_3 += 0x10
            
            rdx = data_143a306b8
        while (rbx_1 s< rdx)
    
    int32_t rax_11 = rdx * 2
    
    if (rax_11 s<= 2)
        rax_11 = 2
    
    data_143a306c0 = rax_11
    
    if (rsi_1 s> rax_11 && data_143a306bc != rdx)
        sub_1405a5410(&data_143a306b0, rdx)

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t var_80
var_80.d = 0
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
int64_t var_78
void* result = sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t rcx_9 = var_88

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_98

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_c8)
return result
