// 函数: sub_14101c1c0
// 地址: 0x14101c1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
arg1->__offset(0x40).d -= 1
void* rbx = *arg1->__offset(0x38).q

if (rbx != 0)
    void* rcx = *(arg2 + 8)
    
    if (rcx != *(rbx + 0x10))
        if (rcx != 0)
            int32_t rax_1 = *(rcx + 0x14)
            *(rcx + 0x14) -= 1
            
            if (rax_1 == 1)
                int64_t* rcx_1 = *(arg2 + 8)
                
                if (rcx_1 != 0)
                    sub_141011360(rcx_1, rax_1.b)
        
        *(arg2 + 8) = *(rbx + 0x10)
        *(rbx + 0x10) = 0
    
    void* rdi_1 = arg1->__offset(0x38).q
    arg1->__offset(0x38).q = rbx
    void* rcx_2 = *(rbx + 0x10)
    
    if (rcx_2 != 0)
        int32_t rax_3 = *(rcx_2 + 0x14)
        *(rcx_2 + 0x14) -= 1
        
        if (rax_3 == 1)
            int64_t* rcx_3 = *(rbx + 0x10)
            
            if (rcx_3 != 0)
                sub_141011360(rcx_3, rax_3.b)
        
        *(rbx + 0x10) = 0
    
    if (rdi_1 != 0)
        *(rdi_1 + 8) = &data_142efcd90
        void* rax_4 = *(rdi_1 + 0x10)
        
        if (rax_4 != 0)
            int32_t rbp_1 = *(rax_4 + 0x14)
            *(rax_4 + 0x14) -= 1
            
            if (rbp_1 == 1)
                int64_t* rcx_4 = *(rdi_1 + 0x10)
                
                if (rcx_4 != 0)
                    sub_141011360(rcx_4, rbp_1.b)
        
        j_sub_140a74f90(rdi_1)
    
    rbx.b = 1

LeaveCriticalSection(arg1)
return zx.q(rbx.b)
