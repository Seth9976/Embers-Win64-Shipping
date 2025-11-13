// 函数: sub_140bda9a0
// 地址: 0x140bda9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_4 = zx.q(arg3)

if ((*(arg1 + 0xb0) & 0x6000) != 0)
    return 

int32_t rax_1 = *(arg1 + 0x5c)
int32_t rcx = *(arg1 + 0x58)
int64_t* rbx_1 = *(arg1 + 0xb8)
int32_t rsi_3 = (rax_1 - 1 + rcx) & neg.d(rax_1)
int64_t r14
int64_t var_28_1 = r14
int32_t r13_1 = 0
int32_t arg_8 = rsi_3

if (rbx_1 != 0)
    if ((*(*rbx_1 + 0x20))(rbx_1).b != 0 && i_4.d s> 0)
        int64_t rdi_1 = arg2
        uint64_t i_2 = zx.q(i_4.d)
        uint64_t i
        
        do
            (*(*rbx_1 + 0x28))(rbx_1, rdi_1)
            rdi_1 += sx.q(rsi_3)
            i = i_2
            i_2 -= 1
        while (i != 1)
        rsi_3 = arg_8
    
    r13_1 = rbx_1[1].d
    rcx = *(arg1 + 0x58)

if (rcx s<= r13_1)
    return 

int64_t* rbx_2 = *(arg1 + 0x80)
r14.b = 0

if (rbx_2 == 0)
    return 

while (r14.b == 0)
    if (*(rbx_2 + 0x3c) * rbx_2[7].d + *(rbx_2 + 0x4c) s<= r13_1)
        r14.b = 1
    else if ((rbx_2[8] & 0x1000000000) == 0 && i_4.d s> 0)
        int64_t rdi_2 = 0
        uint64_t i_3 = i_4
        uint64_t i_1
        
        do
            int32_t rax
            rax.b = not.b((rbx_2[8] u>> 0x24).d.b)
            
            if ((rax.b & 1) != 0)
                (*(*rbx_2 + 0xe8))(rbx_2, sx.q(*(rbx_2 + 0x4c)) + rdi_2 + arg2)
            
            rdi_2 += sx.q(rsi_3)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    rbx_2 = rbx_2[0xd]
    rsi_3 = arg_8
    
    if (rbx_2 == 0)
        break
