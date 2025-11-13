// 函数: sub_14205d1e0
// 地址: 0x14205d1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg7
int64_t var_80 = arg10
int64_t* var_88 = arg9
void* var_90 = arg8
arg7.d = 0
sub_14205ca00(arg1, arg2, arg3, arg4, arg5, arg6, rdi)

if ((*(*rdi + 0x78))(rdi) != 0)
    (*(*rdi + 0x78))(rdi)

void* rbx = rdi[-0x17]
void* arg_20 = rbx

if (rbx != 0)
    *(rbx + 8) += 1
    rbx = arg_20

int64_t r11 = sx.q(*(arg4 + 0xe0))
int32_t r8 = 0

if (r11 s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_3 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_3 = (rcx_3 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_3 + (rdx << 3)) == data_143f41260)
            break
        
        r8 += 1
        rdx += 1
        
        if (rdx s>= r11)
            goto label_14205d2f3

void* rdx_1

if (r11 s<= 0 || r8 == 0xffffffff)
label_14205d2f3:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_8 = *(arg4 + 0xe8)
    
    if ((rcx_8.b & 1) != 0)
        rcx_8 = (rcx_8 s>> 1) + arg4 + 0xe8
    
    rdx_1 = rcx_8 + (sx.q(r8) << 1)

int16_t rax_11 = *rdx_1

if (rax_11 != 0xffff)
    sub_140891ab0(arg9, rbx, zx.d(rax_11))

sub_1405d1550(&arg_20)
int32_t rbx_1 = 1
int32_t rdx_3 = rdi[-0x12].d
int32_t rsi_2 = *(*arg3 + 0x3c)
int64_t r8_2

if (rdx_3 != 0xffffffff)
    int32_t rax_15 = *(rdi - 0x8c)
    r8_2 = 0
    
    if (rax_15 != 0xffffffff)
        r8_2.b = rsi_2 - rdx_3 u> rsi_2 - rax_15
else
    r8_2 = 1

sub_14088d770(arg9, *(arg1 + 0x1c), rdi[r8_2 * 2 - 0x15])
int32_t r9_1 = rdi[-0x12].d
int32_t r8_5

if (r9_1 != 0xffffffff)
    int32_t rax_18 = *(rdi - 0x8c)
    r8_5 = 0
    
    if (rax_18 != 0xffffffff)
        r8_5.b = rsi_2 - r9_1 u> rsi_2 - rax_18
        
        if (rax_18 != 0xffffffff)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r9_1 - rax_18)
            
            if ((temp1_1 ^ temp0_1) - temp0_1 u<= 2)
                r8_5 = 1 - r8_5
else
    r8_5 = 1

sub_14088d770(arg9, *(arg1 + 0x20), rdi[sx.q(r8_5) * 2 - 0x15])
int32_t rdx_9 = rdi[-0x12].d
arg7.d = *(arg1 + 0x24)
arg7:4.w = *(arg1 + 0x28)
int64_t r8_9

if (rdx_9 != 0xffffffff)
    int32_t rax_26 = *(rdi - 0x8c)
    r8_9 = 0
    
    if (rax_26 != 0xffffffff)
        r8_9.b = rsi_2 - rdx_9 u> rsi_2 - rax_26
else
    r8_9 = 1

sub_141250690(arg9, &arg7, &rdi[-0x18 + (r8_9 + 1) * 8])
int32_t rdx_11 = rdi[-0x12].d
int32_t arg_8 = *(arg1 + 0x2a)
int16_t arg_c = *(arg1 + 0x2e)
int32_t r8_13

if (rdx_11 != 0xffffffff)
    int32_t rax_31 = *(rdi - 0x8c)
    r8_13 = 0
    
    if (rax_31 != 0xffffffff)
        r8_13.b = rsi_2 - rdx_11 u> rsi_2 - rax_31
        
        if (rax_31 != 0xffffffff)
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rdx_11 - rax_31)
            
            if ((temp3_1 ^ temp2_1) - temp2_1 u<= 2)
                r8_13 = 1 - r8_13
else
    r8_13 = 1

sub_141250690(arg9, &arg_8, &rdi[-0x18 + (sx.q(r8_13) + 1) * 8])
int32_t arg_18 = *(arg1 + 0x30)
int16_t arg_1c = *(arg1 + 0x34)
sub_14088bf20(arg9, &arg_18, &rdi[-0x18])
void* var_68
void* var_60
void* var_58
void* var_48
void* r8_19

if ((*(*rdi + 0x78))(rdi) != 0)
    int32_t rax_42 = (*(*rdi + 0x78))(rdi)
    r8_19 = rdi[0x84]
    int32_t rax_43
    
    if (rax_42 != 1)
        var_68 = r8_19
        
        if (r8_19 != 0)
            *(r8_19 + 8) += 1
            r8_19 = var_68
        
        rax_43 = 0xc
    else
        var_60 = r8_19
        
        if (r8_19 != 0)
            *(r8_19 + 8) += 1
            r8_19 = var_60
        
        rax_43 = 0xa
    
    var_48 = r8_19
    
    if (r8_19 != 0)
        *(r8_19 + 8) += 1
    
    rbx_1 = rax_43
else
    r8_19 = rdi[0x84]
    var_58 = r8_19
    
    if (r8_19 != 0)
        *(r8_19 + 8) += 1
        r8_19 = var_58

sub_14088d770(arg9, *(arg1 + 0x36), r8_19)

if ((rbx_1.b & 8) != 0)
    rbx_1 &= 0xfffffff7
    sub_1405ec8a0(&var_48)

if ((rbx_1.b & 4) != 0)
    rbx_1 &= 0xfffffffb
    sub_1405ec8a0(&var_68)

if ((rbx_1.b & 2) != 0)
    rbx_1 &= 0xfffffffd
    sub_1405ec8a0(&var_60)

if ((rbx_1.b & 1) != 0)
    sub_1405ec8a0(&var_58)

int64_t rdx_17

if ((*(*rdi + 0x78))(rdi) != 0)
    int32_t rax_51 = (*(*rdi + 0x78))(rdi)
    int64_t* i = rdi[0x85]
    void* r8_21 = &i[sx.q(rdi[0x86].d)]
    
    if (rax_51 != 1)
        for (; i != r8_21; i = &i[1])
            rdx_17 = *i
            
            if (rdx_17 u>> 0x20 == zx.q(*(arg8 + 0x50)))
                goto label_14205d672
    else
        for (; i != r8_21; i = &i[1])
            rdx_17 = *i
            
            if (rdx_17 u>> 0x20 == zx.q(*(arg8 + 0x50)))
                goto label_14205d672
else
    for (int64_t* i_1 = rdi[0x85]; i_1 != &i_1[sx.q(rdi[0x86].d)]; i_1 = &i_1[1])
        rdx_17 = *i_1
        
        if (rdx_17 u>> 0x20 == zx.q(*(arg8 + 0x50)))
            goto label_14205d672

rdx_17 = 0
label_14205d672:
int32_t var_4c = rdx_17.d
int32_t var_50 = *(arg8 + 0x50)
int32_t var_78 = *(arg1 + 0x3a)
int16_t var_74 = *(arg1 + 0x3e)
return sub_141211af0(arg9, &var_78, &var_50)
