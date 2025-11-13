// 函数: sub_1418e6220
// 地址: 0x1418e6220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* entry_r8
int64_t* rcx = *entry_r8
void* rax_1 = (*(*rcx + 0x48))(rcx)
void*** rbx = nullptr
int64_t* entry_result
*entry_result = 0
int64_t* rcx_1 = *entry_r8
int64_t r9 = *rcx_1
int512_t entry_zmm1
int512_t entry_zmm2

if ((*(r9 + 8))(rcx_1, entry_zmm1, entry_zmm2, r9) == 0)
    int64_t* rcx_3 = *entry_r8
    
    if ((*(*rcx_3 + 0x10))(rcx_3) == 0)
        int64_t* rcx_5 = *entry_r8
        
        if ((*(*rcx_5 + 0x20))(rcx_5) != 0)
            void*** rax_10 = j_sub_140a82f30(0x110)
            
            if (rax_10 == 0)
                sub_1408c8cf0(entry_result, rbx)
            else
                if (rax_1 != 0)
                    rbx = rax_1 - 0x68
                
                sub_1408c8cf0(entry_result, sub_1418f3b60(rax_10, entry_r8, rbx))
    else
        void*** rax_7 = j_sub_140a82f30(0x118)
        
        if (rax_7 == 0)
            sub_1408c8cf0(entry_result, rbx)
        else
            if (rax_1 != 0)
                rbx = rax_1 - 0x70
            
            sub_1408c8cf0(entry_result, sub_1418f2c70(rax_7, entry_r8, rbx))
else
    void*** rax_3 = j_sub_140a82f30(0x110)
    
    if (rax_3 == 0)
        sub_1408c8cf0(entry_result, rbx)
    else
        if (rax_1 != 0)
            rbx = rax_1 - 0x68
        
        sub_1408c8cf0(entry_result, sub_1418f26e0(rax_3, entry_r8, rbx))

return entry_result
