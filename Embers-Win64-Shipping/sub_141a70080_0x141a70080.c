// 函数: sub_141a70080
// 地址: 0x141a70080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg2[6].b
int64_t* rdi = arg2
int64_t** result = arg1

if ((rax & 1) == 0)
    char rax_9 = arg1[6].b
    
    if ((rax_9 & 1) != 0)
        if ((rax_9 & 2) == 0)
            arg1 = *arg1
        
        result[6].b = rax_9 & 0xfe
        (**arg1)(arg1, 0)
        
        if ((result[6].b & 2) == 0)
            sub_140a74f90(*result)
    
    return result

int64_t* rcx = arg2

if ((rax & 2) == 0)
    rcx = *arg2

int64_t* r14 = *((*(*rcx + 0x20))(rcx) + 0xb8)
char rax_3 = result[6].b
int32_t rsi = *(r14 + 0xc)
uint64_t rbp = zx.q(r14[1].d)

if ((rax_3 & 1) != 0)
    int64_t* result_1 = result
    
    if ((rax_3 & 2) == 0)
        result_1 = *result
    
    result[6].b = rax_3 & 0xfe
    (**result_1)(result_1, 0)
    rax_3 = result[6].b
    
    if ((rax_3 & 2) == 0)
        sub_140a74f90(*result)
        rax_3 = result[6].b

char rcx_1

if (rbp.d u> 0x30 || rsi u> 8)
    rcx_1 = 0
else
    rcx_1 = 2

rax_3 = (rax_3 & 0xfd) | rcx_1
result[6].b = rax_3

if ((rax_3 & 2) == 0)
    *result = sub_140a82f30(rbp, zx.q(rsi))
    rax_3 = result[6].b

rax_3 |= 1
result[6].b = rax_3
int64_t* result_2 = result

if ((rax_3 & 2) == 0)
    result_2 = *result

(*(*r14 + 0x18))(r14, result_2)

if ((rdi[6].b & 2) == 0)
    rdi = *rdi

(*(*r14 + 0xa8))(r14, result_2, rdi, 1)
return result
