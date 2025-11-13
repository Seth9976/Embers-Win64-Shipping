// 函数: sub_142992170
// 地址: 0x142992170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_30 = -2
void** var_38 = nullptr

if (arg1[1] == 0)
    void* var_40_1 = arg5
    arg3.b = 1
    sub_142991ef0(arg1, arg2, arg3.b, *arg1, arg4)
    return arg2

int64_t* rdi_1 = *arg1

if (arg3 == *rdi_1)
    if ((sub_140611000(arg4, &arg3[4]) u>> 0x1f).b != 0)
        void* var_40_2 = arg5
        sub_142991ef0(arg1, arg2, 1, arg3, arg4)
        return arg2
else if (arg3 != rdi_1)
    if ((sub_140611000(arg4, &arg3[4]) u>> 0x1f).b != 0)
        var_38 = arg3
        
        if ((sub_140611000(*sub_14297bb70(&var_38) + 0x20, arg4) u>> 0x1f).b != 0)
            void** r9_3 = var_38
            void* var_40_4 = arg5
            
            if (*(r9_3[2] + 0x19) == 0)
                sub_142991ef0(arg1, arg2, 1, arg3, arg4)
                return arg2
            
            sub_142991ef0(arg1, arg2, 0, r9_3, arg4)
            return arg2
    
    if ((sub_140611000(&arg3[4], arg4) u>> 0x1f).b != 0)
        var_38 = arg3
        bool cond:0_1 = *sub_14297bb00(&var_38) == rdi_1
        void** rdi_2 = var_38
        uint8_t rax_19
        
        if (not(cond:0_1))
            rax_19 = (sub_140611000(arg4, &rdi_2[4]) u>> 0x1f).b
        
        if (cond:0_1 || rax_19 != 0)
            void* var_40_5 = arg5
            
            if (*(arg3[2] + 0x19) == 0)
                sub_142991ef0(arg1, arg2, 1, rdi_2, arg4)
                return arg2
            
            sub_142991ef0(arg1, arg2, 0, arg3, arg4)
            return arg2
else
    void** rbx_1 = rdi_1[2]
    
    if ((sub_140611000(&rbx_1[4], arg4) u>> 0x1f).b != 0)
        void* var_40_3 = arg5
        sub_142991ef0(arg1, arg2, 0, rbx_1, arg4)
        return arg2

void* var_28
*arg2 = *sub_1429923b0(arg1, &var_28, 0, arg4, arg5)
return arg2
