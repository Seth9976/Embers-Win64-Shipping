// 函数: sub_14207d530
// 地址: 0x14207d530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dba950(arg1, arg2, arg3)
void* result = *(arg1 + 0x220)

if (result != 0)
    int32_t i = 0
    
    if (*(result + 0x38) s> 0)
        int64_t* r14_1 = nullptr
        
        do
            int32_t j = 0
            void* rsi_1 = *(r14_1 + *(result + 0x30))
            
            if (*(rsi_1 + 0x38) s> 0)
                int64_t* rbx_1 = nullptr
                
                do
                    int64_t* rcx = *(rbx_1 + *(rsi_1 + 0x30))
                    (*(*rcx + 0x350))(rcx, arg2, zx.q(arg3))
                    j += 1
                    rbx_1 = &rbx_1[1]
                while (j s< *(rsi_1 + 0x38))
            
            result = *(arg1 + 0x220)
            i += 1
            r14_1 = &r14_1[1]
        while (i s< *(result + 0x38))

return result
