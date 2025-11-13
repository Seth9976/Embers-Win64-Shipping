// 函数: sub_142484500
// 地址: 0x142484500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x30) = 0
int64_t* result

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    result = sub_140d30490(arg2, 0, r8_1)
else
    result = sub_140d30460(arg2, *(arg2 + 0x18), 0)

void* rbp = *(arg2 + 0x30)
void* r15 = *(arg2 + 0x38)

if (rbp != 0)
    result = *(rbp + 8)
    
    if (((result[2] u>> 0x2f).b & 1) != 0)
        *(arg2 + 0x30) = 0
        
        if (*(arg2 + 0x20) == 0)
            int64_t* r8_2 = *(arg2 + 0x80)
            *(arg2 + 0x80) = r8_2[4]
            result = sub_140d30490(arg2, 0, r8_2)
        else
            result = sub_140d30460(arg2, *(arg2 + 0x18), 0)
        
        void* rsi_1 = *(arg2 + 0x30)
        uint64_t r14_1 = *(arg2 + 0x38)
        
        if (rsi_1 != 0)
            result = *(rsi_1 + 8)
            
            if (((result[2] u>> 0x2f).b & 1) != 0)
                *(arg2 + 0x30) = 0
                
                if (*(arg2 + 0x20) == 0)
                    int64_t* r8_3 = *(arg2 + 0x80)
                    *(arg2 + 0x80) = r8_3[4]
                    result = sub_140d30490(arg2, 0, r8_3)
                else
                    result = sub_140d30460(arg2, *(arg2 + 0x18), 0)
                
                void* r10_1 = *(arg2 + 0x30)
                int64_t* rdx_3 = *(arg2 + 0x38)
                
                if (r10_1 != 0)
                    result = *(r10_1 + 8)
                    
                    if (((result[2] u>> 0x2f).b & 1) != 0)
                        int64_t rax_3 = *(arg2 + 0x20)
                        int64_t rdi
                        rdi.b = rax_3 != 0
                        *(arg2 + 0x20) = rdi + rax_3
                        return sub_141ea1180(r15, rbp, r14_1, rsi_1, rdx_3, r10_1)

*(arg2 + 0x90) = 1
return result
