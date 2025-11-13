// 函数: sub_142a71520
// 地址: 0x142a71520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1
int32_t var_28 = 0
char rax_1 = (*(*arg3 + 0x10))(arg3)
char j

if (rax_1 == 0)
    j = (*(*arg3 + 0x18))(arg3)

if (rax_1 != 0 || j != 0 || rbp == 0)
label_142a715c0:
    sub_142a47a60(arg2, 1, u"other", 5)
else
    while (true)
        void* i = *(rbp + 0x50)
        j = 0
        
        if (i != 0)
            do
                if (j != 0)
                    goto label_142a715e2
                
                void* rbx_1 = *(i + 8)
                j = 1
                
                if (rbx_1 != 0)
                    while (j != 0)
                        j, arg4 = sub_142a709e0(rbx_1, arg3, arg4)
                        rbx_1 = *(rbx_1 + 0x28)
                        
                        if (rbx_1 == 0)
                            break
                
                i = *(i + 0x10)
            while (i != 0)
            
            if (j != 0)
            label_142a715e2:
                sub_142a479b0(arg2, rbp + 8)
                break
        
        rbp = *(rbp + 0x48)
        
        if (rbp == 0)
            goto label_142a715c0

return arg2
