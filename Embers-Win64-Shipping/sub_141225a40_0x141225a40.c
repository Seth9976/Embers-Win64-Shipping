// 函数: sub_141225a40
// 地址: 0x141225a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t rbx = data_14399e5e0
int64_t* rax_2 = sub_140a242a0()
void* rcx = *arg4
void** var_50 = nullptr
int32_t var_44 = 4
int32_t i_2 = 1
void* var_70 = rcx

if (rcx != 0)
    *(rcx + 0x48) += 1

int64_t r9 = *rax_2
(*(r9 + 0x48))(rax_2, &var_70, zx.q(rbx), r9)
void** rcx_2 = var_50
void** rbx_1 = &var_70
int32_t i_1 = i_2

if (rcx_2 != 0)
    rbx_1 = rcx_2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            rcx_3[9].d -= 1
            
            if (rcx_3[9].d == 1)
                sub_140a2f6e0(rcx_3)
        
        rbx_1 = &rbx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_2 = var_50

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

uint64_t result = sub_141225b40(arg1, arg2, arg3, &arg4[1], &arg4[0xb], &arg4[0xd])
__security_check_cookie(rax_1 ^ &var_a8)
return result
