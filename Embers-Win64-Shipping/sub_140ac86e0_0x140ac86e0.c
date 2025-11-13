// 函数: sub_140ac86e0
// 地址: 0x140ac86e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
sub_140aa4810(arg1)
int32_t result = *(arg1 + 0x90)

if (result == 0)
    if (*(arg1 + 0xa0) s> 1)
        int64_t rbx_1 = sx.q(arg3[1].d)
        int32_t rax = (rbx_1 + 1).d
        arg3[1].d = rax
        
        if (rax s> *(arg3 + 0xc))
            sub_1405a4f90(arg3)
        
        sub_140596d10((rbx_1 << 4) + *arg3, &arg1[0x98])
    
    result.b = 0
    return result

if (result != 2)
    result.b = 1
    return result

int64_t rcx_4 = *arg2
int64_t* rax_1
int64_t* rbx_2
int64_t* rdi
int32_t r14

if (rcx_4 == 0)
    char* rax_2 = sub_140a752e0()
    rdi = *(rax_2 + 0x30)
    rcx_4 = *(rax_2 + 0x28)
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rbx_2 = arg_8.q
    r14 = 2
    rax_1 = rdi
else
    rbx_2 = arg2[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    rdi = arg_8.q
    r14 = 1
    rax_1 = rbx_2

int64_t var_38 = rcx_4

if (rax_1 != 0)
    rax_1[1].d += 1

if ((r14.b & 2) != 0)
    r14 &= 0xfffffffd
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t rax_5 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*rdi + 8))(rdi, 1)

if ((r14.b & 1) != 0 && rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rax_9 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_9 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int32_t* i = *(arg1 + 0x68)
r14.b = 1

for (void* rdi_2 = sx.q(*(arg1 + 0x70)) * 0x58 + i; i != rdi_2; i = &i[0x16])
    sub_140ab23c0()
    void* rcx_13 = &i[6]
    
    if (((data_143db9f5c ^ i[3]) | (data_143db9f58 ^ i[2]) | (data_143db9f54 ^ i[1])
            | (*i ^ data_143db9f50)) != 0)
        rcx_13 = nullptr
    
    if (rcx_13 != 0)
        int64_t* rcx_14 = *(rcx_13 + 0x10)
        r14.b &= (*(*rcx_14 + 8))(rcx_14, &var_38, arg3)

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        (**rax_1)(rax_1)
        int32_t rsi_1 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_7 = *rax_1
            (*(r8_7 + 8))(rax_1, zx.q(rsi_1), r8_7)

return zx.q(r14.b)
