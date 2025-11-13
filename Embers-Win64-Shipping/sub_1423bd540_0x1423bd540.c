// 函数: sub_1423bd540
// 地址: 0x1423bd540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = (*(*arg1 + 0x328))()
int64_t* result_1 = result

if (result != 0)
    void* rbp_1 = *result
    
    if (rbp_1 != 0)
        void* rdi_1 = *(rbp_1 + 0x28)
        
        if (rdi_1 != 0)
            int64_t rcx = *(rdi_1 + 0x58)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            int64_t rcx_1 = *(rdi_1 + 0x48)
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = *(rdi_1 + 0x38)
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            int32_t i_1 = *(rdi_1 + 0x30)
            void* rbx_1 = *(rdi_1 + 0x28)
            
            if (i_1 != 0)
                int32_t i
                
                do
                    sub_140bc0410(rbx_1)
                    rbx_1 += 0x40
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                rbx_1 = *(rdi_1 + 0x28)
            
            if (rbx_1 != 0)
                sub_140a74f90(rbx_1)
            
            j_sub_140a74f90(rdi_1)
        
        sub_1423bf9a0(rbp_1 + 0x18, 0)
        int64_t rcx_7 = *(rbp_1 + 0x18)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        result = j_sub_140a74f90(rbp_1)
        *result_1 = 0

return result
