// 函数: sub_1417773b0
// 地址: 0x1417773b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t* rdi_1 = nullptr
int64_t* rbx_1 = nullptr

if (*(arg3 + 0xc) u>= 2)
    rbx_1 = arg3

if (rbx_1 == 0 || *(sx.q(rbx_1[1].d) + *(*rbx_1 + 0x398)) != 4)
    return 

sub_14177c490(arg1, arg2)

if (*(arg2 + 0xc) u>= 2)
    rdi_1 = arg2

if (rdi_1 == 0)
    return 

void* r10_1 = *rdi_1
char* r9_1 = sx.q(rdi_1[1].d)

if (*(r9_1 + *(r10_1 + 0x398)) != 4)
    return 

int64_t r8 = sx.q(*(*(*rbx_1 + 0x350) + (sx.q(rbx_1[1].d) << 2)))
*(*(r10_1 + 0x350) + (r9_1 << 2)) = r8.d

if (r8.d s>= 0 && r8.d s< *(arg1 + 0x90))
    int64_t* rsi_3 = (r8 << 4) + *(arg1 + 0x88)
    int64_t r14_2 = sx.q(rsi_3[1].d)
    int32_t rax_4 = (r14_2 + 1).d
    rsi_3[1].d = rax_4
    
    if (rax_4 s> *(rsi_3 + 0xc))
        sub_1405a4d70(rsi_3)
    
    *(*rsi_3 + (r14_2 << 3)) = arg2

r8.b = *(sx.q(rbx_1[1].d) + *(*rbx_1 + 0x398)) == 1
sub_14177fe50(*rdi_1, rdi_1[1].d, r8.b)
