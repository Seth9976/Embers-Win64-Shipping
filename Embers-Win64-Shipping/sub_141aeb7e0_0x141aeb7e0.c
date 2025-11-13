// 函数: sub_141aeb7e0
// 地址: 0x141aeb7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void* r10 = arg2[1]
int64_t rcx = *arg2

if (r10 != 0)
    *(r10 + 0xc) += 1

int64_t rdx = arg2[2]
int32_t r8 = arg2[3].d
int32_t* rdi = *arg4
int64_t rbp = sx.q(arg4[1].d)
arg1[8].b = (arg1[8].b & 0xfe) | 3
arg1[2].b = 0
*arg1 = &data_14305da78
arg1[3] = rcx
arg1[4] = r10
arg1[5] = rdx
arg1[6].d = r8
arg1[7] = arg3
int64_t rax_3
int64_t rdx_1
rax_3, rdx_1 = sub_141a4fed0(arg2)
int64_t* var_48
void* rbp_1

if (rax_3 != 0)
    __FrameHandler3::TryBlockMap::TryBlockMap(&var_48, rax_3 + 0x10, rax_3 + 0x38)
    rbp_1 = &rdi[rbp]
    int64_t var_38_1 = rax_3 + 0x20

int64_t var_30

if (rax_3 == 0 || rdi == rbp_1)
label_141aeb8ac:
    rdx_1.b = 0
else
    while (true)
        int32_t rbx_2 = *rdi
        int32_t rax_5
        rax_5, rdx_1 = sub_141a50d70(&var_48, rbx_2)
        
        if (rax_5 != 0xffffffff)
            var_30.d = rbx_2
            rdx_1.b = 1
            var_30:4.d = *(*var_48 + (sx.q(rax_5) << 2))
            break
        
        rdi = &rdi[1]
        
        if (rdi == rbp_1)
            goto label_141aeb8ac

int64_t* rcx_4 = arg1

if ((arg1[8].b & 2) == 0)
    rcx_4 = *arg1

if (&var_30 != &rcx_4[1])
    if (rcx_4[2].b != 0)
        rcx_4[2].b = 0
    
    if (rdx_1.b != 0)
        rcx_4[1] = var_30
        rcx_4[2].b = 1

__security_check_cookie(rax_1 ^ &var_68)
return arg1
