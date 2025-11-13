// 函数: sub_141c74cf0
// 地址: 0x141c74cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t rbx = sx.q(arg2)
int32_t* rdx_2

if (*(arg1 + 0xa48) == *(arg1 + 0xa74))
label_141c74d7d:
    rdx_2 = nullptr
else
    void* r9 = *(arg1 + 0xa80)
    void* r10_1 = arg1 + 0xa78
    
    if (r9 != 0)
        r10_1 = r9
    
    int32_t rax_1 = *(r10_1 + (((sx.q(*(arg1 + 0xa88)) - 1) & rbx) << 2))
    
    if (rax_1 == 0xffffffff)
    label_141c74d7d_1:
        rdx_2 = nullptr
    else
        while (true)
            rdx_2 = (sx.q(rax_1) << 5) + *(arg1 + 0xa40)
            
            if (*rdx_2 == rbx.d)
                break
            
            rax_1 = rdx_2[6]
            
            if (rax_1 == 0xffffffff)
                goto label_141c74d7d_2
        
        if (rax_1 == 0xffffffff)
        label_141c74d7d_2:
            rdx_2 = nullptr

void* rcx = &rdx_2[2]

if (rdx_2 == 0)
    rcx = nullptr

if (rcx == 0)
    sub_141c4c4e0(arg1 + 0xa40, &arg_10, arg3)
    rbx = zx.q(arg_10)
else
    sub_1405b0be0(rcx, arg3)

int64_t rdi = sx.q(arg3[1].d)
uint64_t rsi = 0
void* r13_1 = *(arg1 + 0xa90)
int64_t r14_1 = *arg3
void* rbp = r13_1
uint64_t var_98 = 0
int32_t var_90 = rdi.d
uint64_t r12

if (rdi.d != 0)
    sub_1405a4be0(&var_98, rdi.d, 0)
    rsi = var_98
    memcpy(rsi, r14_1, (rdi << 4).d)
    rdi = zx.q(var_90)
    r12 = rsi
    rbx = zx.q(rbx.d)
    rbp = r13_1
else
    r12 = 0

void*** rax_2 = sub_140a82f30(0x30, 8)
*rax_2 = &data_14320b000
rax_2[1] = rbp
rax_2[2].d = rbx.d
rax_2[3] = 0
rax_2[4].d = rdi.d

if (rdi.d != 0)
    sub_1405a4be0(&rax_2[3], rdi.d, 0)
    memcpy(rax_2[3], r12, rdi.d << 4)
else
    *(rax_2 + 0x24) = 0

rax_2[5].b = arg4
*rax_2 = &data_14320b0a0
uint64_t (* var_78)(int64_t* arg1)
uint64_t (* rax_4)(int64_t* arg1) = var_78

if (rax_2 != -8)
    rax_4 = j_sub_141c54370

void*** var_68 = rax_2
var_78 = rax_4
int64_t result = sub_141c56770(r13_1, &var_78)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
