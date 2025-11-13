// 函数: sub_140ae8b40
// 地址: 0x140ae8b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg2[0x1b]
int512_t zmm1 = sub_140ae8860(arg1, arg2, arg3)

if ((arg1[5].b & 1) != 0)
    int64_t rcx = arg2[8]
    
    if (rcx != 0)
        arg2[8] = sub_140a84c80(rcx, 0, 0)
    
    arg2[9].d = 0
    zmm1 = sub_140aed200(arg2, arg2[1].d - *(arg2 + 0x34), 0)

int64_t* rcx_2 = arg1[1]
int32_t* rdx_2 = *rcx_2
int32_t arg_8

if (&rdx_2[1] u> rcx_2[1])
    int32_t rax_4
    rax_4.b = arg2[0xa].b != 0
    arg_8 = rax_4
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    arg2[0xa].b = arg_8 != 0
else
    void* rax_2
    rax_2.b = *rdx_2 != 0
    arg2[0xa].b = rax_2.b
    int64_t* rax_3 = arg1[1]
    *rax_3 += 4

int64_t* rcx_4 = arg1[1]
int32_t* rdx_4 = *rcx_4

if (&rdx_4[1] u> rcx_4[1])
    int32_t rax_9
    rax_9.b = *(arg2 + 0x51) != 0
    arg_8 = rax_9
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    *(arg2 + 0x51) = arg_8 != 0
else
    void* rax_7
    rax_7.b = *rdx_4 != 0
    *(arg2 + 0x51) = rax_7.b
    int64_t* rax_8 = arg1[1]
    *rax_8 += 4

(*(*arg1 + 0x140))(arg1, arg2 + 0x54)
int512_t zmm1_1 = sub_140ae7ef0(arg1, &arg2[0xc], zmm1)

if ((arg1[5].b & 1) != 0)
    int64_t rcx_8 = arg2[0x14]
    
    if (rcx_8 != 0)
        arg2[0x14] = sub_140a84c80(rcx_8, 0, 0)
    
    arg2[0x15].d = 0
    zmm1_1 = sub_140aecff0(&arg2[0xc], arg2[0xd].d - *(arg2 + 0x94), 0)

int64_t* rcx_10 = arg1[1]
int32_t* r8 = *rcx_10

if (&r8[1] u<= rcx_10[1])
    arg2[0x16].d = *r8
    int64_t* rax_16 = arg1[1]
    *rax_16 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x16], zmm1_1)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x16], 4)

int512_t zmm1_2 = sub_140a1d9d0(arg1, &arg2[0x17], zmm1_1)
int64_t* r8_1 = arg1[1]
int64_t rcx_13 = *r8_1
bool cond:4

if (rcx_13 + 4 u> r8_1[1])
    int32_t rax_20
    rax_20.b = rbp != 0
    arg_8 = rax_20
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    cond:4 = arg_8 != 0
else
    cond:4 = *rcx_13 != 0
    *r8_1 = rcx_13 + 4

if (cond:4 != 0)
    int64_t* rax_22 = arg2[0x1b]
    
    if (rax_22 == 0)
        rax_22 = j_sub_140a82f30(0x140)
        
        if (rax_22 != 0)
            rax_22, zmm1_2 = sub_140ae6a10(rax_22)
        
        arg2[0x1b] = rax_22
    
    sub_140ae8b40(arg1, rax_22)

sub_140a64ab0(arg1, &arg2[0x1e], 
    sub_140a1d9d0(arg1, &arg2[0x1c], sub_140a1d9d0(arg1, &arg2[0x19], zmm1_2)))

if ((arg1[5].b & 1) != 0)
    int64_t rcx_20 = arg2[0x26]
    
    if (rcx_20 != 0)
        arg2[0x26] = sub_140a84c80(rcx_20, 0, 0)
    
    arg2[0x27].d = 0
    sub_140aed0a0(&arg2[0x1e], arg2[0x1f].d - *(arg2 + 0x124), 0)

return arg1
