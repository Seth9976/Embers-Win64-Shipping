// 函数: sub_142b35b30
// 地址: 0x142b35b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 8)
int32_t r9_1

if (rax s< 0)
    r9_1 = *(arg1 + 0xc)
else
    r9_1 = sx.d(rax) s>> 5

sub_142a48d00(arg2, arg1, 0, r9_1)
int16_t arg_8 = 0x3a
sub_142a48d70(arg2, &arg_8, 0, 1)
arg_8 = 0xa
void* result = sub_142a48d70(arg2, &arg_8, 0, 1)
uint64_t rbx = 0

if (*(arg1 + 0x48) u> 0)
    do
        int64_t* rcx_3 = *(arg1 + 0x40)
        
        if (rcx_3 != 0)
            rcx_3 = rcx_3[rbx]
        
        sub_142b32600(rcx_3, arg2)
        arg_8 = 0xa
        result = sub_142a48d70(arg2, &arg_8, 0, 1)
        rbx = zx.q(rbx.d + 1)
    while (rbx.d u< *(arg1 + 0x48))

void* r14 = arg1 + 0x50
int64_t i_1 = 6
int64_t i

do
    void** rsi_1 = *r14
    
    if (rsi_1 != 0)
        result = *rsi_1 + 4
        
        if (result u<= 2)
            uint64_t rbx_1 = 0
            
            if (*(arg1 + 0x90) u> 0)
                do
                    int64_t* rcx_7 = *(arg1 + 0x88)
                    
                    if (rcx_7 != 0)
                        rcx_7 = rcx_7[rbx_1]
                    
                    result = *rsi_1
                    
                    if (*rcx_7 == result)
                        sub_142b32600(rcx_7, arg2)
                        arg_8 = 0xa
                        result = sub_142a48d70(arg2, &arg_8, 0, 1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                while (rbx_1.d u< *(arg1 + 0x90))
        else
            sub_142b32600(rsi_1, arg2)
            arg_8 = 0xa
            result = sub_142a48d70(arg2, &arg_8, 0, 1)
    
    r14 += 8
    i = i_1
    i_1 -= 1
while (i != 1)
return result
