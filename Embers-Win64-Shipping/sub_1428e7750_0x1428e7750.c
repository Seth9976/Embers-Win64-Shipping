// 函数: sub_1428e7750
// 地址: 0x1428e7750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rbx = arg2[0x27]

if (rbx != 0)
    int32_t* rcx = rbx[1]
    int32_t rdi_1 = 0
    
    if (rcx != 0)
        int32_t rsi_1 = 0
        
        if (sub_142898c70(rcx) s> 0)
            int32_t rax_4
            
            do
                int32_t rax_3 = sub_1428a96d0(sub_142898ea0(rbx[1], rsi_1))
                
                if (rax_3 == arg1)
                    return 2
                
                if (rax_3 == 0x38e && (arg3 & 0x10) != 0)
                    return 2
                
                rsi_1 += 1
                rax_4 = sub_142898c70(rbx[1])
            while (rsi_1 s< rax_4)
    
    int32_t* rcx_4 = *rbx
    
    if (rcx_4 != 0)
        if (sub_142898c70(rcx_4) s> 0)
            int32_t rax_8
            
            do
                int32_t rax_7 = sub_1428a96d0(sub_142898ea0(*rbx, rdi_1))
                
                if (rax_7 == arg1)
                    return 1
                
                if (rax_7 == 0x38e && (arg3 & 0x10) != 0)
                    return 1
                
                rdi_1 += 1
                rax_8 = sub_142898c70(*rbx)
            while (rdi_1 s< rax_8)
        
        return 2

if ((arg3 & 8) != 0)
    sub_1428ae8e0(arg2, 0xffffffff, 0)
    
    if ((arg3 & 4) == 0 && (arg2[0x1a].d & 0x2000) != 0)
        return 1

return 3
