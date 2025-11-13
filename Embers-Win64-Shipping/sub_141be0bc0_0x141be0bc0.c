// 函数: sub_141be0bc0
// 地址: 0x141be0bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* rdi = nullptr
int32_t i = 0
int64_t* rax

if (*(arg1 + 0x98) s> 0)
    rax = *(arg1 + 0x90)
    
    do
        if (*rax == arg2)
            if (arg3 == 0)
                int32_t rcx_7 = *(arg1 + 0x98)
                int32_t rax_6 = rcx_7 - i
                
                if (rax_6 != 1)
                    memmove((sx.q(i) << 4) + *(arg1 + 0x90), (sx.q(i + 1) << 4) + *(arg1 + 0x90), 
                        (rax_6 - 1) << 4)
                    rcx_7 = *(arg1 + 0x98)
                
                *(arg1 + 0x98) = rcx_7 - 1
                sub_1405a5010(arg1 + 0x90)
            else
                rax[1] = arg3
            
            goto label_141be0c5e
        
        i += 1
        rax = &rax[2]
    while (i s< *(arg1 + 0x98))

int64_t* var_48

if (arg3 != 0)
    int64_t rbp_1 = sx.q(*(arg1 + 0x98))
    var_48 = arg2
    int64_t* var_40_1 = arg3
    int32_t rax_1 = (rbp_1 + 1).d
    *(arg1 + 0x98) = rax_1
    
    if (rax_1 s> *(arg1 + 0x9c))
        sub_1405a4f90(arg1 + 0x90)
    
    *(*(arg1 + 0x90) + rbp_1 * 0x10) = var_48.o

label_141be0c5e:
void* rbx_1 = *(arg1 + 0xa0)

if (rbx_1 == 0)
    return 

int64_t* arg_8 = nullptr
var_48 = &arg_10
int64_t* var_40_2 = &arg_8
rax = *(rbx_1 + 0x28)

if (rax != 0)
    int64_t* arg_20 = rax
    sub_141b97250(&var_48, &arg_20)
    void* rcx_3 = *(rbx_1 + 0x28)
    int64_t* (* var_38)(int64_t* arg1, int64_t* arg2) = sub_141b97250
    int64_t** var_30_1 = &var_48
    sub_141ba8640(rcx_3, &var_38)
    rdi = arg_8

if (rdi == 0)
    return 

void* rax_3 = sub_141c04a00()
void* rcx_4 = rdi[2]
rax = sx.q(*(rax_3 + 0x38))

if (rax.d s> *(rcx_4 + 0x38) || (*(rcx_4 + 0x30))[rax] != rax_3 + 0x30)
    return 

(*(*rdi + 0x2c0))(rdi, rax)

if (arg3 != 0)
    sub_141b8f9a0(rdi, arg3)
