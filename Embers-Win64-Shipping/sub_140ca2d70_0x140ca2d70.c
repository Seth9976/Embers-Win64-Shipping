// 函数: sub_140ca2d70
// 地址: 0x140ca2d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r15 = arg4
uint32_t r14 = 0xffffffff u>> ((neg.d(arg3)).b & 0x1f)
char arg_18

if (arg3 u<= 8)
    arg_18 = *arg4 & r14.b
    int64_t* r9 = *(*arg2 + 8)
    int64_t* rcx_3 = r9[1]
    char* rdx = *rcx_3
    
    if (&rdx[1] u> rcx_3[1])
        return (*(*r9 + 0x150))(r9, &arg_18, 1)
    
    arg_18 = *rdx
    int64_t* rax_5 = r9[1]
    *rax_5 += 1
    return rax_5

if (arg3 u<= 0x10)
    arg_18.w = *arg4 & r14.w
    int64_t* r9_1 = *(*arg2 + 8)
    int64_t* rcx_5 = r9_1[1]
    int16_t* rdx_2 = *rcx_5
    
    if (&rdx_2[1] u> rcx_5[1])
        char* rdx_3 = &arg_18
        
        if ((*(r9_1 + 0x29) & 0x20) != 0)
            return sub_140b54000(r9_1, rdx_3, arg5)
        
        return (*(*r9_1 + 0x150))(r9_1, rdx_3, 2)
    
    arg_18.w = *rdx_2
    int64_t* rax_12 = r9_1[1]
    *rax_12 += 2
    return rax_12

uint32_t rbp_1 = (arg3 + 0x1f) u>> 5
uint64_t rbp_2 = zx.q(rbp_1 - 1)

if (rbp_1 != 1)
    int32_t* rdi_1 = r15
    uint64_t i_1 = zx.q(rbp_2.d)
    uint64_t i
    
    do
        arg_18.d = *rdi_1
        int64_t* r9_2 = *(*arg2 + 8)
        int64_t* rcx_7 = r9_2[1]
        int32_t* rdx_4 = *rcx_7
        
        if (&rdx_4[1] u> rcx_7[1])
            int32_t* rdx_5 = &arg_18
            
            if ((*(r9_2 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_2, rdx_5, arg5)
            else
                (*(*r9_2 + 0x150))(r9_2, rdx_5, 4)
        else
            arg_18.d = *rdx_4
            int64_t* rax_20 = r9_2[1]
            *rax_20 += 4
        
        rdi_1 = &rdi_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rax_22 = *arg2
int32_t var_28 = r15[rbp_2] & r14
int64_t* r9_3 = *(rax_22 + 8)
int64_t* rcx_11 = r9_3[1]
int32_t* rdx_6 = *rcx_11

if (&rdx_6[1] u<= rcx_11[1])
    var_28 = *rdx_6
    int64_t* rax_25 = r9_3[1]
    *rax_25 += 4
    return rax_25

int32_t* rdx_7 = &var_28

if ((*(r9_3 + 0x29) & 0x20) != 0)
    return sub_140b54070(r9_3, rdx_7, arg5)

return (*(*r9_3 + 0x150))(r9_3, rdx_7, 4)
