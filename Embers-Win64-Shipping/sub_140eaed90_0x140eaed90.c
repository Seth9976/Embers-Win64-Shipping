// 函数: sub_140eaed90
// 地址: 0x140eaed90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int32_t i = sub_140ebeb20(*(arg1 + 0x3f0), &var_28)
int64_t r15 = var_28

if (r15 != 0)
    int64_t* rcx_2 = *(arg1 + 0x3f0) + 0x2a8
    int32_t rsi_1 = 0
    i = (**rcx_2)(rcx_2)
    
    if (i s> 1)
        int64_t rdi_1 = 0
        
        do
            int64_t* rcx_4 = *(arg1 + 0x3f0) + 0x2a8
            i = (**rcx_4)(rcx_4)
            
            if (rsi_1 s>= i)
                break
            
            int64_t* rbx_2 = *(*(arg1 + 0x3f0) + 0x2b8) + rdi_1
            uint64_t rax_2
            
            if (arg2 == 2)
                rax_2.b = 1
            else
                bool cond:0_1
                
                if (arg2 == 0)
                    cond:0_1 = sub_140f03770(*rbx_2).b == 3
                label_140eaee5c:
                    
                    if (cond:0_1)
                        rax_2.b = 1
                    else
                        rax_2.b = 0
                else if (arg2 != 1)
                    rax_2.b = 0
                else
                    if (sub_140f03770(*rbx_2).b != 3)
                        cond:0_1 = sub_140f03770(*rbx_2).b == 0
                        goto label_140eaee5c
                    
                    rax_2.b = 1
            
            void* rcx_8 = *rbx_2
            char rax_3
            
            if (r15 != rcx_8 && rax_2.b != 0)
                rax_3, arg3 = sub_140f14f00(rcx_8, arg3)
            
            if (r15 == rcx_8 || rax_2.b == 0 || rax_3 == 0)
                rsi_1 += 1
                rdi_1 += 0x10
            
            int64_t* rcx_10 = *(arg1 + 0x3f0) + 0x2a8
            i = (**rcx_10)(rcx_10)
        while (i s> 1)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        i = (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*var_20 + 8))

return i
