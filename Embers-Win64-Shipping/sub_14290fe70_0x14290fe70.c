// 函数: sub_14290fe70
// 地址: 0x14290fe70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rbx = nullptr
void* arg_8 = nullptr
*arg1 = 0
void** rdi = nullptr

if (arg2 != 0 && sub_1406938b0(arg2) != 0x40)
    if (sub_1406938b0(arg2) == 0x40)
        goto label_14290feef
    
    void** rax_3 = sub_1428daf90()
    rdi = rax_3
    
    if (rax_3 == 0)
        rbx = arg_8
    else
        sub_1428db050(rax_3, arg2)
    label_14290feef:
        
        if (sub_1428f8c10(rdi, &data_143511f80, &arg_8) == 0)
            rbx = arg_8
        else
            int64_t rax_5 = sub_1428daf90()
            *arg1 = rax_5
            
            if (rax_5 == 0)
                rbx = arg_8
            else
                void* rax_6 = sub_1428a9570(0x38f)
                sub_1428dafb0(*arg1, rax_6, 0x10, arg_8)
                arg_8 = nullptr
    
    sub_1428f2c80(rbx)
    sub_1428daf30(rdi)
    
    if (*arg1 == 0)
        return 0

return 1
