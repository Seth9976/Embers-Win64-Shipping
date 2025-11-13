// 函数: sub_1408d01c0
// 地址: 0x1408d01c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r12 = zx.q(arg3)
int64_t r15 = sx.q(arg4)
uint64_t rcx_1 = r12 * 0xa0
char rcx_2 = *(rcx_1 + arg1[0xb])
char arg_18 = rcx_2

if (arg1[0xe].d == 0)
    return 0xffffffff

char* r9 = arg1[0x17]
int64_t r10 = sx.q(arg1[0x18].d)
char* rdx = r9
int64_t rbp = r10 * 0x38
void* r8 = &r9[rbp]
int32_t rsi

if (r9 == r8)
label_1408d026d:
    rsi = -1
else
    while (true)
        if (*rdx == 0 && rdx[0xc] == arg2 && rdx[0xd] == r12.b && rdx[2] == rcx_2)
            if (*(rdx + 0x10) == zx.d(*((r15 << 6) + arg1[7] + 2)))
                rsi = ((rdx - r9) s/ 0x38).d
                break
            
            rcx_2 = arg_18
        
        rdx = &rdx[0x38]
        
        if (rdx == r8)
            goto label_1408d026d

void* rdi_1
void* rdi_2

if (rsi != 0xffffffff)
    rdi_1 = sx.q(rsi) * 0x38
    rdi_2 = rdi_1 + r9

if (rsi == 0xffffffff || rdi_1 == neg.q(r9))
    int32_t rax_3 = (r10 + 1).d
    arg1[0x18].d = rax_3
    
    if (rax_3 s> *(arg1 + 0xc4))
        sub_1407c3b60(&arg1[0x17])
    
    rdi_2 = arg1[0x17] + rbp
    int64_t* rbp_1 = nullptr
    *(rdi_2 + 0x20) = 0
    *(rdi_2 + 0x28) = 0
    int32_t rsi_1 = arg1[0x18].d
    *rdi_2 = 0
    rsi = rsi_1 - 1
    *(rdi_2 + 0x30) = -1
    *(rdi_2 + 0xc) = arg2
    *(rdi_2 + 0xd) = r12.b
    *(rdi_2 + 8) = *(rcx_1 + arg1[0xb] + 4)
    *(rdi_2 + 2) = arg_18
    *(rdi_2 + 4) = *((*(*arg1 + 0x150))(arg1) + 0x520) f+ *(rdi_2 + 8)
    int64_t rdx_2 = sx.q(arg1[0xe].d)
    
    if (rdx_2.d != 0)
        rbp_1 = *(arg1[0xd] + (rdx_2 << 3) - 8)
        arg1[0xe].d = (rdx_2 - 1).d
        int64_t r13_1 = sx.q(arg1[0x10].d)
        int32_t rax_10 = (r13_1 + 1).d
        arg1[0x10].d = rax_10
        
        if (rax_10 s> *(arg1 + 0x84))
            sub_1405a4d70(&arg1[0xf])
        
        *(arg1[0xf] + (r13_1 << 3)) = rbp_1
    
    *(rdi_2 + 0x18) = rbp_1
    rdx_2.b = 1
    int64_t* rcx_11 = *rbp_1
    (*(*rcx_11 + 0x340))(rcx_11, rdx_2)
    *(rdi_2 + 0x10) = zx.d(*((r15 << 6) + arg1[7] + 2))
    *(rdi_2 + 0x14) = sub_1408ce160(arg1, zx.q(r15.d), r12.b)

int64_t rbp_2 = sx.q(*(rdi_2 + 0x28))
int32_t rax_15 = (rbp_2 + 1).d
*(rdi_2 + 0x28) = rax_15

if (rax_15 s> *(rdi_2 + 0x2c))
    sub_1405a4cf0(rdi_2 + 0x20)

*(*(rdi_2 + 0x20) + (rbp_2 << 2)) = r15.d
*((r15 << 6) + arg1[7] + 3) = 1
return zx.q(rsi)
