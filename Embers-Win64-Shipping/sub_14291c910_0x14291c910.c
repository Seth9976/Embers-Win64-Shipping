// 函数: sub_14291c910
// 地址: 0x14291c910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x140)
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t rdi = sx.q(arg2[1].d)
int32_t result_1 = 0
uint64_t result

if (rdi.d s> 0)
    sub_1428d8e50(arg3)
    int64_t* rbx_1
    
    if (arg2 == arg1)
        rbx_1 = sub_1428d8ba0(arg3)
    else
        rbx_1 = arg1
    
    int64_t* rax_3 = sub_1428d8ba0(arg3)
    
    if (rbx_1 != 0 && rax_3 != 0)
        int32_t r13_1 = (rdi * 2).d
        
        if (sub_142890e60(rbx_1, r13_1) != 0)
            if (rdi.d != 4)
                if (rdi.d == 8)
                    sub_142920110(*rbx_1, *arg2)
                    goto label_14291ca4d
                
                void* r9_1
                
                if (rdi.d s< 0x10)
                    void var_148
                    r9_1 = &var_148
                label_14291ca48:
                    sub_14291cab0(*rbx_1, *arg2, rdi.d, r9_1)
                    goto label_14291ca4d
                
                uint64_t rdx_3 = zx.q(1 << (sub_142890660(rdi) - 1))
                
                if (rdi.d != rdx_3.d)
                    if (sub_142890e60(rax_3, r13_1) != 0)
                        r9_1 = *rax_3
                        goto label_14291ca48
                else if (sub_142890e60(rax_3, (rdx_3 << 2).d) != 0)
                    sub_14291cbc0(*rbx_1, *arg2, rdi.d, *rax_3)
                    goto label_14291ca4d
            else
                sub_14291fc50(*rbx_1, *arg2)
            label_14291ca4d:
                rbx_1[2].d = 0
                rbx_1[1].d = r13_1
                int64_t* rax_8
                
                if (arg1 != rbx_1)
                    rax_8 = sub_142890040(arg1, rbx_1)
                
                if (arg1 == rbx_1 || rax_8 != 0)
                    result_1 = 1
    
    sub_1428d8a60(arg3)
    result = zx.q(result_1)
else
    arg1[1].d = 0
    result = 1
    arg1[2].d = 0

__security_check_cookie(rax_1 ^ &var_168)
return result
