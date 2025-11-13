// 函数: sub_140ffc110
// 地址: 0x140ffc110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
void* result = __security_cookie ^ &var_48
void* result_1 = result
int64_t rcx = *(arg1 + 0x30)

if (rcx != 0)
    result = sub_140a74f90(rcx)

if (*(arg1 + 0x40) != 0)
    uint64_t rdi_1 = 0
    
    if (*(arg1 + 0x4c) u> 0)
        do
            int64_t* rbx_2 = *(*(arg1 + 0x40) + (rdi_1 << 3))
            
            if (rbx_2 != 0)
                (*(*rbx_2 + 8))(rbx_2)
            
            void var_28
            (*(*rbx_2 + 0x50))(rbx_2, &var_28)
            
            if (rbx_2 != 0)
                (*(*rbx_2 + 0x10))(rbx_2)
            
            rdi_1 = zx.q(rdi_1.d + 1)
        while (rdi_1.d u< *(arg1 + 0x4c))
    
    result = *(arg1 + 0x40)
    
    if (result != 0)
        int64_t i = *(result - 8)
        void* rdi_2 = result + (i << 3)
        
        if (i != 0)
            do
                int64_t* rcx_4 = *(rdi_2 - 8)
                rdi_2 -= 8
                i -= 1
                
                if (rcx_4 != 0)
                    (*(*rcx_4 + 0x10))(rcx_4)
            while (i != 0)
            
            *(result - 8)
        
        result = j_sub_140a74f90(result - 8)
    
    *(arg1 + 0x40) = 0

__security_check_cookie(result_1 ^ &var_48)
return result
