// 函数: sub_1427ab000
// 地址: 0x1427ab000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = 0

if (arg3 == 0)
    *arg2 = 0
    int64_t rbx = sx.q(*(arg1 + 0x58))
    int64_t rdi_1 = *(arg1 + 0x50)
    arg2[1].d = rbx.d
    
    if (rbx.d != 0)
        sub_1405c4a00(arg2, rbx.d, 0)
        memcpy(*arg2, rdi_1, (rbx << 3).d)
        return arg2
    
    *(arg2 + 0xc) = 0
    return arg2

int64_t* i = *(arg1 + 0x50)
int32_t rsi = 0
int32_t r12 = 0
void* r13 = &i[sx.q(*(arg1 + 0x58))]
int64_t var_38 = 0
int32_t var_2c = 0

for (; i != r13; i = &i[1])
    void* rdi_2 = *i
    void* rax_3
    int64_t rax_4
    void* rdx_2
    
    if (rdi_2 != 0)
        rax_3 = sub_1427bc4c0()
        rdx_2 = *(rdi_2 + 0x10)
        rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rdi_2 == 0 || rax_4.d s> *(rdx_2 + 0x38)
            || *(*(rdx_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30 || *(rdi_2 + 0x48) != 0)
        int64_t rbp_1 = sx.q(rsi)
        rsi = (rbp_1 + 1).d
        
        if (rsi s> r12)
            sub_1405a4d70(&var_38)
            r12 = var_2c
            r14 = var_38
        
        *(r14 + (rbp_1 << 3)) = rdi_2

*arg2 = r14
arg2[1].d = rsi
*(arg2 + 0xc) = r12
return arg2
