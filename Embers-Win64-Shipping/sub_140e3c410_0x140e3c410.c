// 函数: sub_140e3c410
// 地址: 0x140e3c410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e3c210(arg1, 0xda)
sub_140e3c5a0(arg1, ((zx.q(*(arg1 + 0x14)) << 1) + 6).d)
bool cond:0 = *(arg1 + 0x34b5) == 0
char arg_8 = *(arg1 + 0x14)
uint32_t result

if (not(cond:0))
    int64_t* rcx_1 = *arg1
    result = (*(*rcx_1 + 8))(rcx_1, &arg_8, 1)

if (cond:0 || result.b == 0)
    result.b = 0
else
    result.b = 1

int32_t i = 0
*(arg1 + 0x34b5) = result.b

if (*(arg1 + 0x14) u> 0)
    do
        bool cond:2_1 = *(arg1 + 0x34b5) == 0
        arg_8 = i.b + 1
        char rax_1
        
        if (not(cond:2_1))
            int64_t* rcx_2 = *arg1
            rax_1 = (*(*rcx_2 + 8))(rcx_2, &arg_8, 1)
        
        if (cond:2_1 || rax_1 == 0)
            rax_1 = 0
        else
            rax_1 = 1
        
        *(arg1 + 0x34b5) = rax_1
        arg_8 = 0
        
        if (i != 0)
            arg_8 = 0x11
        
        if (rax_1 == 0)
            rax_1 = 0
        else
            int64_t* rcx_3 = *arg1
            
            if ((*(*rcx_3 + 8))(rcx_3, &arg_8, 1) == 0)
                rax_1 = 0
            else
                rax_1 = 1
        
        *(arg1 + 0x34b5) = rax_1
        i += 1
    while (i s< zx.d(*(arg1 + 0x14)))

bool cond:1 = *(arg1 + 0x34b5) == 0
arg_8 = 0

if (not(cond:1))
    int64_t* rcx_4 = *arg1
    result = (*(*rcx_4 + 8))(rcx_4, &arg_8, 1)

if (cond:1 || result.b == 0)
    result.b = 0
else
    result.b = 1

*(arg1 + 0x34b5) = result.b
arg_8 = 0x3f

if (result.b == 0)
    result.b = 0
else
    int64_t* rcx_5 = *arg1
    
    if ((*(*rcx_5 + 8))(rcx_5, &arg_8, 1).b == 0)
        result.b = 0
    else
        result.b = 1

*(arg1 + 0x34b5) = result.b
arg_8 = 0

if (result.b != 0)
    int64_t* rcx_6 = *arg1
    result = (*(*rcx_6 + 8))(rcx_6, &arg_8, 1)
    
    if (result.b != 0)
        *(arg1 + 0x34b5) = 1
        return result

*(arg1 + 0x34b5) = 0
return result
