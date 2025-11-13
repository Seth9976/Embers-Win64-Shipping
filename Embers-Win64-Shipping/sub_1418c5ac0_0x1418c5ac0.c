// 函数: sub_1418c5ac0
// 地址: 0x1418c5ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r14_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r12_1 = r14_1 * 0x38
void* rbx_3 = *arg1 + 0x20 + r12_1
int32_t i

do
    int64_t* rcx = *(rbx_3 + 8)
    
    if (rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1 && rcx != 0)
            (**rcx)(rcx, 1)
    
    int64_t* rcx_1 = *rbx_3
    
    if (rcx_1 != 0)
        rcx_1[1].d -= 1
        
        if (rcx_1[1].d == 1 && rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
    
    rbx_3 += 0x38
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rdx = arg1[1].d
int32_t r9_2 = rdx - r14_1.d - arg3

if (arg3 s<= r9_2)
    r9_2 = arg3

if (r9_2 != 0)
    int64_t rcx_2 = *arg1
    memcpy(rcx_2 + r12_1, sx.q(rdx - r9_2) * 0x38 + rcx_2, r9_2 * 0x38)
    rdx = arg1[1].d

arg1[1].d = rdx - arg3

if (arg4 != 0)
    sub_1407c4070(arg1)
