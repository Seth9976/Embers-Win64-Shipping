// 函数: sub_141bb6950
// 地址: 0x141bb6950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
int64_t* rbx = *(arg1 + 0x3e0)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rsi = *(arg1 + 0x3d8)

void* rdx = arg1 + 0x3a8

if (arg1 == 0)
    rdx = nullptr

int64_t* result = (*(*rsi + 0x48))(rsi, rdx)
int64_t* result_1 = result

if (result != 0)
    int64_t r12_1 = *result
    void* rbp_1 = *(*(arg1 + 0x3a0) + 0x10)
    int64_t __saved_r15
    
    if (rbp_1 != 0 && sub_140be1130(rbp_1, sub_141c006b0()) != 0)
        int64_t* rbp_2 = *(arg1 + 0x3a0)
        void* rax_6
        
        if (rbp_2 != 0)
            rax_6 = sub_140d21950(rbp_2, sub_141c006b0())
        
        if (rbp_2 == 0 || rax_6 == 0)
            __saved_r15 = arg2
            void* r15 = rbp_2[2]
            
            if (r15 != 0 && sub_140be1130(r15, sub_141c006b0()) != 0)
                sub_141c00d40(rbp_2, r12_1)
        else
            int64_t r8_1 = *rax_6
            (*(r8_1 + 0x30))(rax_6, r12_1, r8_1)
    
    result = (*(*rsi + 0x10))(rsi, result_1)
    
    if (result.b != 0)
        void* rdi_1 = *(arg1 + 0x3a0)
        
        if (rdi_1 != 0)
            result = sub_140d21950(rdi_1, sub_141c00390())
            
            if (result != 0)
                int64_t rdx_8 = *result
                result = (*(rdx_8 + 0x10))(result, rdx_8)
                
                if (result.b == 0)
                    result = (*(*rsi + 0x28))(rsi, *result_1, 0, 0, __saved_r15)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx + 8))

return result
