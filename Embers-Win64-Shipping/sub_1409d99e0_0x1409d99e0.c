// 函数: sub_1409d99e0
// 地址: 0x1409d99e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
void* rsi = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        void* rsi_2 = rsi + 0x18
        int32_t i
        
        do
            int32_t j_3 = *(rsi_2 + 8)
            int64_t* rbx_2 = *rsi_2
            
            if (j_3 != 0)
                int32_t j
                
                do
                    int64_t rcx_3 = *rbx_2
                    
                    if (rcx_3 != 0)
                        sub_140a74f90(rcx_3)
                    
                    rbx_2 = &rbx_2[2]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                rbx_2 = *rsi_2
            
            if (rbx_2 != 0)
                sub_140a74f90(rbx_2)
            
            int64_t rcx_5 = *(rsi_2 - 0x10)
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rsi_2 += 0x28
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_1405c5660(arg1, arg2)
else
    if (i_2 != 0)
        int64_t* rsi_1 = rsi + 0x18
        int32_t i_1
        
        do
            int32_t j_2 = rsi_1[1].d
            int64_t* rbx_1 = *rsi_1
            
            if (j_2 != 0)
                int32_t j_1
                
                do
                    int64_t rcx = *rbx_1
                    
                    if (rcx != 0)
                        result = sub_140a74f90(rcx)
                    
                    rbx_1 = &rbx_1[2]
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
                rbx_1 = *rsi_1
            
            if (rbx_1 != 0)
                result = sub_140a74f90(rbx_1)
            
            int64_t rcx_2 = rsi_1[-2]
            
            if (rcx_2 != 0)
                result = sub_140a74f90(rcx_2)
            
            rsi_1 = &rsi_1[5]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
