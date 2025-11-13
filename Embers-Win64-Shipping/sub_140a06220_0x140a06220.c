// 函数: sub_140a06220
// 地址: 0x140a06220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (rdi.d s>= *(arg1 + 0x450))
    return 

*((rdi << 6) + *(arg1 + 0x448) + 0x3d) = arg3
void* rbx_1 = *(arg1 + 0x3e8)

if (rbx_1 == 0)
    return 

int32_t var_40_1 = rdi.d
char var_3c_1 = arg3
char rax_1 = sub_140a80f40()

if (rax_1 != 0)
label_140a062a9:
    
    if (rdi.d s< *(rbx_1 + 0x158))
        void* rcx = *(*(rbx_1 + 0x150) + (rdi << 3))
        
        if (rcx != 0)
            *(rcx + 0x348) = arg3
    
    return 

if (data_143f138f4 == rax_1)
    if (data_143de5480 == rax_1)
        goto label_140a062a9
    
    uint32_t rax_2
    rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_2.b == 0)
        goto label_140a062db
    
    goto label_140a062a9

label_140a062db:
void var_38
int64_t* rax_3 = sub_140a01af0(&var_38, nullptr, 0xff)
*(*rax_3 + 0x10) = rbx_1.o
void* rcx_3 = *rax_3
int32_t r8 = rax_3[2].d
int64_t* rdx = rax_3[1]
int64_t* rbx_2 = *(rcx_3 + 0x28)
int64_t* arg_8 = rbx_2
int32_t* rdi_1 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_1 += 1
    rbx_2 = arg_8

sub_1405e48c0(rcx_3, rdx, r8, 1)

if (rbx_2 == 0)
    return 

uint64_t rax = zx.q(*rdi_1)
*rdi_1 -= 1

if (rax.d == 1)
    sub_140a2f6e0(arg_8)
