// 函数: sub_14200b0a0
// 地址: 0x14200b0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi = nullptr
int32_t arg_10 = 0
uint64_t rax
int64_t* rbx_1
int64_t rbp

if (arg2 == 0)
    rbx_1 = arg_10.q
    rbp.b = 0
else
    rax = *(arg1 + 0xe00)
    int64_t r8_1 = rax + 8
    
    if (rax == 0)
        r8_1 = 0
    
    if (arg2 != r8_1 || *(arg1 + 0xdf0) == 0)
        rbx_1 = arg_10.q
        rbp.b = 0
    else
        rbx_1 = *(arg1 + 0xdf8)
        
        if (rbx_1 == 0)
            rbx_1 = arg_10.q
            rbp.b = 0
        else
            rax = zx.q(rbx_1[1].d)
            
            if (rax.d s<= 0)
                rbx_1 = arg_10.q
                rbp.b = 0
            else
                if (rbx_1 != 0)
                    if (rax.d == 0)
                        rbx_1 = nullptr
                    else
                        rbx_1[1].d = rax.d + 1
                        rdi = *(arg1 + 0xdf0)
                
                int64_t* rcx = *(rdi + 0x910)
                rdi = 1
                
                if ((*(*rcx + 0x68))(rcx).d != 2)
                    rbp.b = 0
                else
                    rbp = 1

if ((rdi.b & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (rbp.b == 0)
    return 

(*(*arg2 + 0x18))(arg2, &arg_10)
rax = arg_10.q

if (rax.d s<= 0 || arg3 s<= 0)
    return 

data_143a30330 = rax.d
data_143a30334 = arg3
sub_1423ee5e0(rax.d, arg3, 2)
int64_t* rax_6 = sub_1423dd380(arg1)
sub_14203ce20(rax_6, arg_10.q)
int64_t rdx_3 = *rax_6
(*(rdx_3 + 0x270))(rax_6, rdx_3)
sub_1405a9f90(&rax_6[0x22], 0)
