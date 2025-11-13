// 函数: sub_14101c520
// 地址: 0x14101c520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) != 0)
    void* rbx_1 = *(arg1 + 0xe8)
    sub_1410644f0(rbx_1, *(arg1 + 0xf4), *(rbx_1 + 0x38))
    sub_141037da0(rbx_1)
    *(rbx_1 + 0x38) += 1
    sub_14106a230(*(arg1 + 0xe8), *(rbx_1 + 0x40))

int64_t* rbp = nullptr
BOOL result

while (true)
    EnterCriticalSection(arg1 + 0x30)
    int64_t rbx_2 = **(arg1 + 0x68)
    result = LeaveCriticalSection(arg1 + 0x30)
    
    if (rbx_2 == 0)
        break
    
    EnterCriticalSection(arg1 + 0x30)
    *(arg1 + 0x70) -= 1
    void* rbx_3 = **(arg1 + 0x68)
    
    if (rbx_3 != 0)
        if (rbp != *(rbx_3 + 0x10))
            if (rbp != 0)
                int32_t rax_3 = *(rbp + 0x14)
                *(rbp + 0x14) -= 1
                
                if (rax_3 == 1)
                    sub_141011360(rbp, rax_3.b)
            
            rbp = *(rbx_3 + 0x10)
            *(rbx_3 + 0x10) = 0
        
        void* rsi_1 = *(arg1 + 0x68)
        *(arg1 + 0x68) = rbx_3
        void* rcx_7 = *(rbx_3 + 0x10)
        
        if (rcx_7 != 0)
            int32_t rax_4 = *(rcx_7 + 0x14)
            *(rcx_7 + 0x14) -= 1
            
            if (rax_4 == 1)
                int64_t* rcx_8 = *(rbx_3 + 0x10)
                
                if (rcx_8 != 0)
                    sub_141011360(rcx_8, rax_4.b)
            
            *(rbx_3 + 0x10) = 0
        
        if (rsi_1 != 0)
            void* rcx_9 = *(rsi_1 + 0x10)
            *(rsi_1 + 8) = &data_142efcd90
            
            if (rcx_9 != 0)
                int32_t rax_5 = *(rcx_9 + 0x14)
                *(rcx_9 + 0x14) -= 1
                
                if (rax_5 == 1)
                    int64_t* rcx_10 = *(rsi_1 + 0x10)
                    
                    if (rcx_10 != 0)
                        sub_141011360(rcx_10, rax_5.b)
            
            j_sub_140a74f90(rsi_1)
    
    LeaveCriticalSection(arg1 + 0x30)

if (rbp != 0)
    result = *(rbp + 0x14)
    *(rbp + 0x14) -= 1
    
    if (result == 1)
        result = sub_141011360(rbp, result.b)

int64_t* rcx_14 = *(arg1 + 0x28)
*(arg1 + 0x28) = 0

if (rcx_14 != 0)
    result = (*(*rcx_14 + 0x10))(rcx_14)

void* rcx_15 = *(arg1 + 0xe8)

if (rcx_15 != 0)
    sub_14101c760(rcx_15)
    result = sub_1405d16e0(arg1 + 0xe8, nullptr)

int64_t* rcx_17 = *(arg1 + 0x158)

if (rcx_17 != 0)
    *(arg1 + 0x158) = 0
    rcx_17[1].d -= 1
    
    if (rcx_17[1].d == 1)
        (**rcx_17)(rcx_17, 1)
    
    int64_t* rcx_18 = *(arg1 + 0x150)
    *(arg1 + 0x150) = 0
    
    if (rcx_18 != 0)
        int32_t r15_1 = rcx_18[1].d
        rcx_18[1].d -= 1
        
        if (r15_1 == 1)
            (**rcx_18)(rcx_18, zx.q(r15_1))
    
    result = VirtualFree(*(arg1 + 0x148), 0, MEM_RELEASE)
    *(arg1 + 0x148) = 0

return result
