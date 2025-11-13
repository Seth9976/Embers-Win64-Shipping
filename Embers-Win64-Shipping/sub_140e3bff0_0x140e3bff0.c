// 函数: sub_140e3bff0
// 地址: 0x140e3bff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e3c210(arg1, 0xe0)
sub_140e3c5a0(arg1, 0x10)
bool cond:0 = *(arg1 + 0x34b5) == 0
char arg_8 = 0x4a
uint8_t rax_1

if (not(cond:0))
    int64_t* rcx_1 = *arg1
    rax_1 = (*(*rcx_1 + 8))(rcx_1, &arg_8, 1)

if (cond:0 || rax_1 == 0)
    rax_1 = 0
else
    rax_1 = 1

*(arg1 + 0x34b5) = rax_1
arg_8 = 0x46

if (rax_1 == 0)
    rax_1 = 0
else
    int64_t* rcx_2 = *arg1
    
    if ((*(*rcx_2 + 8))(rcx_2, &arg_8, 1) == 0)
        rax_1 = 0
    else
        rax_1 = 1

*(arg1 + 0x34b5) = rax_1
arg_8 = 0x49

if (rax_1 == 0)
    rax_1 = 0
else
    int64_t* rcx_3 = *arg1
    
    if ((*(*rcx_3 + 8))(rcx_3, &arg_8, 1) == 0)
        rax_1 = 0
    else
        rax_1 = 1

*(arg1 + 0x34b5) = rax_1
arg_8 = 0x46

if (rax_1 == 0)
    rax_1 = 0
else
    int64_t* rcx_4 = *arg1
    
    if ((*(*rcx_4 + 8))(rcx_4, &arg_8, 1) == 0)
        rax_1 = 0
    else
        rax_1 = 1

*(arg1 + 0x34b5) = rax_1
arg_8 = 0

if (rax_1 == 0)
    rax_1 = 0
else
    int64_t* rcx_5 = *arg1
    
    if ((*(*rcx_5 + 8))(rcx_5, &arg_8, 1) == 0)
        rax_1 = 0
    else
        rax_1 = 1

*(arg1 + 0x34b5) = rax_1
arg_8 = 1

if (rax_1 == 0)
    rax_1 = 0
else
    int64_t* rcx_6 = *arg1
    
    if ((*(*rcx_6 + 8))(rcx_6, &arg_8, 1) == 0)
        rax_1 = 0
    else
        rax_1 = 1

*(arg1 + 0x34b5) = rax_1
arg_8 = 1

if (rax_1 == 0)
    rax_1 = 0
else
    int64_t* rcx_7 = *arg1
    
    if ((*(*rcx_7 + 8))(rcx_7, &arg_8, 1) == 0)
        rax_1 = 0
    else
        rax_1 = 1

*(arg1 + 0x34b5) = rax_1
arg_8 = 0

if (rax_1 == 0)
    rax_1 = 0
else
    int64_t* rcx_8 = *arg1
    
    if ((*(*rcx_8 + 8))(rcx_8, &arg_8, 1) == 0)
        rax_1 = 0
    else
        rax_1 = 1

*(arg1 + 0x34b5) = rax_1
sub_140e3c5a0(arg1, 1)
sub_140e3c5a0(arg1, 1)
bool cond:1 = *(arg1 + 0x34b5) == 0
arg_8 = 0
uint8_t result

if (not(cond:1))
    int64_t* rcx_11 = *arg1
    result = (*(*rcx_11 + 8))(rcx_11, &arg_8, 1)

if (cond:1 || result == 0)
    result = 0
else
    result = 1

*(arg1 + 0x34b5) = result
arg_8 = 0

if (result != 0)
    int64_t* rcx_12 = *arg1
    result = (*(*rcx_12 + 8))(rcx_12, &arg_8, 1)
    
    if (result != 0)
        *(arg1 + 0x34b5) = 1
        return result

*(arg1 + 0x34b5) = 0
return result
