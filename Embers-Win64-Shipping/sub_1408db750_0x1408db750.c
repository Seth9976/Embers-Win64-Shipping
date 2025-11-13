// 函数: sub_1408db750
// 地址: 0x1408db750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a94a8)
int32_t r14 = 0
bool cond:0 = (arg1[5].b & 2) == 0
int32_t arg_8 = 0

if (not(cond:0))
    arg_8 = arg2[1].d

sub_1408db5d0(arg1, &arg2[0xe], arg3)
sub_1408dc760(arg1, &arg2[0xc], arg3)
sub_1408dbbe0(arg1, &arg2[0x14])
int64_t* rcx_3 = arg1[1]
int32_t* rdx_3 = *rcx_3

if (&rdx_3[1] u> rcx_3[1])
    int32_t* rdx_4 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_4, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_4, 4)
else
    arg_8 = *rdx_3
    *rcx_3 += 4

if ((arg1[5].b & 1) != 0)
    int32_t rcx_5 = arg2[1].d
    int32_t rax_5 = arg_8
    
    if (rax_5 s> rcx_5)
        arg2[1].d = rax_5
        
        if (rax_5 s> *(arg2 + 0xc))
            sub_140638a00(arg2)
            rax_5 = arg_8
    else if (rax_5 s< rcx_5 && rcx_5 != rax_5)
        arg2[1].d = rax_5
        sub_140775970(arg2)
        rax_5 = arg_8
    
    int32_t rdx_8 = arg2[3].d
    
    if (rax_5 s> rdx_8)
        arg2[3].d = rax_5
        
        if (rax_5 s> *(arg2 + 0x1c))
            sub_1405a4d70(&arg2[2])
            rax_5 = arg_8
    else if (rax_5 s< rdx_8 && rdx_8 != rax_5)
        arg2[3].d = rax_5
        sub_1405c53d0(&arg2[2])
        rax_5 = arg_8
    
    int32_t rdx_10 = arg2[5].d
    
    if (rax_5 s> rdx_10)
        arg2[5].d = rax_5
        
        if (rax_5 s> *(arg2 + 0x2c))
            sub_1405a4cf0(&arg2[4])
            rax_5 = arg_8
    else if (rax_5 s< rdx_10 && rdx_10 != rax_5)
        arg2[5].d = rax_5
        sub_1405dac90(&arg2[4])
        rax_5 = arg_8
    
    int32_t rdx_12 = arg2[7].d
    
    if (rax_5 s> rdx_12)
        arg2[7].d = rax_5
        
        if (rax_5 s> *(arg2 + 0x3c))
            sub_1405a4cf0(&arg2[6])
            rax_5 = arg_8
    else if (rax_5 s< rdx_12 && rdx_12 != rax_5)
        arg2[7].d = rax_5
        sub_1405dac90(&arg2[6])
        rax_5 = arg_8
    
    int32_t rdx_14 = arg2[9].d
    
    if (rax_5 s> rdx_14)
        arg2[9].d = rax_5
        
        if (rax_5 s> *(arg2 + 0x4c))
            sub_1406105e0(&arg2[8])
            rax_5 = arg_8
    else if (rax_5 s< rdx_14 && rdx_14 != rax_5)
        arg2[9].d = rax_5
        sub_1405dac90(&arg2[8])
        rax_5 = arg_8
    
    if (*(arg2 + 0xa4) == 0)
        arg2[0xb].d = 0
        
        if (*(arg2 + 0x5c) != 0)
            sub_140638cc0(&arg2[0xa], 0)
    else
        int32_t rdx_16 = arg2[0xb].d
        
        if (rax_5 s> rdx_16)
            arg2[0xb].d = rax_5
            
            if (rax_5 s> *(arg2 + 0x5c))
                sub_140638a00(&arg2[0xa])
        else if (rax_5 s< rdx_16 && rdx_16 != rax_5)
            arg2[0xb].d = rax_5
            sub_140775970(&arg2[0xa])

uint64_t rax_6 = zx.q(arg2[1].d)

if (rax_6.d s> 0)
    int64_t r9_1 = *arg1
    (*(r9_1 + 0x150))(arg1, *arg2, zx.q((rax_6 * 3).d << 2), r9_1)
    int64_t r9_2 = *arg1
    (*(r9_2 + 0x150))(arg1, arg2[2], zx.q(arg2[3].d << 3), r9_2)
    int64_t r9_3 = *arg1
    (*(r9_3 + 0x150))(arg1, arg2[4], zx.q(arg2[5].d << 2), r9_3)
    int64_t r9_4 = *arg1
    (*(r9_4 + 0x150))(arg1, arg2[6], zx.q(arg2[7].d << 2), r9_4)
    int64_t r9_5 = *arg1
    (*(r9_5 + 0x150))(arg1, arg2[8], zx.q(arg2[9].d << 2), r9_5)
    
    if (*(arg2 + 0xa4) != 0)
        int64_t r9_6 = *arg1
        (*(r9_6 + 0x150))(arg1, arg2[0xa], zx.q(arg2[0xb].d * 0xc), r9_6)

int64_t* rcx_20 = arg1[1]
int32_t arg_10 = arg2[0x13].d
int32_t* rdx_24 = *rcx_20

if (&rdx_24[1] u> rcx_20[1])
    int32_t* rdx_25 = &arg_10
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_25, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_25, 4)
else
    arg_10 = *rdx_24
    *rcx_20 += 4

if ((arg1[5].b & 1) != 0)
    int32_t rax_12 = arg_10
    arg2[0x13].d = 0
    
    if (*(arg2 + 0x9c) != rax_12)
        sub_1405dadb0(&arg2[0x12], rax_12)
        rax_12 = arg_10
        r14 = arg2[0x13].d
    
    int32_t rax_13 = rax_12 + r14
    arg2[0x13].d = rax_13
    
    if (rax_13 s> *(arg2 + 0x9c))
        sub_1405a4cf0(&arg2[0x12])

int64_t rcx_24 = sx.q(arg2[0x13].d)

if (rcx_24.d s> 0)
    (*(*arg1 + 0x150))(arg1, arg2[0x12], rcx_24 << 2)

return arg1
