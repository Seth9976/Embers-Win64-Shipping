// 函数: sub_141fc4e80
// 地址: 0x141fc4e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
uint64_t rsi = *(arg1 + 0x48)

if (rsi == 0)
    int64_t result
    result.b = 0
    return result

void var_d8
sub_140bd5b60(&var_d8, arg2[0x17], 0x2000)
void* rdx_1 = *(arg1 + 0x50)
void* rax

if (*(rdx_1 + 0x1508) == 2)
    rax = *(arg1 + 0x38)

if (*(rdx_1 + 0x1508) != 2 || rax == 0)
    rax = *(arg1 + 0x30)

char* rdi = *(rax + 8)
sub_1422d2cd0(*(arg1 + 0x20), rdi, *(arg1 + 0x10), rsi, *(*(rdx_1 + 0x58) + 0x418), &arg_18, 
    (*(*(arg1 + 0x58) + 0x90) u>> 1).b & 1)
uint8_t var_e8
var_e8.q = &var_d8
int32_t var_f8
var_f8.q = *(arg1 + 0x40)
char rax_6 = sub_1422cecc0(*(arg1 + 0x20), rdi, *(arg1 + 0x10) + 8, rsi, var_f8, *(arg1 + 0x58), 
    var_e8, &arg_18)
sub_141fc4590(arg1, &var_d8, arg_18)
int64_t var_38

if (*(*(arg1 + 0x50) + 0x1508) == 0)
    *(arg1 + 8) &= 0xfffffffe
    int64_t rcx_9 = var_38
    void* rdx_6 = *(arg1 + 0x60)
    int32_t rax_8
    rax_8.b = rcx_9 == 0
    *(arg1 + 8) |= rax_8
    
    if (rdx_6 != 0)
        int64_t r8_5 = *(rdx_6 + 0xa0)
        
        if (r8_5 s> 0)
            sub_140b53d10(&var_d8, *(rdx_6 + 0x90), r8_5)
            int64_t* rcx_11 = *(arg1 + 0x60)
            (*(*rcx_11 + 0x98))(rcx_11)
            bool cond:0_1 = *(arg1 + 0x74) == 0
            *(arg1 + 0x70) = 0
            
            if (not(cond:0_1))
                sub_1405a5130(arg1 + 0x68, 0)
            
            rcx_9 = var_38
    
    rdi.b = rcx_9 != 0
    
    if (rcx_9 != 0)
        var_f8.q = &var_d8
        sub_141fa06a0(*(arg1 + 0x58), rsi, arg2, rax_6, var_f8)
else if (var_38 == 0)
    rdi.b = 0
else
    var_f8.q = &var_d8
    sub_141fa06a0(*(arg1 + 0x58), rsi, arg2, rax_6, var_f8)
    
    if (*(*(arg1 + 0x50) + 0x1508) == 2)
        sub_141fce390(arg1)
    
    rdi.b = 1
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

sub_140b4cb40(&var_d8)
return zx.q(rdi.b)
