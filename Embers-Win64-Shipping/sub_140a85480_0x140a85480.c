// 函数: sub_140a85480
// 地址: 0x140a85480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x10)
uint64_t r9 = zx.q(*arg2)
char arg_8 = r9.b
int64_t* r14

if (rax == *(arg1 + 0x3c))
label_140a85511:
    r14 = sub_140a5d390(arg1 + 8, r9.d, &arg_8)
else
    void* rcx = *(arg1 + 0x48)
    void* r8_1 = arg1 + 0x40
    
    if (rcx != 0)
        r8_1 = rcx
    
    int32_t rax_1 = *(r8_1 + (((sx.q(*(arg1 + 0x50)) - 1) & r9) << 2))
    
    if (rax_1 == 0xffffffff)
    label_140a85511_1:
        r14 = sub_140a5d390(arg1 + 8, r9.d, &arg_8)
    else
        char* rcx_3
        
        while (true)
            rcx_3 = sx.q(rax_1) * 0xb0 + *(arg1 + 8)
            
            if (*rcx_3 == r9.b)
                break
            
            rax_1 = *(rcx_3 + 0xa8)
            
            if (rax_1 == 0xffffffff)
                goto label_140a85511_2
        
        if (rax_1 == 0xffffffff || rcx_3 == 0)
        label_140a85511_2:
            r14 = sub_140a5d390(arg1 + 8, r9.d, &arg_8)
        else
            r14 = &rcx_3[8]

int32_t rdx_4 = *(arg2 + 0x10)

if (rdx_4 s> 1)
    int32_t rcx_5 = rdx_4 - 1
    
    if (rdx_4 == 0)
        rcx_5 = 0
    
    int32_t* rax_4 = sub_140a5d800(r14, sub_1405969c0(rcx_5, *(arg2 + 8)), &arg2[8])
    *rax_4 += 1

int64_t* var_38 = nullptr
int32_t var_30 = 0
sub_140a5dad0(&arg2[0x48], &var_38)
int64_t rsi = sx.q(var_30)
int64_t* rbp = var_38
uint64_t result = sub_140688010(rbp, rsi.d, arg_8)
int64_t* rbx = rbp
void* rdi_3 = &rbp[rsi * 2]

if (rbp != rdi_3)
    do
        result = zx.q(rbx[1].d)
        
        if (result.d s> 1)
            int32_t rcx_9 = (result - 1).d
            
            if (result.d == 0)
                rcx_9 = 0
            
            result = sub_140a5d800(&r14[0xa], sub_1405969c0(rcx_9, *rbx), rbx)
            *result += 1
        
        rbx = &rbx[2]
    while (rbx != rdi_3)

int64_t* rdi_4 = rbp

if (rsi.d != 0)
    int32_t i
    
    do
        int64_t rbx_1 = *rdi_4
        
        if (rbx_1 != 0)
            int64_t* rcx_11 = data_143ddb3f0
            
            if (rcx_11 == 0)
                sub_140a750a0()
                rcx_11 = data_143ddb3f0
            
            result = (*(*rcx_11 + 0x30))(rcx_11, rbx_1)
        
        rdi_4 = &rdi_4[2]
        i = rsi.d
        rsi = zx.q(rsi.d - 1)
    while (i != 1)

if (rbp == 0)
    return result

int64_t* rcx_12 = data_143ddb3f0

if (rcx_12 == 0)
    sub_140a750a0()
    rcx_12 = data_143ddb3f0

jump(*(*rcx_12 + 0x30))
