// 函数: sub_1411d9c10
// 地址: 0x1411d9c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbp = nullptr
int32_t r12 = 0
uint64_t* r14 = arg1
uint64_t j_2 = zx.q(arg4)
int64_t rdi = sx.q(arg3)
int64_t rbx = sx.q(arg2)
int32_t* var_38 = nullptr
int32_t var_2c = 0
int32_t var_30_1

if (arg2 s> 0)
    var_30_1 = rbx.d
    sub_1405a4cf0(&var_38)
    rbp = var_38
    memset(rbp, 0, rbx << 2)
    r12 = var_30_1
else if (arg2 s< 0 && arg2 != 0)
    var_30_1 = rbx.d
    sub_1405dac90(&var_38)
    rbp = var_38
    r12 = var_30_1
int32_t i = 0

if (rbx.d s> 0)
    int32_t* r10_1 = rbp
    
    do
        int32_t rcx_3 = 0
        int32_t i_1 = i
        
        if (j_2.d s> 0)
            uint64_t j_1 = j_2
            uint64_t j
            
            do
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(i_1)
                i_1 = divs.dp.d(temp3_1:temp4_1, rdi.d)
                rcx_3 = rcx_3 * rdi.d
                    + *(*(*arg5 + rdi * 0x10) + (sx.q(mods.dp.d(temp3_1:temp4_1, rdi.d)) << 2))
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        *r10_1 = rcx_3
        i += 1
        r10_1 = &r10_1[1]
    while (i s< rbx.d)
    
    r14 = arg1

int64_t rdi_1 = sx.q(r14[3].d)
int32_t rsi_2 = r14[1].d
int32_t rax_5 = (rdi_1 + 1).d
r14[3].d = rax_5

if (rax_5 s> *(r14 + 0x1c))
    sub_1405a4cf0(&r14[2])

int64_t result = r14[2]
*(result + (rdi_1 << 2)) = rsi_2

if (r12 != 0)
    int32_t rax_6 = r14[1].d
    int32_t rdx_5 = rax_6 + r12
    
    if (rdx_5 s> *(r14 + 0xc))
        sub_1405dadb0(r14, rdx_5)
        rax_6 = r14[1].d
    
    result = memcpy(*r14 + (sx.q(rax_6) << 2), rbp, r12 << 2)
    r14[1].d += r12

if (rbp == 0)
    return result

return sub_140a74f90(rbp) __tailcall
