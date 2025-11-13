// 函数: sub_1428c4bb0
// 地址: 0x1428c4bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
__chkstk(0x30)
int32_t r15 = 0
int64_t* rbx = arg1
int64_t* r13 = nullptr
int32_t* rdi = nullptr
void* r10 = *(arg6 + 0x18)

if (r10 != 0)
    int64_t r10_1 = *(r10 + 0x28)
    
    if (r10_1 != 0)
        void* var_30 = arg6
        char* var_38 = arg5
        return r10_1()

if (*(arg6 + 4) != 0xfffffffc)
    goto label_1428c4c73

rdi = *arg1

if (rdi != 0)
    goto label_1428c4c55

int32_t* rax_3 = sub_1428c3640()
rdi = rax_3

if (rax_3 == 0)
    goto label_1428c4eb0

arg2 = arg_10
*rbx = rax_3
label_1428c4c55:

if (arg4 != *rdi)
    sub_1428cd2e0(rdi, arg4, 0)
    arg2 = arg_10

r13 = rbx
rbx = &rdi[2]
label_1428c4c73:

if (arg4 - 1 u<= 9)
    int32_t* rax_6
    
    switch (arg4)
        case 1
            if (arg3 == 1)
                *rbx = zx.d(*arg2)
                goto label_1428c4cb3
            
            sub_1428a5670(0xd, 0xcc, 0x6a, "crypto\asn1\tasn_dec.c", 0x332)
            goto label_1428c4eb0
        case 2, 0xa
            if (sub_1428e4e60(rbx, &arg_10, arg3) == 0)
                goto label_1428c4eb0
            
            void* rcx_6 = *rbx
            *(rcx_6 + 4) = (*(rcx_6 + 4) & 0x100) | arg4
            goto label_1428c4cb3
        case 3
            rax_6 = sub_14291c1c0(rbx, &arg_10, arg3)
            goto label_1428c4ca2
        case 4, 7, 8, 9
            goto label_1428c4d8d
        case 5
            if (arg3 == 0)
                *rbx = 1
            label_1428c4cb3:
                
                if (rdi != 0 && arg4 == 5)
                    *(rdi + 8) = 0
                
                r15 = 1
            else
                sub_1428a5670(0xd, 0xcc, 0x90, "crypto\asn1\tasn_dec.c", 0x32a)
            label_1428c4eb0:
                sub_1428c3620(rdi)
                
                if (r13 != 0)
                    *r13 = 0
        case 6
            rax_6 = sub_1428cd950(rbx, &arg_10, arg3)
        label_1428c4ca2:
            
            if (rax_6 == 0)
                goto label_1428c4eb0
            
            goto label_1428c4cb3
    
    return zx.q(r15)

label_1428c4d8d:

if (arg4 == 0x1e)
    if ((arg3.b & 1) == 0)
        goto label_1428c4ded
    
    sub_1428a5670(arg4 - 0x11, 0xcc, 0xd6, "crypto\asn1\tasn_dec.c", 0x35c)
    goto label_1428c4eb0

if (arg4 == 0x1c && (arg3.b & 3) != 0)
    sub_1428a5670(arg4 - 0xf, 0xcc, 0xd7, "crypto\asn1\tasn_dec.c", 0x361)
    goto label_1428c4eb0

label_1428c4ded:
int32_t* rsi_1 = *rbx

if (rsi_1 == 0)
    int32_t* rax_13 = sub_1428f2e90(arg4)
    rsi_1 = rax_13
    
    if (rax_13 != 0)
        *rbx = rax_13
        goto label_1428c4e39
    
    sub_1428a5670((rax_13 + 0xd).d, 0xcc, (rax_13 + 0x41).d, "crypto\asn1\tasn_dec.c", 0x368)
    goto label_1428c4eb0

rsi_1[1] = arg4
label_1428c4e39:

if (*arg5 != 0)
    sub_1428a6780(*(rsi_1 + 8))
    *(rsi_1 + 8) = arg_10
    *rsi_1 = arg3
    *arg5 = 0
    goto label_1428c4cb3

int32_t rax_15 = sub_1428f2d50(rsi_1, arg_10, arg3)

if (rax_15 != 0)
    goto label_1428c4cb3

sub_1428a5670(rax_15 + 0xd, 0xcc, rax_15 + 0x41, "crypto\asn1\tasn_dec.c", 0x378)
sub_1428f2c80(rsi_1)
*rbx = 0
goto label_1428c4eb0
