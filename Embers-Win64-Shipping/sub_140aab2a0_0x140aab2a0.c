// 函数: sub_140aab2a0
// 地址: 0x140aab2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
int32_t arg_8
sub_140aaad10(arg1 + 0x80, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int32_t rbp = 0
void* const rax_2

if (rax.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = rax * 0x38 + *(arg1 + 0x80)

int64_t* r13 = rax_2 + 0x10

if (rax_2 == 0)
    r13 = nullptr

bool cond:0 = r13 != 0
int64_t* rdi_1

if (r13 != 0)
    rdi_1 = -ffffffffffffffff
    int16_t* r14_1 = *r13
    
    if (*arg3 != r14_1)
        int32_t rsi_2
        
        if (r14_1 == 0 || *r14_1 == 0)
            rsi_2 = 0
        else
            int64_t rsi_1 = -1
            
            do
                rsi_1 += 1
            while (r14_1[rsi_1] != 0)
            
            rsi_2 = rsi_1.d + 1
        
        int32_t rdx_1 = 0
        arg3[1].d = 0
        
        if (*(arg3 + 0xc) != rsi_2)
            sub_1405947f0(arg3, rsi_2)
            rdx_1 = arg3[1].d
        
        int32_t rax_3 = rdx_1 + rsi_2
        arg3[1].d = rax_3
        
        if (rax_3 s> *(arg3 + 0xc))
            sub_140594770(arg3)
        
        if (rsi_2 != 0)
            memcpy(*arg3, r14_1, rsi_2 * 2)
    
    int16_t* rsi_3 = r13[2]
    
    if (*arg4 != rsi_3)
        if (rsi_3 == 0 || *rsi_3 == 0)
            rdi_1 = nullptr
        else
            do
                rdi_1 += 1
            while (rsi_3[rdi_1] != 0)
            
            rdi_1 = zx.q(rdi_1.d + 1)
        
        arg4[1].d = 0
        
        if (*(arg4 + 0xc) != rdi_1.d)
            sub_1405947f0(arg4, rdi_1.d)
            rbp = arg4[1].d
        
        int32_t rax_4 = rdi_1.d + rbp
        arg4[1].d = rax_4
        
        if (rax_4 s> *(arg4 + 0xc))
            sub_140594770(arg4)
        
        if (rdi_1.d != 0)
            memcpy(*arg4, rsi_3, rdi_1.d * 2)
    
    cond:0 = r13 != 0

rdi_1.b = cond:0

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return zx.q(rdi_1.b)
