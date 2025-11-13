// 函数: sub_1428a3dc0
// 地址: 0x1428a3dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)

if (sub_142898c70(data_143feb120) s> 0)
    int32_t i
    
    do
        int64_t* rax_1 = sub_142898c80(data_143feb120)
        void** rbx_1 = rax_1
        
        if (rax_1 != 0)
            void* rax_2 = *rax_1
            int64_t rdx_1 = *(rax_2 + 0x18)
            
            if (rdx_1 != 0)
                rdx_1(rbx_1)
                rax_2 = *rbx_1
            
            *(rax_2 + 0x20) -= 1
            sub_1428a6780(rbx_1[1])
            sub_1428a6780(rbx_1[2])
            sub_1428a6780(rbx_1)
        
        i = sub_142898c70(data_143feb120)
    while (i s> 0)

int64_t result = sub_142898a10(data_143feb120)
data_143feb120 = 0
return result
