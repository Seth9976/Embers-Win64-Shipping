// 函数: sub_140a9a140
// 地址: 0x140a9a140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(*arg1 + 8)
(*(*r14 + 0x1d8))(r14, &data_1439a93f8)

if ((r14[5].b & 1) != 0)
    if (r14[8].d s< 0x1e8)
        sub_1405d9400()
        int64_t* var_38 = data_143cd6fd8
        int64_t* rcx_4 = data_143cd6fe0
        
        if (rcx_4 != 0)
            rcx_4[1].d += 1
        
        int32_t var_28_1 = 0
        int64_t* rcx_5 = *(*arg1 + 8)
        (*(*rcx_5 + 0x138))(rcx_5, &var_38)
        arg3 = sub_140abd990(&var_38)
        int64_t* rcx_7 = var_38
        sub_140597df0(arg2, (*(*rcx_7 + 0x10))(rcx_7))
        
        if (rcx_4 != 0)
            rcx_4[1].d -= 1
            
            if (rcx_4[1].d == 1)
                (**rcx_4)(rcx_4)
                int32_t rbp_1 = *(rcx_4 + 0xc)
                *(rcx_4 + 0xc) -= 1
                
                if (rbp_1 == 1)
                    (*(*rcx_4 + 8))(rcx_4, zx.q(rbp_1))
    else
        arg3 = sub_140a1d9d0(*(*arg1 + 8), arg2, arg3)

if ((r14[5].b & 2) != 0)
    arg3 = sub_140a1d9d0(*(*arg1 + 8), arg2, arg3)

char arg_8 = arg2[2].b
char rax_11 = r14[5].b

if ((rax_11 & 1) != 0)
    arg2[2].b = 4
    sub_1405d9400()
    sub_14065da90(&arg2[3], &data_143cd6fd8)
    arg2[6] = 0
    arg2[7].b = 0
    int32_t rax_12
    rax_12, arg3 = sub_140b4e7c0(r14, &data_1439a93f8)
    
    if (rax_12 s>= 5)
        goto label_140a9a2a2
    
    arg_8 = 4
else if ((rax_11 & 2) != 0)
label_140a9a2a2:
    int64_t* r9_1 = *(*arg1 + 8)
    int64_t* rcx_15 = r9_1[1]
    char* rdx_5 = *rcx_15
    
    if (&rdx_5[1] u> rcx_15[1])
        (*(*r9_1 + 0x150))(r9_1, &arg_8, 1)
    else
        arg_8 = *rdx_5
        int64_t* rax_16 = r9_1[1]
        *rax_16 += 1

uint32_t rax_33 = zx.d(arg_8)
arg2[2].b = rax_33.b
void* rdx_9

if (rax_33.b == 0)
    rdx_9 = &arg2[6]
else
    if (rax_33 != 2)
        if (rax_33 == 4)
            int64_t* rcx_22 = *(*arg1 + 8)
            return (*(*rcx_22 + 0x138))(rcx_22, &arg2[3])
        
        if (rax_33 != 5)
            return rax_33
        
        int64_t* r9_2 = *(*arg1 + 8)
        int64_t* rcx_20 = r9_2[1]
        char* r8_1 = *rcx_20
        
        if (&r8_1[1] u> rcx_20[1])
            return (*(*r9_2 + 0x150))(r9_2, &arg2[7], 1)
        
        arg2[7].b = *r8_1
        int64_t* rax_21 = r9_2[1]
        *rax_21 += 1
        return rax_21
    
    rdx_9 = arg2 + 0x34

int64_t* r9_3 = *(*arg1 + 8)
int64_t* rcx_23 = r9_3[1]
int32_t* r8_2 = *rcx_23

if (&r8_2[1] u<= rcx_23[1])
    *rdx_9 = *r8_2
    int64_t* rax_30 = r9_3[1]
    *rax_30 += 4
    return rax_30

if ((*(r9_3 + 0x29) & 0x20) != 0)
    return sub_140b54070(r9_3, rdx_9, arg3)

return (*(*r9_3 + 0x150))(r9_3, rdx_9, 4)
