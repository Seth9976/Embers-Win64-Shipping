// 函数: sub_141e47af0
// 地址: 0x141e47af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
void* rdi = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        void* rdi_2 = rdi + 8
        int32_t i
        
        do
            int64_t* rbx_2 = *rdi_2
            
            if (rbx_2 != 0)
                int64_t* rcx_7 = rbx_2[0xa]
                
                if (rcx_7 != 0)
                    (**rcx_7)(rcx_7, 1)
                
                int64_t rcx_8 = rbx_2[8]
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                sub_141ddf810(&rbx_2[4])
                int64_t rcx_10 = rbx_2[2]
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                int64_t rcx_11 = *rbx_2
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                j_sub_140a74f90(rbx_2)
                *rdi_2 = 0
            
            sub_140bc0410(rdi_2 + 8)
            rdi_2 += 0x30
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_1405a5220(arg1, arg2)
else
    if (i_2 != 0)
        int64_t* rdi_1 = rdi + 8
        int32_t i_1
        
        do
            int64_t* rbx_1 = *rdi_1
            
            if (rbx_1 != 0)
                int64_t* rcx = rbx_1[0xa]
                
                if (rcx != 0)
                    (**rcx)(rcx, 1)
                
                int64_t rcx_1 = rbx_1[8]
                
                if (rcx_1 != 0)
                    sub_140a74f90(rcx_1)
                
                sub_141ddf810(&rbx_1[4])
                int64_t rcx_3 = rbx_1[2]
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
                
                int64_t rcx_4 = *rbx_1
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                j_sub_140a74f90(rbx_1)
                *rdi_1 = 0
            
            result = sub_140bc0410(&rdi_1[1])
            rdi_1 = &rdi_1[6]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
