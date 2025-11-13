// 函数: sub_14290b180
// 地址: 0x14290b180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = 0
int64_t* r12
int64_t* r15

if (arg4 != 2)
    r15 = nullptr
    
    if (arg4 s<= 0)
        r12 = nullptr
    else
        r12 = *(arg2 + 0x20)
else
    r15 = *(arg2 + 0x28)
    r12 = *(arg2 + 0x20)

char const* const r14

if (arg4 != 2)
    r14 = "Public-Key"
    
    if (arg4 != 1)
        r14 = "DSA-Parameters"
else
    r14 = "Private-Key"

if (r15 == 0)
label_14290b23a:
    int32_t var_28_1 = arg3
    
    if (sub_14293b8e0(arg1, "priv:", r15, 0) != 0)
        int32_t var_28_2 = arg3
        
        if (sub_14293b8e0(arg1, "pub: ", r12, 0) != 0)
            int32_t var_28_3 = arg3
            
            if (sub_14293b8e0(arg1, "P:   ", *(arg2 + 8), 0) != 0)
                int32_t var_28_4 = arg3
                
                if (sub_14293b8e0(arg1, "Q:   ", *(arg2 + 0x10), 0) != 0)
                    int32_t var_28_5 = arg3
                    
                    if (sub_14293b8e0(arg1, "G:   ", *(arg2 + 0x18), 0) != 0)
                        rbx = 1
else if (sub_14289a2c0(arg1, arg3, 0x80) != 0)
    sub_142890560(*(arg2 + 8))
    
    if (sub_1428b6f70(arg1, "%s: (%d bit)\n", r14) s> 0)
        goto label_14290b23a

return zx.q(rbx)
