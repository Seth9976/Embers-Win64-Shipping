// 函数: sub_14150d820
// 地址: 0x14150d820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void* rdx = *arg1
int64_t rbp = sx.q(*(rdx + 0x54))

if (rbp.d == 0)
    rbp = sx.q(arg1[1].d)
    int32_t rax_6 = (rbp + 1).d
    arg1[1].d = rax_6
    
    if (rax_6 s> *(arg1 + 0xc))
        sub_14090a6a0(arg1)
    
    int64_t rax_7 = *arg1
    int64_t rcx_5 = rbp * 0x60
    *(rcx_5 + rax_7) = 0
    *(rcx_5 + rax_7 + 8) = 1
    __builtin_memset(rcx_5 + rax_7 + 0xc, 0, 0x14)
    *(rcx_5 + rax_7 + 0x20) = 0x10001
    __builtin_memset(rcx_5 + rax_7 + 0x24, 0, 0x3a)
    int64_t rax_8 = *arg1
    *(rcx_5 + rax_8 + 0x58) = rbp.d
    *(rcx_5 + rax_8 + 0x54) = rbp.d
else
    void* rdi_4 = rbp * 0x60 + rdx
    *(sx.q(*(rdi_4 + 0x58)) * 0x60 + rdx + 0x54) = *(rdi_4 + 0x54)
    *(sx.q(*(rdi_4 + 0x54)) * 0x60 + *arg1 + 0x58) = *(rdi_4 + 0x58)
    *(rdi_4 + 0x58) = rbp.d
    *(rdi_4 + 0x54) = rbp.d

int128_t* r13_2 = sx.q(rbp.d) * 0x60 + *arg1
*r13_2 = *arg4
r13_2[1] = arg4[1]
r13_2[2] = arg4[2]
r13_2[3].q = arg4[3].q
*(r13_2 + 0x48) = arg5
r13_2[5].d = sub_1414fd180(arg1)
uint64_t rdx_4 = zx.q(*(arg4 + 0x2f))
char var_64 = *(arg4 + 0x24)
char var_5a = *(arg4 + 9)
int32_t var_68 = *(arg4 + 0xc) + (arg4[1].d << 1)
int64_t rdi_5 = sx.q(r13_2[4].d)

if (rdx_4.d s> rdi_5.d)
    r13_2[4].d = rdx_4.d
    int32_t rbx_2 = rdx_4.d - rdi_5.d
    
    if (rdx_4.d s> *(r13_2 + 0x44))
        sub_1405a4d70(r13_2 + 0x38)
    
    if (rbx_2 != 0)
        __builtin_memset(*(r13_2 + 0x38) + (rdi_5 << 3), 0, zx.q(rbx_2) << 3)
else if (rdx_4.d s< rdi_5.d)
    sub_14150ed30(r13_2 + 0x38, rdx_4.d, rdi_5.d - rdx_4.d, 1)

int32_t i = 0

if (*(arg4 + 0x2f) u> 0)
    do
        char j_2 = *(arg4 + 0x26)
        rdx_4.b = 0
        char var_63_1 = 0
        
        if (j_2 != 0)
            int64_t rax_16 = 0
            uint64_t j_1 = zx.q(j_2)
            uint64_t j
            
            do
                if (zx.d(*(arg4 + rax_16 + 0x30)) == i)
                    char var_62[0x8]
                    var_62[zx.q(rdx_4.b)] = *(arg4 + rax_16 + 0x27)
                    rdx_4.b = var_63_1 + 1
                    var_63_1 = rdx_4.b
                
                rax_16 += 1
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        int64_t rdi_8 = *(r13_2 + 0x38)
        int64_t* rax_17 = sub_1414fd230(arg3, &var_68)
        int64_t i_1 = sx.q(i)
        rdx_4 = *(rdi_8 + (i_1 << 3))
        *(rdi_8 + (i_1 << 3)) = rax_17
        
        if (rax_17 != 0)
            *(rax_17 + 0x1bc) += 1
        
        if (rdx_4 != 0)
            *(rdx_4 + 0x1bc) -= 1
        
        i += 1
    while (i u< zx.d(*(arg4 + 0x2f)))

*arg2 = (rbp.d & 0x3fffff) | zx.d(*(r13_2 + 0x5c)) << 0x16
__security_check_cookie(rax_1 ^ &var_88)
return arg2
