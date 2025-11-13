// 函数: sub_142354ad0
// 地址: 0x142354ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rax_1 = sub_14259e570()
void* rdx = arg2[2]
int64_t rax_2 = sx.q(*(rax_1 + 0x38))

if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
    sub_140cd85e0(arg2, rdx)
    **arg1
    jump(*(*arg2 + 0x2f0))

void* rax_5 = sub_14259dfc0()
void* rdx_2 = arg2[2]
int64_t rax_6 = sx.q(*(rax_5 + 0x38))
int64_t arg_10
int64_t rax

if (rax_6.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
    rax = sx.q(data_143a2ff20)
    
    if (rax.d s< arg2[6].d)
        void* rbx_2 = arg1[1]
        arg_10 = *(arg2[5] + (rax << 3))
        void* rcx_6 = rbx_2 + 0x20
        void* rax_9 = *(rbx_2 + 0x10)
        
        if (rax_9 != 0)
            rcx_6 = rax_9
        
        (*rbx_2)((*(*rcx_6 + 8))(rcx_6), &arg_10)
    
    return 

int64_t rsi_1 = 0
int64_t* rdi_1 = arg2[5]
uint64_t r14_2 = sx.q(arg2[6].d) << 3 u>> 3

if (rdi_1 u> &rdi_1[arg2[6]])
    r14_2 = 0

if (r14_2 == 0)
    return 

do
    rax = *rdi_1
    
    if (rax != 0)
        void* rbx_3 = arg1[1]
        arg_10 = rax
        void* rax_14 = *(rbx_3 + 0x10)
        void* rcx_8 = rbx_3 + 0x20
        
        if (rax_14 != 0)
            rcx_8 = rax_14
        
        (*rbx_3)((*(*rcx_8 + 8))(rcx_8), &arg_10)
    
    rdi_1 = &rdi_1[1]
    rsi_1 += 1
while (rsi_1 != r14_2)
