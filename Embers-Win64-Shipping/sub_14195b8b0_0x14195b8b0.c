// 函数: sub_14195b8b0
// 地址: 0x14195b8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = arg1[4]
int64_t* r9 = arg1
int64_t rdi = sx.q(arg1[5].d)
int64_t* rbx = arg1

if (rax != 0)
    r9 = rax

int64_t* rax_1 = r9
void* rdx = &r9[rdi]

if (r9 != rdx)
    do
        if (*rax_1 == *arg2)
            int32_t result = ((rax_1 - r9) s>> 3).d
            
            if (result != 0xffffffff)
                return result
            
            break
        
        rax_1 = &rax_1[1]
    while (rax_1 != rdx)

int32_t rax_3 = (rdi + 1).d
rbx[5].d = rax_3

if (rax_3 s> *(rbx + 0x2c))
    sub_14083a490(rbx, rdi.d)

int64_t* rcx_2 = rbx[4]

if (rcx_2 != 0)
    rbx = rcx_2

void* rcx_3 = *arg2
rbx[rdi] = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 0x48) += 1

return rdi.d
