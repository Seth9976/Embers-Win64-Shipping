// 函数: sub_1429289f0
// 地址: 0x1429289f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
__chkstk(0x20)
int64_t* rbx = nullptr

if (arg1 == 0)
    int32_t rdi_2 = 0
    
    if (sub_1428bc4d0() s> 0)
        int32_t rax_11
        
        do
            int64_t arg_8 = arg_18
            int32_t* rax_9 = sub_1428bc420(rdi_2)
            
            if ((rax_9[2].b & 1) == 0)
                int64_t* rax_10 = sub_1428c7580(*rax_9, nullptr, &arg_8, arg4)
                
                if (rax_10 != 0)
                    if (rbx == 0)
                        rbx = rax_10
                    else
                        sub_1428965a0(rax_10)
                    
                    *arg5 += 1
            
            rdi_2 += 1
            rax_11 = sub_1428bc4d0()
        while (rdi_2 s< rax_11)
    
    if (*arg5 s<= 1)
        goto label_142928a5b
    
    sub_1428965a0(rbx)
    return 0

if (strcmp(arg1, "PRIVATE KEY") == 0)
    void* rax_1 = sub_1428f1150(nullptr, &arg_18, arg4)
    *arg5 = 1
    
    if (rax_1 != 0)
        rbx = sub_1428f1170(rax_1)
    
    sub_1428f1010(rax_1)
    goto label_142928a5b

int32_t rax_4 = sub_1428bb2f0(arg1, "PRIVATE KEY")

if (rax_4 s> 0)
    void* rax_5 = sub_1428bc250(nullptr, arg1, rax_4)
    
    if (rax_5 != 0)
        *arg5 = 1
        rbx = sub_1428c7580(*rax_5, nullptr, &arg_18, arg4)
    label_142928a5b:
        
        if (rbx != 0)
            int32_t* result = sub_142969440(rbx)
            
            if (result == 0)
                sub_1428965a0(rbx)
            
            return result

return 0
