// 函数: sub_140d978f0
// 地址: 0x140d978f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x1c)
void* rcx = *(arg1 + 0x10)
int32_t i_2 = *(arg1 + 0x18)
void* r14 = arg1

if (rax s< 0)
    if (rcx != 0)
        r14 = rcx
    
    if (i_2 != 0)
        void* r14_2 = r14 + 8
        int32_t i
        
        do
            int64_t* rbx_2 = *r14_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rax_7 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_7 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            r14_2 += 0x10
            i = i_2
            i_2 -= 1
        while (i != 1)
        rax = *(arg1 + 0x1c)
    
    *(arg1 + 0x18) = 0
    
    if (rax != 0)
        sub_140dbd3e0(arg1, 0)
else
    if (rcx != 0)
        r14 = rcx
    
    if (i_2 != 0)
        void* r14_1 = r14 + 8
        int32_t i_1
        
        do
            int64_t* rbx_1 = *r14_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_3 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_3 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            r14_1 += 0x10
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x18) = 0

int64_t rcx_6 = *(arg1 + 0x30)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = *(arg1 + 0x20)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_140d94dd0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
