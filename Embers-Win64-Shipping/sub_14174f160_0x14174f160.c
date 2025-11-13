// 函数: sub_14174f160
// 地址: 0x14174f160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
int64_t rsi = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        int64_t* rsi_2 = rsi + 0x80
        int32_t i
        
        do
            int64_t rcx_5 = *rsi_2
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t rcx_6 = rsi_2[-2]
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int32_t j_3 = rsi_2[-3].d
            int64_t* rbx_2 = rsi_2[-4]
            
            if (j_3 != 0)
                int32_t j
                
                do
                    int64_t rcx_7 = *rbx_2
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)
                    
                    rbx_2 = &rbx_2[2]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                rbx_2 = rsi_2[-4]
            
            if (rbx_2 != 0)
                sub_140a74f90(rbx_2)
            
            int64_t rcx_9 = rsi_2[-0xe]
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            rsi_2 = &rsi_2[0x13]
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_141750570(arg1, arg2)
else
    if (i_2 != 0)
        int64_t* rsi_1 = rsi + 0x80
        int32_t i_1
        
        do
            int64_t rcx = *rsi_1
            
            if (rcx != 0)
                result = sub_140a74f90(rcx)
            
            int64_t rcx_1 = rsi_1[-2]
            
            if (rcx_1 != 0)
                result = sub_140a74f90(rcx_1)
            
            int32_t j_2 = rsi_1[-3].d
            int64_t* rbx_1 = rsi_1[-4]
            
            if (j_2 != 0)
                int32_t j_1
                
                do
                    int64_t rcx_2 = *rbx_1
                    
                    if (rcx_2 != 0)
                        result = sub_140a74f90(rcx_2)
                    
                    rbx_1 = &rbx_1[2]
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
                rbx_1 = rsi_1[-4]
            
            if (rbx_1 != 0)
                result = sub_140a74f90(rbx_1)
            
            int64_t rcx_4 = rsi_1[-0xe]
            
            if (rcx_4 != 0)
                result = sub_140a74f90(rcx_4)
            
            rsi_1 = &rsi_1[0x13]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
