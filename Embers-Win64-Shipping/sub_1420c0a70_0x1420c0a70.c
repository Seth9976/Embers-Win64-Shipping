// 函数: sub_1420c0a70
// 地址: 0x1420c0a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg3 == 0)
    return 

int32_t rax_1 = *(arg4 + 0x80)
int64_t r12_1 = *(arg2 + 0x78)
int32_t r13_1 = *(r12_1 + 0x3c)
int32_t r14_1 = arg3[1].d
int32_t r15_1 = *(arg2 + 0x80)
int32_t var_48_1 = *(*(arg4 + 0x78) + 0x3c)
int64_t var_40 = r12_1
int32_t var_30_1 = r13_1
int32_t var_2c_1 = r15_1
int64_t* var_38_1 = arg1

if (r14_1 s<= 0)
    return 

r15_1.b = not.b(r15_1.b)
int32_t rsi_1 = arg1[1].d
int32_t rcx = *(arg1 + 0xc)
int32_t rax_3 = r14_1 + rsi_1
arg1[1].d = rax_3
r15_1.b &= 1

if (r15_1.b != 0)
    if (rax_3 s> rcx)
        sub_140ce4cd0(arg1, zx.q(rsi_1), r13_1)
else if (rax_3 s> rcx)
    sub_140ce4c40(arg1, rsi_1, r13_1)

sub_1420b6b60(&var_40, rsi_1, r14_1)
int32_t i = 0
int32_t rcx_4
rcx_4.b = not.b(rax_1.b)
int32_t r14_2 = 0
rcx_4.b &= 1
int32_t arg_8 = rcx_4
int32_t rsi_2 = rsi_1 * r13_1

while (i s< arg3[1].d)
    *arg3
    void* rdx_3
    
    if (arg1[1].d != 0)
        void* rax_4 = *arg1
        
        if (r15_1.b == 0 && (rax_4.b & 1) != 0)
            rax_4 = (rax_4 s>> 1) + arg1
        
        rdx_3 = sx.q(rsi_2) + rax_4
    else
        rdx_3 = nullptr
    
    (*(*r12_1 + 0xc0))(r12_1, rdx_3)
    i += 1
    rsi_2 += r13_1
    r14_2 += var_48_1
