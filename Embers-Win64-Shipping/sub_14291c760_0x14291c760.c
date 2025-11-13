// 函数: sub_14291c760
// 地址: 0x14291c760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x148)
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t rsi = sx.q(arg2[1].d)
int32_t r14 = 0
int32_t rbp

if (rsi.d s> 0)
    sub_1428d8e50(arg3)
    int64_t* rbx_1
    
    if (arg2 == arg1)
        rbx_1 = sub_1428d8ba0(arg3)
    else
        rbx_1 = arg1
    
    int64_t* rax_3 = sub_1428d8ba0(arg3)
    
    if (rbx_1 != 0 && rax_3 != 0)
        int32_t rax_4 = (rsi * 2).d
        
        if (sub_142890e60(rbx_1, rax_4) != 0)
            if (rsi.d != 4)
                if (rsi.d == 8)
                    sub_142920110(*rbx_1, *arg2)
                    goto label_14291c8a5
                
                void* r9_1
                
                if (rsi.d s< 0x10)
                    void var_148
                    r9_1 = &var_148
                label_14291c89c:
                    sub_14291cab0(*rbx_1, *arg2, rsi.d, r9_1)
                    goto label_14291c8a5
                
                uint64_t rdx_3 = zx.q(1 << (sub_142890660(rsi) - 1))
                
                if (rsi.d != rdx_3.d)
                    if (sub_142890e60(rax_3, (rsi * 2).d) != 0)
                        r9_1 = *rax_3
                        goto label_14291c89c
                else if (sub_142890e60(rax_3, (rdx_3 << 2).d) != 0)
                    sub_14291cbc0(*rbx_1, *arg2, rsi.d, *rax_3)
                    goto label_14291c8a5
            else
                sub_14291fc50(*rbx_1, *arg2)
            label_14291c8a5:
                rbx_1[1].d = rax_4
                rbx_1[2].d = 0
                int64_t* rax_10
                
                if (arg1 != rbx_1)
                    rax_10 = sub_142890040(arg1, rbx_1)
                
                if (arg1 == rbx_1 || rax_10 != 0)
                    r14 = 1
    
    sub_1428d8a60(arg3)
    rbp = r14
else
    arg1[1].d = 0
    rbp = 1
    arg1[2].d = 0

sub_142890ce0(arg1)
__security_check_cookie(rax_1 ^ &var_178)
return zx.q(rbp)
