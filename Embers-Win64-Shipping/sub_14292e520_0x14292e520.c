// 函数: sub_14292e520
// 地址: 0x14292e520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rcx = *arg1

if (rcx != 0)
    int32_t rbx_2 = 0
    
    if (sub_142898c70(rcx) s<= 0)
    label_14292e569:
        void** rax_1 = sub_1428d5d40(arg2, arg3, arg4)
        
        if (rax_1 != 0)
            if (sub_142898d50(*arg1, rax_1) != 0)
                return 1
            
            sub_1428d5e00(rax_1)
    else
        int64_t* rax_4
        
        while (true)
            rax_4 = sub_142898ea0(*arg1, rbx_2)
            
            if (sub_1428a96d0(sub_142891580(rax_4)) == arg2)
                break
            
            rbx_2 += 1
            
            if (rbx_2 s>= sub_142898c70(*arg1))
                goto label_14292e569
        
        sub_1428d5e00(rax_4)
        void** rax_8 = sub_1428d5d40(arg2, arg3, arg4)
        
        if (rax_8 != 0)
            if (sub_142898dc0(*arg1, rbx_2, rax_8) != 0)
                return 1
            
            sub_1428d5e00(rax_8)
else
    void* rax = sub_142898ba0()
    *arg1 = rax
    
    if (rax != 0)
        goto label_14292e569

return 0
