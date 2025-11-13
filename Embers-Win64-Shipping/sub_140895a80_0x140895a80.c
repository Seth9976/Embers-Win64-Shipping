// 函数: sub_140895a80
// 地址: 0x140895a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg3
char* rbx = -ffffffffffffffff

do
    rbx = &rbx[1]
while (rbx[arg2] != 0)

int64_t r13 = arg3[2]

if (0x7fffffffffffffff - r13 u< rbx)
    sub_1405871e0()
    noreturn

if (arg3[3] u>= 0x10)
    r14 = *arg3

void* r12 = &rbx[r13]
int64_t rdi = 0xf
arg1[2] = 0
arg1[3] = 0
void** rsi = arg1

if (r12 u> 0xf)
    rdi = r12 | 0xf
    int64_t rax_1
    
    if (rdi u<= 0x7fffffffffffffff)
        if (rdi u< 0x16)
            rdi = 0x16
        
        if (rdi + 1 u>= 0x1000)
            rax_1 = rdi + 0x28
            
            if (rax_1 u> rdi + 1)
                goto label_140895b16
            
            stdext::threads::_Throw_lock_error()
            noreturn
        
        if (rdi == -1)
            rsi = nullptr
        else
            rsi = j_sub_140a82f30(rdi + 1)
    else
        rdi = 0x7fffffffffffffff
        rax_1 = -0x7fffffffffffffd9
    label_140895b16:
        int64_t rax_2 = j_sub_140a82f30(rax_1)
        
        if (rax_2 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rsi = (rax_2 + 0x27) & 0xffffffffffffffe0
        rsi[-1] = rax_2
    *arg1 = rsi

arg1[2] = r12
arg1[3] = rdi
memcpy(rsi, arg2, rbx.d)
memcpy(rsi + rbx, r14, r13.d)
*(rsi + r12) = 0
return arg1
