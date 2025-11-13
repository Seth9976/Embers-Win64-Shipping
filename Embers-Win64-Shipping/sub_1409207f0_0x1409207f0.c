// 函数: sub_1409207f0
// 地址: 0x1409207f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg3 + 0x10)

if (rbx != 0)
    rbx[1].d += 1

sub_14091c9a0(arg2, *(arg3 + 8) + 0x18)
int64_t* rax = sub_14091c9a0(arg2, arg3 + 0x18)
int64_t* r9 = rax

if (*(rax + 0x14) != 0)
    *(r9 + 0x14) = 1
    rax.b = 1
else
    rax = sx.q(rax[2].d)
    
    if ((rax + 4).d u> r9[1].d)
        *(r9 + 0x14) = 1
        rax.b = 1
    else
        *(rax + *r9) = *(arg3 + 0xab)
        *(sx.q(r9[2].d) + *r9 + 1) = *(arg3 + 0xaa)
        *(sx.q(r9[2].d) + *r9 + 2) = *(arg3 + 0xa9)
        *(sx.q(r9[2].d) + *r9 + 3) = *(arg3 + 0xa8)
        r9[2].d += 4
        rax = zx.q(*(r9 + 0x14))

int64_t rcx_7

if (rax.b == 0)
    rcx_7 = sx.q(r9[2].d)

if (rax.b != 0 || (rcx_7 + 4).d u> r9[1].d)
    *(r9 + 0x14) = 1
else
    *(rcx_7 + *r9) = *(arg3 + 0xaf)
    *(sx.q(r9[2].d) + *r9 + 1) = *(arg3 + 0xae)
    *(sx.q(r9[2].d) + *r9 + 2) = *(arg3 + 0xad)
    *(sx.q(r9[2].d) + *r9 + 3) = *(arg3 + 0xac)
    r9[2].d += 4

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rcx_14 = *(arg1 + 0x1e8)
void arg_8
*(*(*rcx_14 + 0x18))(rcx_14, &arg_8)
sub_140962ca0()
int64_t* rbx_1 = *(arg3 + 0xa0)
void* rcx_16 = *(arg3 + 0x98)

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (rcx_16 != 0)
    int64_t* rcx_17 = *(rcx_16 + 8)
    
    if (rcx_17 != 0)
        (*(*rcx_17 + 0x28))(rcx_17)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg3 + 0xa0)

if (rbx_2 != 0)
    rbx_2[1].d += 1

sub_14091cf00(arg2, *(arg3 + 0x98))

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return sub_1409201d0(arg1, arg2, arg3 + 0x28) __tailcall
