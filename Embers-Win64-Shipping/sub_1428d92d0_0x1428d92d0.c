// 函数: sub_1428d92d0
// 地址: 0x1428d92d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rdi = sx.q(arg2[1].d)
char r13 = 0
int64_t rsi = sx.q(arg3[1].d)

if (rdi.d == 0 || rsi.d == 0)
    sub_142890900(arg1, 0)
    return 1

int32_t rax = (rsi + rdi).d
sub_1428d8e50(arg4)
int32_t rbx_2
int64_t* rbx_1

if (arg1 == arg2 || arg1 == arg3)
    int64_t* rax_1 = sub_1428d8ba0(arg4)
    rbx_1 = rax_1
    
    if (rax_1 != 0)
        goto label_1428d9351
    
    rbx_2 = 0
else
    rbx_1 = arg1
label_1428d9351:
    int32_t rbp_1 = rdi.d
    int32_t rbp_2 = rbp_1 - rsi.d
    
    if (rbp_1 == rsi.d && rdi.d == 8)
        if (sub_142890e60(rbx_1, rbp_2 + 0x10) == 0)
            rbx_2 = 0
        else
            rbx_1[1].d = 0x10
            sub_14291daa0(*rbx_1, *arg2, *arg3)
        label_1428d94f5:
            rbx_1[2].d = arg2[2].d ^ arg3[2].d
            int64_t* rax_16
            
            if (arg1 != rbx_1)
                rax_16 = sub_142890040(arg1, rbx_1)
            
            if (arg1 != rbx_1 && rax_16 == 0)
                rbx_2 = 0
            else
                rbx_2 = 1
    else if (rdi.d s< 0x10 || rsi.d s< 0x10 || rbp_2 + 1 u> 2)
        if (sub_142890e60(rbx_1, rax) != 0)
            rbx_1[1].d = rax
            sub_1428d9560(*rbx_1, *arg2, rdi.d, *arg3, rsi.d)
            goto label_1428d94f5
        
        rbx_2 = 0
    else
        if (rbp_2 s>= 0)
            r13 = sub_142890660(rdi)
        
        if (rbp_2 == 0xffffffff)
            r13 = sub_142890660(rsi)
        
        uint64_t rbp_3 = zx.q(1 << (r13 - 1))
        int64_t* rax_6 = sub_1428d8ba0(arg4)
        
        if (rax_6 == 0)
            rbx_2 = 0
        else if (rdi.d s> rbp_3.d || rsi.d s> rbp_3.d)
            if (sub_142890e60(rax_6, (rbp_3 << 3).d) == 0)
                rbx_2 = 0
            else
                if (sub_142890e60(rbx_1, (rbp_3 << 3).d) != 0)
                    sub_1428d9690(*rbx_1, *arg2, *arg3, rbp_3.d, rdi.d - rbp_3.d, rsi.d - rbp_3.d, 
                        *rax_6)
                    rbx_1[1].d = rax
                    goto label_1428d94f5
                
                rbx_2 = 0
        else if (sub_142890e60(rax_6, (rbp_3 << 2).d) == 0)
            rbx_2 = 0
        else
            if (sub_142890e60(rbx_1, (rbp_3 << 2).d) != 0)
                sub_1428d9bf0(*rbx_1, *arg2, *arg3, rbp_3.d, rdi.d - rbp_3.d, rsi.d - rbp_3.d, 
                    *rax_6)
                rbx_1[1].d = rax
                goto label_1428d94f5
            
            rbx_2 = 0
sub_1428d8a60(arg4)
return zx.q(rbx_2)
