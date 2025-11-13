// 函数: sub_1428539a0
// 地址: 0x1428539a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rbx

if (arg1 == 0)
    rbx = *(arg2 + 0x130)
else
    rbx = *(arg1 + 0x488)

void* rbx_1 = *rbx

if (rbx_1 != 0)
    int32_t var_18_1 = 0
    int32_t rax_1 = sub_1428636a0(arg1, arg2, arg3, 0)
    
    if (rax_1 == 1)
        int32_t* rax_3 = *(rbx_1 + 0x10)
        
        if (rax_3 != 0)
        label_142853a33:
            
            if (sub_142898d50(rax_3, arg3) != 0)
                return 1
        else
            rax_3 = sub_142898ba0()
            *(rbx_1 + 0x10) = rax_3
            
            if (rax_3 != 0)
                goto label_142853a33
    else
        sub_1428a5670(0x14, 0x15a, rax_1, "ssl\ssl_cert.c", 0x128)

return 0
