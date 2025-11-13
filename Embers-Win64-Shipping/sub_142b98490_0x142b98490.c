// 函数: sub_142b98490
// 地址: 0x142b98490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0xc0)
void* r12 = *(arg3 + 0x18)

if (rax != 0)
    rax(*(arg2 + 0xb8))

while (*(arg2 + 0x78) != 0)
    void* rbx_1 = *(arg2 + 0x78)
    
    if (rbx_1 != 0)
        void* r8 = *(rbx_1 + 8)
        void* i_2 = nullptr
        int64_t rsi_1 = *(*(r8 + 0x90) + 0x10)
        
        for (void* i = *(r8 + 0x78); i != 0; i = *(i + 0x10))
            if (i == rbx_1)
                int64_t rcx_1 = *(i + 0x10)
                
                if (i_2 != 0)
                    *(i_2 + 0x10) = rcx_1
                else
                    *(r8 + 0x78) = rcx_1
                
                int64_t rax_2 = *(rbx_1 + 0x28)
                
                if (rax_2 != 0)
                    rax_2(rbx_1)
                
                sub_142b98c50(rbx_1)
                (*(rsi_1 + 0x10))(rsi_1, rbx_1)
                break
            
            i_2 = i

if (arg2 != -0xa8 && arg1 != 0)
    void* i_3 = *(arg2 + 0xa8)
    
    if (i_3 != 0)
        void* i_1
        
        do
            void* rbx_2 = *(i_3 + 0x10)
            i_1 = *(i_3 + 8)
            int64_t rax_3 = *(rbx_2 + 0x10)
            
            if (rax_3 != 0)
                rax_3(rbx_2)
            
            int64_t rdx_1 = *(*(arg3 + 0x18) + 0x60)
            
            if (rdx_1 != 0)
                rdx_1(rbx_2)
            
            int64_t rdx_2 = *(rbx_2 + 0x38)
            
            if (rdx_2 != 0)
                (*(arg1 + 0x10))(arg1, rdx_2)
            
            *(rbx_2 + 0x38) = 0
            (*(arg1 + 0x10))(arg1, rbx_2)
            (*(arg1 + 0x10))(arg1, i_3)
            i_3 = i_1
        while (i_1 != 0)
    
    *(arg2 + 0xa8) = 0
    *(arg2 + 0xb0) = 0

int64_t rax_5 = *(arg2 + 0x50)
*(arg2 + 0x80) = 0

if (rax_5 != 0)
    rax_5(arg2)

sub_142b983d0(arg2, arg1)
int64_t rax_6 = *(r12 + 0x50)

if (rax_6 != 0)
    rax_6(arg2)

void* rbx_3 = *(arg2 + 0xa0)
int32_t r14_1 = *(arg2 + 8)

if (rbx_3 != 0)
    int64_t rax_7 = *(rbx_3 + 0x28)
    int64_t rsi_2 = *(rbx_3 + 0x30)
    
    if (rax_7 != 0)
        rax_7(rbx_3)
    
    if (not(test_bit(r14_1, 0xa)))
        (*(rsi_2 + 0x10))(rsi_2, rbx_3)

int64_t rdx_7 = *(arg2 + 0xd0)
*(arg2 + 0xa0) = 0

if (rdx_7 != 0)
    (*(arg1 + 0x10))(arg1, rdx_7)
    *(arg2 + 0xd0) = 0

jump(*(arg1 + 0x10))
