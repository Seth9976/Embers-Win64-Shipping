// 函数: sub_1403e1840
// 地址: 0x1403e1840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
char* rbp_2

if (arg4 == 0)
    rbp_2 = arg1 + 0x12b0
else
    rbp_2 = arg1 + ((sx.q(arg3) * 9 + 0x602) << 2)

int32_t rdx = sx.d(rbp_2[0x1e]) + (sx.d(rbp_2[0x1d]) << 1)
void* const r8

if (arg4 != 0 || rdx s>= 2)
    rdx -= 2
    r8 = &data_1436fc878
else
    r8 = &data_1436fc87c

sub_1403fe400(arg2, rdx, r8, 8)
int32_t rdx_1 = sx.d(*rbp_2)
void* const r8_1

if (arg5 != 2)
    sub_1403fe400(arg2, rdx_1 s>> 3, &data_1436fd3b0 + (sx.q(rbp_2[0x1d]) << 3), 8)
    rdx_1 = sx.d(*rbp_2) & 7
    r8_1 = &data_1436fc868
else
    r8_1 = &data_1436fd3c8

sub_1403fe400(arg2, rdx_1, r8_1, 8)
int32_t r13 = 1
int32_t i = 1

if (*(arg1 + 0x11fc) s> 1)
    void* rbx_1 = &rbp_2[1]
    
    do
        sub_1403fe400(arg2, sx.d(*rbx_1), &data_1436fd3c8, 8)
        i += 1
        rbx_1 += 1
    while (i s< *(arg1 + 0x11fc))

int16_t* rdx_5 = *(arg1 + 0x1280)
sub_1403fe400(arg2, sx.d(rbp_2[8]), 
    sx.q((sx.d(rbp_2[0x1d]) s>> 1) * sx.d(*rdx_5)) + *(rdx_5 + 0x10), 8)
void var_78
void var_68
sub_1403e6130(&var_68, &var_78, *(arg1 + 0x1280), sx.d(rbp_2[8]))
int32_t i_2 = 0
int32_t i_1 = 0

if (0 s< *(*(arg1 + 0x1280) + 2))
    void* rbx_2 = &rbp_2[9]
    void* r14 = &var_68
    
    do
        char rcx_10 = *rbx_2
        void* const r8_7 = sx.q(*r14) + *(*(arg1 + 0x1280) + 0x28)
        int32_t rdx_9
        
        if (rcx_10 s>= 4)
            sub_1403fe400(arg2, 8, r8_7, 8)
            r8_7 = &data_1436fc85c
            rdx_9 = sx.d(*rbx_2) - 4
        else if (rcx_10 s> 0xfc)
            rdx_9 = sx.d(rcx_10) + 4
        else
            sub_1403fe400(arg2, 0, r8_7, 8)
            rdx_9 = 0xfffffffc - sx.d(*rbx_2)
            r8_7 = &data_1436fc85c
        
        sub_1403fe400(arg2, rdx_9, r8_7, 8)
        i_1 += 1
        r14 += 2
        rbx_2 += 1
    while (i_1 s< sx.d(*(*(arg1 + 0x1280) + 2)))

if (*(arg1 + 0x11fc) == 4)
    sub_1403fe400(arg2, sx.d(rbp_2[0x1f]), &data_1436fc8d0, 8)

if (rbp_2[0x1d] == 2)
    if (arg5 != 2 || *(arg1 + 0x16b8) != arg5)
    label_1403e1adb:
        int32_t rbx_3 = sx.d(*(rbp_2 + 0x1a))
        int32_t rcx_18 = *(arg1 + 0x11f8) s>> 1
        int32_t temp0_1 = divs.dp.d(sx.q(rbx_3), rcx_18)
        sub_1403fe400(arg2, temp0_1, &data_1436fcbb0, 8)
        sub_1403fe400(arg2, rbx_3 - sx.d(rcx_18.w) * sx.d(temp0_1.w), *(arg1 + 0x1270), 8)
    else
        int32_t rdx_13 = sx.d(*(rbp_2 + 0x1a)) - sx.d(*(arg1 + 0x16bc))
        int32_t rdx_14
        
        if (rdx_13 + 8 u> 0x13)
            rdx_14 = 0
        else
            rdx_14 = rdx_13 + 9
            r13 = 0
        
        sub_1403fe400(arg2, rdx_14, &data_1436fcbd0, 8)
        
        if (r13 != 0)
            goto label_1403e1adb
    
    int64_t r8_11 = *(arg1 + 0x1278)
    *(arg1 + 0x16bc) = *(rbp_2 + 0x1a)
    sub_1403fe400(arg2, sx.d(rbp_2[0x1c]), r8_11, 8)
    sub_1403fe400(arg2, sx.d(rbp_2[0x20]), &data_1436fd400, 8)
    
    if (*(arg1 + 0x11fc) s> 0)
        void* rbx_5 = &rbp_2[4]
        
        do
            sub_1403fe400(arg2, sx.d(*rbx_5), (&data_1436fd408)[sx.q(rbp_2[0x20])], 8)
            i_2 += 1
            rbx_5 += 1
        while (i_2 s< *(arg1 + 0x11fc))
    
    if (arg5 == 0)
        sub_1403fe400(arg2, sx.d(rbp_2[0x21]), &data_1436fc864, arg5.b + 8)

*(arg1 + 0x16b8) = sx.d(rbp_2[0x1d])
int64_t result = sub_1403fe400(arg2, sx.d(rbp_2[0x22]), &data_1436fc848, 8)
__security_check_cookie(rax_1 ^ &var_98)
return result
