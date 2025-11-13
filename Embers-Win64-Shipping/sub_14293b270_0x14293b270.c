// 函数: sub_14293b270
// 地址: 0x14293b270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rdx = *(*arg1 + 8)
int32_t rax_1

if (rdx != 0)
    rax_1 = rdx()

int32_t rdi

if (rdx == 0 || rax_1 s> 0)
    if ((arg1[4].d & 0x100) != 0)
        sub_142968100(sub_14293b870, arg1)
    
    rdi = 0
    int32_t rsi_1 = 0
    
    if (sub_142898c70(arg1[1]) s<= 0)
    label_14293b31a:
        int64_t rdx_4 = *(*arg1 + 0x18)
        
        if (rdx_4 == 0)
        label_14293b353:
            int32_t rsi_2 = 0
            
            if (sub_142898c70(arg1[1]) s> 0)
                int32_t rax_13
                
                do
                    if (*(*arg1 + 0x20) != 0)
                        int64_t rax_11 = sub_142898ea0(arg1[1], rsi_2)
                        int64_t r8_2 = *arg1
                        int32_t rax_12 = (*(r8_2 + 0x20))(arg1, rax_11, r8_2)
                        
                        if (rax_12 == 0xffffffff)
                            goto label_14293b3dc
                        
                        if (rax_12 == 0)
                            rdi = -1
                            goto label_14293b3a4
                    
                    rsi_2 += 1
                    rax_13 = sub_142898c70(arg1[1])
                while (rsi_2 s< rax_13)
        else
            int32_t rax_8 = rdx_4(arg1)
            
            if (rax_8 == 0xffffffff)
            label_14293b3dc:
                rdi = -2
            else
                if (rax_8 != 0)
                    goto label_14293b353
                
                rdi = rax_8 - 1
    else
        while (true)
            if (*(*arg1 + 0x10) != 0)
                int64_t rax_4 = sub_142898ea0(arg1[1], rsi_1)
                int64_t r8_1 = *arg1
                
                if ((*(r8_1 + 0x10))(arg1, rax_4, r8_1) s<= 0)
                    rdi = -1
                    break
            
            rsi_1 += 1
            
            if (rsi_1 s>= sub_142898c70(arg1[1]))
                goto label_14293b31a
else
    rdi = -1

label_14293b3a4:
int64_t rdx_7 = *(*arg1 + 0x28)
int32_t rax_15

if (rdx_7 != 0)
    rax_15 = rdx_7(arg1)

if (rdx_7 != 0 && rax_15 s<= 0)
    rdi = -1
    sub_1428a5670(0x28, 0x71, 0x6b, "crypto\ui\ui_lib.c", 0x21f)
    sub_1428a4880(2)
else if (rdi == 0xffffffff)
    sub_1428a5670(0x28, 0x71, 0x6b, "crypto\ui\ui_lib.c", 0x21f)
    sub_1428a4880(2)

return zx.q(rdi)
