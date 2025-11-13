// 函数: sub_1428ba270
// 地址: 0x1428ba270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int64_t* rax = sub_142907bb0()
int32_t rdi = 0
char* var_40 = nullptr
int64_t* rbx = nullptr
int64_t* r15 = nullptr
char* r14 = nullptr

if (rax == 0)
    sub_1428a5670((rax + 9).d, 0x91, (rax + 0x41).d, "crypto\pem\pem_lib.c", 0x380)
    return 0

*arg5 = 0
*arg3 = 0
*arg2 = 0
*arg4 = 0

if ((arg6.b & 6) != 6)
    void* rax_6
    
    if ((arg6.b & 1) == 0)
        rax_6 = sub_14289b5e0()
    else
        rax_6 = sub_14289b5f0()
    
    int64_t* rax_7 = sub_14289a500(rax_6)
    int64_t* var_60 = rax_7
    rbx = rax_7
    int64_t* rax_8 = sub_14289a500(rax_6)
    int64_t* var_48 = rax_8
    r15 = rax_8
    
    if (rbx == 0 || rax_8 == 0)
        sub_1428a5670(9, 0x91, 0x41, "crypto\pem\pem_lib.c", 0x391)
    else
        int32_t rax_9 = sub_1428bae40(arg1, &var_40, arg6)
        r14 = var_40
        
        if (rax_9 != 0)
            if (sub_1428bab90(arg1, &var_60, &var_48, r14, arg6) == 0)
                rbx = var_60
                r15 = var_48
            else
                sub_142907970(rax)
                r15 = var_48
                int32_t* var_50
                sub_142899cf0(r15, 0x73, 0, &var_50)
                int32_t* rax_11 = var_50
                int32_t rcx_7 = *rax_11
                int32_t var_68 = rcx_7
                void* rdx_2 = *(rax_11 + 8)
                int32_t rax_12 = sub_142907980(rax, rdx_2, &var_68, rdx_2, rcx_7)
                int32_t var_58
                int32_t rax_14
                
                if (rax_12 s>= 0)
                    rax_14 = sub_142907910(rax, sx.q(var_68) + *(var_50 + 8), &var_58)
                
                if (rax_12 s< 0 || rax_14 s< 0)
                    sub_1428a5670(9, 0x91, 0x64, "crypto\pem\pem_lib.c", 0x3a1)
                    rbx = var_60
                else
                    int32_t rax_16 = var_68 + var_58
                    rbx = var_60
                    var_68 = rax_16
                    *var_50 = sx.q(rax_16)
                    
                    if (var_68 != 0)
                        int32_t rax_18 = sub_142899cf0(rbx, 3, 0, 0)
                        var_60.d = rax_18
                        *arg3 = sub_1428bb3d0(rax_18 + 1, arg6.b)
                        int64_t rax_20 = sub_1428bb3d0(var_68, arg6.b)
                        *arg4 = rax_20
                        int64_t rcx_15 = *arg3
                        
                        if (rcx_15 == 0 || rax_20 == 0)
                            sub_1428bb380(rcx_15, arg6.b, 0)
                            sub_1428bb380(*arg4, arg6.b, 0)
                        else
                            sub_14289a950(rbx, rcx_15, var_60.d)
                            *(sx.q(var_60.d) + *arg3) = 0
                            sub_14289a950(r15, *arg4, var_68)
                            *arg5 = var_68
                            *arg2 = r14
                            r14 = nullptr
                            rdi = 1
else
    sub_1428a5670(9, 0x91, 7, "crypto\pem\pem_lib.c", 0x389)

sub_142907b80(rax)

if ((arg6.b & 1) == 0)
    sub_1428a6780(r14)
else
    sub_1428a7140(r14, 0, "crypto\pem\pem_lib.c", 0xdd)

sub_142899e70(rbx)
sub_142899e70(r15)
return zx.q(rdi)
