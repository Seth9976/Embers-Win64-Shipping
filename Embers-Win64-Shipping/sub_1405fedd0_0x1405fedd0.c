// 函数: sub_1405fedd0
// 地址: 0x1405fedd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int64_t rbp = sx.q(arg3)

if (*(arg1 + 0x138) == 0)
    uint64_t result
    result.b = 0
    return result

void* arg_8 = arg1 + 0x98
EnterCriticalSection(arg1 + 0x98)
int32_t* rdi_3
void* const rax
void* const rcx_1

if (arg2 == 0)
    rax = 0x140
    rcx_1 = 0x48
label_1405fee60:
    void* r14_1 = rcx_1 + arg1
    rdi_3 = rax + arg1
    int64_t rax_1 = sx.q(*rdi_3)
    
    if (rbp.d == rax_1.d)
        rdi_3.b = 1
    else if (rbp.d == 0xffffffff || (rbp.d s>= 0 && rbp.d s< *(r14_1 + 8)))
        if (rax_1.d == 0xffffffff)
            goto label_1405feec1
        
        int64_t* rax_2 = *(arg1 + 0x138)
        int64_t r8 = *rax_2
        
        if ((*(r8 + 0x120))(rax_2, zx.q(*(rax_1 * 0x68 + *r14_1 + 0x60)), r8) s>= 0)
            *rdi_3 = 0xffffffff
            *(arg1 + 0x150) = 1
        label_1405feec1:
            
            if (rbp.d == 0xffffffff)
                rdi_3.b = 1
            else
                int64_t* rax_4 = *(arg1 + 0x138)
                int64_t r8_1 = *rax_4
                
                if ((*(r8_1 + 0x118))(rax_4, zx.q(*(rbp * 0x68 + *r14_1 + 0x60)), r8_1) s>= 0)
                    *rdi_3 = rbp.d
                    *(arg1 + 0x150) = 1
                    rdi_3.b = 1
                else
                    rdi_3.b = 0
        else
            rdi_3.b = 0
    else
        rdi_3.b = 0
else
    if (arg2 == 1)
        rax = 0x144
        rcx_1 = 0x88
        goto label_1405fee60
    
    if (arg2 == 2)
        rax = 0x148
        rcx_1 = 0x128
        goto label_1405fee60
    
    if (arg2 == 6)
        rax = 0x14c
        rcx_1 = 0x1a8
        goto label_1405fee60
    
    rdi_3.b = 0

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return zx.q(rdi_3.b)
