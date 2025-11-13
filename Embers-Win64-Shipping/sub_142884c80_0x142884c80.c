// 函数: sub_142884c80
// 地址: 0x142884c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rsi = *(arg1 + 0x18)
void* rsi_1

if (rsi == 0)
    void* rsi_2 = *(arg1 + 0x20)
    
    if (rsi_2 != 0)
        rsi_1 = *(rsi_2 + 0x488)
        goto label_142884cc8
else
    rsi_1 = *(rsi + 0x130)
label_142884cc8:
    
    if (rsi_1 != 0 && (*arg1 & 0x40) != 0)
        int64_t i = 0
        void* r14_1 = &arg1[0x30]
        int64_t* rsi_3 = rsi_1 + 0x28
        
        do
            int64_t rbp_1 = *r14_1
            
            if (rbp_1 != 0 && *rsi_3 == 0)
                int32_t rax_1 = 1
                
                if ((*arg1 & 0x20) != 0)
                    void* rcx = *(arg1 + 0x18)
                    
                    if (rcx != 0)
                        rax_1, arg2 = sub_14288d630(rcx, rbp_1, 1, arg2)
                    
                    void* rcx_1 = *(arg1 + 0x20)
                    
                    if (rcx_1 != 0)
                        rax_1, arg2 = sub_14288df90(rcx_1, rbp_1, 1, arg2)
                    
                    if (rax_1 s<= 0)
                        return 0
            
            i += 1
            r14_1 += 8
            rsi_3 = &rsi_3[5]
        while (i u< 9)
int32_t* rcx_2 = *(arg1 + 0xa8)

if (rcx_2 != 0)
    void* rax_2 = *(arg1 + 0x20)
    
    if (rax_2 == 0)
        void* rax_4 = *(arg1 + 0x18)
        
        if (rax_4 == 0)
            sub_142898cb0(rcx_2, sub_1428abf30)
        else
            sub_1428530a0(rax_4, rcx_2)
    else
        sub_142853600(rax_2, rcx_2)
    
    *(arg1 + 0xa8) = 0

return 1
