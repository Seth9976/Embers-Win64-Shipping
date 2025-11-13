// 函数: sub_142875b50
// 地址: 0x142875b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
__chkstk(0x40)
int64_t rsi = 0
int64_t i = 0
int64_t r12 = *(*(arg1 + 0x488) + 0x1f0)

if (r12 != -0x1a)
    do
        int64_t rcx = sx.q(i.d)
        int64_t rax_1 = rcx * 5
        int64_t* rbx_1 = arg3 + (rax_1 << 3)
        
        if (*(arg3 + (rax_1 << 3) + 0x10) != 0 && *(rbx_1 + 0x14) == 0)
            *(rbx_1 + 0x14) = 1
            int64_t var_50
            int64_t var_48
            int32_t rax_4
            
            if (i.d u>= 0x1a)
            label_142875c40:
                var_48 = arg5
                var_50 = arg4
                rax_4 = sub_142856000(arg1, arg2, rbx_1[3].d, *rbx_1, rbx_1[1], var_50, var_48)
            label_142875c57:
                
                if (rax_4 == 0)
                    return 0
            else if (sub_142875330(arg1, *(rcx * 0x38 + &data_1434e71e4), arg2) != 0)
                int64_t rax_3
                
                if (arg1[0xe] == 0)
                    rax_3 = (&data_1434e71f8)[rcx * 7]
                else
                    rax_3 = (&data_1434e71f0)[rcx * 7]
                
                if (rax_3 == 0)
                    goto label_142875c40
                
                rax_4 = rax_3(arg1, rbx_1, zx.q(arg2), arg4, arg5, var_50, var_48)
                goto label_142875c57
            arg3 = arg_18
        
        i += 1
    while (i u< r12 + 0x1a)

if (arg6 == 0)
    return 1

void* const rbx_2 = &data_1434e71e4
int32_t* rdi = arg3 + 0x10

while (true)
    int64_t rax_6 = *(rbx_2 + 0x2c)
    
    if (rax_6 != 0 && (*rbx_2 & arg2) != 0 && rax_6(arg1, zx.q(arg2), zx.q(*rdi)) == 0)
        return 0
    
    rsi += 1
    rdi = &rdi[0xa]
    rbx_2 += 0x38
    
    if (rsi u>= 0x1a)
        return 1
