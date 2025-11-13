// 函数: sub_140a8f350
// 地址: 0x140a8f350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x10)
uint64_t r9 = zx.q(*arg2)
char arg_8 = r9.b
int64_t* rbp

if (rax == *(arg1 + 0x3c))
label_140a8f3e1:
    rbp = sub_140a5d390(arg1 + 8, r9.d, &arg_8)
else
    void* rcx = *(arg1 + 0x48)
    void* r8_1 = arg1 + 0x40
    
    if (rcx != 0)
        r8_1 = rcx
    
    int32_t rax_1 = *(r8_1 + (((sx.q(*(arg1 + 0x50)) - 1) & r9) << 2))
    
    if (rax_1 == 0xffffffff)
    label_140a8f3e1_1:
        rbp = sub_140a5d390(arg1 + 8, r9.d, &arg_8)
    else
        char* rcx_3
        
        while (true)
            rcx_3 = sx.q(rax_1) * 0xb0 + *(arg1 + 8)
            
            if (*rcx_3 == r9.b)
                break
            
            rax_1 = *(rcx_3 + 0xa8)
            
            if (rax_1 == 0xffffffff)
                goto label_140a8f3e1_2
        
        if (rax_1 == 0xffffffff || rcx_3 == 0)
        label_140a8f3e1_2:
            rbp = sub_140a5d390(arg1 + 8, r9.d, &arg_8)
        else
            rbp = &rcx_3[8]

int32_t rax_3 = *(arg2 + 0x10)

if (rax_3 s> 1)
    int32_t rcx_5 = rax_3 - 1
    
    if (rax_3 == 0)
        rcx_5 = 0
    
    int32_t* rax_5 = sub_140a5d800(rbp, sub_1405969c0(rcx_5, *(arg2 + 8)), &arg2[8])
    int32_t temp0_1 = *rax_5
    *rax_5 -= 1
    
    if (temp0_1 == 1)
        sub_140637ad0(rbp, &arg2[8])

int16_t** var_38 = nullptr
int32_t var_30 = 0
sub_140a5dad0(&arg2[0x48], &var_38)
int64_t rsi = sx.q(var_30)
int16_t** r14 = var_38
uint64_t result = sub_140688010(r14, rsi.d, arg_8)
int16_t** rbx = r14
void* rdi_3 = &r14[rsi * 2]

if (r14 != rdi_3)
    do
        result = zx.q(rbx[1].d)
        
        if (result.d s> 1)
            int32_t rcx_10 = (result - 1).d
            
            if (result.d == 0)
                rcx_10 = 0
            
            result = sub_140a5d800(&rbp[0xa], sub_1405969c0(rcx_10, *rbx), rbx)
            int32_t temp2_1 = *result
            *result -= 1
            
            if (temp2_1 == 1)
                result = sub_140637ad0(&rbp[0xa], rbx)
        
        rbx = &rbx[2]
    while (rbx != rdi_3)

int16_t** rdi_4 = r14

if (rsi.d != 0)
    int32_t i
    
    do
        int16_t* rbx_1 = *rdi_4
        
        if (rbx_1 != 0)
            int64_t* rcx_13 = data_143ddb3f0
            
            if (rcx_13 == 0)
                sub_140a750a0()
                rcx_13 = data_143ddb3f0
            
            result = (*(*rcx_13 + 0x30))(rcx_13, rbx_1)
        
        rdi_4 = &rdi_4[2]
        i = rsi.d
        rsi = zx.q(rsi.d - 1)
    while (i != 1)

if (r14 == 0)
    return result

int64_t* rcx_14 = data_143ddb3f0

if (rcx_14 == 0)
    sub_140a750a0()
    rcx_14 = data_143ddb3f0

jump(*(*rcx_14 + 0x30))
