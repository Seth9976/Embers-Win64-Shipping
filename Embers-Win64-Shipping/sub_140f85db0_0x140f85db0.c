// 函数: sub_140f85db0
// 地址: 0x140f85db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = nullptr
int32_t arg_8 = 0
char* rax_3
int32_t rdx_2
int64_t* rbx_1

if (*(arg1 + 0x390) == 0)
label_140f85e2c:
    arg_8:1.b = 0
    rax_3 = &arg_8
    rbx_1 = arg_8.q
    rdx_2 = 4
else
    rbx_1 = *(arg1 + 0x398)
    
    if (rbx_1 == 0)
        goto label_140f85e2c
    
    int32_t r8 = rbx_1[1].d
    
    if (r8 s<= 0)
        goto label_140f85e2c
    
    int64_t* rax = rbx_1
    
    if (rbx_1 != 0)
        if (r8 == 0)
            rbx_1 = nullptr
            rax = nullptr
        else
            rbx_1[1].d = r8 + 1
            rax = rbx_1
    
    if (rax != 0)
        rcx = *(arg1 + 0x390)
    
    rax_3 = (*(*rcx + 0xf8))(rcx, &arg_8, zx.q(arg3))
    rdx_2 = 3

arg2[1] = 0

if (rax_3[1] != 0)
    *arg2 = *rax_3
    arg2[1] = 1

int32_t rcx_2 = rdx_2 & 0xfffffffb

if ((rdx_2.b & 4) == 0)
    rcx_2 = rdx_2

if ((rcx_2.b & 2) != 0)
    rcx_2 &= 0xfffffffd
    arg_8:1.b = 0

if ((rcx_2.b & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
