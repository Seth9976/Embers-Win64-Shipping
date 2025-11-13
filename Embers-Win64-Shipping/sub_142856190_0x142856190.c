// 函数: sub_142856190
// 地址: 0x142856190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rax = arg2[1]
int64_t i_1 = 0
int32_t r12 = 0

if (rax != 0)
    int64_t rax_1 = sub_1428a6af0(*arg2, rax * 0x38, "ssl\statem\extensions_cust.c", 0x116)
    *arg1 = rax_1
    
    if (rax_1 == 0)
        return 0
    
    int64_t i = 0
    arg1[1] = arg2[1]
    
    if (arg2[1] u> 0)
        int64_t rbx_1 = 0
        
        do
            int64_t r13_1 = *arg2
            void* rbp_2 = *arg1 + rbx_1
            
            if (*(r13_1 + rbx_1 + 0x10) == sub_142855ef0)
                if (r12 == 0)
                    *(rbp_2 + 0x20) = sub_1428a6af0(*(r13_1 + rbx_1 + 0x20), 0x18, 
                        "ssl\statem\extensions_cust.c", 0x12e)
                    int64_t rax_4 = sub_1428a6af0(*(r13_1 + rbx_1 + 0x30), 0x10, 
                        "ssl\statem\extensions_cust.c", 0x130)
                    *(rbp_2 + 0x30) = rax_4
                    
                    if (*(rbp_2 + 0x20) == 0 || rax_4 == 0)
                        r12 = 1
                else
                    *(rbp_2 + 0x20) = 0
                    *(rbp_2 + 0x30) = 0
            
            i += 1
            rbx_1 += 0x38
        while (i u< arg2[1])
        
        if (r12 != 0)
            void* rcx_3 = *arg1
            
            if (arg1[1] u> 0)
                int64_t* rbx_2 = rcx_3 + 0x20
                
                do
                    if (rbx_2[-2] == sub_142855ef0)
                        sub_1428a6780(*rbx_2)
                        sub_1428a6780(rbx_2[2])
                    
                    i_1 += 1
                    rbx_2 = &rbx_2[7]
                while (i_1 u< arg1[1])
                
                rcx_3 = *arg1
            
            sub_1428a6780(rcx_3)
            return 0

return 1
